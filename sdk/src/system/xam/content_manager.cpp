/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2020 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 *
 * @modified    Tom Clay, 2026 - Adapted for ReXGlue runtime
 */

#include <array>
#include <cstring>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>

#include <fmt/format.h>

#include <rex/cvar.h>
#include <rex/filesystem.h>
#include <rex/filesystem/devices/host_path_device.h>
#include <rex/filesystem/devices/stfs_container_device.h>
#include <rex/logging.h>
#include <rex/string.h>
#include <rex/string/utf8.h>
#include <rex/system/flags.h>
#include <rex/system/kernel_state.h>
#include <rex/system/xam/content_device.h>
#include <rex/system/xam/content_manager.h>
#include <rex/system/xfile.h>
#include <rex/system/xobject.h>

/*
 * Readable copy of the saves and a trace of what happens to them.
 *
 * All of the game's saves go through here: XamContentCreate opens a container, the game writes inside it
 * as if it were a drive (SAV:, for example) and XamContentClose closes it. Where they end up is opaque
 * (content_root/xuid/title/type/name), so the player cannot see the saves and, when one comes out
 * "damaged", there is no way to tell whether the failure was in writing or in reading.
 *
 * Two additions:
 *   - A "[save]" trace in the log: every create, open and close, with the real path and the files
 *     inside with their sizes. A 0-byte save, or one that never gets written, shows at a glance.
 *   - content_backup_root: if it is not empty, when a container is closed it is copied whole to
 *     <content_backup_root>/<profile>/current, and whatever was there before moves to <profile>/previous.
 *     Besides giving readable copies of the saves, sorted by profile, it always keeps a previous
 *     version to recover a profile that got corrupted.
 */
REXCVAR_DEFINE_STRING(content_backup_root, "", "Kernel",
                      "Folder where a copy of each save is left, with one subfolder per profile. "
                      "Empty = nothing is copied");

