/**
 * @file        system/function_dispatcher.cpp
 * @brief       Guest function dispatch coordinator for recompiled code
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 *
 * @remarks     Derived from Xenia's runtime::Processor (Ben Vanik, 2020).
 *              Stripped of emulation-era dead code and renamed to reflect its
 *              role as a function dispatch table rather than a CPU emulator.
 */

#include <rex/assert.h>
#include <rex/dbg.h>
#include <rex/logging.h>
#include <rex/perf/counter.h>
#include <rex/memory.h>
#include <rex/ppc/context.h>
#include <rex/runtime.h>
#include <rex/system/function_dispatcher.h>
#include <rex/system/thread_state.h>

namespace rex::runtime {

namespace {

FunctionDispatcher* GetBoundFunctionDispatcher() {
  Runtime* runtime = Runtime::instance();
  return runtime ? runtime->function_dispatcher() : nullptr;
}

}  // namespace

static PPCRegister* GetGPR(PPCContext& ctx, uint32_t idx) {
  switch (idx) {
    case 0: return &ctx.r0;
    case 1: return &ctx.r1;
    case 2: return &ctx.r2;
    case 3: return &ctx.r3;
    case 4: return &ctx.r4;
    case 5: return &ctx.r5;
    case 6: return &ctx.r6;
    case 7: return &ctx.r7;
    case 8: return &ctx.r8;
    case 9: return &ctx.r9;
    case 10: return &ctx.r10;
    case 11: return &ctx.r11;
    case 12: return &ctx.r12;
    case 13: return &ctx.r13;
    case 14: return &ctx.r14;
    case 15: return &ctx.r15;
    case 16: return &ctx.r16;
    case 17: return &ctx.r17;
    case 18: return &ctx.r18;
    case 19: return &ctx.r19;
    case 20: return &ctx.r20;
    case 21: return &ctx.r21;
    case 22: return &ctx.r22;
    case 23: return &ctx.r23;
    case 24: return &ctx.r24;
    case 25: return &ctx.r25;
    case 26: return &ctx.r26;
    case 27: return &ctx.r27;
    case 28: return &ctx.r28;
    case 29: return &ctx.r29;
    case 30: return &ctx.r30;
    case 31: return &ctx.r31;
    default: return nullptr;
  }
}

static void DynamicThunkExecutor(PPCContext& ctx, uint8_t* base) {
  uint32_t pc = ctx.last_indirect_target;
  Runtime* runtime = Runtime::instance();
  if (!runtime || !runtime->memory()) {
    REX_FATAL("Call to invalid or unregistered function at guest address 0x{:08X}", pc);
    return;
  }
  uint8_t* host_ptr = runtime->memory()->TranslateVirtual(pc);
  if (!host_ptr) {
    REX_FATAL("Call to invalid or unregistered function at guest address 0x{:08X}", pc);
    return;
  }

  for (int step = 0; step < 32; ++step) {
    uint32_t insn = rex::memory::load_and_swap<uint32_t>(host_ptr + step * 4);
    if (insn == 0x4E800020) {  // blr
      return;
    }
    if (insn == 0x4E800420) {  // bctr
      ctx.last_indirect_target = ctx.ctr.u32;
      PPCFunc* target = ResolveIndirectFunction(ctx.ctr.u32);
      target(ctx, base);
      return;
    }
    if ((insn & 0xFC000000) == 0x80000000) {  // lwz rD, d(rA)
      uint32_t rD = (insn >> 21) & 0x1F;
      uint32_t rA = (insn >> 16) & 0x1F;
      int16_t d = static_cast<int16_t>(insn & 0xFFFF);
      PPCRegister* regD = GetGPR(ctx, rD);
      PPCRegister* regA = (rA != 0) ? GetGPR(ctx, rA) : nullptr;
      uint32_t ea = (regA ? regA->u32 : 0) + d;
      if (regD) {
        regD->u64 = rex::memory::load_and_swap<uint32_t>(base + ea);
      }
      continue;
    }
    if (insn == 0x7D6903A6) {  // mtctr r11
      ctx.ctr.u64 = ctx.r11.u64;
      continue;
    }
    if ((insn & 0xFC0007FE) == 0x7C000378) {  // or rA, rS, rB (mr rA, rS when rS == rB)
      uint32_t rS = (insn >> 21) & 0x1F;
      uint32_t rA = (insn >> 16) & 0x1F;
      uint32_t rB = (insn >> 11) & 0x1F;
      if (rS == rB) {
        PPCRegister* regA = GetGPR(ctx, rA);
        PPCRegister* regS = GetGPR(ctx, rS);
        if (regA && regS) {
          regA->u64 = regS->u64;
        }
        continue;
      }
    }
    REX_FATAL("Unhandled instruction 0x{:08X} in dynamic thunk at 0x{:08X}", insn, pc + step * 4);
    return;
  }
  REX_FATAL("Dynamic thunk at 0x{:08X} exceeded 32 instructions without termination", pc);
}

static void InvalidFunctionTrap(PPCContext& ctx, uint8_t* /*base*/) {
  REX_FATAL("Call to invalid or unregistered function at guest address 0x{:08X}",
            ctx.last_indirect_target);
}

PPCFunc* ResolveIndirectFunction(uint32_t guest_address) {
  FunctionDispatcher* dispatcher = GetBoundFunctionDispatcher();
  if (!dispatcher) {
    return &InvalidFunctionTrap;
  }

  if (PPCFunc* func = dispatcher->GetFunction(guest_address)) {
    return func;
  }

  // Dynamic fallback for any uncompiled vtable thunk or stub
  Runtime* runtime = Runtime::instance();
  if (runtime && runtime->memory()) {
    uint8_t* host_ptr = runtime->memory()->TranslateVirtual(guest_address);
    if (host_ptr) {
      uint32_t insn0 = rex::memory::load_and_swap<uint32_t>(host_ptr);
      if (insn0 == 0x4E800020 || (insn0 & 0xFC000000) == 0x80000000) {
        REXLOG_WARN("[Dispatcher] Resolving missing thunk dynamically at 0x{:08X}", guest_address);
        dispatcher->SetFunction(guest_address, &DynamicThunkExecutor);
        return &DynamicThunkExecutor;
      }
    }
  }

  return &InvalidFunctionTrap;
}


FunctionDispatcher::FunctionDispatcher(rex::memory::Memory* memory, ExportResolver* export_resolver)
    : memory_(memory), export_resolver_(export_resolver) {}

FunctionDispatcher::~FunctionDispatcher() = default;

bool FunctionDispatcher::Execute(ThreadState* thread_state, uint32_t address) {
  SCOPE_profile_cpu_f("cpu");
  PROFILE_FUNCTION_DISPATCHED();

  PPCFunc* fn = GetFunction(address);
  if (!fn) {
    REXCPU_ERROR("Execute({:08X}): function not in function table", address);
    return false;
  }

  auto* ctx = thread_state->context();
  auto* previous_thread_state = ThreadState::Get();

  // Rebind the active guest thread for cross-module callbacks.
  ThreadState::Bind(thread_state);

  // Pad out stack a bit, as some games seem to overwrite the caller by about 16 to 32b.
  ctx->r1.u64 -= 64 + 112;

  uint64_t previous_lr = ctx->lr;
  ctx->lr = 0xBCBCBCBC;

  fn(*ctx, memory_->virtual_membase());

  ctx->lr = previous_lr;
  ctx->r1.u64 += 64 + 112;
  ThreadState::Bind(previous_thread_state);

  return true;
}

uint64_t FunctionDispatcher::Execute(ThreadState* thread_state, uint32_t address, uint64_t args[],
                                     size_t arg_count) {
  SCOPE_profile_cpu_f("cpu");

  auto* ctx = thread_state->context();

  if (arg_count > 0)
    ctx->r3.u64 = args[0];
  if (arg_count > 1)
    ctx->r4.u64 = args[1];
  if (arg_count > 2)
    ctx->r5.u64 = args[2];
  if (arg_count > 3)
    ctx->r6.u64 = args[3];
  if (arg_count > 4)
    ctx->r7.u64 = args[4];
  if (arg_count > 5)
    ctx->r8.u64 = args[5];
  if (arg_count > 6)
    ctx->r9.u64 = args[6];
  if (arg_count > 7)
    ctx->r10.u64 = args[7];

  // FIXME: stack-arg path assumes 32-bit values; 64-bit and float args are wrong.
  if (arg_count > 8) {
    auto stack_arg_base =
        memory_->TranslateVirtual(static_cast<uint32_t>(ctx->r1.u64) + 0x54 - (64 + 112));
    for (size_t i = 8; i < arg_count; i++) {
      memory::store_and_swap<uint32_t>(stack_arg_base + ((i - 8) * 8),
                                       static_cast<uint32_t>(args[i]));
    }
  }

  if (!Execute(thread_state, address)) {
    return 0xDEADBABE;
  }
  return ctx->r3.u64;
}

uint64_t FunctionDispatcher::ExecuteTrap(ThreadState* thread_state, uint32_t address,
                                         uint64_t args[], size_t arg_count) {
  auto* ctx = thread_state->context();
  PPCContext saved = *ctx;

  uint64_t result = Execute(thread_state, address, args, arg_count);

  *ctx = saved;
  ctx->fpscr.restoreGuestBits(saved.fpscr.csr);
  return result;
}

uint64_t FunctionDispatcher::ExecuteInterrupt(ThreadState* thread_state, uint32_t address,
                                              uint64_t args[], size_t arg_count) {
  SCOPE_profile_cpu_f("cpu");
  PROFILE_INTERRUPT_DISPATCHED();

  // Hold the global lock during interrupt dispatch.
  auto global_lock = global_critical_region_.Acquire();

  auto* ctx = thread_state->context();
  assert_true(arg_count <= 5);

  if (arg_count > 0)
    ctx->r3.u64 = args[0];
  if (arg_count > 1)
    ctx->r4.u64 = args[1];
  if (arg_count > 2)
    ctx->r5.u64 = args[2];
  if (arg_count > 3)
    ctx->r6.u64 = args[3];
  if (arg_count > 4)
    ctx->r7.u64 = args[4];

  // TLS ptr must be zero during interrupts. Some games check this and early-exit
  // routines when under interrupts.
  auto pcr_address = memory_->TranslateVirtual(static_cast<uint32_t>(ctx->r13.u64));
  uint32_t old_tls_ptr = memory::load_and_swap<uint32_t>(pcr_address);
  memory::store_and_swap<uint32_t>(pcr_address, 0);

  if (!Execute(thread_state, address)) {
    return 0xDEADBABE;
  }

  // Restore TLS ptr.
  memory::store_and_swap<uint32_t>(pcr_address, old_tls_ptr);

  return ctx->r3.u64;
}

// rexglue function table management

bool FunctionDispatcher::InitializeFunctionTable(uint32_t code_base, uint32_t code_size,
                                                 uint32_t image_base, uint32_t image_size,
                                                 bool is_entrypoint) {
  std::lock_guard<std::recursive_mutex> lock(dispatch_mutex_);

  if (is_entrypoint && entrypoint_code_base_ != 0) {
    REXLOG_ERROR("InitializeFunctionTable: entrypoint already registered at {:08X}",
                 entrypoint_code_base_);
    return false;
  }

  uint32_t new_table_end = image_base + image_size + (code_size + kThunkReserveSize) * 2;
  uint32_t new_code_end = code_base + code_size + kThunkReserveSize;
  for (const auto& existing : module_tables_) {
    uint32_t existing_table_end =
        existing.image_base + existing.image_size + (existing.code_size + kThunkReserveSize) * 2;
    uint32_t existing_code_end = existing.code_base + existing.code_size + kThunkReserveSize;
    if (image_base < existing_table_end && new_table_end > existing.image_base) {
      REXLOG_ERROR("Module image range [{:08X}, {:08X}) overlaps existing [{:08X}, {:08X})",
                   image_base, new_table_end, existing.image_base, existing_table_end);
      return false;
    }
    if (code_base < existing_code_end && new_code_end > existing.code_base) {
      REXLOG_ERROR("Module code range [{:08X}, {:08X}) overlaps existing [{:08X}, {:08X})",
                   code_base, new_code_end, existing.code_base, existing_code_end);
      return false;
    }
  }

  if (!memory_->InitializeFunctionTable(code_base, code_size, image_base, image_size)) {
    REXLOG_ERROR("Failed to initialize guest memory function table");
    return false;
  }

  module_tables_.push_back({
      .code_base = code_base,
      .code_size = code_size,
      .image_base = image_base,
      .image_size = image_size,
      .next_thunk_address = code_base + code_size,
      .thunk_limit = code_base + code_size + kThunkReserveSize,
  });

  if (is_entrypoint) {
    entrypoint_code_base_ = code_base;
  }

  REXLOG_INFO("Function table initialized for module: code={:08X}-{:08X}, image={:08X}-{:08X}",
              code_base, code_base + code_size, image_base, image_base + image_size);
  return true;
}

FunctionDispatcher::ModuleTableInfo* FunctionDispatcher::FindModuleByAddress(
    uint32_t guest_address) {
  for (auto& mod : module_tables_) {
    if (guest_address >= mod.code_base && guest_address < mod.thunk_limit) {
      return &mod;
    }
  }
  return nullptr;
}

uint32_t FunctionDispatcher::FindCallerModuleBase(uint32_t guest_address) {
  std::lock_guard<std::recursive_mutex> lock(dispatch_mutex_);
  if (auto* mod = FindModuleByAddress(guest_address)) {
    return mod->code_base;
  }
  return 0;
}

bool FunctionDispatcher::SetFunction(uint32_t guest_address, ::PPCFunc* func) {
  std::lock_guard<std::recursive_mutex> lock(dispatch_mutex_);
  assert_true(!module_tables_.empty());

  if (!FindModuleByAddress(guest_address)) {
    REXLOG_ERROR("SetFunction: address {:08X} outside all registered module ranges", guest_address);
    return false;
  }

  function_table_[guest_address] = func;

  if (!memory_->SetFunction(guest_address, func)) {
    REXLOG_ERROR("SetFunction: dispatcher / Memory module-table state out of sync at {:08X}",
                 guest_address);
    function_table_.erase(guest_address);
    return false;
  }

  if (recording_) {
    recording_addresses_.push_back(guest_address);
  }
  return true;
}

::PPCFunc* FunctionDispatcher::GetFunction(uint32_t guest_address) {
  std::lock_guard<std::recursive_mutex> lock(dispatch_mutex_);
  auto it = function_table_.find(guest_address);
  if (it != function_table_.end()) {
    return it->second;
  }
  return nullptr;
}

uint32_t FunctionDispatcher::AllocateThunk(::PPCFunc* func, uint32_t caller_address) {
  std::lock_guard<std::recursive_mutex> lock(dispatch_mutex_);
  auto* mod = FindModuleByAddress(caller_address);
  if (!mod) {
    if (caller_address != 0) {
      REXLOG_ERROR("AllocateThunk: caller_address {:08X} not in any registered module",
                   caller_address);
      return 0;
    }
    if (entrypoint_code_base_ == 0) {
      REXLOG_ERROR("AllocateThunk: caller_address=0 but no entrypoint registered");
      return 0;
    }
    mod = FindModuleByAddress(entrypoint_code_base_);
    if (!mod) {
      REXLOG_ERROR("AllocateThunk: entrypoint code_base {:08X} not in module_tables_",
                   entrypoint_code_base_);
      return 0;
    }
  }

  if (mod->next_thunk_address >= mod->thunk_limit) {
    REXLOG_ERROR("Thunk address space exhausted for module at {:08X}", mod->code_base);
    return 0;
  }
  uint32_t addr = mod->next_thunk_address;
  mod->next_thunk_address += 4;
  if (!SetFunction(addr, func)) {
    mod->next_thunk_address -= 4;
    return 0;
  }
  return addr;
}

void FunctionDispatcher::RegisterModule(const std::string& module_id, uint32_t code_base,
                                        RegisterFn register_func) {
  std::lock_guard<std::recursive_mutex> lock(dispatch_mutex_);
  if (recording_) {
    REX_FATAL("RegisterModule called while already recording (re-entrancy)");
    return;
  }

  if (module_addresses_.find(module_id) != module_addresses_.end()) {
    REXLOG_WARN("RegisterModule: '{}' is already registered; cleaning up prior batch", module_id);
    UnregisterModule(module_id);
  }

  REXLOG_INFO("Registering module: {} (code_base={:08X})", module_id, code_base);

  recording_addresses_.clear();
  recording_ = true;

  struct RecordingGuard {
    FunctionDispatcher* self;
    ~RecordingGuard() {
      self->recording_ = false;
      self->recording_addresses_.clear();
    }
  } guard{this};

  register_func(this);

  ModuleRegistration reg;
  reg.code_base = code_base;
  reg.addresses = std::move(recording_addresses_);

  size_t count = reg.addresses.size();
  module_addresses_[module_id] = std::move(reg);

  REXLOG_INFO("Module '{}' registered {} functions", module_id, count);
}

std::optional<std::pair<uint32_t, uint32_t>> FunctionDispatcher::UnregisterModule(
    const std::string& module_id) {
  std::lock_guard<std::recursive_mutex> lock(dispatch_mutex_);
  auto it = module_addresses_.find(module_id);
  if (it == module_addresses_.end()) {
    REXLOG_WARN("UnregisterModule: module '{}' not found", module_id);
    return std::nullopt;
  }

  REXLOG_INFO("Unregistering module: {} ({} functions)", module_id, it->second.addresses.size());

  auto table_it = std::find_if(module_tables_.begin(), module_tables_.end(),
                               [code_base = it->second.code_base](const ModuleTableInfo& mti) {
                                 return mti.code_base == code_base;
                               });

  for (uint32_t addr : it->second.addresses) {
    function_table_.erase(addr);
    memory_->SetFunction(addr, nullptr);
  }

  std::optional<std::pair<uint32_t, uint32_t>> cleared_range;
  if (table_it != module_tables_.end()) {
    uint32_t pool_start = table_it->code_base + table_it->code_size;
    uint32_t pool_end = table_it->next_thunk_address;
    for (uint32_t addr = pool_start; addr < pool_end; addr += 4) {
      function_table_.erase(addr);
      memory_->SetFunction(addr, nullptr);
    }
    cleared_range = std::make_pair(pool_start, pool_end);

    if (table_it->code_base == entrypoint_code_base_) {
      entrypoint_code_base_ = 0;
    }
    memory_->DestroyFunctionTable(table_it->code_base);
    module_tables_.erase(table_it);
  }

  module_addresses_.erase(it);

  return cleared_range;
}

}  // namespace rex::runtime