namespace rex {
namespace system {
namespace xam {

static const char* kThumbnailFileName = "__thumbnail.png";

static const char* kGameUserContentDirName = "profile";

static const char* kGameContentHeaderDirName = "Headers";

static int content_device_id_ = 0;

namespace {

// A folder name the SD accepts, derived from the one the player sees.
std::string SafeName(const std::string_view original) {
  std::string clean;
  for (const char c : original) {
    const unsigned char u = static_cast<unsigned char>(c);
    if (u < 0x20 || u == 0x7F) {
      continue;
    }
    // 0x5C is the backslash.
    if (c == '/' || c == ':' || c == '*' || c == '?' || c == '"' || c == '<' || c == '>' ||
        c == '|' || u == 0x5C) {
      continue;
    }
    clean.push_back(c);
  }
  while (!clean.empty() && (clean.back() == ' ' || clean.back() == '.')) {
    clean.pop_back();
  }
  return clean.empty() ? std::string("no_name") : clean;
}

// What is inside a container, for the log. It is the line that says whether the save has data or not.
std::string ThatHasInside(const std::filesystem::path& folder) {
  std::error_code ec;
  if (!std::filesystem::is_directory(folder, ec)) {
    auto sz = std::filesystem::file_size(folder, ec);
    return fmt::format("STFS package file ({} B)", sz);
  }
  std::string text;
  uint64_t total = 0;
  uint32_t how_many = 0;
  for (const auto& f : rex::filesystem::ListFiles(folder)) {
    if (f.type != rex::filesystem::FileInfo::Type::kFile) {
      continue;
    }
    if (!text.empty()) {
      text += ", ";
    }
    text += fmt::format("{} ({} B)", rex::path_to_utf8(f.name), f.total_size);
    total += f.total_size;
    ++how_many;
  }
  if (how_many == 0) {
    return "EMPTY";
  }
  return fmt::format("{} file(s), {} B: {}", how_many, total, text);
}

bool CopyFile(const std::filesystem::path& source, const std::filesystem::path& target) {
  FILE* entry = rex::filesystem::OpenFile(source, "rb");
  if (!entry) {
    return false;
  }
  FILE* output = rex::filesystem::OpenFile(target, "wb");
  if (!output) {
    fclose(entry);
    return false;
  }
  std::vector<uint8_t> buffer(64 * 1024);
  bool ok = true;
  while (true) {
    const size_t read = fread(buffer.data(), 1, buffer.size(), entry);
    if (read == 0) {
      break;
    }
    if (fwrite(buffer.data(), 1, read, output) != read) {
      ok = false;
      break;
    }
  }
  if (ferror(entry)) {
    ok = false;
  }
  fclose(entry);
  if (fclose(output) != 0) {
    ok = false;
  }
  return ok;
}

// Saves are small, so copying them by hand is cheaper than fighting std::filesystem on Horizon.
bool CopyFolder(const std::filesystem::path& source, const std::filesystem::path& target,
                   uint32_t& files) {
  std::error_code ec;
  std::filesystem::create_directories(target, ec);
  bool ok = true;
  for (const auto& f : rex::filesystem::ListFiles(source)) {
    if (f.type == rex::filesystem::FileInfo::Type::kDirectory) {
      ok = CopyFolder(source / f.name, target / f.name, files) && ok;
      continue;
    }
    if (CopyFile(source / f.name, target / f.name)) {
      ++files;
    } else {
      ok = false;
    }
  }
  return ok;
}

// Guitar Hero 3 localized save container names
static bool IsGh3SaveName(std::string_view name) {
  std::string lower;
  lower.reserve(name.size());
  for (unsigned char c : name) {
    lower.push_back(static_cast<char>(std::tolower(c)));
  }
  return lower == "progress" || lower == "progreso" || lower == "progres" ||
         lower == "progrès" || lower == "progr\xc3\xa8s" ||
         lower == "fortschritt" || lower == "progresso";
}

static constexpr const char* kCanonicalGh3SaveName = "Progress";

static std::string GetGh3SaveNameForLanguage(rex::system::XLanguage language) {
  switch (language) {
    case rex::system::XLanguage::kSpanish:
      return "Progreso";
    case rex::system::XLanguage::kFrench:
      return "Progrès";
    case rex::system::XLanguage::kGerman:
      return "Fortschritt";
    case rex::system::XLanguage::kItalian:
      return "Progresso";
    case rex::system::XLanguage::kEnglish:
    default:
      return "Progress";
  }
}

// Automatically migrates any existing localized save (e.g. Spanish 'Progreso') into canonical 'Progress'
static void MigrateGh3SavesIfNeeded(const std::filesystem::path& save_base_dir) {
  std::error_code ec;
  if (!std::filesystem::exists(save_base_dir, ec) || !std::filesystem::is_directory(save_base_dir, ec)) {
    return;
  }

  const std::filesystem::path canonical_dir = save_base_dir / kCanonicalGh3SaveName;
  const std::filesystem::path marker = canonical_dir / ".migrated_gh3_save";

  if (std::filesystem::exists(marker, ec)) {
    return;
  }

  const std::vector<std::string> candidates = {
    "Progreso", "progrès", "Progrès", "Progres", "Fortschritt", "Progresso"
  };

  std::filesystem::path best_source;
  bool found_candidate = false;

  for (const auto& cand_name : candidates) {
    std::filesystem::path cand_dir = save_base_dir / cand_name;
    if (cand_dir == canonical_dir) continue;
    if (!std::filesystem::exists(cand_dir, ec) || !std::filesystem::is_directory(cand_dir, ec)) {
      continue;
    }

    std::filesystem::path s000 = cand_dir / "s000.d";
    if (std::filesystem::exists(s000, ec)) {
      best_source = cand_dir;
      found_candidate = true;
      break;
    }
  }

  if (found_candidate) {
    // If canonical dir already exists, backup before overwriting with the user's localized save
    if (std::filesystem::exists(canonical_dir, ec)) {
      uint32_t bak_files = 0;
      CopyFolder(canonical_dir, save_base_dir / "Progress.bak", bak_files);
    }
    uint32_t copied_files = 0;
    CopyFolder(best_source, canonical_dir, copied_files);
    REXSYS_INFO("[save] GH3: Migrated {} file(s) from '{}' to canonical shared save '{}'",
                copied_files, rex::path_to_utf8(best_source), rex::path_to_utf8(canonical_dir));
  }

  if (std::filesystem::exists(canonical_dir, ec)) {
    rex::filesystem::CreateEmptyFile(marker);
  }
}

// The readable copy: <content_backup_root>/<profile>/current, and the previous one to <profile>/previous.
void CopyForTheUser(const std::string_view name, const std::filesystem::path& source) {
  const std::string root = REXCVAR_GET(content_backup_root);
  if (root.empty()) {
    return;
  }
  const std::string profile = SafeName(name);
  const std::filesystem::path base = std::filesystem::path(root) / profile;
  const std::filesystem::path actual = base / "current";
  const std::filesystem::path previous = base / "previous";

  std::error_code ec;
  if (std::filesystem::exists(actual, ec)) {
    std::filesystem::remove_all(previous, ec);
    ec.clear();
    std::filesystem::rename(actual, previous, ec);
    if (ec) {
      // If renaming is not allowed, copy and delete: what matters is not losing the previous version.
      uint32_t n = 0;
      CopyFolder(actual, previous, n);
      std::filesystem::remove_all(actual, ec);
      ec.clear();
    }
  }

  uint32_t files = 0;
  const bool ok = CopyFolder(source, actual, files);
  if (ok) {
    REXSYS_INFO("[save] copy of '{}': {} file(s) in {}", profile, files,
                rex::path_to_utf8(actual));
  } else {
    REXSYS_WARN("[save] the copy of '{}' failed halfway ({} file(s) in {})", profile,
                files, rex::path_to_utf8(actual));
  }
}

}  // namespace

ContentPackage::ContentPackage(KernelState* kernel_state, const std::string_view root_name,
                               const XCONTENT_AGGREGATE_DATA& data,
                               const std::filesystem::path& package_path)
    : kernel_state_(kernel_state), root_name_(root_name), package_path_(package_path), license_(0) {
  device_path_ = fmt::format("\\Device\\Content\\{0}\\", ++content_device_id_);
  content_data_ = data;

  auto fs = kernel_state_->file_system();
  std::unique_ptr<rex::filesystem::Device> device;
  if (std::filesystem::is_directory(package_path)) {
    // Check if the directory wraps an STFS container file
    bool is_stfs_folder = false;
    for (const auto& f : rex::filesystem::ListFiles(package_path)) {
      if (f.type == rex::filesystem::FileInfo::Type::kFile) {
        if (rex::filesystem::StfsContainerDevice::ReadPackageHeader(package_path / f.name)) {
          is_stfs_folder = true;
          break;
        }
      }
    }
    if (is_stfs_folder) {
      auto stfs_device =
          std::make_unique<rex::filesystem::StfsContainerDevice>(device_path_, package_path);
      stfs_device->Initialize();
      for (size_t i = 0; i < 0x10; i++) {
        if (stfs_device->header().header.licenses[i].license_flags) {
          license_ |= stfs_device->header().header.licenses[i].license_bits;
        }
      }
      if (license_ == 0) {
        license_ = 1;
      }
      device = std::move(stfs_device);
    } else {
      device = std::make_unique<rex::filesystem::HostPathDevice>(device_path_, package_path, false,
                                                                 /*allow_share_delete=*/true);
      device->Initialize();
    }
  } else {
    auto stfs_device =
        std::make_unique<rex::filesystem::StfsContainerDevice>(device_path_, package_path);
    stfs_device->Initialize();
    for (size_t i = 0; i < 0x10; i++) {
      if (stfs_device->header().header.licenses[i].license_flags) {
        license_ |= stfs_device->header().header.licenses[i].license_bits;
      }
    }
    if (license_ == 0) {
      license_ = 1;  // Full license for DLC package
    }
    device = std::move(stfs_device);
  }
  fs->RegisterDevice(std::move(device));
  fs->RegisterSymbolicLink(root_name_ + ":", device_path_);
}

ContentPackage::~ContentPackage() {
  auto fs = kernel_state_->file_system();
  fs->UnregisterSymbolicLink(root_name_ + ":");
  fs->UnregisterDevice(device_path_);
}

void ContentPackage::LoadPackageLicenseMask(const std::filesystem::path header_path) {
  if (!std::filesystem::exists(header_path)) {
    return;
  }

  auto file = rex::filesystem::OpenFile(header_path, "rb");
  if (!file) {
    return;
  }

  auto file_size = std::filesystem::file_size(header_path);
  if (file_size < sizeof(XCONTENT_AGGREGATE_DATA) + sizeof(license_)) {
    fclose(file);
    return;
  }

  fseek(file, sizeof(XCONTENT_AGGREGATE_DATA), SEEK_SET);
  fread(&license_, 1, sizeof(license_), file);
  fclose(file);
}

ContentManager::ContentManager(KernelState* kernel_state, const std::filesystem::path& root_path)
    : kernel_state_(kernel_state), root_path_(root_path) {}

ContentManager::~ContentManager() = default;

std::filesystem::path ContentManager::ResolvePackageRoot(uint64_t xuid, XContentType content_type,
                                                         uint32_t title_id) {
  if (title_id == kCurrentlyRunningTitleId) {
    title_id = kernel_state_->title_id();
  }
  auto xuid_str = fmt::format("{:016X}", xuid);
  auto title_id_str = fmt::format("{:08X}", title_id);
  auto content_type_str = fmt::format("{:08X}", uint32_t(content_type));

  // 1. Standard Xbox 360 path with 16 zeros: root_path_ / 0000000000000000 / 415607F7 / 00000002
  auto p = root_path_ / xuid_str / title_id_str / content_type_str;
  if (std::filesystem::exists(p)) {
    return p;
  }
  // 2. Direct path without 16 zeros: root_path_ / 415607F7 / 00000002
  auto p_no_xuid = root_path_ / title_id_str / content_type_str;
  if (std::filesystem::exists(p_no_xuid)) {
    return p_no_xuid;
  }
  // 3. Lowercase title ID: 415607f7
  std::string title_lower = title_id_str;
  for (char& c : title_lower) c = static_cast<char>(std::tolower(c));
  auto p_lower = root_path_ / xuid_str / title_lower / content_type_str;
  if (std::filesystem::exists(p_lower)) {
    return p_lower;
  }
  auto p_lower_no_xuid = root_path_ / title_lower / content_type_str;
  if (std::filesystem::exists(p_lower_no_xuid)) {
    return p_lower_no_xuid;
  }
  // Default canonical path
  return p;
}

std::filesystem::path ContentManager::ResolvePackagePath(uint64_t xuid,
                                                         const XCONTENT_AGGREGATE_DATA& data) {
  uint64_t used_xuid = (data.xuid != uint64_t(-1) && data.xuid != 0) ? uint64_t(data.xuid) : xuid;

  // DLCs are stored in common directory
  if (data.content_type == XContentType::kMarketplaceContent) {
    used_xuid = 0;
  }

  uint32_t tid = (uint32_t(data.title_id) == kCurrentlyRunningTitleId) ? kernel_state_->title_id()
                                                                       : uint32_t(data.title_id);
  auto xuid_str = fmt::format("{:016X}", used_xuid);
  auto title_id_str = fmt::format("{:08X}", tid);
  auto content_type_str = fmt::format("{:08X}", uint32_t(XContentType(data.content_type)));
  auto fname = rex::to_path(data.file_name());

  // Canonicalize GH3 save container name so all languages share the exact same save
  if (data.content_type == XContentType::kSavedGame && IsGh3SaveName(data.file_name())) {
    fname = rex::to_path(kCanonicalGh3SaveName);
  }

  std::string title_lower = title_id_str;
  for (char& c : title_lower) c = static_cast<char>(std::tolower(c));

  std::filesystem::path clean_root = root_path_;
  std::string clean_str = clean_root.string();
  while (clean_str.size() > 1 && (clean_str.back() == '/' || clean_str.back() == '\\')) {
    clean_str.pop_back();
  }
  clean_root = std::filesystem::path(clean_str);

  if (data.content_type == XContentType::kSavedGame) {
    MigrateGh3SavesIfNeeded(clean_root / xuid_str / title_id_str / content_type_str);
    MigrateGh3SavesIfNeeded(clean_root / title_id_str / content_type_str);
    MigrateGh3SavesIfNeeded(clean_root / xuid_str / title_lower / content_type_str);
    MigrateGh3SavesIfNeeded(clean_root / title_lower / content_type_str);
  }

  // Candidate paths where the package file or directory might exist:
  std::vector<std::filesystem::path> candidates;

  if (data.content_type == XContentType::kMarketplaceContent) {
    auto exe_dir = rex::filesystem::GetExecutableFolder();
    if (!exe_dir.empty()) {
      candidates.push_back(exe_dir / "dlc" / fname);
      candidates.push_back(exe_dir / "DLCs" / fname);
      candidates.push_back(exe_dir / "dlc" / title_id_str / content_type_str / fname);
      candidates.push_back(exe_dir / "dlc" / title_lower / content_type_str / fname);
      candidates.push_back(exe_dir / title_id_str / content_type_str / fname);
      candidates.push_back(exe_dir / title_lower / content_type_str / fname);
    }
    candidates.push_back(std::filesystem::path("/switch/gh3-nx/dlc") / fname);
    candidates.push_back(std::filesystem::path("/switch/gh3-nx/DLCs") / fname);
    candidates.push_back(std::filesystem::path("sdmc:/switch/gh3-nx/dlc") / fname);
    candidates.push_back(std::filesystem::path("sdmc:/switch/gh3-nx/DLCs") / fname);

    candidates.push_back(clean_root.parent_path() / "dlc" / fname);
    candidates.push_back(clean_root.parent_path() / "DLCs" / fname);
    candidates.push_back(clean_root / "dlc" / fname);
    candidates.push_back(clean_root / "DLCs" / fname);
    candidates.push_back(std::filesystem::path("dlc") / fname);
    candidates.push_back(std::filesystem::path("DLCs") / fname);

    candidates.push_back(clean_root.parent_path() / "dlc" / title_id_str / content_type_str / fname);
    candidates.push_back(clean_root.parent_path() / "dlc" / title_lower / content_type_str / fname);
    candidates.push_back(clean_root / "dlc" / title_id_str / content_type_str / fname);
    candidates.push_back(clean_root / "dlc" / title_lower / content_type_str / fname);
    candidates.push_back(clean_root.parent_path() / title_id_str / content_type_str / fname);
    candidates.push_back(clean_root.parent_path() / title_lower / content_type_str / fname);
  }

  // Standard gh3recomp search paths (with or without 16 zeros)
  candidates.push_back(clean_root / xuid_str / title_id_str / content_type_str / fname);
  candidates.push_back(clean_root / title_id_str / content_type_str / fname);
  candidates.push_back(clean_root / xuid_str / title_lower / content_type_str / fname);
  candidates.push_back(clean_root / title_lower / content_type_str / fname);

  for (const auto& candidate : candidates) {
    std::error_code ec;
    if (std::filesystem::exists(candidate, ec)) {
      return candidate;
    }
  }

  // Fallback canonical path
  auto package_root = ResolvePackageRoot(used_xuid, data.content_type, tid);
  return package_root / fname;
}

std::filesystem::path ContentManager::ResolvePackageHeaderPath(const std::string_view file_name,
                                                               uint64_t xuid, uint32_t title_id,
                                                               XContentType content_type) const {
  if (title_id == kCurrentlyRunningTitleId) {
    title_id = kernel_state_->title_id();
  }

  if (content_type == XContentType::kMarketplaceContent) {
    xuid = 0;
  }

  std::string_view actual_file_name = file_name;
  if (content_type == XContentType::kSavedGame && IsGh3SaveName(file_name)) {
    actual_file_name = kCanonicalGh3SaveName;
  }

  auto xuid_str = fmt::format("{:016X}", xuid);
  auto title_id_str = fmt::format("{:08X}", title_id);
  auto content_type_str = fmt::format("{:08X}", uint32_t(content_type));
  std::string final_name = std::string(actual_file_name) + ".header";

  auto canonical_header = root_path_ / xuid_str / title_id_str / kGameContentHeaderDirName / content_type_str /
                          final_name;

  if (content_type == XContentType::kSavedGame && actual_file_name == kCanonicalGh3SaveName) {
    std::error_code ec;
    if (!std::filesystem::exists(canonical_header, ec)) {
      for (const auto& alt : {"Progreso", "progrès", "Progrès", "Progres", "Fortschritt", "Progresso"}) {
        auto alt_header = root_path_ / xuid_str / title_id_str / kGameContentHeaderDirName / content_type_str /
                          (std::string(alt) + ".header");
        if (std::filesystem::exists(alt_header, ec)) {
          CopyFile(alt_header, canonical_header);
          break;
        }
      }
    }
  }

  // Header root path:
  // content_root/xuid/title_id/Headers/content_type/filename.header
  return canonical_header;
}

std::vector<XCONTENT_AGGREGATE_DATA> ContentManager::ListContent(uint32_t device_id, uint64_t xuid,
                                                                 XContentType content_type,
                                                                 uint32_t title_id) {
  std::vector<XCONTENT_AGGREGATE_DATA> result;

  if (title_id == kCurrentlyRunningTitleId) {
    title_id = kernel_state_->title_id();
  }

  auto xuid_str = fmt::format("{:016X}", xuid);
  auto title_id_str = fmt::format("{:08X}", title_id);
  auto content_type_str = fmt::format("{:08X}", uint32_t(content_type));

  std::string title_lower = title_id_str;
  for (char& c : title_lower) c = static_cast<char>(std::tolower(c));

  std::filesystem::path clean_root = root_path_;
  std::string clean_str = clean_root.string();
  while (clean_str.size() > 1 && (clean_str.back() == '/' || clean_str.back() == '\\')) {
    clean_str.pop_back();
  }
  clean_root = std::filesystem::path(clean_str);

  std::vector<std::filesystem::path> search_paths;
  auto add_search_path = [&](const std::filesystem::path& p) {
    std::error_code ec;
    if (std::filesystem::exists(p, ec) && std::filesystem::is_directory(p, ec)) {
      for (const auto& existing : search_paths) {
        if (existing == p) return;
      }
      search_paths.push_back(p);
    }
  };

  if (content_type == XContentType::kMarketplaceContent) {
    auto exe_dir = rex::filesystem::GetExecutableFolder();
    if (!exe_dir.empty()) {
      add_search_path(exe_dir / "dlc");
      add_search_path(exe_dir / "DLCs");
      add_search_path(exe_dir / "dlc" / title_id_str / content_type_str);
      add_search_path(exe_dir / "dlc" / title_lower / content_type_str);
      add_search_path(exe_dir / title_id_str / content_type_str);
      add_search_path(exe_dir / title_lower / content_type_str);
    }
    add_search_path("/switch/gh3-nx/dlc");
    add_search_path("/switch/gh3-nx/DLCs");
    add_search_path("sdmc:/switch/gh3-nx/dlc");
    add_search_path("sdmc:/switch/gh3-nx/DLCs");

    add_search_path(clean_root.parent_path() / "dlc");
    add_search_path(clean_root.parent_path() / "DLCs");
    add_search_path(clean_root / "dlc");
    add_search_path(clean_root / "DLCs");
    add_search_path(std::filesystem::path("dlc"));
    add_search_path(std::filesystem::path("DLCs"));

    add_search_path(clean_root.parent_path() / "dlc" / title_id_str / content_type_str);
    add_search_path(clean_root.parent_path() / "dlc" / title_lower / content_type_str);
    add_search_path(clean_root / "dlc" / title_id_str / content_type_str);
    add_search_path(clean_root / "dlc" / title_lower / content_type_str);
    add_search_path(clean_root.parent_path() / title_id_str / content_type_str);
    add_search_path(clean_root.parent_path() / title_lower / content_type_str);
  }

  // Standard gh3recomp search paths (with or without 16 zeros):
  add_search_path(clean_root / xuid_str / title_id_str / content_type_str);
  add_search_path(clean_root / title_id_str / content_type_str);
  add_search_path(clean_root / xuid_str / title_lower / content_type_str);
  add_search_path(clean_root / title_lower / content_type_str);

  REXSYS_INFO("[dlc] ListContent: checking {} directories for content_type {:08X}",
              search_paths.size(), uint32_t(content_type));
  for (const auto& sp : search_paths) {
    REXSYS_INFO("[dlc]   search path: {}", rex::path_to_utf8(sp));
  }

  std::unordered_set<std::string> seen_names;

  for (const auto& package_root : search_paths) {
    if (content_type == XContentType::kSavedGame) {
      MigrateGh3SavesIfNeeded(package_root);
    }
    auto file_infos = rex::filesystem::ListFiles(package_root);
    REXSYS_INFO("[dlc] in '{}', found {} item(s)", rex::path_to_utf8(package_root), file_infos.size());
    for (const auto& file_info : file_infos) {
      std::string name_str = rex::path_to_utf8(file_info.name);
      if (seen_names.count(name_str)) {
        continue;
      }

      // Skip structural folder names if scanning parent directory
      if (name_str == title_id_str || name_str == title_lower || name_str == "00000002" ||
          name_str == "0000000000000000" || name_str == "README.txt") {
        continue;
      }

      if (file_info.type == rex::filesystem::FileInfo::Type::kFile) {
        auto full_path = package_root / file_info.name;
        REXSYS_INFO("[dlc] inspecting file candidate: '{}' ({} B)", rex::path_to_utf8(full_path), file_info.total_size);
        auto stfs_header = rex::filesystem::StfsContainerDevice::ReadPackageHeader(full_path);
        std::u16string disp;
        if (stfs_header) {
          disp = stfs_header->metadata.display_name(rex::system::XLanguage::kEnglish);
          REXSYS_INFO("[dlc] -> STFS valid: '{}'", rex::string::to_utf8(disp));
        } else {
          REXSYS_WARN("[dlc] -> ReadPackageHeader returned null for {}", name_str);
        }
        if (disp.empty()) {
          disp = rex::path_to_utf16(file_info.name);
        }

        if (stfs_header || (file_info.total_size > 32768 && content_type == XContentType::kMarketplaceContent)) {
          XCONTENT_AGGREGATE_DATA content_data;
          content_data.device_id = device_id;
          content_data.content_type = content_type;
          content_data.set_display_name(disp);
          content_data.set_file_name(name_str);
          content_data.title_id = title_id;
          content_data.xuid = xuid;
          result.emplace_back(std::move(content_data));
          seen_names.insert(name_str);
          REXSYS_INFO("[dlc] -> registered DLC package: '{}' (displayed as '{}')", name_str, rex::string::to_utf8(disp));
          continue;
        }
        continue;
      }

      if (file_info.type == rex::filesystem::FileInfo::Type::kDirectory) {
        // Check if directory wraps an STFS container inside
        bool found_stfs_inside = false;
        for (const auto& inner : rex::filesystem::ListFiles(package_root / file_info.name)) {
          if (inner.type == rex::filesystem::FileInfo::Type::kFile) {
            auto inner_path = package_root / file_info.name / inner.name;
            auto inner_stfs = rex::filesystem::StfsContainerDevice::ReadPackageHeader(inner_path);
            if (inner_stfs) {
              XCONTENT_AGGREGATE_DATA content_data;
              content_data.device_id = device_id;
              content_data.content_type = content_type;
              std::u16string disp = inner_stfs->metadata.display_name(rex::system::XLanguage::kEnglish);
              if (disp.empty()) {
                disp = rex::path_to_utf16(file_info.name);
              }
              content_data.set_display_name(disp);
              content_data.set_file_name(name_str);
              content_data.title_id = title_id;
              content_data.xuid = xuid;
              result.emplace_back(std::move(content_data));
              seen_names.insert(name_str);
              found_stfs_inside = true;
              break;
            }
          }
        }
        if (found_stfs_inside) {
          continue;
        }

        if (content_type == XContentType::kSavedGame && IsGh3SaveName(name_str)) {
          // Canonical GH3 save handling: mark all known aliases as seen
          for (const auto& alt : {"Progress", "Progreso", "progrès", "Progrès", "Progres", "Fortschritt", "Progresso"}) {
            seen_names.insert(alt);
          }

          auto current_lang = static_cast<rex::system::XLanguage>(REXCVAR_GET(user_language));
          std::string expected_name = GetGh3SaveNameForLanguage(current_lang);

          // Add entry matching the active game language
          XCONTENT_AGGREGATE_DATA content_data;
          content_data.device_id = device_id;
          content_data.content_type = content_type;
          content_data.set_display_name(rex::string::to_utf16(expected_name));
          content_data.set_file_name(expected_name);
          content_data.title_id = title_id;
          content_data.xuid = xuid;
          result.emplace_back(std::move(content_data));

          // Also register canonical "Progress" if active language is not English
          if (expected_name != kCanonicalGh3SaveName) {
            XCONTENT_AGGREGATE_DATA canon_data;
            canon_data.device_id = device_id;
            canon_data.content_type = content_type;
            canon_data.set_display_name(rex::string::to_utf16(kCanonicalGh3SaveName));
            canon_data.set_file_name(kCanonicalGh3SaveName);
            canon_data.title_id = title_id;
            canon_data.xuid = xuid;
            result.emplace_back(std::move(canon_data));
          }
          continue;
        }

        XCONTENT_AGGREGATE_DATA content_data;
        if (XSUCCEEDED(ReadContentHeaderFile(name_str, xuid, title_id,
                                             content_type, content_data))) {
          result.emplace_back(std::move(content_data));
        } else {
          content_data.device_id = device_id;
          content_data.content_type = content_type;
          content_data.set_display_name(rex::path_to_utf16(file_info.name));
          content_data.set_file_name(name_str);
          content_data.title_id = title_id;
          content_data.xuid = xuid;
          result.emplace_back(std::move(content_data));
        }
        seen_names.insert(name_str);
      }
    }
  }

  // What the game sees when it asks for the list of saves / DLCs.
  REXSYS_INFO("[save] list type {:08X}: {} entry(ies)", uint32_t(content_type), result.size());
  for (const auto& entry : result) {
    REXSYS_INFO("[save]   '{}' (displayed as '{}')", entry.file_name(),
                rex::string::to_utf8(entry.display_name()));
  }

  return result;
}

std::unique_ptr<ContentPackage> ContentManager::ResolvePackage(
    const std::string_view root_name, uint64_t xuid, const XCONTENT_AGGREGATE_DATA& data) {
  auto package_path = ResolvePackagePath(xuid, data);
  if (!std::filesystem::exists(package_path)) {
    return nullptr;
  }
  auto package = std::make_unique<ContentPackage>(kernel_state_, root_name, data, package_path);
  return package;
}

bool ContentManager::ContentExists(uint64_t xuid, const XCONTENT_AGGREGATE_DATA& data) {
  auto path = ResolvePackagePath(xuid, data);
  return std::filesystem::exists(path);
}

X_RESULT ContentManager::WriteContentHeaderFile(uint64_t xuid, XCONTENT_AGGREGATE_DATA data,
                                                uint32_t license_mask) {
  if (data.title_id == uint32_t(-1)) {
    data.title_id = kernel_state_->title_id();
  }
  if (data.xuid == uint64_t(-1)) {
    data.xuid = xuid;
  }
  uint64_t used_xuid = (data.xuid != uint64_t(-1) && data.xuid != 0) ? uint64_t(data.xuid) : xuid;

  auto header_path =
      ResolvePackageHeaderPath(data.file_name(), used_xuid, data.title_id, data.content_type);
  auto parent_path = header_path.parent_path();

  if (!std::filesystem::exists(parent_path)) {
    if (!std::filesystem::create_directories(parent_path)) {
      return X_ERROR_ACCESS_DENIED;
    }
  }

  rex::filesystem::CreateEmptyFile(header_path);

  auto file = rex::filesystem::OpenFile(header_path, "wb");
  if (!file) {
    return X_ERROR_FILE_NOT_FOUND;
  }
  fwrite(&data, 1, sizeof(XCONTENT_AGGREGATE_DATA), file);
  if (license_mask != 0) {
    fwrite(&license_mask, 1, sizeof(license_mask), file);
  }
  const bool ok = fclose(file) == 0;
  REXSYS_INFO("[save] header of '{}' {} in {}", data.file_name(),
              ok ? "written" : "FAILED on close", rex::path_to_utf8(header_path));
  return X_ERROR_SUCCESS;
}

X_RESULT ContentManager::ReadContentHeaderFile(const std::string_view file_name, uint64_t xuid,
                                               uint32_t title_id, XContentType content_type,
                                               XCONTENT_AGGREGATE_DATA& data) const {
  auto header_file_path = ResolvePackageHeaderPath(file_name, xuid, title_id, content_type);
  constexpr uint32_t header_size = sizeof(XCONTENT_AGGREGATE_DATA);

  if (!std::filesystem::exists(header_file_path)) {
    return X_ERROR_FILE_NOT_FOUND;
  }

  auto file = rex::filesystem::OpenFile(header_file_path, "rb");
  if (!file) {
    return X_ERROR_FILE_NOT_FOUND;
  }

  auto file_size = std::filesystem::file_size(header_file_path);
  if (file_size < header_size) {
    fclose(file);
    return X_ERROR_FILE_NOT_FOUND;
  }

  std::array<uint8_t, header_size> buffer;
  size_t result = fread(buffer.data(), 1, header_size, file);
  fclose(file);

  if (result != header_size) {
    return X_ERROR_FILE_NOT_FOUND;
  }

  std::memcpy(&data, buffer.data(), buffer.size());
  return X_ERROR_SUCCESS;
}

X_RESULT ContentManager::CreateContent(const std::string_view root_name, uint64_t xuid,
                                       const XCONTENT_AGGREGATE_DATA& data) {
  {
    auto global_lock = global_critical_region_.Acquire();
    if (open_packages_.count(string::string_key_case(root_name))) {
      return X_ERROR_ALREADY_EXISTS;
    }
  }

  auto package_path = ResolvePackagePath(xuid, data);
  REXSYS_INFO("[save] create '{}' (root {}) in {}", data.file_name(), root_name,
              rex::path_to_utf8(package_path));
  if (std::filesystem::exists(package_path)) {
    REXSYS_WARN("[save] create '{}': it already existed, returning ALREADY_EXISTS", data.file_name());
    return X_ERROR_ALREADY_EXISTS;
  }
  if (!std::filesystem::create_directories(package_path)) {
    REXSYS_ERROR("[save] create '{}': could NOT create {}", data.file_name(),
                 rex::path_to_utf8(package_path));
    return X_ERROR_ACCESS_DENIED;
  }
  auto package = ResolvePackage(root_name, xuid, data);
  assert_not_null(package);

  {
    auto global_lock = global_critical_region_.Acquire();
    if (open_packages_.count(string::string_key_case(root_name))) {
      return X_ERROR_ALREADY_EXISTS;
    }
    open_packages_.insert({string::string_key_case::create(root_name), package.release()});
  }
  return X_ERROR_SUCCESS;
}

X_RESULT ContentManager::OpenContent(const std::string_view root_name, uint64_t xuid,
                                     const XCONTENT_AGGREGATE_DATA& data,
                                     uint32_t& content_license) {
  {
    auto global_lock = global_critical_region_.Acquire();
    if (open_packages_.count(string::string_key_case(root_name))) {
      return X_ERROR_ALREADY_EXISTS;
    }
  }

  auto package_path = ResolvePackagePath(xuid, data);
  if (!std::filesystem::exists(package_path)) {
    REXSYS_WARN("[save] open '{}': {} does not exist", data.file_name(),
                rex::path_to_utf8(package_path));
    return X_ERROR_FILE_NOT_FOUND;
  }
  // What the game will find inside. If this says EMPTY and the profile is then reported as damaged, the
  // failure was in saving; if it lists the files with their sizes, the failure is in reading them or in
  // the contents themselves.
  REXSYS_INFO("[save] open '{}' (root {}) in {} -> {}", data.file_name(), root_name,
              rex::path_to_utf8(package_path), ThatHasInside(package_path));
  auto package = ResolvePackage(root_name, xuid, data);
  assert_not_null(package);
  package->LoadPackageLicenseMask(ResolvePackageHeaderPath(
      data.file_name(), xuid, kernel_state_->title_id(), data.content_type));
  content_license = package->GetPackageLicense();

  {
    auto global_lock = global_critical_region_.Acquire();
    if (open_packages_.count(string::string_key_case(root_name))) {
      return X_ERROR_ALREADY_EXISTS;
    }
    open_packages_.insert({string::string_key_case::create(root_name), package.release()});
  }
  return X_ERROR_SUCCESS;
}

X_RESULT ContentManager::CloseContent(const std::string_view root_name) {
  ContentPackage* package = nullptr;
  {
    auto global_lock = global_critical_region_.Acquire();
    // Some games use different casing between Create and Close (e.g. "save" vs "SAVE")
    auto it = open_packages_.find(string::string_key_case(root_name));
    if (it == open_packages_.end()) {
      return X_ERROR_FILE_NOT_FOUND;
    }
    package = DetachPackage(it);
  }
  // The path and name are recorded before destroying the package, which is what holds them.
  const std::filesystem::path path = package->package_path();
  const std::string name = package->GetPackageContentData().file_name();
  delete package;  // unmounts the guest drive: from here on the files are in place

  REXSYS_INFO("[save] close '{}' (root {}) in {} -> {}", name, root_name,
              rex::path_to_utf8(path), ThatHasInside(path));
  CopyForTheUser(name, path);
  return X_ERROR_SUCCESS;
}

X_RESULT ContentManager::GetContentThumbnail(uint64_t xuid, const XCONTENT_AGGREGATE_DATA& data,
                                             std::vector<uint8_t>* buffer) {
  auto global_lock = global_critical_region_.Acquire();
  auto package_path = ResolvePackagePath(xuid, data);
  auto thumb_path = package_path / kThumbnailFileName;
  if (std::filesystem::exists(thumb_path)) {
    auto file = rex::filesystem::OpenFile(thumb_path, "rb");
    fseek(file, 0, SEEK_END);
    size_t file_len = ftell(file);
    fseek(file, 0, SEEK_SET);
    buffer->resize(file_len);
    fread(const_cast<uint8_t*>(buffer->data()), 1, buffer->size(), file);
    fclose(file);
    return X_ERROR_SUCCESS;
  } else {
    return X_ERROR_FILE_NOT_FOUND;
  }
}

X_RESULT ContentManager::SetContentThumbnail(uint64_t xuid, const XCONTENT_AGGREGATE_DATA& data,
                                             std::vector<uint8_t> buffer) {
  auto global_lock = global_critical_region_.Acquire();
  auto package_path = ResolvePackagePath(xuid, data);
  std::filesystem::create_directories(package_path);
  if (std::filesystem::exists(package_path)) {
    auto thumb_path = package_path / kThumbnailFileName;
    auto file = rex::filesystem::OpenFile(thumb_path, "wb");
    fwrite(buffer.data(), 1, buffer.size(), file);
    fclose(file);
    return X_ERROR_SUCCESS;
  } else {
    return X_ERROR_FILE_NOT_FOUND;
  }
}

X_RESULT ContentManager::DeleteContent(uint64_t xuid, const XCONTENT_AGGREGATE_DATA& data) {
  auto global_lock = global_critical_region_.Acquire();

  if (IsContentOpen(data)) {
    // TODO(Gliniak): Get real error code for this case.
    return X_ERROR_ACCESS_DENIED;
  }

  auto package_path = ResolvePackagePath(xuid, data);
  std::error_code ec;
  auto dir_removed = std::filesystem::remove_all(package_path, ec);
  if (ec) {
    return X_ERROR_ACCESS_DENIED;
  }

  uint64_t used_xuid = (data.xuid != uint64_t(-1) && data.xuid != 0) ? uint64_t(data.xuid) : xuid;
  auto header_path =
      ResolvePackageHeaderPath(data.file_name(), used_xuid, data.title_id, data.content_type);
  std::error_code ec2;
  bool header_removed = std::filesystem::remove(header_path, ec2);

  if (dir_removed > 0 || header_removed) {
    return X_ERROR_SUCCESS;
  }
  return X_ERROR_FILE_NOT_FOUND;
}

X_RESULT ContentManager::UnmountContent(uint64_t xuid, const XCONTENT_AGGREGATE_DATA& data) {
  ContentPackage* package = nullptr;
  {
    auto global_lock = global_critical_region_.Acquire();
    auto it = FindOpenPackageByData(data);
    if (it == open_packages_.end()) {
      return X_ERROR_FILE_NOT_FOUND;
    }
    package = DetachPackage(it);
  }
  delete package;
  return X_ERROR_SUCCESS;
}

X_RESULT ContentManager::UnmountAndDeleteContent(uint64_t xuid,
                                                 const XCONTENT_AGGREGATE_DATA& data) {
  // Unmount phase: tolerant of not-mounted state
  ContentPackage* package = nullptr;
  {
    auto global_lock = global_critical_region_.Acquire();
    auto it = FindOpenPackageByData(data);
    if (it != open_packages_.end()) {
      package = DetachPackage(it);
    }
  }
  delete package;

  // Delete phase: remove package directory and .header file
  auto package_path = ResolvePackagePath(xuid, data);

  uint64_t used_xuid = (data.xuid != uint64_t(-1) && data.xuid != 0) ? uint64_t(data.xuid) : xuid;
  auto header_path =
      ResolvePackageHeaderPath(data.file_name(), used_xuid, data.title_id, data.content_type);

  std::error_code ec;
  auto dir_removed = std::filesystem::remove_all(package_path, ec);
  if (ec) {
    return X_ERROR_ACCESS_DENIED;
  }

  std::error_code ec2;
  bool header_removed = std::filesystem::remove(header_path, ec2);

  if (dir_removed > 0 || header_removed) {
    return X_ERROR_SUCCESS;
  }
  return X_ERROR_FILE_NOT_FOUND;
}

std::filesystem::path ContentManager::ResolveGameUserContentPath() {
  auto title_id = fmt::format("{:08X}", kernel_state_->title_id());
  auto user_name = rex::to_path(kernel_state_->user_profile()->name());

  // Per-game per-profile data location:
  // content_root/title_id/profile/user_name
  return root_path_ / title_id / kGameUserContentDirName / user_name;
}

std::unordered_map<string::string_key_case, ContentPackage*,
                   string::string_key_case::Hash>::iterator
ContentManager::FindOpenPackageByData(const XCONTENT_AGGREGATE_DATA& data) {
  // Resolve kCurrentlyRunningTitleId so both sides compare actual title IDs.
  uint32_t query_title = data.title_id;
  if (query_title == kCurrentlyRunningTitleId) {
    query_title = kernel_state_->title_id();
  }

  for (auto it = open_packages_.begin(); it != open_packages_.end(); ++it) {
    const auto& pkg = it->second->GetPackageContentData();

    uint32_t pkg_title = pkg.title_id;
    if (pkg_title == kCurrentlyRunningTitleId) {
      pkg_title = kernel_state_->title_id();
    }

    // Match on content_type + file_name + resolved title_id.
    // device_id is a virtual storage selector, not a content identifier.
    bool name_matches = (data.file_name() == pkg.file_name());
    if (!name_matches && data.content_type == XContentType::kSavedGame &&
        IsGh3SaveName(data.file_name()) && IsGh3SaveName(pkg.file_name())) {
      name_matches = true;
    }

    if (data.content_type == pkg.content_type && name_matches &&
        query_title == pkg_title) {
      return it;
    }
  }
  return open_packages_.end();
}

ContentPackage* ContentManager::DetachPackage(
    std::unordered_map<string::string_key_case, ContentPackage*,
                       string::string_key_case::Hash>::iterator it) {
  CloseOpenedFilesFromContent(it->first.view());
  ContentPackage* package = it->second;
  open_packages_.erase(it);
  return package;
}

bool ContentManager::IsContentOpen(const XCONTENT_AGGREGATE_DATA& data) const {
  return std::any_of(open_packages_.cbegin(), open_packages_.cend(), [&data](const auto& content) {
    return data == content.second->GetPackageContentData();
  });
}

std::filesystem::path ContentManager::GetOpenPackagePath(const std::string_view root_name) const {
  auto it = open_packages_.find(string::string_key_case(root_name));
  if (it == open_packages_.end()) {
    return {};
  }
  return it->second->package_path();
}

void ContentManager::CloseOpenedFilesFromContent(const std::string_view root_name) {
  // TODO(Gliniak): Cleanup this code to care only about handles
  // related to provided content
  const std::vector<object_ref<XFile>> all_files_handles =
      kernel_state_->object_table()->GetObjectsByType<XFile>(XObject::Type::File);

  std::string resolved_path = "";
  kernel_state_->file_system()->FindSymbolicLink(std::string(root_name) + ':', resolved_path);

  for (const object_ref<XFile>& file : all_files_handles) {
    std::string file_path = file->entry()->absolute_path();
    bool is_file_inside_content = rex::string::utf8_starts_with(file_path, resolved_path);

    if (is_file_inside_content) {
      file->ReleaseHandle();
    }
  }
}

static X_RESULT ExtractEntry(rex::filesystem::Entry* entry,
                             const std::filesystem::path& base_path) {
  auto dest_path = base_path / rex::to_path(rex::string::utf8_fix_path_separators(entry->path()));

  if (entry->attributes() & rex::filesystem::kFileAttributeDirectory) {
    std::error_code ec;
    std::filesystem::create_directories(dest_path, ec);
    if (ec) {
      return X_ERROR_ACCESS_DENIED;
    }
    return X_ERROR_SUCCESS;
  }

  // Ensure parent directory exists
  std::error_code ec;
  std::filesystem::create_directories(dest_path.parent_path(), ec);

  rex::filesystem::File* in_file = nullptr;
  X_STATUS status = entry->Open(rex::filesystem::FileAccess::kFileReadData, &in_file);
  if (status != X_STATUS_SUCCESS) {
    return X_ERROR_ACCESS_DENIED;
  }

  auto out_file = rex::filesystem::OpenFile(dest_path, "wb");
  if (!out_file) {
    in_file->Destroy();
    return X_ERROR_ACCESS_DENIED;
  }

  constexpr size_t kBufferSize = 4 * 1024 * 1024;  // 4 MiB
  auto buffer = std::make_unique<uint8_t[]>(kBufferSize);
  size_t remaining = entry->size();
  size_t offset = 0;

  while (remaining > 0) {
    size_t bytes_read = 0;
    size_t to_read = std::min(remaining, kBufferSize);
    in_file->ReadSync(std::span<uint8_t>(buffer.get(), to_read), offset, &bytes_read);
    if (bytes_read == 0) {
      break;
    }
    fwrite(buffer.get(), 1, bytes_read, out_file);
    offset += bytes_read;
    remaining -= bytes_read;
  }

  fclose(out_file);
  in_file->Destroy();
  return X_ERROR_SUCCESS;
}

X_RESULT ContentManager::InstallContent(const std::filesystem::path& package_path) {
  if (!std::filesystem::exists(package_path)) {
    return X_ERROR_FILE_NOT_FOUND;
  }

  // Mount the STFS package as a virtual filesystem device
  auto device = std::make_unique<rex::filesystem::StfsContainerDevice>("", package_path);
  if (!device->Initialize()) {
    return X_ERROR_ACCESS_DENIED;
  }

  // Derive install destination:
  // root_path_/0000000000000000/{title_id}/00000002/{filename}/
  auto file_name = rex::path_to_utf8(package_path.filename());

  XCONTENT_AGGREGATE_DATA content_data;
  content_data.device_id = static_cast<uint32_t>(DummyDeviceId::HDD);
  content_data.content_type = XContentType::kMarketplaceContent;
  content_data.title_id = kernel_state_->title_id();
  content_data.xuid = 0;
  content_data.set_file_name(file_name);

  // Read display name from STFS metadata
  auto display_name = device->header().metadata.display_name(rex::system::XLanguage::kEnglish);
  if (!display_name.empty()) {
    content_data.set_display_name(display_name);
  } else {
    content_data.set_display_name(rex::path_to_utf16(package_path.filename()));
  }

  auto install_path = ResolvePackagePath(0, content_data);

  // Create destination directory
  std::error_code ec;
  std::filesystem::create_directories(install_path, ec);
  if (ec) {
    return X_ERROR_ACCESS_DENIED;
  }

  // Extract all files breadth-first
  auto* root = device->ResolvePath("");
  if (!root) {
    return X_ERROR_ACCESS_DENIED;
  }

  std::queue<rex::filesystem::Entry*> queue;
  queue.push(root);

  while (!queue.empty()) {
    auto* entry = queue.front();
    queue.pop();

    for (auto& child : entry->children()) {
      queue.push(child.get());
    }

    auto result = ExtractEntry(entry, install_path);
    if (result != X_ERROR_SUCCESS) {
      return result;
    }
  }

  // Compute license mask from STFS header licenses
  uint32_t license_mask = 0;
  for (size_t i = 0; i < 0x10; i++) {
    if (device->header().header.licenses[i].license_flags) {
      license_mask |= device->header().header.licenses[i].license_bits;
    }
  }

  // Write .header file
  return WriteContentHeaderFile(0, content_data, license_mask);
}

}  // namespace xam
}  // namespace system
}  // namespace rex
