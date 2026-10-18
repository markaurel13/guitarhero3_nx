#include "gh3_funcs.29.h"

DEFINE_REX_FUNC(sub_820D08C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r10,32
	ctx.r10.s64 = 32;
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v0,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DB818) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-31440(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -31440);
	// bl 0x820d9b60
	ctx.lr = 0x820DB838;
	sub_820D9B60(ctx, base);
	// lis r4,-24100
	ctx.r4.s64 = -1579417600;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// ori r4,r4,33273
	ctx.r4.u64 = ctx.r4.u64 | 33273;
	// bl 0x82144768
	ctx.lr = 0x820DB84C;
	sub_82144768(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E0040) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E0290) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E1A18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x820E1A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821365f0
	ctx.lr = 0x820E1A3C;
	sub_821365F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x820e0e48
	ctx.lr = 0x820E1A50;
	sub_820E0E48(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x820e1a90
	if (!ctx.cr6.lt) goto loc_820E1A90;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1a7c
	if (ctx.cr6.eq) goto loc_820E1A7C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,78
	ctx.r4.s64 = 78;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82135dc8
	ctx.lr = 0x820E1A7C;
	sub_82135DC8(ctx, base);
loc_820E1A7C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
loc_820E1A90:
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E4CF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v127.u8)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltisw128 v126,0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vcfsx v11,v0,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vmsum3fp128 v0,v12,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vrsqrtefp v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v0.f32))));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcmpeqfp128 v127,v0,v126
	simde_mm_store_ps(ctx.v127.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v126.f32)));
	// vmulfp128 v9,v0,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v13,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v9,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel128 v127,v0,v10,v127
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// bl 0x820e3878
	ctx.lr = 0x820E4D60;
	sub_820E3878(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 80));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,84(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 84));
	// vpermwi128 v11,v127,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x9C));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vpermwi128 v10,v127,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x78));
	// vor128 v9,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// stvx128 v126,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8)));
	// lfs f13,5328(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,4180(r10)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 4180));
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8)));
	// stvx128 v126,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8)));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r9,48
	ctx.r9.s64 = 48;
	// vspltw v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vmulfp128 v11,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v7,v12,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vor v8,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmulfp128 v12,v11,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp128 v0,v127,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vupkd3d128 v10,v126,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v10 = vTemp;
	// vpermwi128 v10,v10,171
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x54));
	// vmaddcfp128 v13,v127,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v12,v9,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v11,v0,8,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 8));
	// stvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v11,v12,8,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 78), 8));
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v11,v13,8,1
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 147), 8));
	// stvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v11,v13,4,1
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 147), 4));
	// stvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v11,v0,4,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 4));
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// stvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v11,v12,2,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 2));
	// stvx128 v11,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v12,v13,2,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 2));
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v13,v0,2,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 2));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvx128 v10,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v126,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210A390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vpermwi128 v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210F6A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efdc
	ctx.lr = 0x8210F6A8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8248f8e0
	ctx.lr = 0x8210F6B0;
	__savefpr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,21987
	ctx.r4.s64 = 1440940032;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// ori r4,r4,710
	ctx.r4.u64 = ctx.r4.u64 | 710;
	// lwz r24,20072(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 20072);
	// lis r11,-32098
	ctx.r11.s64 = -2103574528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,19964
	ctx.r31.s64 = ctx.r11.s64 + 19964;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r23,-32(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r22,-408(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + -408);
	// bl 0x821a1578
	ctx.lr = 0x8210F6E8;
	sub_821A1578(ctx, base);
	// lis r11,-5299
	ctx.r11.s64 = -347275264;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r26,r11,56321
	ctx.r26.u64 = ctx.r11.u64 | 56321;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a13a0
	ctx.lr = 0x8210F6FC;
	sub_821A13A0(ctx, base);
	// lis r4,-25809
	ctx.r4.s64 = -1691418624;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f24,-20(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(REX_LOAD_F32(ctx.r31.u32 + -20));
	// ori r4,r4,22882
	ctx.r4.u64 = ctx.r4.u64 | 22882;
	// lfs f23,-16(r31)
	ctx.f23.f64 = double(REX_LOAD_F32(ctx.r31.u32 + -16));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f30,-12(r31)
	ctx.f30.f64 = double(REX_LOAD_F32(ctx.r31.u32 + -12));
	// lwz r28,-5028(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + -5028);
	// lfs f29,-8(r31)
	ctx.f29.f64 = double(REX_LOAD_F32(ctx.r31.u32 + -8));
	// lfs f25,0(r31)
	ctx.f25.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 0));
	// fmr f22,f1
	ctx.f22.f64 = ctx.f1.f64;
	// bl 0x821a1578
	ctx.lr = 0x8210F72C;
	sub_821A1578(ctx, base);
	// lis r3,3762
	ctx.r3.s64 = 246546432;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,61603
	ctx.r3.u64 = ctx.r3.u64 | 61603;
	// bl 0x821a1ac8
	ctx.lr = 0x8210F73C;
	sub_821A1AC8(ctx, base);
	// lis r4,16297
	ctx.r4.s64 = 1068040192;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,65525
	ctx.r4.u64 = ctx.r4.u64 | 65525;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82142b80
	ctx.lr = 0x8210F754;
	sub_82142B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f768
	if (ctx.cr6.eq) goto loc_8210F768;
	// lwz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8210f77c
	goto loc_8210F77C;
loc_8210F768:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5530
	ctx.lr = 0x8210F778;
	sub_821F5530(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8210F77C:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142b80
	ctx.lr = 0x8210F790;
	sub_82142B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// beq cr6,0x8210f7ac
	if (ctx.cr6.eq) goto loc_8210F7AC;
	// lfs f26,104(r1)
	ctx.f26.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 104));
	// b 0x8210f7c0
	goto loc_8210F7C0;
loc_8210F7AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5530
	ctx.lr = 0x8210F7BC;
	sub_821F5530(ctx, base);
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f31.f64;
loc_8210F7C0:
	// lis r4,-2866
	ctx.r4.s64 = -187826176;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// ori r4,r4,52029
	ctx.r4.u64 = ctx.r4.u64 | 52029;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142b80
	ctx.lr = 0x8210F7D8;
	sub_82142B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210f7f4
	if (!ctx.cr6.eq) goto loc_8210F7F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f5530
	ctx.lr = 0x8210F7F4;
	sub_821F5530(ctx, base);
loc_8210F7F4:
	// lis r11,14060
	ctx.r11.s64 = 921436160;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// ori r27,r11,1666
	ctx.r27.u64 = ctx.r11.u64 | 1666;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142b80
	ctx.lr = 0x8210F810;
	sub_82142B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f824
	if (ctx.cr6.eq) goto loc_8210F824;
	// lfs f27,108(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 108));
	// b 0x8210f838
	goto loc_8210F838;
loc_8210F824:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f5530
	ctx.lr = 0x8210F834;
	sub_821F5530(ctx, base);
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f31.f64;
loc_8210F838:
	// lis r4,26598
	ctx.r4.s64 = 1743126528;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,34202
	ctx.r4.u64 = ctx.r4.u64 | 34202;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142b80
	ctx.lr = 0x8210F850;
	sub_82142B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f864
	if (ctx.cr6.eq) goto loc_8210F864;
	// lwz r25,112(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8210f878
	goto loc_8210F878;
loc_8210F864:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f5530
	ctx.lr = 0x8210F874;
	sub_821F5530(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
loc_8210F878:
	// lis r4,-27970
	ctx.r4.s64 = -1833041920;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// ori r4,r4,15667
	ctx.r4.u64 = ctx.r4.u64 | 15667;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142b80
	ctx.lr = 0x8210F890;
	sub_82142B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f8a4
	if (ctx.cr6.eq) goto loc_8210F8A4;
	// lwz r30,116(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8210f8b8
	goto loc_8210F8B8;
loc_8210F8A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f5530
	ctx.lr = 0x8210F8B4;
	sub_821F5530(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8210F8B8:
	// lis r11,14740
	ctx.r11.s64 = 966000640;
	// ori r11,r11,22
	ctx.r11.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210fca8
	if (ctx.cr6.eq) goto loc_8210FCA8;
	// lis r11,10989
	ctx.r11.s64 = 720175104;
	// ori r11,r11,30064
	ctx.r11.u64 = ctx.r11.u64 | 30064;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210fca8
	if (ctx.cr6.eq) goto loc_8210FCA8;
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// bgt cr6,0x8210f920
	if (ctx.cr6.gt) goto loc_8210F920;
	// lis r11,19364
	ctx.r11.s64 = 1269039104;
	// ori r11,r11,12530
	ctx.r11.u64 = ctx.r11.u64 | 12530;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210f920
	if (ctx.cr6.eq) goto loc_8210F920;
	// lis r11,-15366
	ctx.r11.s64 = -1007026176;
	// ori r11,r11,11248
	ctx.r11.u64 = ctx.r11.u64 | 11248;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210f920
	if (ctx.cr6.eq) goto loc_8210F920;
	// lis r11,-1863
	ctx.r11.s64 = -122093568;
	// ori r11,r11,10493
	ctx.r11.u64 = ctx.r11.u64 | 10493;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210f920
	if (ctx.cr6.eq) goto loc_8210F920;
	// lis r11,-23182
	ctx.r11.s64 = -1519255552;
	// ori r11,r11,56498
	ctx.r11.u64 = ctx.r11.u64 | 56498;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8210fca8
	if (!ctx.cr6.eq) goto loc_8210FCA8;
loc_8210F920:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x8210fca8
	if (ctx.cr6.eq) goto loc_8210FCA8;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x8210fca8
	if (ctx.cr6.eq) goto loc_8210FCA8;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x8210f940
	if (!ctx.cr6.eq) goto loc_8210F940;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8210f958
	goto loc_8210F958;
loc_8210F940:
	// lis r4,27632
	ctx.r4.s64 = 1810890752;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32429
	ctx.r4.u64 = ctx.r4.u64 | 32429;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a1578
	ctx.lr = 0x8210F954;
	sub_821A1578(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8210F958:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f27,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f24.f64);
	// lfs f31,5328(r10)
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 5328));
	// bgt cr6,0x8210f970
	if (ctx.cr6.gt) goto loc_8210F970;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8210f97c
	goto loc_8210F97C;
loc_8210F970:
	// fcmpu cr6,f27,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f23.f64);
	// blt cr6,0x8210f97c
	if (ctx.cr6.lt) goto loc_8210F97C;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_8210F97C:
	// lis r10,-20252
	ctx.r10.s64 = -1327235072;
	// lis r9,14732
	ctx.r9.s64 = 965476352;
	// ori r10,r10,27837
	ctx.r10.u64 = ctx.r10.u64 | 27837;
	// ori r31,r9,47688
	ctx.r31.u64 = ctx.r9.u64 | 47688;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8210fa7c
	if (ctx.cr6.gt) goto loc_8210FA7C;
	// beq cr6,0x8210fa38
	if (ctx.cr6.eq) goto loc_8210FA38;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8210f9f4
	if (ctx.cr6.eq) goto loc_8210F9F4;
	// lis r10,16106
	ctx.r10.s64 = 1055522816;
	// ori r10,r10,57389
	ctx.r10.u64 = ctx.r10.u64 | 57389;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8210fa84
	if (!ctx.cr6.eq) goto loc_8210FA84;
	// lis r3,-23018
	ctx.r3.s64 = -1508507648;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,13586
	ctx.r3.u64 = ctx.r3.u64 | 13586;
	// bl 0x821a13a0
	ctx.lr = 0x8210F9C0;
	sub_821A13A0(ctx, base);
	// lis r3,-3237
	ctx.r3.s64 = -212140032;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,37321
	ctx.r3.u64 = ctx.r3.u64 | 37321;
	// bl 0x821a13a0
	ctx.lr = 0x8210F9D4;
	sub_821A13A0(ctx, base);
	// lis r3,-32667
	ctx.r3.s64 = -2140864512;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,3979
	ctx.r3.u64 = ctx.r3.u64 | 3979;
	// bl 0x821a13a0
	ctx.lr = 0x8210F9E8;
	sub_821A13A0(ctx, base);
	// lis r3,24369
	ctx.r3.s64 = 1597046784;
	// ori r3,r3,12595
	ctx.r3.u64 = ctx.r3.u64 | 12595;
	// b 0x8210fac4
	goto loc_8210FAC4;
loc_8210F9F4:
	// lis r3,-26645
	ctx.r3.s64 = -1746206720;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,11987
	ctx.r3.u64 = ctx.r3.u64 | 11987;
	// bl 0x821a13a0
	ctx.lr = 0x8210FA04;
	sub_821A13A0(ctx, base);
	// lis r3,9372
	ctx.r3.s64 = 614203392;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,187
	ctx.r3.u64 = ctx.r3.u64 | 187;
	// bl 0x821a13a0
	ctx.lr = 0x8210FA18;
	sub_821A13A0(ctx, base);
	// lis r3,-3740
	ctx.r3.s64 = -245104640;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,57409
	ctx.r3.u64 = ctx.r3.u64 | 57409;
	// bl 0x821a13a0
	ctx.lr = 0x8210FA2C;
	sub_821A13A0(ctx, base);
	// lis r3,7193
	ctx.r3.s64 = 471400448;
	// ori r3,r3,1550
	ctx.r3.u64 = ctx.r3.u64 | 1550;
	// b 0x8210fac4
	goto loc_8210FAC4;
loc_8210FA38:
	// lis r3,7811
	ctx.r3.s64 = 511901696;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,63526
	ctx.r3.u64 = ctx.r3.u64 | 63526;
	// bl 0x821a13a0
	ctx.lr = 0x8210FA48;
	sub_821A13A0(ctx, base);
	// lis r3,-21004
	ctx.r3.s64 = -1376518144;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,54862
	ctx.r3.u64 = ctx.r3.u64 | 54862;
	// bl 0x821a13a0
	ctx.lr = 0x8210FA5C;
	sub_821A13A0(ctx, base);
	// lis r3,30732
	ctx.r3.s64 = 2014052352;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,14004
	ctx.r3.u64 = ctx.r3.u64 | 14004;
	// bl 0x821a13a0
	ctx.lr = 0x8210FA70;
	sub_821A13A0(ctx, base);
	// lis r3,-27279
	ctx.r3.s64 = -1787756544;
	// ori r3,r3,53499
	ctx.r3.u64 = ctx.r3.u64 | 53499;
	// b 0x8210fac4
	goto loc_8210FAC4;
loc_8210FA7C:
	// lis r10,-18787
	ctx.r10.s64 = -1231224832;
	// ori r10,r10,25960
	ctx.r10.u64 = ctx.r10.u64 | 25960;
loc_8210FA84:
	// lis r3,11873
	ctx.r3.s64 = 778108928;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,45143
	ctx.r3.u64 = ctx.r3.u64 | 45143;
	// bl 0x821a13a0
	ctx.lr = 0x8210FA94;
	sub_821A13A0(ctx, base);
	// lis r3,31532
	ctx.r3.s64 = 2066481152;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,5260
	ctx.r3.u64 = ctx.r3.u64 | 5260;
	// bl 0x821a13a0
	ctx.lr = 0x8210FAA8;
	sub_821A13A0(ctx, base);
	// lis r3,2066
	ctx.r3.s64 = 135397376;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r3,r3,35534
	ctx.r3.u64 = ctx.r3.u64 | 35534;
	// bl 0x821a13a0
	ctx.lr = 0x8210FABC;
	sub_821A13A0(ctx, base);
	// lis r3,-10426
	ctx.r3.s64 = -683278336;
	// ori r3,r3,46198
	ctx.r3.u64 = ctx.r3.u64 | 46198;
loc_8210FAC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f28,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x821a13a0
	ctx.lr = 0x8210FAD0;
	sub_821A13A0(ctx, base);
	// lis r11,22907
	ctx.r11.s64 = 1501233152;
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r11,r11,21325
	ctx.r11.u64 = ctx.r11.u64 | 21325;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8210faec
	if (!ctx.cr6.eq) goto loc_8210FAEC;
	// fadds f31,f28,f27
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// b 0x8210fb28
	goto loc_8210FB28;
loc_8210FAEC:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8210fb14
	if (!ctx.cr6.eq) goto loc_8210FB14;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x8210fb04
	if (!ctx.cr6.eq) goto loc_8210FB04;
	// fadds f31,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// b 0x8210fb28
	goto loc_8210FB28;
loc_8210FB04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,30464(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 30464));
	// fmadds f31,f26,f0,f27
	ctx.f31.f64 = double(float(std::fma(ctx.f26.f64, ctx.f0.f64, ctx.f27.f64)));
	// b 0x8210fb28
	goto loc_8210FB28;
loc_8210FB14:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8210fb24
	if (!ctx.cr6.eq) goto loc_8210FB24;
	// fadds f31,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// b 0x8210fb28
	goto loc_8210FB28;
loc_8210FB24:
	// fadds f31,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
loc_8210FB28:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142968
	ctx.lr = 0x8210FB38;
	sub_82142968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fb44
	if (ctx.cr6.eq) goto loc_8210FB44;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_8210FB44:
	// lis r11,-11197
	ctx.r11.s64 = -733806592;
	// ori r10,r11,41660
	ctx.r10.u64 = ctx.r11.u64 | 41660;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8210fc48
	if (ctx.cr6.eq) goto loc_8210FC48;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8210fb68
	if (!ctx.cr6.eq) goto loc_8210FB68;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// beq cr6,0x8210fc48
	if (ctx.cr6.eq) goto loc_8210FC48;
loc_8210FB68:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8210fbc0
	if (ctx.cr6.eq) goto loc_8210FBC0;
	// lis r10,-27781
	ctx.r10.s64 = -1820655616;
	// ori r10,r10,45421
	ctx.r10.u64 = ctx.r10.u64 | 45421;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8210fbac
	if (ctx.cr6.eq) goto loc_8210FBAC;
	// lis r10,-21919
	ctx.r10.s64 = -1436483584;
	// lis r3,-30906
	ctx.r3.s64 = -2025455616;
	// ori r10,r10,27418
	ctx.r10.u64 = ctx.r10.u64 | 27418;
	// ori r3,r3,17841
	ctx.r3.u64 = ctx.r3.u64 | 17841;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bl 0x821a13a0
	ctx.lr = 0x8210FB9C;
	sub_821A13A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4284(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4284));
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8210fbf4
	goto loc_8210FBF4;
loc_8210FBAC:
	// lis r3,2327
	ctx.r3.s64 = 152502272;
	// ori r3,r3,47298
	ctx.r3.u64 = ctx.r3.u64 | 47298;
	// bl 0x821a13a0
	ctx.lr = 0x8210FBB8;
	sub_821A13A0(ctx, base);
	// fadds f13,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// b 0x8210fbe8
	goto loc_8210FBE8;
loc_8210FBC0:
	// lis r3,2327
	ctx.r3.s64 = 152502272;
	// lis r31,-30906
	ctx.r31.s64 = -2025455616;
	// ori r3,r3,47298
	ctx.r3.u64 = ctx.r3.u64 | 47298;
	// ori r31,r31,17841
	ctx.r31.u64 = ctx.r31.u64 | 17841;
	// bl 0x821a13a0
	ctx.lr = 0x8210FBD4;
	sub_821A13A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821a13a0
	ctx.lr = 0x8210FBE4;
	sub_821A13A0(ctx, base);
	// fadds f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
loc_8210FBE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4284(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4284));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8210FBF4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142968
	ctx.lr = 0x8210FC04;
	sub_82142968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fc10
	if (ctx.cr6.eq) goto loc_8210FC10;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_8210FC10:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,28676
	ctx.r10.u64 = ctx.r11.u64 | 28676;
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r11,4480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4480);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210fc44
	if (ctx.cr6.eq) goto loc_8210FC44;
loc_8210FC2C:
	REX_LOOP_BARRIER();
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8210fc44
	if (ctx.cr6.eq) goto loc_8210FC44;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210fc2c
	if (!ctx.cr6.eq) goto loc_8210FC2C;
loc_8210FC44:
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8210FC48:
	// fcmpu cr6,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// ble cr6,0x8210fc6c
	if (!ctx.cr6.gt) goto loc_8210FC6C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142968
	ctx.lr = 0x8210FC60;
	sub_82142968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fc6c
	if (ctx.cr6.eq) goto loc_8210FC6C;
	// stfs f25,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_8210FC6C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f4,f23
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f23.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x8210f200
	ctx.lr = 0x8210FC94;
	sub_8210F200(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8248f92c
	ctx.lr = 0x8210FCA4;
	__restfpr_22(ctx, base);
	// b 0x8248f02c
	__restgprlr_21(ctx, base);
	return;
loc_8210FCA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8248f92c
	ctx.lr = 0x8210FCB8;
	__restfpr_22(ctx, base);
	// b 0x8248f02c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82141358) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x82141360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821414a0
	if (ctx.cr6.eq) goto loc_821414A0;
	// lis r28,-32068
	ctx.r28.s64 = -2101608448;
loc_82141384:
	REX_LOOP_BARRIER();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,12(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82141484
	if (!ctx.cr6.eq) goto loc_82141484;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82141484
	if (ctx.cr6.eq) goto loc_82141484;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82141494
	if (!ctx.cr6.eq) goto loc_82141494;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x82141494
	if (!ctx.cr6.eq) goto loc_82141494;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4480(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4480);
	// rlwinm r11,r9,2,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821413e4
	if (ctx.cr6.eq) goto loc_821413E4;
loc_821413CC:
	REX_LOOP_BARRIER();
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821413e4
	if (ctx.cr6.eq) goto loc_821413E4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821413cc
	if (!ctx.cr6.eq) goto loc_821413CC;
loc_821413E4:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141438
	if (ctx.cr6.eq) goto loc_82141438;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82141404
	if (ctx.cr6.eq) goto loc_82141404;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x82141438
	if (!ctx.cr6.eq) goto loc_82141438;
loc_82141404:
	REX_LOOP_BARRIER();
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,4480(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4480);
	// rlwinm r11,r9,2,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141434
	if (ctx.cr6.eq) goto loc_82141434;
loc_8214141C:
	REX_LOOP_BARRIER();
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82141460
	if (ctx.cr6.eq) goto loc_82141460;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214141c
	if (!ctx.cr6.eq) goto loc_8214141C;
loc_82141434:
	REX_LOOP_BARRIER();
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82141438:
	REX_LOOP_BARRIER();
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82141494
	if (!ctx.cr6.eq) goto loc_82141494;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82141358
	ctx.lr = 0x8214145C;
	sub_82141358(ctx, base);
	// b 0x82141494
	goto loc_82141494;
loc_82141460:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141434
	if (ctx.cr6.eq) goto loc_82141434;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x8214147c
	if (ctx.cr6.eq) goto loc_8214147C;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x82141438
	if (!ctx.cr6.eq) goto loc_82141438;
loc_8214147C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82141404
	goto loc_82141404;
loc_82141484:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82141494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82141494:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82141384
	if (!ctx.cr6.eq) goto loc_82141384;
loc_821414A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214A420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x8214A428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822058e8
	ctx.lr = 0x8214A440;
	sub_822058E8(ctx, base);
	// mulli r11,r29,156
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(156));
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x821467f0
	ctx.lr = 0x8214A454;
	sub_821467F0(ctx, base);
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214CCF0) {
	REX_FUNC_PROLOGUE();
	// b 0x822d6258
	sub_822D6258(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214CE60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// stw r3,18992(r11)
	REX_STORE_U32(ctx.r11.u32 + 18992, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214D290) {
	REX_FUNC_PROLOGUE();
	// b 0x822d6af0
	sub_822D6AF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214D4B0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214D770) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r10,18992(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18992);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8214d788
	if (!ctx.cr6.gt) goto loc_8214D788;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8214D788:
	// stw r10,18992(r11)
	REX_STORE_U32(ctx.r11.u32 + 18992, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214EE28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r11,-28376
	ctx.r11.s64 = ctx.r11.s64 + -28376;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r31,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r31.u32);
	// stw r31,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
	// beq cr6,0x8214ee84
	if (ctx.cr6.eq) goto loc_8214EE84;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x8214EE84;
	sub_8213DA18(ctx, base);
loc_8214EE84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821525A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821527C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-28148
	ctx.r11.s64 = ctx.r11.s64 + -28148;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r3,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r3.u32);
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821543D0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stb r10,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821547F0) {
	REX_FUNC_PROLOGUE();
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82154808
	if (!ctx.cr6.eq) goto loc_82154808;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82154808:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82155A30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,23256
	ctx.r10.s64 = ctx.r11.s64 + 23256;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r9,23268(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 23268);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155a88
	if (ctx.cr6.eq) goto loc_82155A88;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82155a70
	if (ctx.cr6.lt) goto loc_82155A70;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x82155a74
	if (ctx.cr6.lt) goto loc_82155A74;
loc_82155A70:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82155A74:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82155a88
	if (ctx.cr6.eq) goto loc_82155A88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8214fd08
	sub_8214FD08(ctx, base);
	return;
loc_82155A88:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 ^ 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82155acc
	if (ctx.cr6.eq) goto loc_82155ACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82155ab8
	if (ctx.cr6.lt) goto loc_82155AB8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82155abc
	if (ctx.cr6.lt) goto loc_82155ABC;
loc_82155AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82155ABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155acc
	if (ctx.cr6.eq) goto loc_82155ACC;
	// b 0x8214fd08
	sub_8214FD08(ctx, base);
	return;
loc_82155ACC:
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// b 0x8213da18
	sub_8213DA18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215A488) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215A7D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a828
	if (ctx.cr6.eq) goto loc_8215A828;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x8215a828
	if (!ctx.cr0.eq) goto loc_8215A828;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a820
	if (ctx.cr6.eq) goto loc_8215A820;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215A820:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8215A828:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821609E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x821609E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x8213f388
	ctx.lr = 0x82160A1C;
	sub_8213F388(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// beq cr6,0x82160a78
	if (ctx.cr6.eq) goto loc_82160A78;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r4,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r11,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r10,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r9,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r9.u32);
loc_82160A78:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82160a90
	if (!ctx.cr6.eq) goto loc_82160A90;
	// stw r5,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r5.u32);
	// stw r5,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r5.u32);
	// b 0x82160ae0
	goto loc_82160AE0;
loc_82160A90:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82160ad0
	if (!ctx.cr6.eq) goto loc_82160AD0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82160ab8
	if (!ctx.cr6.eq) goto loc_82160AB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82160ad0
	if (!ctx.cr6.lt) goto loc_82160AD0;
loc_82160AB8:
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82160ae4
	if (!ctx.cr6.eq) goto loc_82160AE4;
	// stw r5,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r5.u32);
	// b 0x82160ae4
	goto loc_82160AE4;
loc_82160AD0:
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82160ae4
	if (!ctx.cr6.eq) goto loc_82160AE4;
loc_82160AE0:
	// stw r5,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r5.u32);
loc_82160AE4:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82160d68
	if (ctx.cr6.eq) goto loc_82160D68;
loc_82160AF8:
	REX_LOOP_BARRIER();
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82160d68
	if (!ctx.cr6.eq) goto loc_82160D68;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82160c40
	if (!ctx.cr6.eq) goto loc_82160C40;
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82160b54
	if (ctx.cr6.eq) goto loc_82160B54;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82160b54
	if (!ctx.cr6.eq) goto loc_82160B54;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82160d5c
	goto loc_82160D5C;
loc_82160B54:
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82160bc0
	if (!ctx.cr6.eq) goto loc_82160BC0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82160b80
	if (ctx.cr6.eq) goto loc_82160B80;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82160B80:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82160b9c
	if (!ctx.cr6.eq) goto loc_82160B9C;
	// stw r10,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// b 0x82160bb8
	goto loc_82160BB8;
loc_82160B9C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82160bb4
	if (!ctx.cr6.eq) goto loc_82160BB4;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82160bb8
	goto loc_82160BB8;
loc_82160BB4:
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
loc_82160BB8:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82160BC0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82160bf8
	if (ctx.cr6.eq) goto loc_82160BF8;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82160BF8:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82160c18
	if (!ctx.cr6.eq) goto loc_82160C18;
	// stw r9,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82160d58
	goto loc_82160D58;
loc_82160C18:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,12(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82160c34
	if (!ctx.cr6.eq) goto loc_82160C34;
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82160d58
	goto loc_82160D58;
loc_82160C34:
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82160d58
	goto loc_82160D58;
loc_82160C40:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82160c78
	if (ctx.cr6.eq) goto loc_82160C78;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82160c78
	if (!ctx.cr6.eq) goto loc_82160C78;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82160d5c
	goto loc_82160D5C;
loc_82160C78:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82160ce4
	if (!ctx.cr6.eq) goto loc_82160CE4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82160ca4
	if (ctx.cr6.eq) goto loc_82160CA4;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82160CA4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82160cc0
	if (!ctx.cr6.eq) goto loc_82160CC0;
	// stw r10,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// b 0x82160cdc
	goto loc_82160CDC;
loc_82160CC0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82160cd8
	if (!ctx.cr6.eq) goto loc_82160CD8;
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82160cdc
	goto loc_82160CDC;
loc_82160CD8:
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82160CDC:
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82160CE4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82160d1c
	if (ctx.cr6.eq) goto loc_82160D1C;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82160D1C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82160d38
	if (!ctx.cr6.eq) goto loc_82160D38;
	// stw r9,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// b 0x82160d54
	goto loc_82160D54;
loc_82160D38:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82160d50
	if (!ctx.cr6.eq) goto loc_82160D50;
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// b 0x82160d54
	goto loc_82160D54;
loc_82160D50:
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
loc_82160D54:
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_82160D58:
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82160D5C:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82160af8
	if (!ctx.cr6.eq) goto loc_82160AF8;
loc_82160D68:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r5,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217E9D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,28(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// bl 0x8217e7d8
	ctx.lr = 0x8217E9E4;
	sub_8217E7D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217FF90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// subf r9,r11,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r11.u64;
loc_8217FFAC:
	REX_LOOP_BARRIER();
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8217ffac
	if (!ctx.cr6.eq) goto loc_8217FFAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fc040
	ctx.lr = 0x8217FFC8;
	sub_821FC040(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28384
	ctx.r4.s64 = ctx.r11.s64 + -28384;
	// bl 0x82491588
	ctx.lr = 0x8217FFD8;
	sub_82491588(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ffe8
	if (ctx.cr6.eq) goto loc_8217FFE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_8217FFE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82183738) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efec
	ctx.lr = 0x82183740;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,-26128(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -26128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821838c4
	if (ctx.cr6.eq) goto loc_821838C4;
	// bl 0x821819c0
	ctx.lr = 0x8218375C;
	sub_821819C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821838c4
	if (ctx.cr6.eq) goto loc_821838C4;
	// lwz r29,144(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r26,4(r29)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821837c0
	if (!ctx.cr6.gt) goto loc_821837C0;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
loc_82183788:
	REX_LOOP_BARRIER();
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822610d0
	ctx.lr = 0x82183794;
	sub_822610D0(ctx, base);
	// lbz r11,298(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 298);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821837b0
	if (ctx.cr6.eq) goto loc_821837B0;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821837b0
	if (!ctx.cr6.eq) goto loc_821837B0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821837B0:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82183788
	if (ctx.cr6.lt) goto loc_82183788;
loc_821837C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821837d4
	if (!ctx.cr6.eq) goto loc_821837D4;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x821838c4
	if (ctx.cr6.eq) goto loc_821838C4;
loc_821837D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821838c4
	if (ctx.cr6.eq) goto loc_821838C4;
	// lwz r10,128(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821838c4
	if (ctx.cr6.eq) goto loc_821838C4;
	// lis r3,-7624
	ctx.r3.s64 = -499646464;
	// ori r3,r3,49469
	ctx.r3.u64 = ctx.r3.u64 | 49469;
	// bl 0x82174f00
	ctx.lr = 0x821837F4;
	sub_82174F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821838b4
	if (ctx.cr6.eq) goto loc_821838B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x820d0af0
	ctx.lr = 0x8218380C;
	sub_820D0AF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82183820
	if (ctx.cr6.eq) goto loc_82183820;
	// bl 0x821412e8
	ctx.lr = 0x82183818;
	sub_821412E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82183824
	goto loc_82183824;
loc_82183820:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82183824:
	// lwz r11,136(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82183844
	if (ctx.cr6.eq) goto loc_82183844;
	// lis r4,25954
	ctx.r4.s64 = 1700921344;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r4,r4,39941
	ctx.r4.u64 = ctx.r4.u64 | 39941;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821449b8
	ctx.lr = 0x82183844;
	sub_821449B8(ctx, base);
loc_82183844:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8218386c
	if (ctx.cr6.eq) goto loc_8218386C;
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218386c
	if (ctx.cr6.eq) goto loc_8218386C;
	// lis r4,3656
	ctx.r4.s64 = 239599616;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r4,r4,50761
	ctx.r4.u64 = ctx.r4.u64 | 50761;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821449b8
	ctx.lr = 0x8218386C;
	sub_821449B8(ctx, base);
loc_8218386C:
	// lis r3,-7624
	ctx.r3.s64 = -499646464;
	// stb r25,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stb r25,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ori r3,r3,49469
	ctx.r3.u64 = ctx.r3.u64 | 49469;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821775d0
	ctx.lr = 0x8218389C;
	sub_821775D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821838b4
	if (ctx.cr6.eq) goto loc_821838B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821424d0
	ctx.lr = 0x821838AC;
	sub_821424D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0ba0
	ctx.lr = 0x821838B4;
	sub_820D0BA0(ctx, base);
loc_821838B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,128(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 128);
	// bl 0x82180798
	ctx.lr = 0x821838C0;
	sub_82180798(ctx, base);
	// bl 0x82182830
	ctx.lr = 0x821838C4;
	sub_82182830(ctx, base);
loc_821838C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82194BC8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82195E00) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,24104
	ctx.r12.s64 = ctx.r12.s64 + 24104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82195E98;
	case 1:
		goto loc_82195E98;
	case 2:
		goto loc_82195E9C;
	case 3:
		goto loc_82195E9C;
	case 4:
		goto loc_82195E9C;
	case 5:
		goto loc_82195E9C;
	case 6:
		goto loc_82195E9C;
	case 7:
		goto loc_82195E9C;
	case 8:
		goto loc_82195E9C;
	case 9:
		goto loc_82195E98;
	case 10:
		goto loc_82195E9C;
	case 11:
		goto loc_82195E9C;
	case 12:
		goto loc_82195E9C;
	case 13:
		goto loc_82195E9C;
	case 14:
		goto loc_82195E9C;
	case 15:
		goto loc_82195E9C;
	case 16:
		goto loc_82195E9C;
	case 17:
		goto loc_82195E9C;
	case 18:
		goto loc_82195E98;
	case 19:
		goto loc_82195E98;
	case 20:
		goto loc_82195E9C;
	case 21:
		goto loc_82195E9C;
	case 22:
		goto loc_82195E9C;
	case 23:
		goto loc_82195E9C;
	case 24:
		goto loc_82195E9C;
	case 25:
		goto loc_82195E9C;
	case 26:
		goto loc_82195E9C;
	case 27:
		goto loc_82195E98;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82195E98:
	// b 0x82195990
	sub_82195990(ctx, base);
	return;
loc_82195E9C:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219BBB8) {
	REX_FUNC_PROLOGUE();
	// li r5,4688
	ctx.r5.s64 = 4688;
	// b 0x82135748
	sub_82135748(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219BCB0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219BDE0) {
	REX_FUNC_PROLOGUE();
	// lis r3,-24459
	ctx.r3.s64 = -1602945024;
	// ori r3,r3,32908
	ctx.r3.u64 = ctx.r3.u64 | 32908;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219C518) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-19480
	ctx.r10.s64 = ctx.r11.s64 + -19480;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4692(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4692);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	REX_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,4692(r11)
	REX_STORE_U32(ctx.r11.u32 + 4692, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219DCA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x8219DCB0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r28,r30,2080
	ctx.r28.s64 = ctx.r30.s64 + 2080;
	// addi r27,r29,2080
	ctx.r27.s64 = ctx.r29.s64 + 2080;
	// addi r31,r30,4160
	ctx.r31.s64 = ctx.r30.s64 + 4160;
	// addi r26,r29,4160
	ctx.r26.s64 = ctx.r29.s64 + 4160;
	// bl 0x82333ac0
	ctx.lr = 0x8219DCE0;
	sub_82333AC0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8219dde4
	if (!ctx.cr6.gt) goto loc_8219DDE4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,5328(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 5328));
	// lfs f10,4180(r11)
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
loc_8219DD00:
	REX_LOOP_BARRIER();
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfsx f0,r8,r26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r8.u32 + ctx.r26.u32));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfsx f13,r8,r31
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r8.u32 + ctx.r31.u32));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x8219dd30
	if (!ctx.cr6.eq) goto loc_8219DD30;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// beq cr6,0x8219ddd4
	if (ctx.cr6.eq) goto loc_8219DDD4;
loc_8219DD30:
	// fsubs f9,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// vspltisw v13,-1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// vslw v9,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_sllv_epi32(a, shift));
	}
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v12,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmsum4fp128 v8,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vcmpgtfp v8,v0,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsel v10,v0,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vxor v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vsubfp v12,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v12,v13,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vrsqrtefp v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v12.f32))));
	// vcmpeqfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vsel v0,v13,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v13,r11,r27
	ea = (ctx.r11.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfsx f12,r8,r31
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// ble cr6,0x8219ddd4
	if (!ctx.cr6.gt) goto loc_8219DDD4;
	// stfsx f11,r8,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
loc_8219DDD4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8219dd00
	if (ctx.cr6.lt) goto loc_8219DD00;
loc_8219DDE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B1840) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821b1078
	ctx.lr = 0x821B1864;
	sub_821B1078(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b1878
	if (ctx.cr6.eq) goto loc_821B1878;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1630
	ctx.lr = 0x821B1878;
	sub_821B1630(ctx, base);
loc_821B1878:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B4E90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// b 0x8213da18
	sub_8213DA18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B5588) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B5988) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B5C20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B60F8) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B6908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 0));
	// li r10,32
	ctx.r10.s64 = 32;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// lfs f0,4(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 4));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 8));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 12));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 16));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lvx128 v0,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BA6A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f3298
	ctx.lr = 0x821BA6B8;
	sub_821F3298(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-14667
	ctx.r10.s64 = -961216512;
	// addi r11,r11,-17376
	ctx.r11.s64 = ctx.r11.s64 + -17376;
	// ori r10,r10,28941
	ctx.r10.u64 = ctx.r10.u64 | 28941;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE2B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x821BE2B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// ori r27,r10,43691
	ctx.r27.u64 = ctx.r10.u64 | 43691;
	// lwz r11,1168(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821be2e0
	if (!ctx.cr6.eq) goto loc_821BE2E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821be2f8
	goto loc_821BE2F8;
loc_821BE2E0:
	// lwz r10,1176(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 1176);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulhw r10,r10,r27
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_821BE2F8:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x821be460
	if (!ctx.cr6.lt) goto loc_821BE460;
	// lwz r29,1172(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 1172);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821be3dc
	if (ctx.cr6.eq) goto loc_821BE3DC;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// subf r30,r11,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r11.u64;
loc_821BE318:
	REX_LOOP_BARRIER();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821be3c8
	if (ctx.cr6.eq) goto loc_821BE3C8;
	// lwz r10,-8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stwx r11,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821be3c8
	if (ctx.cr6.eq) goto loc_821BE3C8;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_821BE350:
	REX_LOOP_BARRIER();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r8,r10,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x821be384
	if (!ctx.cr6.eq) goto loc_821BE384;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// b 0x821be388
	goto loc_821BE388;
loc_821BE384:
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
loc_821BE388:
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x821be3b0
	if (ctx.cr6.eq) goto loc_821BE3B0;
	// ld r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_821BE3B0:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821be350
	if (!ctx.cr6.eq) goto loc_821BE350;
loc_821BE3C8:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821be318
	if (!ctx.cr6.eq) goto loc_821BE318;
loc_821BE3DC:
	// lwz r31,1168(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 1168);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821be3f0
	if (!ctx.cr6.eq) goto loc_821BE3F0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x821be408
	goto loc_821BE408;
loc_821BE3F0:
	// lwz r11,1172(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1172);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// mulhw r11,r11,r27
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821BE408:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821be434
	if (ctx.cr6.eq) goto loc_821BE434;
	// lwz r29,1172(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 1172);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821be434
	if (ctx.cr6.eq) goto loc_821BE434;
loc_821BE41C:
	REX_LOOP_BARRIER();
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bceb8
	ctx.lr = 0x821BE428;
	sub_821BCEB8(ctx, base);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821be41c
	if (!ctx.cr6.eq) goto loc_821BE41C;
loc_821BE434:
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,1168(r28)
	REX_STORE_U32(ctx.r28.u32 + 1168, ctx.r28.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,1176(r28)
	REX_STORE_U32(ctx.r28.u32 + 1176, ctx.r10.u32);
	// stw r11,1172(r28)
	REX_STORE_U32(ctx.r28.u32 + 1172, ctx.r11.u32);
loc_821BE460:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CF620) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,136(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 136));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CF920) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CFB18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82143080
	ctx.lr = 0x821CFB40;
	sub_82143080(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cfb54
	if (ctx.cr6.eq) goto loc_821CFB54;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 80));
	// bl 0x8233e8d0
	ctx.lr = 0x821CFB54;
	sub_8233E8D0(ctx, base);
loc_821CFB54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D2D40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,26598
	ctx.r4.s64 = 1743126528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,34202
	ctx.r4.u64 = ctx.r4.u64 | 34202;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143018
	ctx.lr = 0x821D2D74;
	sub_82143018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2d98
	if (ctx.cr6.eq) goto loc_821D2D98;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,18936(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 18936);
	// bl 0x82146378
	ctx.lr = 0x821D2D90;
	sub_82146378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821d2dc0
	goto loc_821D2DC0;
loc_821D2D98:
	// lis r4,-19699
	ctx.r4.s64 = -1290993664;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,39269
	ctx.r4.u64 = ctx.r4.u64 | 39269;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143018
	ctx.lr = 0x821D2DB0;
	sub_82143018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2dc8
	if (ctx.cr6.eq) goto loc_821D2DC8;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821D2DC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2bc0
	ctx.lr = 0x821D2DC8;
	sub_821D2BC0(ctx, base);
loc_821D2DC8:
	// lis r4,-17999
	ctx.r4.s64 = -1179582464;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,58294
	ctx.r4.u64 = ctx.r4.u64 | 58294;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143218
	ctx.lr = 0x821D2DE0;
	sub_82143218(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2e20
	if (ctx.cr6.eq) goto loc_821D2E20;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r11,-13812(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -13812);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821d2e08
	if (ctx.cr6.eq) goto loc_821D2E08;
	// lis r4,-4211
	ctx.r4.s64 = -275972096;
	// ori r4,r4,1438
	ctx.r4.u64 = ctx.r4.u64 | 1438;
	// b 0x821d2e10
	goto loc_821D2E10;
loc_821D2E08:
	// lis r4,-2399
	ctx.r4.s64 = -157220864;
	// ori r4,r4,31168
	ctx.r4.u64 = ctx.r4.u64 | 31168;
loc_821D2E10:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r31,2628
	ctx.r5.s64 = ctx.r31.s64 + 2628;
	// bl 0x82143608
	ctx.lr = 0x821D2E20;
	sub_82143608(ctx, base);
loc_821D2E20:
	// lis r4,-7666
	ctx.r4.s64 = -502398976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,21701
	ctx.r4.u64 = ctx.r4.u64 | 21701;
	// bl 0x82141bd0
	ctx.lr = 0x821D2E30;
	sub_82141BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,1320(r31)
	REX_STORE_U8(ctx.r31.u32 + 1320, ctx.r11.u8);
	// stb r11,2612(r31)
	REX_STORE_U8(ctx.r31.u32 + 2612, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9540) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9910) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d9958
	if (!ctx.cr6.eq) goto loc_821D9958;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r3,-26392(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x821D9948;
	__imp__KeTlsGetValue(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r31,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8258c9d8
	ctx.lr = 0x821D9958;
	sub_8258C9D8(ctx, base);
loc_821D9958:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DC088) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// andi. r11,r11,39
	ctx.r11.u64 = ctx.r11.u64 & 39;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DCC28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dcc3c
	if (!ctx.cr6.eq) goto loc_821DCC3C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82173210
	sub_82173210(ctx, base);
	return;
loc_821DCC3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821E0258) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x821E0260;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,300(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 300);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8225bce8
	ctx.lr = 0x821E0280;
	sub_8225BCE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821e0368
	if (ctx.cr6.eq) goto loc_821E0368;
	// lis r4,-6055
	ctx.r4.s64 = -396820480;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,38864
	ctx.r4.u64 = ctx.r4.u64 | 38864;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82143018
	ctx.lr = 0x821E02A4;
	sub_82143018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e02c0
	if (ctx.cr6.eq) goto loc_821E02C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821e02f0
	goto loc_821E02F0;
loc_821E02C0:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x821e02f0
	if (!ctx.cr6.gt) goto loc_821E02F0;
	// lis r4,-28511
	ctx.r4.s64 = -1868496896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,50474
	ctx.r4.u64 = ctx.r4.u64 | 50474;
	// bl 0x82141bd0
	ctx.lr = 0x821E02D8;
	sub_82141BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e02f0
	if (ctx.cr6.eq) goto loc_821E02F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140ed0
	ctx.lr = 0x821E02EC;
	sub_82140ED0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_821E02F0:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,300(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 300);
	// bl 0x8225bde8
	ctx.lr = 0x821E02FC;
	sub_8225BDE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8225b568
	ctx.lr = 0x821E030C;
	sub_8225B568(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b450
	ctx.lr = 0x821E0318;
	sub_8225B450(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bl 0x821dfe78
	ctx.lr = 0x821E0340;
	sub_821DFE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0360
	if (ctx.cr6.eq) goto loc_821E0360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821dc7f8
	ctx.lr = 0x821E0358;
	sub_821DC7F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
loc_821E0360:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
loc_821E0368:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E98D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x821E98D8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,5328(r11)
	ctx.f30.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,-13639
	ctx.r4.s64 = -893845504;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f31,4180(r11)
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r4,r4,16520
	ctx.r4.u64 = ctx.r4.u64 | 16520;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r11,r11,28560
	ctx.r11.s64 = ctx.r11.s64 + 28560;
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// bl 0x82143608
	ctx.lr = 0x821E9974;
	sub_82143608(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8232c560
	ctx.lr = 0x821E9980;
	sub_8232C560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e80c8
	ctx.lr = 0x821E9990;
	sub_821E80C8(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bl 0x8232c560
	ctx.lr = 0x821E99B0;
	sub_8232C560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8288
	ctx.lr = 0x821E99C0;
	sub_821E8288(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x8232c560
	ctx.lr = 0x821E99EC;
	sub_8232C560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e81a8
	ctx.lr = 0x821E99FC;
	sub_821E81A8(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lfs f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 184));
	// lfs f12,164(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 164));
	// or r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfs f11,144(r1)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 144));
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821e9af0
	if (!ctx.cr6.gt) goto loc_821E9AF0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f12,148(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 148));
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lfs f13,160(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 160));
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,152(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 152));
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lfs f13,176(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 176));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16176
	ctx.r11.s64 = ctx.r11.s64 + -16176;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lfs f12,168(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 168));
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,180(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 180));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,4284(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4284));
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v12,v10,4,3
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvlx v10,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vrlimi128 v12,v11,3,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 78), 3));
	// vsel v13,v13,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vmulfp128 v12,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vsel v0,v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// b 0x821e9de0
	goto loc_821E9DE0;
loc_821E9AF0:
	// li r8,0
	ctx.r8.s64 = 0;
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x821e9b08
	if (!ctx.cr6.gt) goto loc_821E9B08;
	// li r8,1
	ctx.r8.s64 = 1;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// b 0x821e9b0c
	goto loc_821E9B0C;
loc_821E9B08:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
loc_821E9B0C:
	// ble cr6,0x821e9b14
	if (!ctx.cr6.gt) goto loc_821E9B14;
	// li r8,2
	ctx.r8.s64 = 2;
loc_821E9B14:
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mulhw r11,r10,r11
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulhw r9,r10,r7
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32)) >> 32;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// blt cr6,0x821e9ce0
	if (ctx.cr6.lt) goto loc_821E9CE0;
	// beq cr6,0x821e9c28
	if (ctx.cr6.eq) goto loc_821E9C28;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x821e9de8
	if (!ctx.cr6.lt) goto loc_821E9DE8;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f10,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 176));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,180(r1)
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 180));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r9,r9,-16192
	ctx.r9.s64 = ctx.r9.s64 + -16192;
	// lfsx f0,r10,r8
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r8.u32));
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lfsx f12,r11,r7
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r7.u32));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfsx f12,r11,r6
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r6.u32));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfsx f11,r10,r5
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r5.u32));
	// addi r9,r9,-16272
	ctx.r9.s64 = ctx.r9.s64 + -16272;
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfsx f9,r10,r4
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r4.u32));
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r9,r9,-16208
	ctx.r9.s64 = ctx.r9.s64 + -16208;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r9,r9,-16176
	ctx.r9.s64 = ctx.r9.s64 + -16176;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// lfsx f10,r11,r9
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r9.u32));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,4284(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4284));
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x821e9d98
	goto loc_821E9D98;
loc_821E9C28:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f10,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 168));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,160(r1)
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 160));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r9,r9,-16208
	ctx.r9.s64 = ctx.r9.s64 + -16208;
	// lfsx f0,r11,r8
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r8.u32));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfsx f13,r10,r7
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r7.u32));
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfsx f13,r11,r6
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r6.u32));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfsx f13,r11,r5
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r5.u32));
	// addi r9,r9,-16192
	ctx.r9.s64 = ctx.r9.s64 + -16192;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r9,r9,-16272
	ctx.r9.s64 = ctx.r9.s64 + -16272;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r9,r9,-16176
	ctx.r9.s64 = ctx.r9.s64 + -16176;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// lfsx f11,r10,r9
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r9.u32));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfsx f9,r10,r4
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r4.u32));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f13,4284(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4284));
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x821e9d94
	goto loc_821E9D94;
loc_821E9CE0:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f10,148(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 148));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,152(r1)
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 152));
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r9,r9,-16272
	ctx.r9.s64 = ctx.r9.s64 + -16272;
	// lfsx f13,r11,r8
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r8.u32));
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lfsx f0,r10,r7
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r7.u32));
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f13,r11,r6
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r6.u32));
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfsx f13,r11,r5
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r5.u32));
	// addi r9,r9,-16208
	ctx.r9.s64 = ctx.r9.s64 + -16208;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r9,r9,-16192
	ctx.r9.s64 = ctx.r9.s64 + -16192;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r9,r9,-16176
	ctx.r9.s64 = ctx.r9.s64 + -16176;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfsx f12,r10,r9
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r9.u32));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfsx f9,r10,r4
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r4.u32));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f13,4284(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4284));
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_821E9D94:
	// fmuls f0,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
loc_821E9D98:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,92
	ctx.r27.s64 = ctx.r1.s64 + 92;
	// lvlx v9,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// lvlx v8,0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// lvlx v7,0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// lvlx v6,0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v6,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// vsel v0,v10,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v0,v0,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v0,v0,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// vsel v0,v0,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
loc_821E9DE0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_821E9DE8:
	// lis r4,29836
	ctx.r4.s64 = 1955332096;
	// lwz r3,28(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,41570
	ctx.r4.u64 = ctx.r4.u64 | 41570;
	// bl 0x82144dd8
	ctx.lr = 0x821E9DFC;
	sub_82144DD8(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82225368) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11592
	ctx.r11.s64 = ctx.r11.s64 + -11592;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226288) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lwz r3,23240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822266F0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x82226990;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82226a3c
	if (ctx.cr6.eq) goto loc_82226A3C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822269f8
	if (ctx.cr6.eq) goto loc_822269F8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82226a9c
	if (!ctx.cr6.eq) goto loc_82226A9C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822269c8
	if (ctx.cr6.eq) goto loc_822269C8;
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_822269C8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226a9c
	if (ctx.cr6.eq) goto loc_82226A9C;
loc_822269D4:
	REX_LOOP_BARRIER();
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82226988
	ctx.lr = 0x822269DC;
	sub_82226988(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822269d4
	if (ctx.cr6.lt) goto loc_822269D4;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
loc_822269F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82226a0c
	if (ctx.cr6.eq) goto loc_82226A0C;
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_82226A0C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226a9c
	if (ctx.cr6.eq) goto loc_82226A9C;
loc_82226A18:
	REX_LOOP_BARRIER();
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82144f80
	ctx.lr = 0x82226A20;
	sub_82144F80(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82226a18
	if (ctx.cr6.lt) goto loc_82226A18;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
loc_82226A3C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82226a50
	if (ctx.cr6.eq) goto loc_82226A50;
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_82226A50:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226a94
	if (ctx.cr6.eq) goto loc_82226A94;
loc_82226A5C:
	REX_LOOP_BARRIER();
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821fdc00
	ctx.lr = 0x82226A6C;
	sub_821FDC00(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822c8d40
	ctx.lr = 0x82226A74;
	sub_822C8D40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c8bf0
	ctx.lr = 0x82226A7C;
	sub_822C8BF0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82226a5c
	if (ctx.cr6.lt) goto loc_82226A5C;
loc_82226A94:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
loc_82226A9C:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222F3D8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222F400) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222F9E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82142f38
	ctx.lr = 0x8222FA00;
	sub_82142F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fa1c
	if (ctx.cr6.eq) goto loc_8222FA1C;
	// li r5,500
	ctx.r5.s64 = 500;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821fdc30
	ctx.lr = 0x8222FA1C;
	sub_821FDC30(ctx, base);
loc_8222FA1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82231AD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,32387
	ctx.r4.s64 = 2122514432;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r4,12040
	ctx.r4.u64 = ctx.r4.u64 | 12040;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82143080
	ctx.lr = 0x82231B10;
	sub_82143080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 80));
	// bl 0x822313f8
	ctx.lr = 0x82231B1C;
	sub_822313F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82236848) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,0(r31)
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 0));
	// lfs f31,4180(r11)
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82236880
	if (ctx.cr6.eq) goto loc_82236880;
	// bl 0x8219d2b8
	ctx.lr = 0x82236880;
	sub_8219D2B8(ctx, base);
loc_82236880:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 4));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82236894
	if (ctx.cr6.eq) goto loc_82236894;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210a460
	ctx.lr = 0x82236894;
	sub_8210A460(ctx, base);
loc_82236894:
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 8));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x822368a8
	if (ctx.cr6.eq) goto loc_822368A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219d3c8
	ctx.lr = 0x822368A8;
	sub_8219D3C8(ctx, base);
loc_822368A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82238D30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82238FB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,8
	ctx.r8.s64 = 8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82238fcc
	if (ctx.cr6.eq) goto loc_82238FCC;
	// li r8,2
	ctx.r8.s64 = 2;
loc_82238FCC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8223902c
	if (ctx.cr6.lt) goto loc_8223902C;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82238FEC:
	REX_LOOP_BARRIER();
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -8));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f13,-4(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -4));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,0(r11)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 0));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,4(r11)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82238fec
	if (!ctx.cr6.eq) goto loc_82238FEC;
loc_8223902C:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82239040:
	REX_LOOP_BARRIER();
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 0));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82239040
	if (!ctx.cr6.eq) goto loc_82239040;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223F750) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x8223F758;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r30,r31,428
	ctx.r30.s64 = ctx.r31.s64 + 428;
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223F780:
	REX_LOOP_BARRIER();
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223f780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223F780;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f87c
	if (ctx.cr6.eq) goto loc_8223F87C;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f7bc
	if (ctx.cr6.eq) goto loc_8223F7BC;
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x8223f7c4
	goto loc_8223F7C4;
loc_8223F7BC:
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_8223F7C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f810
	if (ctx.cr6.eq) goto loc_8223F810;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826c80d8
	ctx.lr = 0x8223F7E0;
	sub_826C80D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8223f810
	if (!ctx.cr6.eq) goto loc_8223F810;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82239060
	ctx.lr = 0x8223F7F4;
	sub_82239060(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821365f0
	ctx.lr = 0x8223F804;
	sub_821365F0(ctx, base);
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,432(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// b 0x8223f81c
	goto loc_8223F81C;
loc_8223F810:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223d250
	ctx.lr = 0x8223F81C;
	sub_8223D250(ctx, base);
loc_8223F81C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239060
	ctx.lr = 0x8223F824;
	sub_82239060(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,5328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// beq cr6,0x8223f840
	if (ctx.cr6.eq) goto loc_8223F840;
	// bl 0x82239060
	ctx.lr = 0x8223F838;
	sub_82239060(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238fb8
	ctx.lr = 0x8223F840;
	sub_82238FB8(ctx, base);
loc_8223F840:
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f860
	if (ctx.cr6.eq) goto loc_8223F860;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 12));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// beq cr6,0x8223f860
	if (ctx.cr6.eq) goto loc_8223F860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238fb8
	ctx.lr = 0x8223F860;
	sub_82238FB8(ctx, base);
loc_8223F860:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,536(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 536));
	// bl 0x82238fb8
	ctx.lr = 0x8223F86C;
	sub_82238FB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
loc_8223F87C:
	// lbz r7,424(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 424);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223f890
	if (ctx.cr6.eq) goto loc_8223F890;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,424(r31)
	REX_STORE_U8(ctx.r31.u32 + 424, ctx.r11.u8);
loc_8223F890:
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f8b8
	if (ctx.cr6.eq) goto loc_8223F8B8;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 12));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5328(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8223f8b8
	if (ctx.cr6.eq) goto loc_8223F8B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238fb8
	ctx.lr = 0x8223F8B8;
	sub_82238FB8(ctx, base);
loc_8223F8B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,536(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 536));
	// bl 0x82238fb8
	ctx.lr = 0x8223F8C4;
	sub_82238FB8(ctx, base);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82248A30) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// beq cr6,0x82248acc
	if (ctx.cr6.eq) goto loc_82248ACC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_82248A50:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82248ab4
	if (!ctx.cr6.eq) goto loc_82248AB4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_82248A60:
	REX_LOOP_BARRIER();
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bge cr6,0x82248ad8
	if (!ctx.cr6.lt) goto loc_82248AD8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82248aa0
	if (!ctx.cr6.eq) goto loc_82248AA0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82248a60
	if (ctx.cr6.eq) goto loc_82248A60;
loc_82248AA0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82248ab4
	if (!ctx.cr6.eq) goto loc_82248AB4;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_82248AB4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82248AB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82248ae0
	if (!ctx.cr6.eq) goto loc_82248AE0;
loc_82248AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82248ACC:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82248a50
	if (ctx.cr6.lt) goto loc_82248A50;
loc_82248AD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82248ab8
	goto loc_82248AB8;
loc_82248AE0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248ac4
	if (ctx.cr6.eq) goto loc_82248AC4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82248afc
	if (ctx.cr6.eq) goto loc_82248AFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82248AFC:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224EDA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x8224EDA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8224edfc
	if (ctx.cr6.eq) goto loc_8224EDFC;
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// lis r29,-32089
	ctx.r29.s64 = -2102984704;
loc_8224EDC0:
	REX_LOOP_BARRIER();
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r30,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8224edec
	if (ctx.cr6.eq) goto loc_8224EDEC;
loc_8224EDD4:
	REX_LOOP_BARRIER();
	// lwz r31,4(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-14240(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x8224EDE0;
	sub_8213DA18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8224edd4
	if (!ctx.cr6.eq) goto loc_8224EDD4;
loc_8224EDEC:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8224edc0
	if (!ctx.cr6.eq) goto loc_8224EDC0;
loc_8224EDFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822525F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
loc_82252614:
	REX_LOOP_BARRIER();
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r6,r8,r9
	ctx.r6.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// subf r10,r6,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r6.u64;
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82252614
	if (!ctx.cr6.eq) goto loc_82252614;
	// lwz r4,224(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// rlwinm r6,r10,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x82252278
	sub_82252278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822551F0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82255268) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x82256278;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// lwz r27,0(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8213f388
	ctx.lr = 0x822562A8;
	sub_8213F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822562c4
	if (ctx.cr6.eq) goto loc_822562C4;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_822562C4:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225B2F8) {
	REX_FUNC_PROLOGUE();
	// lwz r8,240(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8225b334
	if (!ctx.cr6.gt) goto loc_8225B334;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8225B314:
	REX_LOOP_BARRIER();
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8225b344
	if (ctx.cr6.eq) goto loc_8225B344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8225b314
	if (ctx.cr6.lt) goto loc_8225B314;
loc_8225B334:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_8225B344:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8225b1c0
	sub_8225B1C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225CE80) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225D178) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225D2A0) {
	REX_FUNC_PROLOGUE();
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// ori r9,r9,43691
	ctx.r9.u64 = ctx.r9.u64 | 43691;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// sth r10,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82261040) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221e438
	ctx.lr = 0x8226105C;
	sub_8221E438(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822610bc
	if (!ctx.cr6.gt) goto loc_822610BC;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r8,128
	ctx.r10.s64 = ctx.r8.s64 + 128;
loc_8226107C:
	REX_LOOP_BARRIER();
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822610ac
	if (ctx.cr6.eq) goto loc_822610AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8226107c
	if (ctx.cr6.lt) goto loc_8226107C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822610AC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_822610BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82266310) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x82266318;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82143608
	ctx.lr = 0x8226633C;
	sub_82143608(ctx, base);
	// lis r4,28721
	ctx.r4.s64 = 1882259456;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// ori r4,r4,61708
	ctx.r4.u64 = ctx.r4.u64 | 61708;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143218
	ctx.lr = 0x82266358;
	sub_82143218(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821750f0
	ctx.lr = 0x82266368;
	sub_821750F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822686F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82268288
	ctx.lr = 0x82268718;
	sub_82268288(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226A508) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5952
	ctx.r11.s64 = ctx.r11.s64 + -5952;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,19024(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19024);
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8226a568
	if (ctx.cr6.eq) goto loc_8226A568;
	// bl 0x826042f8
	ctx.lr = 0x8226A548;
	sub_826042F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a568
	if (ctx.cr6.eq) goto loc_8226A568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ef448
	ctx.lr = 0x8226A568;
	sub_825EF448(ctx, base);
loc_8226A568:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a578
	if (ctx.cr6.eq) goto loc_8226A578;
	// bl 0x826042f8
	ctx.lr = 0x8226A578;
	sub_826042F8(ctx, base);
loc_8226A578:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a598
	if (ctx.cr6.eq) goto loc_8226A598;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226A598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226A598:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226E5C0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// beq cr6,0x8226e64c
	if (ctx.cr6.eq) goto loc_8226E64C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8226E5E0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226e644
	if (!ctx.cr6.eq) goto loc_8226E644;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_8226E5F0:
	REX_LOOP_BARRIER();
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bge cr6,0x8226e658
	if (!ctx.cr6.lt) goto loc_8226E658;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8226e630
	if (!ctx.cr6.eq) goto loc_8226E630;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8226e5f0
	if (ctx.cr6.eq) goto loc_8226E5F0;
loc_8226E630:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226e644
	if (!ctx.cr6.eq) goto loc_8226E644;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8226E644:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8226E64C:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8226e5e0
	if (ctx.cr6.lt) goto loc_8226E5E0;
loc_8226E658:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82271D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821430e8
	ctx.lr = 0x82271D2C;
	sub_821430E8(ctx, base);
	// lis r4,29475
	ctx.r4.s64 = 1931673600;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 80));
	// ori r4,r4,59772
	ctx.r4.u64 = ctx.r4.u64 | 59772;
	// bl 0x82144910
	ctx.lr = 0x82271D40;
	sub_82144910(ctx, base);
	// lis r4,1060
	ctx.r4.s64 = 69468160;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 84));
	// ori r4,r4,55786
	ctx.r4.u64 = ctx.r4.u64 | 55786;
	// bl 0x82144910
	ctx.lr = 0x82271D54;
	sub_82144910(ctx, base);
	// lis r4,-25299
	ctx.r4.s64 = -1657995264;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 88));
	// ori r4,r4,34896
	ctx.r4.u64 = ctx.r4.u64 | 34896;
	// bl 0x82144910
	ctx.lr = 0x82271D68;
	sub_82144910(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82275980) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,-11997
	ctx.r4.s64 = -786235392;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,18342
	ctx.r4.u64 = ctx.r4.u64 | 18342;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82143018
	ctx.lr = 0x822759B4;
	sub_82143018(ctx, base);
	// lis r4,-23004
	ctx.r4.s64 = -1507590144;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,30512
	ctx.r4.u64 = ctx.r4.u64 | 30512;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143018
	ctx.lr = 0x822759CC;
	sub_82143018(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8214ce90
	ctx.lr = 0x822759D8;
	sub_8214CE90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82277B48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822773b8
	ctx.lr = 0x82277B60;
	sub_822773B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82277b98
	if (ctx.cr6.eq) goto loc_82277B98;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x822b7f70
	ctx.lr = 0x82277B70;
	sub_822B7F70(ctx, base);
	// lis r4,6547
	ctx.r4.s64 = 429064192;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// ori r4,r4,51598
	ctx.r4.u64 = ctx.r4.u64 | 51598;
	// bl 0x82144910
	ctx.lr = 0x82277B80;
	sub_82144910(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82277B98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227BA70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efcc
	ctx.lr = 0x8227BA78;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x8248f8ec
	ctx.lr = 0x8227BA80;
	__savefpr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,96(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227bf2c
	if (ctx.cr6.eq) goto loc_8227BF2C;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r19,1
	ctx.r19.s64 = 1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r9,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// slw r8,r19,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r10.u8 & 0x3F));
loc_8227BAB0:
	REX_LOOP_BARRIER();
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// bge cr6,0x8227bf3c
	if (!ctx.cr6.lt) goto loc_8227BF3C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8227baf0
	if (!ctx.cr6.eq) goto loc_8227BAF0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8227bab0
	if (ctx.cr6.eq) goto loc_8227BAB0;
loc_8227BAF0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227bb04
	if (!ctx.cr6.eq) goto loc_8227BB04;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_8227BB04:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8227BB08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227bf2c
	if (ctx.cr6.eq) goto loc_8227BF2C;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227bf2c
	if (ctx.cr6.eq) goto loc_8227BF2C;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227bf2c
	if (ctx.cr6.eq) goto loc_8227BF2C;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r23,r11,-16192
	ctx.r23.s64 = ctx.r11.s64 + -16192;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r22,r11,-16208
	ctx.r22.s64 = ctx.r11.s64 + -16208;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lfs f31,-17920(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r5.u32 + -17920));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r25,r11,-16272
	ctx.r25.s64 = ctx.r11.s64 + -16272;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lfs f29,4180(r6)
	ctx.f29.f64 = double(REX_LOAD_F32(ctx.r6.u32 + 4180));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f25,30236(r7)
	ctx.f25.f64 = double(REX_LOAD_F32(ctx.r7.u32 + 30236));
	// ori r20,r11,65535
	ctx.r20.u64 = ctx.r11.u64 | 65535;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lfs f26,-5340(r8)
	ctx.f26.f64 = double(REX_LOAD_F32(ctx.r8.u32 + -5340));
	// lis r26,-32089
	ctx.r26.s64 = -2102984704;
	// lfs f30,-28072(r9)
	ctx.f30.f64 = double(REX_LOAD_F32(ctx.r9.u32 + -28072));
	// li r21,-1
	ctx.r21.s64 = -1;
	// lfs f27,5328(r10)
	ctx.f27.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 5328));
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_8227BB8C:
	REX_LOOP_BARRIER();
	// lwz r27,52(r4)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227be84
	if (ctx.cr6.eq) goto loc_8227BE84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232ff30
	ctx.lr = 0x8227BBA0;
	sub_8232FF30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8227be84
	if (ctx.cr6.eq) goto loc_8227BE84;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// rlwinm r4,r31,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8227bbbc
	if (!ctx.cr6.gt) goto loc_8227BBBC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8227BBBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-14240(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -14240);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8213f388
	ctx.lr = 0x8227BBCC;
	sub_8213F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8227bbe0
	if (!ctx.cr6.gt) goto loc_8227BBE0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_8227BBE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-14240(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -14240);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8213f388
	ctx.lr = 0x8227BBF0;
	sub_8213F388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232ff80
	ctx.lr = 0x8227BC00;
	sub_8232FF80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232ffa0
	ctx.lr = 0x8227BC0C;
	sub_8232FFA0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8227be60
	if (!ctx.cr6.gt) goto loc_8227BE60;
	// stfs f27,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
loc_8227BC20:
	REX_LOOP_BARRIER();
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r10.u32 + -8));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,-4(r10)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r10.u32 + -4));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f12,0(r10)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 0));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,-1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbz r6,-2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// std r8,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// std r6,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	REX_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stb r5,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f11,136(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f10,144(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r1,88
	ctx.r18.s64 = ctx.r1.s64 + 88;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// stfiwx f0,0,r18
	REX_STORE_U32(ctx.r18.u32, ctx.f0.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r18,88(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r17,r1,92
	ctx.r17.s64 = ctx.r1.s64 + 92;
	// mullw r3,r3,r18
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r18.s32);
	// stfiwx f13,0,r17
	REX_STORE_U32(ctx.r17.u32, ctx.f13.u32);
	// lwz r18,92(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// xor r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r18.u64;
	// clrlwi r3,r3,17
	ctx.r3.u64 = ctx.r3.u32 & 0x7FFF;
	// std r3,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmadds f0,f0,f25,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f25.f64, ctx.f27.f64)));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vrlimi128 v0,v12,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vrlimi128 v0,v13,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// lvx128 v13,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 160));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8227bd50
	if (!ctx.cr6.lt) goto loc_8227BD50;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vsel v0,v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8227BD50:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 160));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8227bd78
	if (!ctx.cr6.gt) goto loc_8227BD78;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vsel v0,v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8227BD78:
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 164));
	// lvx128 v13,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8227bd98
	if (!ctx.cr6.lt) goto loc_8227BD98;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vsel v0,v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8227BD98:
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 164));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8227bdc0
	if (!ctx.cr6.gt) goto loc_8227BDC0;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vsel v0,v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8227BDC0:
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 168));
	// lvx128 v13,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8227bde0
	if (!ctx.cr6.lt) goto loc_8227BDE0;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vsel v0,v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8227BDE0:
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 168));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8227be08
	if (!ctx.cr6.gt) goto loc_8227BE08;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vsel v0,v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8227BE08:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 160));
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lbz r8,127(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 127);
	// lfs f0,164(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 164));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lfs f0,168(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 168));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lbz r8,119(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 119);
	// stb r8,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lbz r8,111(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 111);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne cr6,0x8227bc20
	if (!ctx.cr6.eq) goto loc_8227BC20;
loc_8227BE60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82330048
	ctx.lr = 0x8227BE6C;
	sub_82330048(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-14240(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x8227BE78;
	sub_8213DA18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-14240(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x8227BE84;
	sub_8213DA18(ctx, base);
loc_8227BE84:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// slw r8,r19,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r10.u8 & 0x3F));
	// beq cr6,0x8227bf44
	if (ctx.cr6.eq) goto loc_8227BF44;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_8227BEA0:
	REX_LOOP_BARRIER();
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227bf04
	if (!ctx.cr6.eq) goto loc_8227BF04;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
loc_8227BEB0:
	REX_LOOP_BARRIER();
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// bge cr6,0x8227bf50
	if (!ctx.cr6.lt) goto loc_8227BF50;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8227bef0
	if (!ctx.cr6.eq) goto loc_8227BEF0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8227beb0
	if (ctx.cr6.eq) goto loc_8227BEB0;
loc_8227BEF0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227bf04
	if (!ctx.cr6.eq) goto loc_8227BF04;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_8227BF04:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8227BF08:
	REX_LOOP_BARRIER();
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227bf2c
	if (ctx.cr6.eq) goto loc_8227BF2C;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227bf2c
	if (ctx.cr6.eq) goto loc_8227BF2C;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8227bb8c
	if (!ctx.cr6.eq) goto loc_8227BB8C;
loc_8227BF2C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x8248f938
	ctx.lr = 0x8227BF38;
	__restfpr_25(ctx, base);
	// b 0x8248f01c
	__restgprlr_17(ctx, base);
	return;
loc_8227BF3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8227bb08
	goto loc_8227BB08;
loc_8227BF44:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8227bea0
	if (ctx.cr6.lt) goto loc_8227BEA0;
loc_8227BF50:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8227bf08
	goto loc_8227BF08;
}

DEFINE_REX_FUNC(sub_822B83A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822b83fc
	if (ctx.cr6.eq) goto loc_822B83FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b83d4
	if (ctx.cr6.eq) goto loc_822B83D4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_822B83D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b83e8
	if (ctx.cr6.eq) goto loc_822B83E8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_822B83E8:
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// bl 0x8214d260
	ctx.lr = 0x822B83F0;
	sub_8214D260(ctx, base);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r3,4284(r11)
	REX_STORE_U32(ctx.r11.u32 + 4284, ctx.r3.u32);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
loc_822B83FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BAC38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822bac90
	if (ctx.cr6.eq) goto loc_822BAC90;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stwx r11,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_822BAC90:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BF620) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C0740) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,320(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822c0794
	if (ctx.cr6.eq) goto loc_822C0794;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824acec8
	ctx.lr = 0x822C0770;
	sub_824ACEC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c0794
	if (ctx.cr6.eq) goto loc_822C0794;
	// addi r5,r31,324
	ctx.r5.s64 = ctx.r31.s64 + 324;
	// lwz r6,584(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bfd78
	ctx.lr = 0x822C078C;
	sub_822BFD78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c0798
	goto loc_822C0798;
loc_822C0794:
	// li r3,2
	ctx.r3.s64 = 2;
loc_822C0798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C48B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4B60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1280
	ctx.r11.s64 = ctx.r11.s64 + -1280;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C50B0) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5268) {
	REX_FUNC_PROLOGUE();
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822c5280
	if (!ctx.cr6.eq) goto loc_822C5280;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C5280:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C69E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-944
	ctx.r11.s64 = ctx.r11.s64 + -944;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6C38) {
	REX_FUNC_PROLOGUE();
	// lbz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6F90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32063
	ctx.r31.s64 = -2101280768;
	// lwz r4,12180(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12180);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c6fc4
	if (ctx.cr6.eq) goto loc_822C6FC4;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x822C6FBC;
	sub_8213DA18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12180(r31)
	REX_STORE_U32(ctx.r31.u32 + 12180, ctx.r11.u32);
loc_822C6FC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9048) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,-796
	ctx.r9.s64 = ctx.r10.s64 + -796;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r11,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r11.u32);
	// stw r11,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r11.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r10,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9D00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x824c4c48
	ctx.lr = 0x822C9D10;
	sub_824C4C48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CA3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x822CA3D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r3,-5922
	ctx.r3.s64 = -388104192;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,37972
	ctx.r3.u64 = ctx.r3.u64 | 37972;
	// bl 0x821a22c0
	ctx.lr = 0x822CA3F0;
	sub_821A22C0(ctx, base);
	// lis r29,-32062
	ctx.r29.s64 = -2101215232;
	// lwz r11,24000(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24000);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822ca40c
	if (ctx.cr6.eq) goto loc_822CA40C;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bgt cr6,0x822ca40c
	if (ctx.cr6.gt) goto loc_822CA40C;
#if defined(__SWITCH__)
	// On Switch, to lock 30 FPS fluidly (2 VBlanks / 33.3 ms):
	// Clamp interval to at least 2 so that the highway/notes never accelerate to 60 FPS!
	if (ctx.r3.u32 < 2) {
		ctx.r3.u32 = 2;
	}
#endif
	// stw r3,24000(r29)
	REX_STORE_U32(ctx.r29.u32 + 24000, ctx.r3.u32);
loc_822CA40C:
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r31,r11,-10032
	ctx.r31.s64 = ctx.r11.s64 + -10032;
	// bl 0x8214cf40
	ctx.lr = 0x822CA418;
	sub_8214CF40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822d5490
	ctx.lr = 0x822CA420;
	sub_822D5490(ctx, base);
	// lwz r11,24000(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ca480
	if (ctx.cr6.eq) goto loc_822CA480;
	// bl 0x821728e8
	ctx.lr = 0x822CA430;
	sub_821728E8(ctx, base);
	// lis r31,-32062
	ctx.r31.s64 = -2101215232;
	// lis r30,-32062
	ctx.r30.s64 = -2101215232;
	// ld r11,23992(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 23992);
	// std r3,23984(r30)
	REX_STORE_U64(ctx.r30.u32 + 23984, ctx.r3.u64);
#if defined(__SWITCH__)
	// Intelligent 30 FPS pacing on Switch:
	// If current_vblank (r3) is already at or past target_vblank (r11), the frame is ready.
	// In the original game, (r11 - r3) underflowed unsigned 64-bit when late (e.g. 34 ms),
	// erroneously forcing an extra 33.3 ms sleep and dropping 30 FPS straight to 15 FPS.
	// Here, if r3 >= r11, proceed directly to loc_822CA470 to advance target without extra sleep!
	if (ctx.r3.u64 >= ctx.r11.u64) {
		goto loc_822CA470;
	}
	// Frame finished early: clamp target to at most r3 + 2 (30 FPS cadence)
	// and let loc_822CA45C sleep until target_vblank is reached to keep audio 100% in sync.
	if (ctx.r11.u64 > ctx.r3.u64 + 2) {
		ctx.r11.u64 = ctx.r3.u64 + 2;
		REX_STORE_U64(ctx.r31.u32 + 23992, ctx.r11.u64);
	}
	goto loc_822CA454;
#else
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmpldi cr6,r10,2
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2, ctx.xer);
	// ble cr6,0x822ca454
	if (!ctx.cr6.gt) goto loc_822CA454;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// std r11,23992(r31)
	REX_STORE_U64(ctx.r31.u32 + 23992, ctx.r11.u64);
#endif
loc_822CA454:
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x822ca470
	if (!ctx.cr6.lt) goto loc_822CA470;
loc_822CA45C:
	REX_LOOP_BARRIER();
	// bl 0x821728e8
	ctx.lr = 0x822CA460;
	sub_821728E8(ctx, base);
	// ld r11,23992(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 23992);
	// std r3,23984(r30)
	REX_STORE_U64(ctx.r30.u32 + 23984, ctx.r3.u64);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822ca45c
	if (ctx.cr6.lt) {
#if defined(__SWITCH__)
		RexSwitchSleep(200000);
#endif
		goto loc_822CA45C;
	}
loc_822CA470:
	// lwz r11,24000(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24000);
#if defined(__SWITCH__)
	if (ctx.r11.u32 < 2) {
		ctx.r11.u32 = 2;
	}
#endif
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r11,23992(r31)
	REX_STORE_U64(ctx.r31.u32 + 23992, ctx.r11.u64);
loc_822CA480:
	REX_LOOP_BARRIER();
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822ca480
	if (ctx.cr6.eq) {
#if defined(__SWITCH__)
		RexSwitchSleep(200000);
#endif
		goto loc_822CA480;
	}
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D27C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// b 0x8213da18
	sub_8213DA18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D2AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x822D2AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// beq cr6,0x822d2af8
	if (ctx.cr6.eq) goto loc_822D2AF8;
	// lis r29,-32089
	ctx.r29.s64 = -2102984704;
loc_822D2AE0:
	REX_LOOP_BARRIER();
	// lwz r31,4(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-14240(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x822D2AEC;
	sub_8213DA18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822d2ae0
	if (!ctx.cr6.eq) goto loc_822D2AE0;
loc_822D2AF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D46D8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,1164(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwimi r9,r5,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,1164(r11)
	REX_STORE_U32(ctx.r11.u32 + 1164, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r31,-14240(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e678
	ctx.lr = 0x822D6BFC;
	sub_8213E678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e500
	ctx.lr = 0x822D6C08;
	sub_8213E500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DBB48) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24720(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24720);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DBD20) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r7,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r7.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_822DBD50:
	REX_LOOP_BARRIER();
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dbd88
	if (ctx.cr6.eq) goto loc_822DBD88;
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x822dbd74
	if (!ctx.cr6.gt) goto loc_822DBD74;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_822DBD74:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822dbd50
	if (ctx.cr6.lt) goto loc_822DBD50;
	// blr 
	return;
loc_822DBD88:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E0E48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r4,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// bne cr6,0x822e0f04
	if (!ctx.cr6.eq) goto loc_822E0F04;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// slw r31,r11,r4
	ctx.r31.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822e0e94
	if (ctx.cr6.gt) goto loc_822E0E94;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x822e0e98
	goto loc_822E0E98;
loc_822E0E94:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_822E0E98:
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// bl 0x8213f388
	ctx.lr = 0x822E0EAC;
	sub_8213F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822e0ef4
	if (ctx.cr6.eq) goto loc_822E0EF4;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822e0ee4
	if (ctx.cr6.lt) goto loc_822E0EE4;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_822E0EC8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge cr6,0x822e0ec8
	if (!ctx.cr6.lt) goto loc_822E0EC8;
loc_822E0EE4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,22(r30)
	REX_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x822e0f44
	goto loc_822E0F44;
loc_822E0EF4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,22(r30)
	REX_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x822e0f44
	goto loc_822E0F44;
loc_822E0F04:
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r11,r8,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822e0f3c
	if (ctx.cr6.lt) goto loc_822E0F3C;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
loc_822E0F20:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge cr6,0x822e0f20
	if (!ctx.cr6.lt) goto loc_822E0F20;
loc_822E0F3C:
	// stw r5,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// stb r8,22(r30)
	REX_STORE_U8(ctx.r30.u32 + 22, ctx.r8.u8);
loc_822E0F44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stb r11,20(r30)
	REX_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// stb r11,21(r30)
	REX_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E70B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r5.u32 + 0));
	// lfs f0,0(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 0));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r3)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 0));
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9040) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E90E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,16284
	ctx.r11.s64 = ctx.r11.s64 + 16284;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EA868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efc0
	ctx.lr = 0x822EA870;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA8A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA8BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// sth r30,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// beq cr6,0x822ead8c
	if (ctx.cr6.eq) goto loc_822EAD8C;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// add. r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x822ea8dc
	if (ctx.cr0.gt) goto loc_822EA8DC;
	// subfic r22,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r22.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
loc_822EA8DC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822ea964
	if (!ctx.cr6.eq) goto loc_822EA964;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// clrlwi r10,r15,16
	ctx.r10.u64 = ctx.r15.u32 & 0xFFFF;
	// bge cr6,0x822ea928
	if (!ctx.cr6.lt) goto loc_822EA928;
	// subf r9,r22,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r22.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ea904
	if (ctx.cr6.lt) goto loc_822EA904;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r22,r9,1
	ctx.r22.s64 = ctx.r9.s64 + 1;
loc_822EA904:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r9,r22
	ctx.r10.u64 = ctx.r9.u64 + ctx.r22.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x822ea9e8
	goto loc_822EA9E8;
loc_822EA928:
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ea93c
	if (ctx.cr6.lt) goto loc_822EA93C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r22,r10,-1
	ctx.r22.s64 = ctx.r10.s64 + -1;
loc_822EA93C:
	// subf r10,r22,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r24,r22,16
	ctx.r24.u64 = ctx.r22.u32 & 0xFFFF;
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x822ea9ec
	goto loc_822EA9EC;
loc_822EA964:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// bge cr6,0x822ea9b0
	if (!ctx.cr6.lt) goto loc_822EA9B0;
	// subf r9,r22,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r22.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ea984
	if (ctx.cr6.lt) goto loc_822EA984;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r22,r9,1
	ctx.r22.s64 = ctx.r9.s64 + 1;
loc_822EA984:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r9,r22
	ctx.r10.u64 = ctx.r9.u64 + ctx.r22.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x822ea9f0
	goto loc_822EA9F0;
loc_822EA9B0:
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ea9c4
	if (ctx.cr6.lt) goto loc_822EA9C4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r22,r10,-1
	ctx.r22.s64 = ctx.r10.s64 + -1;
loc_822EA9C4:
	// subf r10,r22,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r23,r22,16
	ctx.r23.u64 = ctx.r22.u32 & 0xFFFF;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
loc_822EA9E8:
	// li r24,0
	ctx.r24.s64 = 0;
loc_822EA9EC:
	// li r26,0
	ctx.r26.s64 = 0;
loc_822EA9F0:
	// lis r19,-32089
	ctx.r19.s64 = -2102984704;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// bl 0x8213e678
	ctx.lr = 0x822EAA00;
	sub_8213E678(ctx, base);
	// lwz r25,-14240(r19)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x822eaa18
	if (!ctx.cr6.eq) goto loc_822EAA18;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822EAA18:
	// bl 0x8213e678
	ctx.lr = 0x822EAA1C;
	sub_8213E678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8213e500
	ctx.lr = 0x822EAA28;
	sub_8213E500(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// mullw r20,r11,r10
	ctx.r20.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// ori r25,r9,65535
	ctx.r25.u64 = ctx.r9.u64 | 65535;
	// li r21,-1
	ctx.r21.s64 = -1;
	// rlwinm r4,r20,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r20,r25
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x822eaa50
	if (!ctx.cr6.gt) goto loc_822EAA50;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822EAA50:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8213f388
	ctx.lr = 0x822EAA60;
	sub_8213F388(ctx, base);
	// clrlwi r17,r28,16
	ctx.r17.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r18,r29,16
	ctx.r18.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mullw r11,r18,r17
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r17.s32);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x822eaa80
	if (!ctx.cr6.gt) goto loc_822EAA80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_822EAA80:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8213f388
	ctx.lr = 0x822EAA90;
	sub_8213F388(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// bl 0x8213e560
	ctx.lr = 0x822EAA9C;
	sub_8213E560(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x822e8b90
	ctx.lr = 0x822EAAB8;
	sub_822E8B90(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822e8338
	ctx.lr = 0x822EAAD8;
	sub_822E8338(ctx, base);
	// clrlwi r25,r14,24
	ctx.r25.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822eab0c
	if (ctx.cr6.eq) goto loc_822EAB0C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x822eab0c
	if (!ctx.cr6.gt) goto loc_822EAB0C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822eab0c
	if (ctx.cr6.eq) goto loc_822EAB0C;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_822EAAFC:
	REX_LOOP_BARRIER();
	// lwz r10,316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822eaafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EAAFC;
loc_822EAB0C:
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822e8258
	ctx.lr = 0x822EAB38;
	sub_822E8258(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r26,276(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e8c90
	ctx.lr = 0x822EAB58;
	sub_822E8C90(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822ead64
	if (!ctx.cr6.eq) goto loc_822EAD64;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822eac70
	if (!ctx.cr6.eq) goto loc_822EAC70;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bgt cr6,0x822eab7c
	if (ctx.cr6.gt) goto loc_822EAB7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EAB7C:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822eab90
	if (!ctx.cr6.eq) goto loc_822EAB90;
	// addi r30,r18,-1
	ctx.r30.s64 = ctx.r18.s64 + -1;
loc_822EAB90:
	// lwz r31,-14240(r19)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e678
	ctx.lr = 0x822EABA0;
	sub_8213E678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e500
	ctx.lr = 0x822EABAC;
	sub_8213E500(ctx, base);
	// lhz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8213f388
	ctx.lr = 0x822EABC8;
	sub_8213F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// bl 0x8213e560
	ctx.lr = 0x822EABD4;
	sub_8213E560(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822eac0c
	if (!ctx.cr6.gt) goto loc_822EAC0C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r8,r18,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822EABF0:
	REX_LOOP_BARRIER();
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x822eabf0
	if (!ctx.cr6.eq) goto loc_822EABF0;
loc_822EAC0C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822eac1c
	if (ctx.cr6.eq) goto loc_822EAC1C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822eac24
	goto loc_822EAC24;
loc_822EAC1C:
	// clrlwi r11,r15,16
	ctx.r11.u64 = ctx.r15.u32 & 0xFFFF;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_822EAC24:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822eac34
	if (ctx.cr6.eq) goto loc_822EAC34;
	// addi r30,r22,-1
	ctx.r30.s64 = ctx.r22.s64 + -1;
	// b 0x822eac3c
	goto loc_822EAC3C;
loc_822EAC34:
	// clrlwi r11,r15,16
	ctx.r11.u64 = ctx.r15.u32 & 0xFFFF;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_822EAC3C:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x822ead58
	if (ctx.cr6.gt) goto loc_822EAD58;
loc_822EAC44:
	REX_LOOP_BARRIER();
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e8c90
	ctx.lr = 0x822EAC60;
	sub_822E8C90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822eac44
	if (!ctx.cr6.gt) goto loc_822EAC44;
	// b 0x822ead58
	goto loc_822EAD58;
loc_822EAC70:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bgt cr6,0x822eac7c
	if (ctx.cr6.gt) goto loc_822EAC7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EAC7C:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822eac90
	if (!ctx.cr6.eq) goto loc_822EAC90;
	// addi r30,r17,-1
	ctx.r30.s64 = ctx.r17.s64 + -1;
loc_822EAC90:
	// lwz r31,-14240(r19)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e678
	ctx.lr = 0x822EACA0;
	sub_8213E678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e500
	ctx.lr = 0x822EACAC;
	sub_8213E500(ctx, base);
	// rlwinm r31,r15,2,14,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3FFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8213f388
	ctx.lr = 0x822EACC4;
	sub_8213F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// bl 0x8213e560
	ctx.lr = 0x822EACD0;
	sub_8213E560(ctx, base);
	// mullw r11,r18,r30
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ble cr6,0x822eacf4
	if (!ctx.cr6.gt) goto loc_822EACF4;
	// bl 0x82135748
	ctx.lr = 0x822EACF0;
	sub_82135748(ctx, base);
	// b 0x822eacf8
	goto loc_822EACF8;
loc_822EACF4:
	// bl 0x8248f390
	ctx.lr = 0x822EACF8;
	sub_8248F390(ctx, base);
loc_822EACF8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ead08
	if (ctx.cr6.eq) goto loc_822EAD08;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822ead10
	goto loc_822EAD10;
loc_822EAD08:
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_822EAD10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822ead20
	if (ctx.cr6.eq) goto loc_822EAD20;
	// addi r30,r22,-1
	ctx.r30.s64 = ctx.r22.s64 + -1;
	// b 0x822ead28
	goto loc_822EAD28;
loc_822EAD20:
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_822EAD28:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x822ead58
	if (ctx.cr6.gt) goto loc_822EAD58;
loc_822EAD30:
	REX_LOOP_BARRIER();
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// clrlwi r6,r31,16
	ctx.r6.u64 = ctx.r31.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e8c90
	ctx.lr = 0x822EAD4C;
	sub_822E8C90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x822ead30
	if (!ctx.cr6.gt) goto loc_822EAD30;
loc_822EAD58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x822EAD64;
	sub_8213DA18(ctx, base);
loc_822EAD64:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x822ead78
	if (ctx.cr6.eq) goto loc_822EAD78;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x822EAD78;
	sub_8213DA18(ctx, base);
loc_822EAD78:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822ead8c
	if (ctx.cr6.eq) goto loc_822EAD8C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,-14240(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x822EAD8C;
	sub_8213DA18(ctx, base);
loc_822EAD8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8248f010
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230F4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subfc r11,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82310228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8215a5c8
	ctx.lr = 0x82310244;
	sub_8215A5C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823110E8) {
	REX_FUNC_PROLOGUE();
	// b 0x82205a18
	sub_82205A18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82311160) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823127A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x823127B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82204d80
	ctx.lr = 0x823127C0;
	sub_82204D80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312ed8
	if (ctx.cr6.eq) goto loc_82312ED8;
	// bl 0x82367c88
	ctx.lr = 0x823127CC;
	sub_82367C88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312ed8
	if (ctx.cr6.eq) goto loc_82312ED8;
	// lis r27,-32089
	ctx.r27.s64 = -2102984704;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r30,-14240(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + -14240);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213e678
	ctx.lr = 0x823127E8;
	sub_8213E678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213e500
	ctx.lr = 0x823127F4;
	sub_8213E500(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823eca18
	ctx.lr = 0x823127FC;
	sub_823ECA18(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,-32676
	ctx.r4.s64 = ctx.r11.s64 + -32676;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82490b10
	ctx.lr = 0x82312810;
	sub_82490B10(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r4,7167
	ctx.r4.s64 = 469696512;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,36875
	ctx.r4.u64 = ctx.r4.u64 | 36875;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82143018
	ctx.lr = 0x82312844;
	sub_82143018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312884
	if (!ctx.cr6.eq) goto loc_82312884;
	// lis r4,-18860
	ctx.r4.s64 = -1236008960;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r4,5352
	ctx.r4.u64 = ctx.r4.u64 | 5352;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312868;
	sub_82143608(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32684
	ctx.r4.s64 = ctx.r11.s64 + -32684;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x82311a00
	ctx.lr = 0x82312880;
	sub_82311A00(ctx, base);
	// b 0x82312894
	goto loc_82312894;
loc_82312884:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32684
	ctx.r4.s64 = ctx.r11.s64 + -32684;
	// bl 0x82311e00
	ctx.lr = 0x82312894;
	sub_82311E00(ctx, base);
loc_82312894:
	// lis r4,28270
	ctx.r4.s64 = 1852702720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,58610
	ctx.r4.u64 = ctx.r4.u64 | 58610;
	// bl 0x82143468
	ctx.lr = 0x823128A4;
	sub_82143468(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-32692
	ctx.r4.s64 = ctx.r11.s64 + -32692;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x823128BC;
	sub_82311F38(ctx, base);
	// lbz r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823128d0
	if (!ctx.cr6.eq) goto loc_823128D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x823128dc
	goto loc_823128DC;
loc_823128D0:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823128DC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,32420
	ctx.r28.s64 = ctx.r11.s64 + 32420;
	// beq cr6,0x82312924
	if (ctx.cr6.eq) goto loc_82312924;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r30,r11,-32700
	ctx.r30.s64 = ctx.r11.s64 + -32700;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82311608
	ctx.lr = 0x82312908;
	sub_82311608(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82312924:
	// lis r4,-11063
	ctx.r4.s64 = -725024768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,34708
	ctx.r4.u64 = ctx.r4.u64 | 34708;
	// bl 0x82143468
	ctx.lr = 0x82312934;
	sub_82143468(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-32708
	ctx.r4.s64 = ctx.r11.s64 + -32708;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x8231294C;
	sub_82311F38(ctx, base);
	// lis r4,-1551
	ctx.r4.s64 = -101646336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,22372
	ctx.r4.u64 = ctx.r4.u64 | 22372;
	// bl 0x820d4de8
	ctx.lr = 0x8231295C;
	sub_820D4DE8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-32732
	ctx.r4.s64 = ctx.r11.s64 + -32732;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312970;
	sub_82311A00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823111b0
	ctx.lr = 0x82312978;
	sub_823111B0(ctx, base);
	// lbz r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231298c
	if (!ctx.cr6.eq) goto loc_8231298C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82312998
	goto loc_82312998;
loc_8231298C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82312998:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-32740
	ctx.r30.s64 = ctx.r11.s64 + -32740;
	// beq cr6,0x823129bc
	if (ctx.cr6.eq) goto loc_823129BC;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311608
	ctx.lr = 0x823129BC;
	sub_82311608(ctx, base);
loc_823129BC:
	// lis r4,26706
	ctx.r4.s64 = 1750204416;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,25928
	ctx.r4.u64 = ctx.r4.u64 | 25928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x823129D4;
	sub_82143608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823129f8
	if (ctx.cr6.eq) goto loc_823129F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,-32760
	ctx.r5.s64 = ctx.r11.s64 + -32760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x823129F8;
	sub_82311F38(ctx, base);
loc_823129F8:
	// lis r4,-24370
	ctx.r4.s64 = -1597112320;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,13929
	ctx.r4.u64 = ctx.r4.u64 | 13929;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312A10;
	sub_82143608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312a34
	if (ctx.cr6.eq) goto loc_82312A34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,32756
	ctx.r5.s64 = ctx.r11.s64 + 32756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312A34;
	sub_82311F38(ctx, base);
loc_82312A34:
	// lis r4,21424
	ctx.r4.s64 = 1404043264;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,35069
	ctx.r4.u64 = ctx.r4.u64 | 35069;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312A4C;
	sub_82143608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312a70
	if (ctx.cr6.eq) goto loc_82312A70;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,32744
	ctx.r5.s64 = ctx.r11.s64 + 32744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312A70;
	sub_82311F38(ctx, base);
loc_82312A70:
	// lis r4,23960
	ctx.r4.s64 = 1570242560;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,1785
	ctx.r4.u64 = ctx.r4.u64 | 1785;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312A88;
	sub_82143608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312aac
	if (ctx.cr6.eq) goto loc_82312AAC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,32736
	ctx.r5.s64 = ctx.r11.s64 + 32736;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312AAC;
	sub_82311F38(ctx, base);
loc_82312AAC:
	// lis r4,-9557
	ctx.r4.s64 = -626327552;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,50483
	ctx.r4.u64 = ctx.r4.u64 | 50483;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312AC4;
	sub_82143608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312ae8
	if (ctx.cr6.eq) goto loc_82312AE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,32724
	ctx.r5.s64 = ctx.r11.s64 + 32724;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312AE8;
	sub_82311F38(ctx, base);
loc_82312AE8:
	// lis r4,4081
	ctx.r4.s64 = 267452416;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,60962
	ctx.r4.u64 = ctx.r4.u64 | 60962;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312B00;
	sub_82143608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312b24
	if (ctx.cr6.eq) goto loc_82312B24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,32708
	ctx.r5.s64 = ctx.r11.s64 + 32708;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312B24;
	sub_82311F38(ctx, base);
loc_82312B24:
	// lis r4,-25921
	ctx.r4.s64 = -1698758656;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,14488
	ctx.r4.u64 = ctx.r4.u64 | 14488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312B3C;
	sub_82143608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312b60
	if (ctx.cr6.eq) goto loc_82312B60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,32692
	ctx.r5.s64 = ctx.r11.s64 + 32692;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312B60;
	sub_82311F38(ctx, base);
loc_82312B60:
	// lbz r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 280);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,280(r1)
	REX_STORE_U8(ctx.r1.u32 + 280, ctx.r11.u8);
	// bne cr6,0x82312b80
	if (!ctx.cr6.eq) goto loc_82312B80;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82312b8c
	goto loc_82312B8C;
loc_82312B80:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82312B8C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82312bcc
	if (ctx.cr6.eq) goto loc_82312BCC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r30,r11,32684
	ctx.r30.s64 = ctx.r11.s64 + 32684;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82311608
	ctx.lr = 0x82312BB0;
	sub_82311608(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82312BCC:
	// lis r4,26137
	ctx.r4.s64 = 1712914432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,2592
	ctx.r4.u64 = ctx.r4.u64 | 2592;
	// bl 0x820d4de8
	ctx.lr = 0x82312BDC;
	sub_820D4DE8(ctx, base);
	// bl 0x82163ae8
	ctx.lr = 0x82312BE0;
	sub_82163AE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32676
	ctx.r4.s64 = ctx.r11.s64 + 32676;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a80
	ctx.lr = 0x82312BF4;
	sub_82311A80(ctx, base);
	// lis r4,17556
	ctx.r4.s64 = 1150550016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,36880
	ctx.r4.u64 = ctx.r4.u64 | 36880;
	// bl 0x82143468
	ctx.lr = 0x82312C04;
	sub_82143468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32664
	ctx.r4.s64 = ctx.r11.s64 + 32664;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312C1C;
	sub_82311F38(ctx, base);
	// lis r4,-18704
	ctx.r4.s64 = -1225785344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,36665
	ctx.r4.u64 = ctx.r4.u64 | 36665;
	// bl 0x82143468
	ctx.lr = 0x82312C2C;
	sub_82143468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312C44;
	sub_82311F38(ctx, base);
	// lis r4,-12954
	ctx.r4.s64 = -848953344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,51374
	ctx.r4.u64 = ctx.r4.u64 | 51374;
	// bl 0x820d4de8
	ctx.lr = 0x82312C54;
	sub_820D4DE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32648
	ctx.r4.s64 = ctx.r11.s64 + 32648;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312C68;
	sub_82311A00(ctx, base);
	// lis r4,-286
	ctx.r4.s64 = -18743296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,16339
	ctx.r4.u64 = ctx.r4.u64 | 16339;
	// bl 0x820d4de8
	ctx.lr = 0x82312C78;
	sub_820D4DE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32640
	ctx.r4.s64 = ctx.r11.s64 + 32640;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312C8C;
	sub_82311A00(ctx, base);
	// lis r4,19469
	ctx.r4.s64 = 1275920384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4889
	ctx.r4.u64 = ctx.r4.u64 | 4889;
	// bl 0x820d4de8
	ctx.lr = 0x82312C9C;
	sub_820D4DE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312CB0;
	sub_82311A00(ctx, base);
	// lis r4,-15023
	ctx.r4.s64 = -984547328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,57404
	ctx.r4.u64 = ctx.r4.u64 | 57404;
	// bl 0x820d4de8
	ctx.lr = 0x82312CC0;
	sub_820D4DE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32612
	ctx.r4.s64 = ctx.r11.s64 + 32612;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312CD4;
	sub_82311A00(ctx, base);
	// lis r4,14319
	ctx.r4.s64 = 938409984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,60784
	ctx.r4.u64 = ctx.r4.u64 | 60784;
	// bl 0x820d4de8
	ctx.lr = 0x82312CE4;
	sub_820D4DE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312CF8;
	sub_82311A00(ctx, base);
	// lis r4,32666
	ctx.r4.s64 = 2140798976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3538
	ctx.r4.u64 = ctx.r4.u64 | 3538;
	// bl 0x820d4de8
	ctx.lr = 0x82312D08;
	sub_820D4DE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,32580
	ctx.r4.s64 = ctx.r11.s64 + 32580;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312D1C;
	sub_82311A00(ctx, base);
	// lis r4,18231
	ctx.r4.s64 = 1194786816;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ori r4,r4,22375
	ctx.r4.u64 = ctx.r4.u64 | 22375;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143608
	ctx.lr = 0x82312D38;
	sub_82143608(ctx, base);
	// lis r11,515
	ctx.r11.s64 = 33751040;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r11,r11,45938
	ctx.r11.u64 = ctx.r11.u64 | 45938;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82312d54
	if (ctx.cr6.eq) goto loc_82312D54;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82312D54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,32572
	ctx.r4.s64 = ctx.r11.s64 + 32572;
	// bl 0x82311fb8
	ctx.lr = 0x82312D64;
	sub_82311FB8(ctx, base);
	// lbz r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312d78
	if (!ctx.cr6.eq) goto loc_82312D78;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82312d84
	goto loc_82312D84;
loc_82312D78:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82312D84:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82312dc4
	if (ctx.cr6.eq) goto loc_82312DC4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r30,r11,32560
	ctx.r30.s64 = ctx.r11.s64 + 32560;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82311608
	ctx.lr = 0x82312DA8;
	sub_82311608(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82312DC4:
	// lis r4,-18912
	ctx.r4.s64 = -1239416832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,38241
	ctx.r4.u64 = ctx.r4.u64 | 38241;
	// bl 0x82143468
	ctx.lr = 0x82312DD4;
	sub_82143468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312DEC;
	sub_82311F38(ctx, base);
	// lis r4,26474
	ctx.r4.s64 = 1735000064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,20596
	ctx.r4.u64 = ctx.r4.u64 | 20596;
	// bl 0x820d4de8
	ctx.lr = 0x82312DFC;
	sub_820D4DE8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311a00
	ctx.lr = 0x82312E10;
	sub_82311A00(ctx, base);
	// lis r4,-16955
	ctx.r4.s64 = -1111162880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,15602
	ctx.r4.u64 = ctx.r4.u64 | 15602;
	// bl 0x82143468
	ctx.lr = 0x82312E20;
	sub_82143468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32536
	ctx.r4.s64 = ctx.r11.s64 + 32536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312E38;
	sub_82311F38(ctx, base);
	// lis r4,-634
	ctx.r4.s64 = -41549824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,38881
	ctx.r4.u64 = ctx.r4.u64 | 38881;
	// bl 0x82143468
	ctx.lr = 0x82312E48;
	sub_82143468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-5384
	ctx.r4.s64 = ctx.r11.s64 + -5384;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312E60;
	sub_82311F38(ctx, base);
	// lis r4,-12803
	ctx.r4.s64 = -839057408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,27134
	ctx.r4.u64 = ctx.r4.u64 | 27134;
	// bl 0x82143468
	ctx.lr = 0x82312E70;
	sub_82143468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311f38
	ctx.lr = 0x82312E88;
	sub_82311F38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823111b0
	ctx.lr = 0x82312E90;
	sub_823111B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823111b0
	ctx.lr = 0x82312E98;
	sub_823111B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82311268
	ctx.lr = 0x82312EA0;
	sub_82311268(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823eba88
	ctx.lr = 0x82312EA8;
	sub_823EBA88(ctx, base);
	// lwz r3,-14240(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + -14240);
	// bl 0x8213e560
	ctx.lr = 0x82312EB0;
	sub_8213E560(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82312618
	ctx.lr = 0x82312EBC;
	sub_82312618(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,32388
	ctx.r11.s64 = ctx.r11.s64 + 32388;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823115b8
	ctx.lr = 0x82312ED0;
	sub_823115B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823eb470
	ctx.lr = 0x82312ED8;
	sub_823EB470(ctx, base);
loc_82312ED8:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234A158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26016
	ctx.r11.s64 = ctx.r11.s64 + -26016;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x821424d0
	ctx.lr = 0x8234A180;
	sub_821424D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5308
	ctx.lr = 0x8234A188;
	sub_821F5308(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234D0D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efc0
	ctx.lr = 0x8234D0D8;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// addi r12,r1,-176
	ctx.r12.s64 = ctx.r1.s64 + -176;
	// bl 0x8249084c
	ctx.lr = 0x8234D0EC;
	__savevmx_123(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lwz r20,8(r30)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r17,596(r1)
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r17.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r19,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r19.u32);
	// stw r18,612(r1)
	REX_STORE_U32(ctx.r1.u32 + 612, ctx.r18.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// stw r20,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// lwz r27,36(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bne cr6,0x8234d628
	if (!ctx.cr6.eq) goto loc_8234D628;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// ble cr6,0x8234d620
	if (!ctx.cr6.gt) goto loc_8234D620;
	// lis r11,-32050
	ctx.r11.s64 = -2100428800;
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// addi r22,r11,23680
	ctx.r22.s64 = ctx.r11.s64 + 23680;
	// subfic r11,r27,-32
	ctx.xer.ca = ctx.r27.u32 <= 4294967264;
	ctx.r11.u64 = static_cast<uint64_t>(-32) - ctx.r27.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r16,r28,32
	ctx.r16.s64 = ctx.r28.s64 + 32;
	// addi r15,r28,48
	ctx.r15.s64 = ctx.r28.s64 + 48;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r14,r28,16
	ctx.r14.s64 = ctx.r28.s64 + 16;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lfs f31,4180(r10)
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 4180));
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// addi r27,r11,-16192
	ctx.r27.s64 = ctx.r11.s64 + -16192;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r17,-32
	ctx.r17.s64 = -32;
	// addi r24,r11,-16272
	ctx.r24.s64 = ctx.r11.s64 + -16272;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r18,-16
	ctx.r18.s64 = -16;
	// addi r23,r11,-16208
	ctx.r23.s64 = ctx.r11.s64 + -16208;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r26,48
	ctx.r26.s64 = 48;
loc_8234D1A8:
	REX_LOOP_BARRIER();
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v12,r31,r17
	ea = (ctx.r31.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r31,r29
	ea = (ctx.r31.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// vmsum3fp128 v10,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v11,r31,r18
	ea = (ctx.r31.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vor v6,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// vor v7,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvx128 v8,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v5,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lwz r20,548(r30)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r30.u32 + 548);
	// stvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lvx128 v3,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stvx128 v10,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// vmsum3fp128 v11,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// lvx128 v10,r11,r25
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v9,r11,r26
	ea = (ctx.r11.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 220));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,240(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 240));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v11,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lfs f0,288(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 288));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v11,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f0,256(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 256));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v4,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vrlimi128 v0,v4,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v4.f32), 57), 4));
	// lvlx v4,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v2,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vrlimi128 v2,v4,4,3
	simde_mm_store_ps(ctx.v2.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v4.f32), 57), 4));
	// lfs f0,164(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 164));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v0,v2,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v2.f32), 78), 3));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvlx v4,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v4,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0xFF));
	// vsel v8,v7,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// stvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvlx v7,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// lfs f0,168(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 168));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vsel v4,v6,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// vmrghw v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// stvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvlx v6,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vor v2,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vspltw v1,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// vmrglw v6,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vor v12,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghw v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vor v8,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmrglw v5,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsel v13,v2,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8))));
	// lvx128 v11,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vor v9,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v3,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// lfs f0,184(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 184));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vsel v12,v12,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vor v10,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vspltw v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vsel v12,v4,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmrglw v9,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vsel v11,v10,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vmrghw v10,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v8,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmsum4fp128 v25,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v25.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmrglw v7,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmsum4fp128 v5,v12,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v6,v12,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v4,v12,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v12,v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v29,v11,v9
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v1,v11,v8
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v30,v11,v7
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v28,v0,v8
	simde_mm_store_ps(ctx.v28.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v26,v0,v7
	simde_mm_store_ps(ctx.v26.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v7,v13,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v9,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v8,v13,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v13,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v31,v11,v10
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v27,v0,v10
	simde_mm_store_ps(ctx.v27.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v3,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// lvx128 v6,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrghw v2,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// lvx128 v4,r0,r14
	ea = (ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v12,r0,r16
	ea = (ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v5,r0,r15
	ea = (ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrghw v0,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v3,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v26.u32), simde_mm_load_si128((simde__m128i*)ctx.v25.u32)));
	// vmrghw v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw v7,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v11,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v31.u32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vmrghw v1,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v29.u32)));
	// vmrghw v13,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v10,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v28.u32), simde_mm_load_si128((simde__m128i*)ctx.v27.u32)));
	// vmrghw v9,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v8,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v12,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v6,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v11,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vmrglw v9,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v8,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrglw v7,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum4fp128 v6,v13,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v5,v0,v10
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmsum4fp128 v4,v12,v10
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v13,v9
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v31,v13,v8
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vmsum4fp128 v13,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// vmsum4fp128 v2,v0,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v30,v0,v7
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v1,v12,v9
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v29,v12,v7
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v7,v11,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v12,v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmrghw v8,v6,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v13,v3,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v6,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v0,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v13,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v5,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmrghw v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v11,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vmrghw v12,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw128 v127,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvx128 v127,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v127.u8)));
	// beq cr6,0x8234d5f4
	if (ctx.cr6.eq) goto loc_8234D5F4;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r4,r11,r19
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// bl 0x8232c6f8
	ctx.lr = 0x8234D4C8;
	sub_8232C6F8(ctx, base);
	// lwz r11,604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lwzx r9,r11,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234d5f4
	if (ctx.cr6.eq) goto loc_8234D5F4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// lfs f0,80(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 80));
	// ble cr6,0x8234d500
	if (!ctx.cr6.gt) goto loc_8234D500;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_8234D500:
	// fadds f12,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x8234d5f4
	if (!ctx.cr6.gt) goto loc_8234D5F4;
	// vsubfp128 v0,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v127.f32)));
	// lwz r11,612(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// vsubfp128 v12,v13,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vaddfp128 v11,v127,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v0,v11,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmsum3fp128 v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmsum3fp128 v10,v0,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 272));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8234d560
	if (ctx.cr6.gt) goto loc_8234D560;
	// vmsum3fp128 v13,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// vor v0,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lfs f0,304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 304));
	// b 0x8234d5b0
	goto loc_8234D5B0;
loc_8234D560:
	// lfs f13,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 224));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8234d584
	if (ctx.cr6.gt) goto loc_8234D584;
	// vsubfp v0,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 144));
	// b 0x8234d5b0
	goto loc_8234D5B0;
loc_8234D584:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp128 v127,v0,v12,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v127.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vsubfp128 v0,v13,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 112));
loc_8234D5B0:
	// fmuls f13,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234d5c4
	if (!ctx.cr6.gt) goto loc_8234D5C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234D5C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d5f4
	if (ctx.cr6.eq) goto loc_8234D5F4;
	// lwz r10,660(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234d5e0
	if (ctx.cr6.eq) goto loc_8234D5E0;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8234D5E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d5f4
	if (ctx.cr6.eq) goto loc_8234D5F4;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r11,r20,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8234D5F4:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 544);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// blt cr6,0x8234d1a8
	if (ctx.cr6.lt) goto loc_8234D1A8;
	// lwz r17,596(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
loc_8234D620:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8234da24
	goto loc_8234DA24;
loc_8234D628:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232c560
	ctx.lr = 0x8234D634;
	sub_8232C560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,32
	ctx.r25.s64 = 32;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r26,48
	ctx.r26.s64 = 48;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// li r29,16
	ctx.r29.s64 = 16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r11,r26
	ea = (ctx.r11.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lvx128 v7,r11,r25
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// vmsum3fp128 v7,v0,v7
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32), 0xEF));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v8,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vmsum3fp128 v6,v0,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v11,r10,r25
	ea = (ctx.r10.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r24,r28,32
	ctx.r24.s64 = ctx.r28.s64 + 32;
	// lvx128 v10,r10,r26
	ea = (ctx.r10.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r23,r28,48
	ctx.r23.s64 = ctx.r28.s64 + 48;
	// lvx128 v12,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmsum3fp128 v0,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 220));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vmrghw v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrglw v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// addi r22,r28,16
	ctx.r22.s64 = ctx.r28.s64 + 16;
	// vmrghw v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// stvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f0,112(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 112));
	// vmrglw v7,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lfs f0,144(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 144));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r11,548(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 548);
	// lfs f0,224(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 224));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v0,v11,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 57), 4));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v10,v11,4,3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 57), 4));
	// lvx128 v11,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// vrlimi128 v0,v10,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 78), 3));
	// vmrglw v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmsum4fp128 v10,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v9,v0,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmrghw v12,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v10,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v13,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrghw v9,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v12,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrghw v8,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v126,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrglw v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v125,r11,r25
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrglw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v124,r11,r26
	ea = (ctx.r11.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// vmrglw v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmsum4fp128 v12,v0,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum4fp128 v10,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw128 v123,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v123.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// bne cr6,0x8234d7e8
	if (!ctx.cr6.eq) goto loc_8234D7E8;
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// addi r11,r11,28624
	ctx.r11.s64 = ctx.r11.s64 + 28624;
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// addi r11,r11,28912
	ctx.r11.s64 = ctx.r11.s64 + 28912;
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// addi r11,r11,28480
	ctx.r11.s64 = ctx.r11.s64 + 28480;
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// addi r11,r11,28560
	ctx.r11.s64 = ctx.r11.s64 + 28560;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// b 0x8234d818
	goto loc_8234D818;
loc_8234D7E8:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8232c6f8
	ctx.lr = 0x8234D800;
	sub_8232C6F8(ctx, base);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v10,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v9,r11,r25
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v0,r11,r26
	ea = (ctx.r11.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
loc_8234D818:
	// vmsum3fp128 v8,v0,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vmsum3fp128 v7,v0,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vmsum3fp128 v6,v0,v11
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmrghw128 v11,v126,v124
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v124.u32), simde_mm_load_si128((simde__m128i*)ctx.v126.u32)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmrglw128 v9,v126,v124
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v124.u32), simde_mm_load_si128((simde__m128i*)ctx.v126.u32)));
	// vmrglw128 v10,v127,v125
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lvx128 v12,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghw128 v0,v127,v125
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 220));
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v13,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lfs f0,112(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 112));
	// vmrglw v8,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vmrghw v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v7,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfs f0,144(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 144));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglw v6,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lfs f0,224(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 224));
	// vmrghw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v7,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// vrlimi128 v0,v7,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 57), 4));
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vrlimi128 v7,v9,4,3
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 57), 4));
	// vrlimi128 v0,v7,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 78), 3));
	// lfs f13,4180(r9)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 4180));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// vmsum4fp128 v10,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v9,v0,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v0,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v11,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v10,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrghw v9,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v11,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmrghw v12,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v11,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v10,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmsum4fp128 v11,v0,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v12,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v10,v0,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmrghw v13,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// beq cr6,0x8234d94c
	if (ctx.cr6.eq) goto loc_8234D94C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 80));
loc_8234D94C:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x8234d958
	if (!ctx.cr6.gt) goto loc_8234D958;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_8234D958:
	// vsubfp128 v0,v0,v123
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v123.f32)));
	// lvx128 v13,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp128 v12,v13,v123
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v123.f32)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fadds f12,f0,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// vaddfp128 v11,v123,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v123.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v0,v11,v123
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v123.f32)));
	// vmsum3fp128 v10,v0,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmsum3fp128 v10,v0,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 112));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8234d9a0
	if (ctx.cr6.gt) goto loc_8234D9A0;
	// vor v0,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmsum3fp128 v13,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// b 0x8234d9d4
	goto loc_8234D9D4;
loc_8234D9A0:
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 144));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8234d9b4
	if (ctx.cr6.gt) goto loc_8234D9B4;
	// vsubfp v0,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// b 0x8234d9d0
	goto loc_8234D9D0;
loc_8234D9B4:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp128 v123,v0,v12,v123
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v123.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v123.f32)));
	// vsubfp128 v0,v13,v123
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v123.f32)));
loc_8234D9D0:
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
loc_8234D9D4:
	// fmuls f13,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,112(r1)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 112));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234d9f4
	if (!ctx.cr6.gt) goto loc_8234D9F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234D9F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234da20
	if (ctx.cr6.eq) goto loc_8234DA20;
	// lwz r10,660(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234da10
	if (ctx.cr6.eq) goto loc_8234DA10;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8234DA10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234da20
	if (ctx.cr6.eq) goto loc_8234DA20;
	// stw r21,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r21.u32);
	// b 0x8234da28
	goto loc_8234DA28;
loc_8234DA20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234DA24:
	// stw r11,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
loc_8234DA28:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-176
	ctx.r12.s64 = ctx.r1.s64 + -176;
	// bl 0x82490ae4
	ctx.lr = 0x8234DA38;
	__restvmx_123(ctx, base);
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8248f010
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E73F8) {
	REX_FUNC_PROLOGUE();
	// b 0x822fe568
	sub_822FE568(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E7420) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E74C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7A50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8215a7d0
	ctx.lr = 0x823E7A70;
	sub_8215A7D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e7a80
	if (ctx.cr0.eq) goto loc_823E7A80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fe568
	ctx.lr = 0x823E7A80;
	sub_822FE568(ctx, base);
loc_823E7A80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E90A4) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x8230f6a0
	ctx.lr = 0x823E90C0;
	sub_8230F6A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E9C58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x823e9c90
	if (ctx.cr6.eq) goto loc_823E9C90;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822fe510
	ctx.lr = 0x823E9C8C;
	sub_822FE510(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_823E9C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EB148) {
	REX_FUNC_PROLOGUE();
	// b 0x822fe568
	sub_822FE568(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EB390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82490b70
	ctx.lr = 0x823EB3A0;
	sub_82490B70(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EBD88) {
	REX_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EC210) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823054d8
	ctx.lr = 0x823EC228;
	sub_823054D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ED0C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// lfs f13,5328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lfs f0,4180(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
loc_823ED100:
	REX_LOOP_BARRIER();
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// stfs f13,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// addi r5,r1,-28
	ctx.r5.s64 = ctx.r1.s64 + -28;
	// addi r4,r1,-24
	ctx.r4.s64 = ctx.r1.s64 + -24;
	// addi r31,r1,-20
	ctx.r31.s64 = ctx.r1.s64 + -20;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lvlx v0,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v13,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v0,v12,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// sth r8,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// sth r8,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r10,41(r11)
	REX_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r10,42(r11)
	REX_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stb r10,43(r11)
	REX_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bge cr6,0x823ed100
	if (!ctx.cr6.lt) goto loc_823ED100;
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F8CF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F8D98) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F9BA0) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F9CA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FACA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 0));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,0(r4)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 0));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823facc0
	if (!ctx.cr6.gt) goto loc_823FACC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823FACC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fad28
	if (ctx.cr6.eq) goto loc_823FAD28;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 4));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r4)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 4));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823facec
	if (!ctx.cr6.gt) goto loc_823FACEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823FACEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fad28
	if (ctx.cr6.eq) goto loc_823FAD28;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 8));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r4)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 8));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823fad18
	if (!ctx.cr6.gt) goto loc_823FAD18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823FAD18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823fad2c
	if (!ctx.cr6.eq) goto loc_823FAD2C;
loc_823FAD28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823FAD2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82401360) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82401530) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824024D0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82402648) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82402740) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x82402748;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,-24751
	ctx.r4.s64 = -1622081536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,35061
	ctx.r4.u64 = ctx.r4.u64 | 35061;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f03f8
	ctx.lr = 0x82402774;
	sub_821F03F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r4,20860
	ctx.r4.s64 = 1367080960;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,35336
	ctx.r4.u64 = ctx.r4.u64 | 35336;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823f3c00
	ctx.lr = 0x82402798;
	sub_823F3C00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r4,13827
	ctx.r4.s64 = 906166272;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,51178
	ctx.r4.u64 = ctx.r4.u64 | 51178;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,5328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823f3c00
	ctx.lr = 0x824027BC;
	sub_823F3C00(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r4,14696
	ctx.r4.s64 = 963117056;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,1774
	ctx.r4.u64 = ctx.r4.u64 | 1774;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x823fc960
	ctx.lr = 0x824027DC;
	sub_823FC960(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 84));
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f1,88(r1)
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 88));
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x824352a0
	ctx.lr = 0x824027F8;
	sub_824352A0(ctx, base);
	// lis r4,32414
	ctx.r4.s64 = 2124283904;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r4,6392
	ctx.r4.u64 = ctx.r4.u64 | 6392;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f03f8
	ctx.lr = 0x82402810;
	sub_821F03F8(ctx, base);
	// lis r4,-14022
	ctx.r4.s64 = -918945792;
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ori r4,r4,48333
	ctx.r4.u64 = ctx.r4.u64 | 48333;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3c00
	ctx.lr = 0x8240282C;
	sub_823F3C00(ctx, base);
	// lis r4,-20923
	ctx.r4.s64 = -1371209728;
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ori r4,r4,61743
	ctx.r4.u64 = ctx.r4.u64 | 61743;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3c00
	ctx.lr = 0x82402848;
	sub_823F3C00(ctx, base);
	// lis r4,-1952
	ctx.r4.s64 = -127926272;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// ori r4,r4,5029
	ctx.r4.u64 = ctx.r4.u64 | 5029;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fc960
	ctx.lr = 0x82402864;
	sub_823FC960(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 96));
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f1,100(r1)
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 100));
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x824352a0
	ctx.lr = 0x82402880;
	sub_824352A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82408F90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215ba40
	ctx.lr = 0x82408FA8;
	sub_8215BA40(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823ebe28
	ctx.lr = 0x82408FB0;
	sub_823EBE28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82408fc8
	if (ctx.cr6.eq) goto loc_82408FC8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82408ff0
	if (ctx.cr6.eq) goto loc_82408FF0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82408fd8
	if (!ctx.cr6.eq) goto loc_82408FD8;
loc_82408FC8:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823ebd60
	ctx.lr = 0x82408FD0;
	sub_823EBD60(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82408FD8:
	// bl 0x8215a2a0
	ctx.lr = 0x82408FDC;
	sub_8215A2A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82408FF0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82409008
	if (!ctx.cr6.eq) goto loc_82409008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82408c30
	ctx.lr = 0x82409004;
	sub_82408C30(ctx, base);
	// b 0x82408fd8
	goto loc_82408FD8;
loc_82409008:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82408fd8
	if (!ctx.cr6.eq) goto loc_82408FD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82408dc0
	ctx.lr = 0x82409018;
	sub_82408DC0(ctx, base);
	// b 0x82408fd8
	goto loc_82408FD8;
}

DEFINE_REX_FUNC(sub_8240B310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x8240B318;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r28,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x82306190
	ctx.lr = 0x8240B340;
	sub_82306190(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stb r28,80(r31)
	REX_STORE_U8(ctx.r31.u32 + 80, ctx.r28.u8);
	// bl 0x823065e0
	ctx.lr = 0x8240B350;
	sub_823065E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82305ef8
	ctx.lr = 0x8240B360;
	sub_82305EF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823ec020
	ctx.lr = 0x8240B370;
	sub_823EC020(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lfs f1,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// bl 0x82410a40
	ctx.lr = 0x8240B390;
	sub_82410A40(ctx, base);
	// lwz r29,84(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// stw r3,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823054d8
	ctx.lr = 0x8240B3A0;
	sub_823054D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240DC70) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240DEC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82305568
	ctx.lr = 0x8240DED8;
	sub_82305568(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240EEA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
loc_8240EEB4:
	REX_LOOP_BARRIER();
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// blt cr6,0x8240eeb4
	if (ctx.cr6.lt) goto loc_8240EEB4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8240ed10
	ctx.lr = 0x8240EED8;
	sub_8240ED10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82410C30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efec
	ctx.lr = 0x82410C38;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824104c0
	ctx.lr = 0x82410C58;
	sub_824104C0(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82410d40
	if (ctx.cr0.eq) goto loc_82410D40;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// std r11,96(r31)
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// bl 0x823670c8
	ctx.lr = 0x82410C78;
	sub_823670C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82410d00
	if (ctx.cr0.eq) goto loc_82410D00;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq 0x82410c9c
	if (ctx.cr0.eq) goto loc_82410C9C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82410C9C:
	// ld r30,96(r31)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r31.u32 + 96);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ebf60
	ctx.lr = 0x82410CB0;
	sub_823EBF60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ld r25,32(r29)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r29.u32 + 32);
	// li r6,106
	ctx.r6.s64 = 106;
	// addi r7,r11,22368
	ctx.r7.s64 = ctx.r11.s64 + 22368;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r5,r11,17536
	ctx.r5.s64 = ctx.r11.s64 + 17536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,17448
	ctx.r4.s64 = ctx.r11.s64 + 17448;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,17396
	ctx.r29.s64 = ctx.r11.s64 + 17396;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,17372
	ctx.r28.s64 = ctx.r11.s64 + 17372;
	// bl 0x8236a118
	ctx.lr = 0x82410CE8;
	sub_8236A118(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8236a370
	ctx.lr = 0x82410CFC;
	sub_8236A370(ctx, base);
	// b 0x82410d40
	goto loc_82410D40;
loc_82410D00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,110
	ctx.r6.s64 = 110;
	// addi r7,r11,-12364
	ctx.r7.s64 = ctx.r11.s64 + -12364;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r5,r11,17536
	ctx.r5.s64 = ctx.r11.s64 + 17536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,17448
	ctx.r4.s64 = ctx.r11.s64 + 17448;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,17336
	ctx.r30.s64 = ctx.r11.s64 + 17336;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,17372
	ctx.r29.s64 = ctx.r11.s64 + 17372;
	// bl 0x8236a118
	ctx.lr = 0x82410D34;
	sub_8236A118(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8236a370
	ctx.lr = 0x82410D40;
	sub_8236A370(ctx, base);
loc_82410D40:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82410740
	ctx.lr = 0x82410D54;
	sub_82410740(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8215a528
	ctx.lr = 0x82410D5C;
	sub_8215A528(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824171B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824171f8
	if (!ctx.cr6.eq) goto loc_824171F8;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r3,-26392(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x824171E8;
	__imp__KeTlsGetValue(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r31,1,1,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x7FFFFFFE;
	// bl 0x8258c9d8
	ctx.lr = 0x824171F8;
	sub_8258C9D8(ctx, base);
loc_824171F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241CAF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x8241CB00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,-2487
	ctx.r4.s64 = -162988032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,54839
	ctx.r4.u64 = ctx.r4.u64 | 54839;
	// lbz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 112);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82144888
	ctx.lr = 0x8241CB2C;
	sub_82144888(ctx, base);
	// lis r4,-10795
	ctx.r4.s64 = -707461120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 28));
	// ori r4,r4,21111
	ctx.r4.u64 = ctx.r4.u64 | 21111;
	// bl 0x82144910
	ctx.lr = 0x8241CB40;
	sub_82144910(ctx, base);
	// lis r4,9865
	ctx.r4.s64 = 646512640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 24));
	// ori r4,r4,10524
	ctx.r4.u64 = ctx.r4.u64 | 10524;
	// bl 0x82144910
	ctx.lr = 0x8241CB54;
	sub_82144910(ctx, base);
	// lis r4,23730
	ctx.r4.s64 = 1555169280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 32));
	// ori r4,r4,50679
	ctx.r4.u64 = ctx.r4.u64 | 50679;
	// bl 0x82144910
	ctx.lr = 0x8241CB68;
	sub_82144910(ctx, base);
	// lis r4,10730
	ctx.r4.s64 = 703201280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 36));
	// ori r4,r4,42001
	ctx.r4.u64 = ctx.r4.u64 | 42001;
	// bl 0x82144910
	ctx.lr = 0x8241CB7C;
	sub_82144910(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x820e2090
	ctx.lr = 0x8241CB88;
	sub_820E2090(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241cb9c
	if (ctx.cr6.eq) goto loc_8241CB9C;
	// bl 0x822266f8
	ctx.lr = 0x8241CB94;
	sub_822266F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8241cba0
	goto loc_8241CBA0;
loc_8241CB9C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8241CBA0:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x820e2090
	ctx.lr = 0x8241CBAC;
	sub_820E2090(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241cbc0
	if (ctx.cr6.eq) goto loc_8241CBC0;
	// bl 0x822266f8
	ctx.lr = 0x8241CBB8;
	sub_822266F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8241cbc4
	goto loc_8241CBC4;
loc_8241CBC0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8241CBC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x820e2090
	ctx.lr = 0x8241CBD0;
	sub_820E2090(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241cbe4
	if (ctx.cr6.eq) goto loc_8241CBE4;
	// bl 0x822266f8
	ctx.lr = 0x8241CBDC;
	sub_822266F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8241cbe8
	goto loc_8241CBE8;
loc_8241CBE4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8241CBE8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822267b0
	ctx.lr = 0x8241CBF8;
	sub_822267B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822267b0
	ctx.lr = 0x8241CC08;
	sub_822267B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822267b0
	ctx.lr = 0x8241CC18;
	sub_822267B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 48));
	// bl 0x82226c78
	ctx.lr = 0x8241CC28;
	sub_82226C78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 52));
	// bl 0x82226c78
	ctx.lr = 0x8241CC38;
	sub_82226C78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 56));
	// bl 0x82226c78
	ctx.lr = 0x8241CC48;
	sub_82226C78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 64));
	// bl 0x82226c78
	ctx.lr = 0x8241CC58;
	sub_82226C78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 68));
	// bl 0x82226c78
	ctx.lr = 0x8241CC68;
	sub_82226C78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 72));
	// bl 0x82226c78
	ctx.lr = 0x8241CC78;
	sub_82226C78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 80));
	// bl 0x82226c78
	ctx.lr = 0x8241CC88;
	sub_82226C78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 84));
	// bl 0x82226c78
	ctx.lr = 0x8241CC98;
	sub_82226C78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 88));
	// bl 0x82226c78
	ctx.lr = 0x8241CCA8;
	sub_82226C78(ctx, base);
	// lis r4,5231
	ctx.r4.s64 = 342818816;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,49280
	ctx.r4.u64 = ctx.r4.u64 | 49280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821456b8
	ctx.lr = 0x8241CCBC;
	sub_821456B8(ctx, base);
	// lis r4,20916
	ctx.r4.s64 = 1370750976;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,52017
	ctx.r4.u64 = ctx.r4.u64 | 52017;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821456b8
	ctx.lr = 0x8241CCD0;
	sub_821456B8(ctx, base);
	// lis r4,30648
	ctx.r4.s64 = 2008547328;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,44009
	ctx.r4.u64 = ctx.r4.u64 | 44009;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821456b8
	ctx.lr = 0x8241CCE4;
	sub_821456B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,-28565
	ctx.r4.s64 = -1872035840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,26554
	ctx.r4.u64 = ctx.r4.u64 | 26554;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82144910
	ctx.lr = 0x8241CD08;
	sub_82144910(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242D7B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242DA80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x8242DA88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8242dab8
	goto loc_8242DAB8;
loc_8242DA94:
	REX_LOOP_BARRIER();
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r29,4(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// beq 0x8242dab4
	if (ctx.cr0.eq) goto loc_8242DAB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215a758
	ctx.lr = 0x8242DAAC;
	sub_8215A758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fe568
	ctx.lr = 0x8242DAB4;
	sub_822FE568(ctx, base);
loc_8242DAB4:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8242DAB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242da94
	if (!ctx.cr6.eq) goto loc_8242DA94;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242E780) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242EC28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242F300) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8215a758
	ctx.lr = 0x8242F318;
	sub_8215A758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242FE88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8242fad0
	ctx.lr = 0x8242FEA4;
	sub_8242FAD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82430AB4) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8242f218
	ctx.lr = 0x82430ACC;
	sub_8242F218(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243156C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,296
	ctx.r3.s64 = ctx.r11.s64 + 296;
	// bl 0x8242e670
	ctx.lr = 0x82431588;
	sub_8242E670(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82432B2C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8244d968
	ctx.lr = 0x82432B44;
	sub_8244D968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824335D8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_824335E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824335f8
	if (ctx.cr6.eq) goto loc_824335F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_824335F8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x824335e8
	if (!ctx.cr0.eq) goto loc_824335E8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82434430) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82406ce0
	ctx.lr = 0x82434458;
	sub_82406CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8215b410
	ctx.lr = 0x82434464;
	sub_8215B410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824358E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,452(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// lis r4,7225
	ctx.r4.s64 = 473497600;
	// ori r4,r4,31932
	ctx.r4.u64 = ctx.r4.u64 | 31932;
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x821449b8
	ctx.lr = 0x82435904;
	sub_821449B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824365A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824365dc
	if (!ctx.cr6.eq) goto loc_824365DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824364e8
	ctx.lr = 0x824365DC;
	sub_824364E8(ctx, base);
loc_824365DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8243660c
	if (ctx.cr0.eq) goto loc_8243660C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq 0x8243660c
	if (ctx.cr0.eq) goto loc_8243660C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8243660C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82438C20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x82438C28;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823106e8
	ctx.lr = 0x82438C44;
	sub_823106E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822fed38
	ctx.lr = 0x82438C50;
	sub_822FED38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82310700
	ctx.lr = 0x82438C5C;
	sub_82310700(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8244e620
	ctx.lr = 0x82438C6C;
	sub_8244E620(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822febe0
	ctx.lr = 0x82438C78;
	sub_822FEBE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243A670) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8243a4a8
	ctx.lr = 0x8243A690;
	sub_8243A4A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243a6a0
	if (ctx.cr0.eq) goto loc_8243A6A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fe568
	ctx.lr = 0x8243A6A0;
	sub_822FE568(ctx, base);
loc_8243A6A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243C968) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efec
	ctx.lr = 0x8243C970;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243C990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243ccf0
	if (ctx.cr6.eq) goto loc_8243CCF0;
	// lbz r11,19724(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 19724);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8243cce0
	if (!ctx.cr6.eq) goto loc_8243CCE0;
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,-32768
	ctx.r31.s64 = ctx.r11.s64 + -32768;
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243c9dc
	if (ctx.cr6.eq) goto loc_8243C9DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c0c78
	ctx.lr = 0x8243C9D0;
	sub_824C0C78(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r28,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r28.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243C9DC:
	// lis r9,1798
	ctx.r9.s64 = 117833728;
	// lwz r10,6744(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6744);
	// ori r27,r9,1798
	ctx.r27.u64 = ctx.r9.u64 | 1798;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8243ca0c
	if (ctx.cr6.eq) goto loc_8243CA0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c38f8
	ctx.lr = 0x8243CA00;
	sub_824C38F8(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r27,6744(r11)
	REX_STORE_U32(ctx.r11.u32 + 6744, ctx.r27.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CA0C:
	// lwz r10,384(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243ca30
	if (ctx.cr6.eq) goto loc_8243CA30;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c0cd8
	ctx.lr = 0x8243CA24;
	sub_824C0CD8(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r28,384(r11)
	REX_STORE_U32(ctx.r11.u32 + 384, ctx.r28.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CA30:
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243ca54
	if (ctx.cr6.eq) goto loc_8243CA54;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c1440
	ctx.lr = 0x8243CA48;
	sub_824C1440(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r28,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r28.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CA54:
	// lwz r9,1616(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1616);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8243ca90
	if (ctx.cr6.eq) goto loc_8243CA90;
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// lwz r9,1152(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r9,r29,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r9.u32);
	// ld r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// std r9,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r10,1616(r11)
	REX_STORE_U32(ctx.r11.u32 + 1616, ctx.r10.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CA90:
	// lwz r9,1632(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1632);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8243cac4
	if (ctx.cr6.eq) goto loc_8243CAC4;
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// lwz r9,1152(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r9,r29,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r9.u32);
	// ld r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// std r9,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r10,1632(r11)
	REX_STORE_U32(ctx.r11.u32 + 1632, ctx.r10.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CAC4:
	// lwz r9,1648(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1648);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8243caf8
	if (ctx.cr6.eq) goto loc_8243CAF8;
	// lwz r11,2800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// lwz r9,1152(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r9,r29,17,13,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 17) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r9,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r9.u32);
	// ld r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// std r9,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r10,1648(r11)
	REX_STORE_U32(ctx.r11.u32 + 1648, ctx.r10.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CAF8:
	// lwz r10,1696(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1696);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8243cb20
	if (ctx.cr6.eq) goto loc_8243CB20;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824c27b8
	ctx.lr = 0x8243CB14;
	sub_824C27B8(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r29,1696(r11)
	REX_STORE_U32(ctx.r11.u32 + 1696, ctx.r29.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CB20:
	// lwz r10,1680(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1680);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8243cb48
	if (ctx.cr6.eq) goto loc_8243CB48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824c2948
	ctx.lr = 0x8243CB3C;
	sub_824C2948(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r29,1680(r11)
	REX_STORE_U32(ctx.r11.u32 + 1680, ctx.r29.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CB48:
	// lwz r11,1216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243cb68
	if (ctx.cr6.eq) goto loc_8243CB68;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c1fd8
	ctx.lr = 0x8243CB60;
	sub_824C1FD8(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r28,1216(r11)
	REX_STORE_U32(ctx.r11.u32 + 1216, ctx.r28.u32);
loc_8243CB68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r26.u32 + 24));
	// lfs f31,4180(r11)
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8243cba0
	if (!ctx.cr6.gt) goto loc_8243CBA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bd618
	ctx.lr = 0x8243CB88;
	sub_823BD618(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243cba0
	if (ctx.cr6.eq) goto loc_8243CBA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bd618
	ctx.lr = 0x8243CB9C;
	sub_823BD618(ctx, base);
	// b 0x8243cc14
	goto loc_8243CC14;
loc_8243CBA0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,2800(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x823bd288
	ctx.lr = 0x8243CBC8;
	sub_823BD288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c4c48
	ctx.lr = 0x8243CBD8;
	sub_824C4C48(ctx, base);
	// lwz r30,2800(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x823c9558
	ctx.lr = 0x8243CBE0;
	sub_823C9558(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824cc630
	ctx.lr = 0x8243CC10;
	sub_824CC630(ctx, base);
	// bl 0x823c9558
	ctx.lr = 0x8243CC14;
	sub_823C9558(ctx, base);
loc_8243CC14:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b3368
	ctx.lr = 0x8243CC20;
	sub_823B3368(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bce30
	ctx.lr = 0x8243CC28;
	sub_823BCE30(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x823b32b8
	ctx.lr = 0x8243CC30;
	sub_823B32B8(ctx, base);
	// addi r11,r26,100
	ctx.r11.s64 = ctx.r26.s64 + 100;
	// li r7,28
	ctx.r7.s64 = 28;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824d20c0
	ctx.lr = 0x8243CC4C;
	sub_824D20C0(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,6744(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6744);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8243cc78
	if (ctx.cr6.eq) goto loc_8243CC78;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c38f8
	ctx.lr = 0x8243CC6C;
	sub_824C38F8(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r27,6744(r11)
	REX_STORE_U32(ctx.r11.u32 + 6744, ctx.r27.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CC78:
	// lwz r10,384(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 384);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8243cc9c
	if (ctx.cr6.eq) goto loc_8243CC9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c0cd8
	ctx.lr = 0x8243CC90;
	sub_824C0CD8(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r29,384(r11)
	REX_STORE_U32(ctx.r11.u32 + 384, ctx.r29.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CC9C:
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8243ccc0
	if (ctx.cr6.eq) goto loc_8243CCC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c1440
	ctx.lr = 0x8243CCB4;
	sub_824C1440(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r29,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r29.u32);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
loc_8243CCC0:
	// lwz r11,1216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1216);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8243cce0
	if (ctx.cr6.eq) goto loc_8243CCE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// bl 0x824c1fd8
	ctx.lr = 0x8243CCD8;
	sub_824C1FD8(ctx, base);
	// lwz r11,18912(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18912);
	// stw r29,1216(r11)
	REX_STORE_U32(ctx.r11.u32 + 1216, ctx.r29.u32);
loc_8243CCE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bd028
	ctx.lr = 0x8243CCF0;
	sub_823BD028(ctx, base);
loc_8243CCF0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82459418) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82459BB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82459bec
	if (ctx.cr6.eq) goto loc_82459BEC;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x82459BDC;
	sub_8213DA18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82459BEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245AD00) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245B120) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245BEF0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8245BF08:
	REX_LOOP_BARRIER();
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8245bf08
	if (!ctx.cr6.eq) goto loc_8245BF08;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245D038) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x8245D040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// beq cr6,0x8245d078
	if (ctx.cr6.eq) goto loc_8245D078;
	// lis r29,-32089
	ctx.r29.s64 = -2102984704;
loc_8245D060:
	REX_LOOP_BARRIER();
	// lwz r31,4(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-14240(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x8245D06C;
	sub_8213DA18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8245d060
	if (!ctx.cr6.eq) goto loc_8245D060;
loc_8245D078:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245F840) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x8245F848;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lis r28,-32089
	ctx.r28.s64 = -2102984704;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r31,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// stw r31,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// beq cr6,0x8245f88c
	if (ctx.cr6.eq) goto loc_8245F88C;
loc_8245F874:
	REX_LOOP_BARRIER();
	// lwz r30,4(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-14240(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x8245F880;
	sub_8213DA18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8245f874
	if (!ctx.cr6.eq) goto loc_8245F874;
loc_8245F88C:
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r27,0(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r30,8(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8245f8f8
	if (ctx.cr6.eq) goto loc_8245F8F8;
loc_8245F8A0:
	REX_LOOP_BARRIER();
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-14240(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + -14240);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8213f388
	ctx.lr = 0x8245F8B8;
	sub_8213F388(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x8245f8e0
	if (ctx.cr6.eq) goto loc_8245F8E0;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_8245F8E0:
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8245f8a0
	if (!ctx.cr6.eq) goto loc_8245F8A0;
loc_8245F8F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82465260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efd4
	ctx.lr = 0x82465268;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// ori r21,r10,43691
	ctx.r21.u64 = ctx.r10.u64 | 43691;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,816(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82465294
	if (!ctx.cr6.eq) goto loc_82465294;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x824652ac
	goto loc_824652AC;
loc_82465294:
	// lwz r10,820(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulhw r10,r10,r21
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_824652AC:
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82465500
	if (!ctx.cr6.lt) goto loc_82465500;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824652c4
	if (!ctx.cr6.eq) goto loc_824652C4;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x824652dc
	goto loc_824652DC;
loc_824652C4:
	// lwz r10,824(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 824);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulhw r10,r10,r21
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_824652DC:
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8246547c
	if (!ctx.cr6.lt) goto loc_8246547C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824652f4
	if (!ctx.cr6.eq) goto loc_824652F4;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x8246530c
	goto loc_8246530C;
loc_824652F4:
	// lwz r10,824(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 824);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulhw r10,r10,r21
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8246530C:
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8246547c
	if (!ctx.cr6.lt) goto loc_8246547C;
	// lwz r22,820(r23)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// lis r25,-32089
	ctx.r25.s64 = -2102984704;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x824653cc
	if (ctx.cr6.eq) goto loc_824653CC;
	// addi r27,r23,4
	ctx.r27.s64 = ctx.r23.s64 + 4;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// subf r24,r11,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r11.u64;
loc_82465330:
	REX_LOOP_BARRIER();
	// addic. r11,r27,-4
	ctx.xer.ca = ctx.r27.u32 > 3;
	ctx.r11.s64 = ctx.r27.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824653b8
	if (ctx.cr0.eq) goto loc_824653B8;
	// lwz r11,-8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -8);
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// addi r26,r28,-4
	ctx.r26.s64 = ctx.r28.s64 + -4;
	// rotlwi r29,r27,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r11,-4(r27)
	REX_STORE_U32(ctx.r27.u32 + -4, ctx.r11.u32);
	// stw r27,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r27.u32);
	// stwx r27,r24,r28
	REX_STORE_U32(ctx.r24.u32 + ctx.r28.u32, ctx.r27.u32);
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824653b8
	if (ctx.cr6.eq) goto loc_824653B8;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82465364:
	REX_LOOP_BARRIER();
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-14240(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + -14240);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8213f388
	ctx.lr = 0x8246537C;
	sub_8213F388(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x824653a0
	if (ctx.cr6.eq) goto loc_824653A0;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_824653A0:
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82465364
	if (!ctx.cr6.eq) goto loc_82465364;
loc_824653B8:
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82465330
	if (!ctx.cr6.eq) goto loc_82465330;
loc_824653CC:
	// lwz r10,816(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 816);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824653e0
	if (!ctx.cr6.eq) goto loc_824653E0;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x824653f8
	goto loc_824653F8;
loc_824653E0:
	// lwz r11,820(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mulhw r11,r11,r21
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_824653F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82465450
	if (ctx.cr6.eq) goto loc_82465450;
	// lwz r28,820(r23)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82465450
	if (ctx.cr6.eq) goto loc_82465450;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
loc_82465414:
	REX_LOOP_BARRIER();
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r30,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82465440
	if (ctx.cr6.eq) goto loc_82465440;
loc_82465428:
	REX_LOOP_BARRIER();
	// lwz r31,4(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-14240(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x82465434;
	sub_8213DA18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82465428
	if (!ctx.cr6.eq) goto loc_82465428;
loc_82465440:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82465414
	if (!ctx.cr6.eq) goto loc_82465414;
loc_82465450:
	// rlwinm r10,r20,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r23,816(r23)
	REX_STORE_U32(ctx.r23.u32 + 816, ctx.r23.u32);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r20,r10
	ctx.r10.u64 = ctx.r20.u64 + ctx.r10.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r10,824(r23)
	REX_STORE_U32(ctx.r23.u32 + 824, ctx.r10.u32);
	// stw r11,820(r23)
	REX_STORE_U32(ctx.r23.u32 + 820, ctx.r11.u32);
loc_8246547C:
	// lwz r11,816(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82465490
	if (!ctx.cr6.eq) goto loc_82465490;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x824654a8
	goto loc_824654A8;
loc_82465490:
	// lwz r10,820(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulhw r11,r11,r21
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824654A8:
	// subf r9,r11,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82465588
	if (ctx.cr6.eq) goto loc_82465588;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r10,820(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_824654C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824654d4
	if (ctx.cr6.eq) goto loc_824654D4;
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_824654D4:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x824654c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824654C0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,820(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,820(r23)
	REX_STORE_U32(ctx.r23.u32 + 820, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8248f024
	__restgprlr_19(ctx, base);
	return;
loc_82465500:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82465588
	if (ctx.cr6.eq) goto loc_82465588;
	// lwz r28,820(r23)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + 820);
	// subf r10,r11,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r11.u64;
	// mulhw r10,r10,r21
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82465588
	if (!ctx.cr6.lt) goto loc_82465588;
	// rlwinm r10,r20,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r20,r10
	ctx.r10.u64 = ctx.r20.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82465588
	if (ctx.cr6.eq) goto loc_82465588;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// lis r29,-32089
	ctx.r29.s64 = -2102984704;
loc_82465548:
	REX_LOOP_BARRIER();
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// stw r30,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82465574
	if (ctx.cr6.eq) goto loc_82465574;
loc_8246555C:
	REX_LOOP_BARRIER();
	// lwz r31,4(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-14240(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -14240);
	// bl 0x8213da18
	ctx.lr = 0x82465568;
	sub_8213DA18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8246555c
	if (!ctx.cr6.eq) goto loc_8246555C;
loc_82465574:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82465548
	if (!ctx.cr6.eq) goto loc_82465548;
	// stw r27,820(r23)
	REX_STORE_U32(ctx.r23.u32 + 820, ctx.r27.u32);
loc_82465588:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8248f024
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824801D8) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82480360) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82480698) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82480908) {
	REX_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,64084
	ctx.r9.u64 = ctx.r10.u64 | 64084;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82480948
	if (ctx.cr6.eq) goto loc_82480948;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82480948
	if (ctx.cr6.eq) goto loc_82480948;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82480948:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82484E88) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82484F00) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82484FD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824851F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82485610) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x82485618;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-14240(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -14240);
	// lwz r29,0(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8213f388
	ctx.lr = 0x82485640;
	sub_8213F388(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x8248567c
	if (ctx.cr6.eq) goto loc_8248567C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8248567C:
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824878C0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82487CC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82487CF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82487d1c
	if (!ctx.cr6.eq) goto loc_82487D1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82487D1C:
	// vspltisw v0,-1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// vslw v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vxor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_15) {
	REX_FUNC_PROLOGUE();
	// std r15,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_20) {
	REX_FUNC_PROLOGUE();
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_21) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_119) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v119.u8)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v120.u8)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v121.u8)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v122.u8)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v123.u8)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v124.u8)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v125.u8)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v127.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_81) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8249F350) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A0038) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a0048
	if (ctx.cr0.eq) goto loc_824A0048;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_824A0048:
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a0058
	if (ctx.cr0.eq) goto loc_824A0058;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824A0058:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a0068
	if (ctx.cr0.eq) goto loc_824A0068;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_824A0068:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a0078
	if (ctx.cr0.eq) goto loc_824A0078;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_824A0078:
	// rlwinm r3,r3,1,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A2B00) {
	REX_FUNC_PROLOGUE();
	// li r4,259
	ctx.r4.s64 = 259;
	// b 0x824aa100
	sub_824AA100(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824A2B78) {
	REX_FUNC_PROLOGUE();
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x824aa100
	sub_824AA100(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824A2DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824a2e40
	if (ctx.cr6.lt) goto loc_824A2E40;
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lwz r11,-9356(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9356);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824a2e40
	if (!ctx.cr6.lt) goto loc_824A2E40;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-9344
	ctx.r11.s64 = ctx.r11.s64 + -9344;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(44));
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824a2e40
	if (ctx.cr0.eq) goto loc_824A2E40;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824a2e40
	if (ctx.cr6.eq) goto loc_824A2E40;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a2e5c
	goto loc_824A2E5C;
loc_824A2E40:
	// bl 0x82499020
	ctx.lr = 0x824A2E44;
	sub_82499020(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82499058
	ctx.lr = 0x824A2E50;
	sub_82499058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824A2E5C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AB688) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82499b40
	ctx.lr = 0x824AB69C;
	sub_82499B40(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AC588) {
	REX_FUNC_PROLOGUE();
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r10,r10,4159
	ctx.r10.s64 = ctx.r10.s64 + 4159;
	// addi r9,r11,4095
	ctx.r9.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r10,1,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r9,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// li r8,170
	ctx.r8.s64 = 170;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r10,169
	ctx.r11.s64 = ctx.r10.s64 + 169;
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824ac5c8
	if (!ctx.cr6.gt) goto loc_824AC5C8;
	// addi r9,r11,169
	ctx.r9.s64 = ctx.r11.s64 + 169;
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// b 0x824ac5cc
	goto loc_824AC5CC;
loc_824AC5C8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_824AC5CC:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x824ac5e0
	if (!ctx.cr6.gt) goto loc_824AC5E0;
	// addi r7,r9,169
	ctx.r7.s64 = ctx.r9.s64 + 169;
	// divwu r8,r7,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r7.u32 / ctx.r8.u32 : 0);
	// b 0x824ac5e4
	goto loc_824AC5E4;
loc_824AC5E0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_824AC5E4:
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFFFF000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B09C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1964);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B0E58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x824b22b0
	ctx.lr = 0x824B0E7C;
	sub_824B22B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b0e90
	if (ctx.cr0.eq) goto loc_824B0E90;
	// bl 0x8213d068
	ctx.lr = 0x824B0E88;
	sub_8213D068(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824b0fc0
	goto loc_824B0FC0;
loc_824B0E90:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b0ed4
	if (!ctx.cr6.eq) goto loc_824B0ED4;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82490540
	ctx.lr = 0x824B0EB0;
	sub_82490540(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82490540
	ctx.lr = 0x824B0EC4;
	sub_82490540(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82490540
	ctx.lr = 0x824B0ED4;
	sub_82490540(ctx, base);
loc_824B0ED4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828bb33c
	ctx.lr = 0x824B0EDC;
	__imp__KeQuerySystemTime(ctx, base);
	// lhz r11,70(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 70);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824b0fbc
	if (ctx.cr0.eq) goto loc_824B0FBC;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824b0fbc
	if (ctx.cr0.eq) goto loc_824B0FBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x824b1fa0
	ctx.lr = 0x824B0F08;
	sub_824B1FA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b0fbc
	if (ctx.cr0.eq) goto loc_824B0FBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x824b1fa0
	ctx.lr = 0x824B0F24;
	sub_824B1FA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b0fbc
	if (ctx.cr0.eq) goto loc_824B0FBC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r8,168(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// mulli r9,r9,60
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(60));
	// ori r11,r11,38528
	ctx.r11.u64 = ctx.r11.u64 | 38528;
	// mulli r8,r8,60
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(60));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// mulld r10,r10,r11
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r11.u64);
	// mulld r11,r9,r11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r11.u64);
	// mulld r9,r8,r7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r7.u64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bge cr6,0x824b0fa4
	if (!ctx.cr6.lt) goto loc_824B0FA4;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x824b0f9c
	if (ctx.cr6.lt) goto loc_824B0F9C;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x824b0fb8
	if (ctx.cr6.lt) goto loc_824B0FB8;
loc_824B0F9C:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x824b0fbc
	goto loc_824B0FBC;
loc_824B0FA4:
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x824b0fb8
	if (ctx.cr6.lt) goto loc_824B0FB8;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// blt cr6,0x824b0fbc
	if (ctx.cr6.lt) goto loc_824B0FBC;
loc_824B0FB8:
	// li r30,2
	ctx.r30.s64 = 2;
loc_824B0FBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_824B0FC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824BBFE0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824BC0F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x824BC100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824bc128
	if (!ctx.cr6.gt) goto loc_824BC128;
	// bl 0x824b98f0
	ctx.lr = 0x824BC128;
	sub_824B98F0(ctx, base);
loc_824BC128:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824bc154
	if (ctx.cr6.lt) goto loc_824BC154;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_824BC154:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824BE450) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,17409
	ctx.r10.s64 = 17409;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r10,20,11,9
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r11.u64 & 0x200000);
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// rlwimi r9,r8,28,0,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xF0000000) | (ctx.r9.u64 & 0xFFFFFFFF0FFFFFFF);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C0F38) {
	REX_FUNC_PROLOGUE();
	// lwz r10,11840(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11840);
	// lwz r11,11844(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11844);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// stw r10,11840(r3)
	REX_STORE_U32(ctx.r3.u32 + 11840, ctx.r10.u32);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11840(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11840);
	// bne 0x824c0f7c
	if (!ctx.cr0.eq) goto loc_824C0F7C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_824C0F7C:
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	REX_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C6358) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C7778) {
	REX_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824cecc0
	ctx.lr = 0x824C9534;
	sub_824CECC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824CE0B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x824CE0C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822c5388
	ctx.lr = 0x824CE0DC;
	sub_822C5388(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824ce0ec
	if (!ctx.cr0.eq) goto loc_824CE0EC;
loc_824CE0E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ce15c
	goto loc_824CE15C;
loc_824CE0EC:
	// rlwinm r10,r30,29,0,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0xE0000000;
	// rlwinm. r9,r29,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// oris r30,r10,16
	ctx.r30.u64 = ctx.r10.u64 | 1048576;
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
	// beq 0x824ce10c
	if (ctx.cr0.eq) goto loc_824CE10C;
	// li r11,2
	ctx.r11.s64 = 2;
	// oris r30,r30,32
	ctx.r30.u64 = ctx.r30.u64 | 2097152;
loc_824CE10C:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ce118
	if (ctx.cr0.eq) goto loc_824CE118;
	// oris r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 4194304;
loc_824CE118:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x822c5388
	ctx.lr = 0x824CE128;
	sub_822C5388(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x824ce140
	if (!ctx.cr0.eq) goto loc_824CE140;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x822c53a0
	ctx.lr = 0x824CE13C;
	sub_822C53A0(ctx, base);
	// b 0x824ce0e4
	goto loc_824CE0E4;
loc_824CE140:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_824CE15C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D43A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824d43fc
	if (ctx.cr6.eq) goto loc_824D43FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,-5752(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -5752);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x824d43d0
	if (ctx.cr6.gt) goto loc_824D43D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-5756(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5756));
	// b 0x824d4414
	goto loc_824D4414;
loc_824D43D0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-5760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5760));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfd f2,-5768(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -5768);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-5776(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5776));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82492b98
	ctx.lr = 0x824D43F4;
	sub_82492B98(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x824d4440
	goto loc_824D4440;
loc_824D43FC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,-5784(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -5784);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x824d441c
	if (ctx.cr6.gt) goto loc_824D441C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-5792(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5792));
loc_824D4414:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x824d4440
	goto loc_824D4440;
loc_824D441C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f2,-5800(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -5800);
	// bl 0x82492b98
	ctx.lr = 0x824D4428;
	sub_82492B98(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,-5804(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5804));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-5760(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5760));
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
loc_824D4440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D9C90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82493a48
	ctx.lr = 0x824D9CA0;
	sub_82493A48(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DC648) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DCF40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x824DCF48;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x824dc858
	ctx.lr = 0x824DCF90;
	sub_824DC858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824dd0ac
	if (ctx.cr0.eq) goto loc_824DD0AC;
	// li r31,-4096
	ctx.r31.s64 = -4096;
	// li r30,-4
	ctx.r30.s64 = -4;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_824DCFA4:
	REX_LOOP_BARRIER();
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x824dd02c
	if (!ctx.cr6.eq) goto loc_824DD02C;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x824dcff0
	if (!ctx.cr6.eq) goto loc_824DCFF0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r10,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824dcfd8
	if (ctx.cr0.eq) goto loc_824DCFD8;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_824DCFD8:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r9,r10,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824dd094
	if (ctx.cr0.eq) goto loc_824DD094;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x824dd094
	goto loc_824DD094;
loc_824DCFF0:
	// li r8,3
	ctx.r8.s64 = 3;
loc_824DCFF4:
	REX_LOOP_BARRIER();
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824dd01c
	if (ctx.cr0.eq) goto loc_824DD01C;
	// rlwinm r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x824dd014
	if (ctx.cr6.lt) goto loc_824DD014;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824dd01c
	if (ctx.cr6.lt) goto loc_824DD01C;
loc_824DD014:
	// or r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 | ctx.r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824DD01C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x824dcff4
	if (!ctx.cr0.eq) goto loc_824DCFF4;
	// b 0x824dd094
	goto loc_824DD094;
loc_824DD02C:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x824dd04c
	if (!ctx.cr6.eq) goto loc_824DD04C;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824dd094
	if (!ctx.cr0.eq) goto loc_824DD094;
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// b 0x824dd094
	goto loc_824DD094;
loc_824DD04C:
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bne cr6,0x824dd068
	if (!ctx.cr6.eq) goto loc_824DD068;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,-32
	ctx.r9.s64 = -32;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x824dd07c
	goto loc_824DD07C;
loc_824DD068:
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x824dd084
	if (!ctx.cr6.eq) goto loc_824DD084;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
loc_824DD07C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824dd094
	goto loc_824DD094;
loc_824DD084:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x824dd094
	if (!ctx.cr6.eq) goto loc_824DD094;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_824DD094:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824dc858
	ctx.lr = 0x824DD0A4;
	sub_824DC858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824dcfa4
	if (!ctx.cr0.eq) goto loc_824DCFA4;
loc_824DD0AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E7DC0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E8820) {
	REX_FUNC_PROLOGUE();
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// b 0x822c5388
	sub_822C5388(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E8AFC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E8B38) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E8B98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r10,63
	ctx.r10.s64 = 63;
	// addi r9,r11,5648
	ctx.r9.s64 = ctx.r11.s64 + 5648;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_824E8BB0:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x824e8bb0
	if (!ctx.cr0.lt) goto loc_824E8BB0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E9380) {
	REX_FUNC_PROLOGUE();
	// vspltisw v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x1)));
	// vrsqrtefp v0,v1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v1.f32))));
	// vcfsx v13,v13,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v1,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v13,v11,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v1,v0,v13,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EBA20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// vmsum4fp128 v12,v1,v2
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v2.f32), 0xFF));
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltisw v13,-1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vspltisw v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r11,r11,16144
	ctx.r11.s64 = ctx.r11.s64 + 16144;
	// vupkd3d128 v7,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v7 = vTemp;
	// vslw v5,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vcfsx v9,v10,16
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x37800000)))));
	// vcfsx v8,v10,1
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vspltw v11,v7,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0x0));
	// vpermwi128 v4,v7,234
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0x15));
	// vcmpgtfp v31,v0,v12
	simde_mm_store_ps(ctx.v31.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v6,v11,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsel v29,v0,v5,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vxor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vnmsubfp v9,v12,v12,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpgtfp v24,v6,v12
	simde_mm_store_ps(ctx.v24.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vrsqrtefp v11,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v9.f32))));
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmulfp128 v31,v9,v8
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v30,v11,v11
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vcmpeqfp v28,v11,v11
	simde_mm_store_ps(ctx.v28.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v8,v31,v30,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltisw v31,-8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_set1_epi32(int(0xFFFFFFF8)));
	// vslw v30,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmaddfp v11,v11,v8,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vcmpeqfp v8,v8,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v11,v9,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vxor v9,v8,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v25,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vspltw v23,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xAA));
	// vspltw v22,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x55));
	// addi r11,r11,16128
	ctx.r11.s64 = ctx.r11.s64 + 16128;
	// vspltw v8,v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x0));
	// vsel v11,v11,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vsldoi v9,v5,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// vsldoi v5,v3,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vrefp v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp v21,v11,v0
	simde_mm_store_ps(ctx.v21.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vxor v9,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vslw v5,v13,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw v31,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddfp v28,v4,v9
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vslw v9,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vspltw v4,v7,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0x0));
	// vcmpequw v27,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vcmpequw v31,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vand v3,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vand v10,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vnmsubfp v9,v12,v6,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpequw v30,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vor v25,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor v5,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor v26,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vsel v30,v25,v10,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vor v10,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v9,v6,v9,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vor v19,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsel v10,v10,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8))));
	// vcmpgtfp v3,v11,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v26,v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x0));
	// vsel v10,v5,v10,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vnmsubfp v4,v12,v9,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v25,v9,v9
	simde_mm_store_ps(ctx.v25.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v9,v4,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vsel v12,v13,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vsel v12,v12,v30,v21
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vspltw v30,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vsel v12,v12,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vspltw v10,v7,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0x0));
	// vsel v9,v6,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v6,v3,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v5,v11,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vslw v9,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsel v6,v12,v19,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v27,v12,v6,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vspltw v25,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xAA));
	// vandc v12,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vspltw v8,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x55));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,16112
	ctx.r11.s64 = ctx.r11.s64 + 16112;
	// vrefp v6,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v12.f32)));
	// li r12,-16
	ctx.r12.s64 = -16;
	// stvx128 v12,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcmpgtfp v4,v12,v10
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vor v14,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v25,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v8,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vor v3,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vnmsubfp v31,v12,v6,v10
	simde_mm_store_ps(ctx.v31.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v16,v0,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v3,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vspltw128 v63,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xFF));
	// addi r11,r11,16096
	ctx.r11.s64 = ctx.r11.s64 + 16096;
	// vspltw v25,v3,2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0x55));
	// vmaddfp v12,v6,v31,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v22,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xAA));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vspltw v21,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x55));
	// vspltw v23,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// vspltw v20,v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x0));
	// lvx128 v31,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v19,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0xFF));
	// vspltw v18,v31,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0xAA));
	// vspltw v17,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0x55));
	// vcmpeqfp v6,v12,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw v31,v31,3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), 0x0));
	// li r12,-48
	ctx.r12.s64 = -48;
	// lvx128 v8,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r12,-64
	ctx.r12.s64 = -64;
	// lvx128 v15,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsel v15,v15,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vnmsubfp v8,v14,v12,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v14.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v29,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v2,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vspltw v2,v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xAA));
	// vspltw v3,v3,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0x0));
	// li r12,-32
	ctx.r12.s64 = -32;
	// lvx128 v14,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v12,v12,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v1,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsel v12,v14,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// li r12,-16
	ctx.r12.s64 = -16;
	// lvx128 v14,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsel v12,v14,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vaddfp128 v6,v12,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vor v1,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vcmpgtfp v25,v12,v25
	simde_mm_store_ps(ctx.v25.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v25.f32)));
	// vmaddfp v12,v12,v2,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vcsxwfp128 v63,v13,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vrefp v8,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v6.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vnmsubfp v14,v6,v8,v10
	simde_mm_store_ps(ctx.v14.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v29,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmaddfp v8,v8,v14,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v14.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vnmsubfp v6,v6,v8,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v14,v8,v8
	simde_mm_store_ps(ctx.v14.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v8,v8,v6,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vsel v8,v29,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vmulfp128 v12,v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsel v8,v1,v12,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vmulfp128 v12,v8,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vandc v6,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vcmpgtfp v6,v3,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vaddfp v3,v12,v20
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v20.f32)));
	// vmaddfp v31,v12,v31,v17
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v17.f32)));
	// li r12,-16
	ctx.r12.s64 = -16;
	// stvx128 v6,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddfp v3,v12,v3,v21
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v21.f32)));
	// vmaddfp v3,v12,v3,v22
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v22.f32)));
	// vmaddfp v6,v12,v3,v23
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v23.f32)));
	// vrefp v3,v6
	simde_mm_store_ps(ctx.v3.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v6.f32)));
	// vor v22,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vnmsubfp v6,v6,v3,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v6,v3,v6,v3
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v10,v22,v6,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v22.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v21,v6,v6
	simde_mm_store_ps(ctx.v21.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v6,v6,v10,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vrefp v10,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v31,v12,v31,v18
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v18.f32)));
	// vsel v6,v3,v6,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vcmpgtfp v3,v0,v5
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vxor v0,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpgtfp v26,v5,v26
	simde_mm_store_ps(ctx.v26.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v26.f32)));
	// vsel v25,v16,v15,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8))));
	// vcmpequw v21,v27,v13
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v27.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vspltw v13,v7,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0x0));
	// vor v22,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vcmpgtfp v5,v0,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vxor v30,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// addi r11,r11,3056
	ctx.r11.s64 = ctx.r11.s64 + 3056;
	// vmaddfp v31,v12,v31,v19
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v19.f32)));
	// vmulfp128 v0,v31,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v12.f32)));
	// li r12,-16
	ctx.r12.s64 = -16;
	// lvx128 v12,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmulfp128 v0,v0,v6
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v0,v8,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vsel v12,v0,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vnmsubfp v0,v11,v10,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v8,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vxor v12,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vsel v12,v8,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vmaddfp v0,v10,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp v12,v12,v25
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v25.f32)));
	// vor v8,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vxor v12,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vsel v12,v8,v12,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vsel v12,v12,v22,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8))));
	// vsel v9,v12,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v8,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltw v6,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r11,r11,2720
	ctx.r11.s64 = ctx.r11.s64 + 2720;
	// vsel v9,v27,v9,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vnmsubfp v13,v12,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v11,v28,v9
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v9.f32)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vcmpeqfp v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v30,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v26,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2736
	ctx.r11.s64 = ctx.r11.s64 + 2736;
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v27,v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v11,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vrfin v0,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v0.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vnmsubfp v13,v6,v0,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v0,v13,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v11,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v30,v11,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v30,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltw v25,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v23,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// addi r11,r11,2752
	ctx.r11.s64 = ctx.r11.s64 + 2752;
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v22,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v21,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vmulfp128 v9,v10,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v30,v10,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vspltw v10,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// vspltw v30,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vspltw v12,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vmulfp128 v8,v9,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v26,v9,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v26.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v7,v8,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v25,v8,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v25.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v6,v7,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v23,v7,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v23.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v5,v6,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v10,v6,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v4,v5,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v3,v4,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v31,v3,v0
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v31,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v13,v5,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// lvx128 v1,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r12,-48
	ctx.r12.s64 = -48;
	// lvx128 v29,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r12,-64
	ctx.r12.s64 = -64;
	// lvx128 v2,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v13,v30,v4,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v22,v3,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v22.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v21,v31,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v21.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v0,v27
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v27.f32)));
	// vsel v0,v28,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vmulfp128 v13,v1,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vxor v0,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vmaddfp v1,v2,v0,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82540140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// addi r30,r9,12
	ctx.r30.s64 = ctx.r9.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82540184:
	REX_LOOP_BARRIER();
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82540184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82540184;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r4,127
	ctx.r4.s64 = 127;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253fad8
	ctx.lr = 0x825401AC;
	sub_8253FAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825401c4
	if (ctx.cr6.eq) goto loc_825401C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x825401e4
	goto loc_825401E4;
loc_825401C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825401E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825401E4:
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8254020C:
	REX_LOOP_BARRIER();
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8254020c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8254020C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82547DB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// li r8,2
	ctx.r8.s64 = 2;
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x82547e24
	if (!ctx.cr6.gt) goto loc_82547E24;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-13
	ctx.r10.s64 = ctx.r11.s64 + -13;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x82547e34
	goto loc_82547E34;
loc_82547E24:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_82547E34:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x82547eac
	if (!ctx.cr6.gt) goto loc_82547EAC;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r9,r10,-9
	ctx.r9.s64 = ctx.r10.s64 + -9;
	// subfic r10,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x82547ebc
	goto loc_82547EBC;
loc_82547EAC:
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r7,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
loc_82547EBC:
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x82547f0c
	if (!ctx.cr6.eq) goto loc_82547F0C;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// b 0x82547f44
	goto loc_82547F44;
loc_82547F0C:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82547f44
	if (ctx.cr6.lt) goto loc_82547F44;
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lbz r7,5808(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r7,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r7.u16);
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
loc_82547F44:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,5804(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5804);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bge cr6,0x825480d4
	if (!ctx.cr6.lt) goto loc_825480D4;
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x82547fc8
	if (!ctx.cr6.gt) goto loc_82547FC8;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r9,r10,-13
	ctx.r9.s64 = ctx.r10.s64 + -13;
	// subfic r10,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x82547fd8
	goto loc_82547FD8;
loc_82547FC8:
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r7,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
loc_82547FD8:
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x8254804c
	if (!ctx.cr6.gt) goto loc_8254804C;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stbx r10,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r9,r10,-9
	ctx.r9.s64 = ctx.r10.s64 + -9;
	// subfic r10,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x8254805c
	goto loc_8254805C;
loc_8254804C:
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
loc_8254805C:
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x8254809c
	if (!ctx.cr6.eq) goto loc_8254809C;
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stbx r9,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// b 0x825480c4
	goto loc_825480C4;
loc_8254809C:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x825480d4
	if (ctx.cr6.lt) goto loc_825480D4;
	// lhz r11,5808(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
loc_825480C4:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_825480D4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,5804(r3)
	REX_STORE_U32(ctx.r3.u32 + 5804, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82564E18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efe8
	ctx.lr = 0x82564E20;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82564e58
	if (ctx.cr6.eq) goto loc_82564E58;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82560fc0
	ctx.lr = 0x82564E54;
	sub_82560FC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82564E58:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82564e74
	if (ctx.cr6.eq) goto loc_82564E74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825620f0
	ctx.lr = 0x82564E70;
	sub_825620F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82564E74:
	// rlwinm r6,r30,3,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x18;
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r4,r29,30
	ctx.r4.u64 = ctx.r29.u32 & 0x3;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r9,r30
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f31,4180(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r8.u32 + 4180));
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// add r24,r6,r5
	ctx.r24.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r8,r3,r29
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne 0x82564ee0
	if (!ctx.cr0.eq) goto loc_82564EE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82564ee8
	goto loc_82564EE8;
loc_82564EE0:
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82564EE8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82564f00
	if (ctx.cr6.eq) goto loc_82564F00;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825626b0
	ctx.lr = 0x82564F00;
	sub_825626B0(ctx, base);
loc_82564F00:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825651c0
	if (!ctx.cr6.gt) goto loc_825651C0;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r30.u64;
	// rlwinm r25,r30,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r30,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f7,25248(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r3.u32 + 25248);
	// lfs f8,-13760(r4)
	ctx.f8.f64 = double(REX_LOAD_F32(ctx.r4.u32 + -13760));
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,25240(r5)
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r5.u32 + 25240));
	// lfs f10,25236(r6)
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r6.u32 + 25236));
	// lfs f11,-11100(r7)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r7.u32 + -11100));
	// lfs f5,-15396(r11)
	ctx.f5.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -15396));
loc_82564F64:
	REX_LOOP_BARRIER();
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r30.u32 + -8));
	// rlwinm r11,r27,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xC;
	// lfs f13,-4(r30)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r30.u32 + -4));
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f0,0(r30)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r30.u32 + 0));
	// fadds f6,f13,f30
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f4,f0,f29
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lfsx f0,r11,r24
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r24.u32));
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fmuls f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fadds f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f4,0,r7
	REX_STORE_U32(ctx.r7.u32, ctx.f4.u32);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f4,0,r6
	REX_STORE_U32(ctx.r6.u32, ctx.f4.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// beq cr6,0x825650f8
	if (ctx.cr6.eq) goto loc_825650F8;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// extsw r28,r7
	ctx.r28.s64 = ctx.r7.s32;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// std r28,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// lfs f4,16(r11)
	ctx.f4.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 16));
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f3,88(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f2,96(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f6,f0,f10,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f4.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmul f6,f0,f7
	ctx.f6.f64 = ctx.f0.f64 * ctx.f7.f64;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// fmul f4,f13,f7
	ctx.f4.f64 = ctx.f13.f64 * ctx.f7.f64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f31,f6
	ctx.f31.f64 = double(float(ctx.f6.f64));
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// frsp f30,f4
	ctx.f30.f64 = double(float(ctx.f4.f64));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f0,f8,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,20(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 20));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,24(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 24));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f0,f12,f7
	ctx.f0.f64 = ctx.f12.f64 * ctx.f7.f64;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f0.f64)));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_825650F8:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82565108
	if (ctx.cr6.lt) goto loc_82565108;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82565108:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82565120
	if (!ctx.cr6.gt) goto loc_82565120;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x82565128
	if (ctx.cr6.lt) goto loc_82565128;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x82565124
	goto loc_82565124;
loc_82565120:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82565124:
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
loc_82565128:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82565138
	if (ctx.cr6.lt) goto loc_82565138;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82565138:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82565150
	if (!ctx.cr6.gt) goto loc_82565150;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x82565158
	if (ctx.cr6.lt) goto loc_82565158;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x82565154
	goto loc_82565154;
loc_82565150:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82565154:
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
loc_82565158:
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// blt cr6,0x82565168
	if (ctx.cr6.lt) goto loc_82565168;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82565168:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82565180
	if (!ctx.cr6.gt) goto loc_82565180;
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// blt cr6,0x82565188
	if (ctx.cr6.lt) goto loc_82565188;
	// li r7,15
	ctx.r7.s64 = 15;
	// b 0x82565184
	goto loc_82565184;
loc_82565180:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82565184:
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
loc_82565188:
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// sth r11,0(r26)
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82564f64
	if (ctx.cr6.lt) goto loc_82564F64;
loc_825651C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8248f038
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8257FE20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 0));
	// lfs f0,12(r3)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 12));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,0(r5)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r5.u32 + 0));
	// lfs f12,8544(r11)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 8544));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,16(r3)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 16));
	// lfs f13,20(r3)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 20));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f11,24(r3)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 24));
	// fmadds f0,f13,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// lfs f13,5476(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5476));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8257fe70
	if (!ctx.cr6.lt) goto loc_8257FE70;
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8257FE70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r5.u32 + 0));
	// lfs f0,30116(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 30116));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8257fe88
	if (!ctx.cr6.gt) goto loc_8257FE88;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8257FE88:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r5.u32 + 0));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82584D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x82584D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addze r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r29.s64 = temp.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82589db0
	ctx.lr = 0x82584D34;
	sub_82589DB0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82589af8
	ctx.lr = 0x82584D44;
	sub_82589AF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82586BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x82491c30
	ctx.lr = 0x82586C0C;
	sub_82491C30(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,15464(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 15464));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82588620) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f0,25236(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 25236));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,-11296(r9)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r9.u32 + -11296));
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r8
	REX_STORE_U32(ctx.r8.u32, ctx.f12.u32);
	// ble cr6,0x825886a0
	if (!ctx.cr6.gt) goto loc_825886A0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,21080(r9)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 21080));
loc_8258865C:
	REX_LOOP_BARRIER();
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 0));
	// lwz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// blt cr6,0x8258867c
	if (ctx.cr6.lt) goto loc_8258867C;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_8258867C:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82588690
	if (!ctx.cr0.eq) goto loc_82588690;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 0));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82588690:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8258865c
	if (ctx.cr6.lt) goto loc_8258865C;
loc_825886A0:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// srawi. r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_825886B0:
	REX_LOOP_BARRIER();
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vexptefp v0,v0
	ctx.fpscr.enableFlushMode();
	{
		simde__m128 x = simde_mm_load_ps(ctx.v0.f32);
		simde__m128 n = simde_mm_round_ps(x, SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC);
		simde__m128 f = simde_mm_sub_ps(x, n);
		simde__m128 p = simde_mm_set1_ps(1.8775767e-3f);
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(8.9893397e-3f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(5.5826318e-2f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(2.4015361e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(6.9315308e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(1.0f));
		simde__m128i exp_bits = simde_mm_slli_epi32(
			simde_mm_add_epi32(simde_mm_cvttps_epi32(n), simde_mm_set1_epi32(127)), 23);
		simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(p, simde_mm_castsi128_ps(exp_bits)));
	}
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x825886b0
	if (!ctx.cr0.eq) goto loc_825886B0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258E020) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x8258E028;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lis r26,-32042
	ctx.r26.s64 = -2099904512;
	// beq cr6,0x8258e05c
	if (ctx.cr6.eq) goto loc_8258E05C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8258e05c
	if (!ctx.cr6.lt) goto loc_8258E05C;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// b 0x8258e084
	goto loc_8258E084;
loc_8258E05C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,-26392(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -26392);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r29,r11,3
	ctx.r29.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// bl 0x828bb21c
	ctx.lr = 0x8258E070;
	__imp__KeTlsGetValue(ctx, base);
	// li r5,21
	ctx.r5.s64 = 21;
	// mullw r4,r29,r28
	ctx.r4.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// bl 0x8258c948
	ctx.lr = 0x8258E07C;
	sub_8258C948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8258E084:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r5,r11,r28
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// bl 0x8259a6f8
	ctx.lr = 0x8258E098;
	sub_8259A6F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,-26392(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + -26392);
	// clrlwi r26,r11,2
	ctx.r26.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bl 0x828bb21c
	ctx.lr = 0x8258E0A8;
	__imp__KeTlsGetValue(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// mullw r5,r26,r28
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8258c9d8
	ctx.lr = 0x8258E0B8;
	sub_8258C9D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82595248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,30824
	ctx.r11.s64 = ctx.r11.s64 + 30824;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82595278
	if (ctx.cr6.eq) goto loc_82595278;
	// bl 0x82491e98
	ctx.lr = 0x82595278;
	sub_82491E98(ctx, base);
loc_82595278:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29468
	ctx.r11.s64 = ctx.r11.s64 + 29468;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82597FA0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825985F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x82598600;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10144(r1)
	ea = -10144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,31516
	ctx.r5.s64 = ctx.r11.s64 + 31516;
	// li r4,10024
	ctx.r4.s64 = 10024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259a310
	ctx.lr = 0x82598628;
	sub_8259A310(ctx, base);
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8259a5f0
	ctx.lr = 0x82598638;
	sub_8259A5F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82598650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,10144
	ctx.r1.s64 = ctx.r1.s64 + 10144;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8259A6B0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8259A6C0:
	REX_LOOP_BARRIER();
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x8259a6e0
	if (ctx.cr6.lt) goto loc_8259A6E0;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x8259a6e0
	if (ctx.cr6.gt) goto loc_8259A6E0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
loc_8259A6E0:
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259a6c0
	if (!ctx.cr6.eq) goto loc_8259A6C0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8259C620) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26392(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x8259C640;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258ccf8
	ctx.lr = 0x8259C648;
	sub_8258CCF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8259D9A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29468
	ctx.r11.s64 = ctx.r11.s64 + 29468;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8259E4F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x8259E4F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-25904
	ctx.r31.s64 = ctx.r10.s64 + -25904;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// blt cr6,0x8259e844
	if (ctx.cr6.lt) goto loc_8259E844;
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// beq cr6,0x8259e844
	if (ctx.cr6.eq) goto loc_8259E844;
	// cmpwi cr6,r3,29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 29, ctx.xer);
	// beq cr6,0x8259e844
	if (ctx.cr6.eq) goto loc_8259E844;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x8259e698
	if (!ctx.cr6.eq) goto loc_8259E698;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259e570
	if (ctx.cr6.eq) goto loc_8259E570;
	// bl 0x82599518
	ctx.lr = 0x8259E558;
	sub_82599518(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-32720
	ctx.r4.s64 = ctx.r11.s64 + -32720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259ac00
	ctx.lr = 0x8259E56C;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E570:
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8259e628
	if (!ctx.cr6.eq) goto loc_8259E628;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,31876
	ctx.r30.s64 = ctx.r11.s64 + 31876;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259e5f8
	if (ctx.cr6.eq) goto loc_8259E5F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259a5f0
	ctx.lr = 0x8259E598;
	sub_8259A5F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,-8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8259e5b8
	if (ctx.cr6.lt) goto loc_8259E5B8;
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259e5e0
	if (!ctx.cr6.gt) goto loc_8259E5E0;
loc_8259E5B8:
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8259e5d0
	if (!ctx.cr0.lt) goto loc_8259E5D0;
	// bl 0x8259aa38
	ctx.lr = 0x8259E5D0;
	sub_8259AA38(ctx, base);
loc_8259E5D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ab18
	ctx.lr = 0x8259E5D8;
	sub_8259AB18(ctx, base);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8259E5E0:
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259a6f8
	ctx.lr = 0x8259E5EC;
	sub_8259A6F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r31.u32);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E5F8:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge cr6,0x8259e614
	if (!ctx.cr6.lt) goto loc_8259E614;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259aa38
	ctx.lr = 0x8259E610;
	sub_8259AA38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_8259E614:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E628:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,-32728
	ctx.r30.s64 = ctx.r11.s64 + -32728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259a5f0
	ctx.lr = 0x8259E638;
	sub_8259A5F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,-8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8259e658
	if (ctx.cr6.lt) goto loc_8259E658;
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259e680
	if (!ctx.cr6.gt) goto loc_8259E680;
loc_8259E658:
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8259e670
	if (!ctx.cr0.lt) goto loc_8259E670;
	// bl 0x8259aa38
	ctx.lr = 0x8259E670;
	sub_8259AA38(ctx, base);
loc_8259E670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ab18
	ctx.lr = 0x8259E678;
	sub_8259AB18(ctx, base);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8259E680:
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259a6f8
	ctx.lr = 0x8259E68C;
	sub_8259A6F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r31.u32);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E698:
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x8259e748
	if (ctx.cr6.eq) goto loc_8259E748;
	// cmpwi cr6,r3,26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 26, ctx.xer);
	// beq cr6,0x8259e748
	if (ctx.cr6.eq) goto loc_8259E748;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x8259e6cc
	if (!ctx.cr6.eq) goto loc_8259E6CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32736
	ctx.r4.s64 = ctx.r11.s64 + -32736;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8259ac00
	ctx.lr = 0x8259E6C8;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E6CC:
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// bne cr6,0x8259e6f0
	if (!ctx.cr6.eq) goto loc_8259E6F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-32748
	ctx.r4.s64 = ctx.r11.s64 + -32748;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8259ac00
	ctx.lr = 0x8259E6EC;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E6F0:
	// cmpwi cr6,r3,25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 25, ctx.xer);
	// bne cr6,0x8259e854
	if (!ctx.cr6.eq) goto loc_8259E854;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8259e728
	if (!ctx.cr6.eq) goto loc_8259E728;
	// bl 0x82599518
	ctx.lr = 0x8259E710;
	sub_82599518(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-32760
	ctx.r4.s64 = ctx.r11.s64 + -32760;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259ac00
	ctx.lr = 0x8259E724;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E728:
	// bl 0x82599518
	ctx.lr = 0x8259E72C;
	sub_82599518(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32760
	ctx.r4.s64 = ctx.r11.s64 + 32760;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8259ac00
	ctx.lr = 0x8259E744;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E748:
	// lbz r10,13(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8259e760
	if (!ctx.cr6.eq) goto loc_8259E760;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r31,r9,31968
	ctx.r31.s64 = ctx.r9.s64 + 31968;
	// b 0x8259e768
	goto loc_8259E768;
loc_8259E760:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r31,r9,31916
	ctx.r31.s64 = ctx.r9.s64 + 31916;
loc_8259E768:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x8259e810
	if (ctx.cr6.lt) goto loc_8259E810;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// beq cr6,0x8259e810
	if (ctx.cr6.eq) goto loc_8259E810;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x8259e7c4
	if (!ctx.cr6.eq) goto loc_8259E7C4;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259e7ac
	if (ctx.cr6.eq) goto loc_8259E7AC;
	// bl 0x82599518
	ctx.lr = 0x8259E790;
	sub_82599518(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,32744
	ctx.r4.s64 = ctx.r11.s64 + 32744;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259ac00
	ctx.lr = 0x8259E7A8;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E7AC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,32728
	ctx.r4.s64 = ctx.r11.s64 + 32728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259ac00
	ctx.lr = 0x8259E7C0;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E7C4:
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x8259e7f0
	if (!ctx.cr6.eq) goto loc_8259E7F0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82599518
	ctx.lr = 0x8259E7D4;
	sub_82599518(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,32708
	ctx.r4.s64 = ctx.r11.s64 + 32708;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259ac00
	ctx.lr = 0x8259E7EC;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E7F0:
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bne cr6,0x8259e854
	if (!ctx.cr6.eq) goto loc_8259E854;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,32680
	ctx.r4.s64 = ctx.r11.s64 + 32680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259ac00
	ctx.lr = 0x8259E80C;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E810:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,32216
	ctx.r11.s64 = ctx.r11.s64 + 32216;
	// addi r4,r9,32664
	ctx.r4.s64 = ctx.r9.s64 + 32664;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8259ac00
	ctx.lr = 0x8259E840;
	sub_8259AC00(ctx, base);
	// b 0x8259e854
	goto loc_8259E854;
loc_8259E844:
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8259ddf0
	ctx.lr = 0x8259E854;
	sub_8259DDF0(ctx, base);
loc_8259E854:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259a5e0
	ctx.lr = 0x8259E864;
	sub_8259A5E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// lwz r31,-12(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8259e884
	if (!ctx.cr0.lt) goto loc_8259E884;
	// bl 0x8259aa38
	ctx.lr = 0x8259E884;
	sub_8259AA38(ctx, base);
loc_8259E884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B8FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18148
	ctx.r11.s64 = ctx.r11.s64 + -18148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// sth r10,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BC228) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_825BD0B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vpermwi128 v11,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v8,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// vpermwi128 v10,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// vpermwi128 v9,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// addi r11,r11,-22312
	ctx.r11.s64 = ctx.r11.s64 + -22312;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v12,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vmsum3fp128 v6,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmulfp128 v11,v11,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vmulfp128 v8,v8,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vor v7,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltw v10,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// addi r3,r1,-28
	ctx.r3.s64 = ctx.r1.s64 + -28;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + -16));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,5328(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vor v11,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmsum3fp128 v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + -32));
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stvewx v6,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,-32(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + -32));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lvlx v0,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvlx v13,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v7,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum4fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xFF));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825CD038) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x825CD040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32042
	ctx.r29.s64 = -2099904512;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825cd07c
	if (!ctx.cr6.eq) goto loc_825CD07C;
	// lwz r3,-26392(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -26392);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x828bb21c
	ctx.lr = 0x825CD06C;
	__imp__KeTlsGetValue(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8258c9d8
	ctx.lr = 0x825CD07C;
	sub_8258C9D8(ctx, base);
loc_825CD07C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// addi r11,r11,29468
	ctx.r11.s64 = ctx.r11.s64 + 29468;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825cd0ac
	if (ctx.cr6.eq) goto loc_825CD0AC;
	// lwz r3,-26392(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x825CD09C;
	__imp__KeTlsGetValue(ctx, base);
	// li r6,29
	ctx.r6.s64 = 29;
	// lhz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258c9d8
	ctx.lr = 0x825CD0AC;
	sub_8258C9D8(ctx, base);
loc_825CD0AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825D2C90) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D3958) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// addi r11,r11,14944
	ctx.r11.s64 = ctx.r11.s64 + 14944;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r8,r8,11608
	ctx.r8.s64 = ctx.r8.s64 + 11608;
	// addi r9,r9,15448
	ctx.r9.s64 = ctx.r9.s64 + 15448;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r10,r10,16256
	ctx.r10.s64 = ctx.r10.s64 + 16256;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r30,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
	// bl 0x825c9da0
	ctx.lr = 0x825D39C0;
	sub_825C9DA0(ctx, base);
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// stb r30,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// stb r30,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r30.u8);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r8,r8,11712
	ctx.r8.s64 = ctx.r8.s64 + 11712;
	// addi r9,r9,11816
	ctx.r9.s64 = ctx.r9.s64 + 11816;
	// addi r10,r10,13888
	ctx.r10.s64 = ctx.r10.s64 + 13888;
	// addi r11,r11,-23696
	ctx.r11.s64 = ctx.r11.s64 + -23696;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x825c9da0
	ctx.lr = 0x825D3A0C;
	sub_825C9DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DA6D8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DA728) {
	REX_FUNC_PROLOGUE();
	// lbz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825da738
	if (ctx.cr6.eq) goto loc_825DA738;
	// b 0x825eae10
	sub_825EAE10(ctx, base);
	return;
loc_825DA738:
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x82642770
	sub_82642770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825DBAA0) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DBAE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-13580
	ctx.r11.s64 = ctx.r11.s64 + -13580;
	// sth r10,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DBED8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DC078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26392(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x825DC098;
	__imp__KeTlsGetValue(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r4,r11,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x825dc0d0
	if (ctx.cr6.gt) goto loc_825DC0D0;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825DC0D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DE010) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efdc
	ctx.lr = 0x825DE018;
	__savegprlr_21(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-25984
	ctx.r28.s64 = ctx.r11.s64 + -25984;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x828bb21c
	ctx.lr = 0x825DE040;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825de06c
	if (!ctx.cr6.lt) goto loc_825DE06C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,-12952
	ctx.r10.s64 = ctx.r10.s64 + -12952;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mftb r10
	ctx.r10.u64 = REX_QUERY_TIMEBASE();
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_825DE06C:
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a1b98
	ctx.lr = 0x825DE084;
	sub_825A1B98(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// li r23,48
	ctx.r23.s64 = 48;
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r22,64
	ctx.r22.s64 = 64;
	// lvx128 v0,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// li r21,144
	ctx.r21.s64 = 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vpermwi128 v7,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v8,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vor v6,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vspltw v10,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v8,v7,v8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmsum3fp128 v7,v0,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v0,v12,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vsubfp v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvewx v7,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 12));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// lfs f0,12(r8)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r8.u32 + 12));
	// lfs f12,80(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 80));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// vmaddfp v0,v9,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v6,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stfs f0,220(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r29,r10,32
	ctx.r29.s64 = ctx.r10.s64 + 32;
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v9,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v7,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vpermwi128 v10,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vspltw v6,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vspltw v0,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v11,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v10,v9,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// stvewx v7,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r6.u32 + 12));
	// lwz r3,12(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r8,r8,-32368
	ctx.r8.s64 = ctx.r8.s64 + -32368;
	// lfs f13,12(r7)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r7.u32 + 12));
	// lfs f12,80(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 80));
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
	// vsubfp v12,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// fmsubs f0,f0,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// vmaddfp v12,v9,v6,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v8,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f0,236(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lvx128 v12,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r10,r23
	ea = (ctx.r10.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v11,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmsum3fp128 v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r9,r21
	ea = (ctx.r9.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,160(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 160));
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DE230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x828bb21c
	ctx.lr = 0x825DE238;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825de264
	if (!ctx.cr6.lt) goto loc_825DE264;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-6960
	ctx.r10.s64 = ctx.r10.s64 + -6960;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mftb r10
	ctx.r10.u64 = REX_QUERY_TIMEBASE();
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_825DE264:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8248f02c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825FC628) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x827cfdd0
	sub_827CFDD0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825FCF90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x825FCF98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-8652
	ctx.r11.s64 = ctx.r11.s64 + -8652;
	// addi r31,r29,224
	ctx.r31.s64 = ctx.r29.s64 + 224;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_825FCFB4:
	REX_LOOP_BARRIER();
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fcff8
	if (ctx.cr6.eq) goto loc_825FCFF8;
	// lhz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fcff8
	if (ctx.cr6.eq) goto loc_825FCFF8;
	// lhz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x825fcff8
	if (!ctx.cr6.eq) goto loc_825FCFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FCFF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825FCFF8:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825fcfb4
	if (!ctx.cr6.eq) goto loc_825FCFB4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29468
	ctx.r11.s64 = ctx.r11.s64 + 29468;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82601548) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82601AD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-8652
	ctx.r3.s64 = ctx.r11.s64 + -8652;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82601C80) {
	REX_FUNC_PROLOGUE();
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82601FA0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-8396
	ctx.r11.s64 = ctx.r11.s64 + -8396;
	// sth r10,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82602978) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82602bb8
	ctx.lr = 0x82602990;
	sub_82602BB8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82603988) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,10564
	ctx.r3.s64 = ctx.r11.s64 + 10564;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82603F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r5,48
	ctx.r5.s64 = 48;
	// lfs f0,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r9,r11,11184
	ctx.r9.s64 = ctx.r11.s64 + 11184;
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// li r4,250
	ctx.r4.s64 = 250;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// sth r10,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r30,20
	ctx.r30.s64 = 20;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,-6940(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -6940));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lfs f12,30460(r9)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 30460));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,11176(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 11176));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lfs f0,5328(r9)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 5328));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,15476(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 15476));
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f13,-24(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lfs f11,-10032(r9)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r9.u32 + -10032));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f10,11172(r9)
	ctx.f10.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 11172));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f9,11168(r9)
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 11168));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-27436(r9)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r9.u32 + -27436));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,30408(r9)
	ctx.f8.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 30408));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f7,30464(r9)
	ctx.f7.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 30464));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f6,-6928(r9)
	ctx.f6.f64 = double(REX_LOAD_F32(ctx.r9.u32 + -6928));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f5,-6868(r9)
	ctx.f5.f64 = double(REX_LOAD_F32(ctx.r9.u32 + -6868));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f4,30180(r9)
	ctx.f4.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 30180));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// stvx128 v0,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stb r10,182(r3)
	REX_STORE_U8(ctx.r3.u32 + 182, ctx.r10.u8);
	// stfs f12,116(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r6,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// stvx128 v13,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r4,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// stw r31,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stb r11,132(r3)
	REX_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stfs f10,136(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f9,140(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stb r11,144(r3)
	REX_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f8,176(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f7,172(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f4,148(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r11,145(r3)
	REX_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// lfs f12,30056(r9)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 30056));
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r30.u32);
	// stb r10,180(r3)
	REX_STORE_U8(ctx.r3.u32 + 180, ctx.r10.u8);
	// stb r10,167(r3)
	REX_STORE_U8(ctx.r3.u32 + 167, ctx.r10.u8);
	// stb r11,168(r3)
	REX_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stw r8,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// stfs f12,192(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stb r11,164(r3)
	REX_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// stb r11,165(r3)
	REX_STORE_U8(ctx.r3.u32 + 165, ctx.r11.u8);
	// stb r11,166(r3)
	REX_STORE_U8(ctx.r3.u32 + 166, ctx.r11.u8);
	// stb r9,112(r3)
	REX_STORE_U8(ctx.r3.u32 + 112, ctx.r9.u8);
	// stb r9,181(r3)
	REX_STORE_U8(ctx.r3.u32 + 181, ctx.r9.u8);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stb r10,188(r3)
	REX_STORE_U8(ctx.r3.u32 + 188, ctx.r10.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82618748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12440
	ctx.r11.s64 = ctx.r11.s64 + 12440;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8261877c
	if (ctx.cr6.eq) goto loc_8261877C;
	// bl 0x820d0060
	ctx.lr = 0x82618778;
	sub_820D0060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8261877C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261B688) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,12548
	ctx.r11.s64 = ctx.r11.s64 + 12548;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261C460) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efec
	ctx.lr = 0x8261C468;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8261c4a8
	if (!ctx.cr6.eq) goto loc_8261C4A8;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258df80
	ctx.lr = 0x8261C4A8;
	sub_8258DF80(ctx, base);
loc_8261C4A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stw r30,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// stvx128 v0,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lhz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261c504
	if (ctx.cr6.eq) goto loc_8261C504;
	// lhz r10,6(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r10.u16);
loc_8261C504:
	// stw r26,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r26.u32);
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261c520
	if (ctx.cr6.eq) goto loc_8261C520;
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r26)
	REX_STORE_U16(ctx.r26.u32 + 6, ctx.r10.u16);
loc_8261C520:
	// stw r25,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r25.u32);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261c53c
	if (ctx.cr6.eq) goto loc_8261C53C;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r25)
	REX_STORE_U16(ctx.r25.u32 + 6, ctx.r10.u16);
loc_8261C53C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// addi r10,r10,-25872
	ctx.r10.s64 = ctx.r10.s64 + -25872;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826290B0) {
	REX_FUNC_PROLOGUE();
	// stb r4,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82629120) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82629188) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82629A70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x82629A78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32042
	ctx.r29.s64 = -2099904512;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82629ab4
	if (!ctx.cr6.eq) goto loc_82629AB4;
	// lwz r3,-26392(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -26392);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x828bb21c
	ctx.lr = 0x82629AA4;
	__imp__KeTlsGetValue(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8258c9d8
	ctx.lr = 0x82629AB4;
	sub_8258C9D8(ctx, base);
loc_82629AB4:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82629b04
	if (ctx.cr6.eq) goto loc_82629B04;
	// lwz r3,-26392(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x82629AC8;
	__imp__KeTlsGetValue(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82629ae8
	if (ctx.cr6.lt) goto loc_82629AE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8258c860
	ctx.lr = 0x82629AE8;
	sub_8258C860(ctx, base);
loc_82629AE8:
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82629B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8262EBA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x8262EBA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r30,40(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lbzx r29,r11,r10
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r28,40(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8262ebf8
	if (!ctx.cr6.eq) goto loc_8262EBF8;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8262EBF8:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// bne cr6,0x8262ec0c
	if (!ctx.cr6.eq) goto loc_8262EC0C;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
loc_8262EC0C:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8262f8e0
	ctx.lr = 0x8262EC2C;
	sub_8262F8E0(ctx, base);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,63(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 63);
	// andi. r10,r10,253
	ctx.r10.u64 = ctx.r10.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,63(r11)
	REX_STORE_U8(ctx.r11.u32 + 63, ctx.r10.u8);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8262f9a0
	ctx.lr = 0x8262EC60;
	sub_8262F9A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8262eca8
	if (ctx.cr6.lt) goto loc_8262ECA8;
loc_8262EC78:
	REX_LOOP_BARRIER();
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x8262ec9c
	if (ctx.cr6.eq) goto loc_8262EC9C;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8262ec9c
	if (!ctx.cr6.gt) goto loc_8262EC9C;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_8262EC9C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8262ec78
	if (!ctx.cr6.lt) goto loc_8262EC78;
loc_8262ECA8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82604db8
	ctx.lr = 0x8262ECB8;
	sub_82604DB8(ctx, base);
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8262ece0
	if (ctx.cr6.eq) goto loc_8262ECE0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r6,2(r5)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82623510
	ctx.lr = 0x8262ECD4;
	sub_82623510(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8262ECE0:
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// sth r11,16(r30)
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8263A7A0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263A7B8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263E5D0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263EDC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 28));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f0,5328(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// li r11,0
	ctx.r11.s64 = 0;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stvx v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lfs f13,-16544(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -16544));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vaddfp v0,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vspltw v13,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// stvx v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vrlimi128 v0,v13,1,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 228), 1));
	// stvx v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 12));
	// lfs f0,30236(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 30236));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bl 0x8263d800
	ctx.lr = 0x8263EE9C;
	sub_8263D800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826520D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x826520E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lbz r11,9(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// lbz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r10,11(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265213C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82652164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82651258
	ctx.lr = 0x8265217C;
	sub_82651258(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652194
	if (ctx.cr6.eq) goto loc_82652194;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8264fb88
	ctx.lr = 0x82652194;
	sub_8264FB88(ctx, base);
loc_82652194:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 108));
	// lfs f0,16(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 16));
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lfs f12,16(r10)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 16));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v11,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vmulfp128 v13,v10,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// vmaddfp v13,v10,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v9,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stfs f0,12(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// lfs f12,16(r31)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 16));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x826522bc
	if (!ctx.cr6.lt) goto loc_826522BC;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265222c
	if (!ctx.cr6.eq) goto loc_8265222C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f0,16(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 16));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// b 0x82652268
	goto loc_82652268;
loc_8265222C:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 16));
	// bne cr6,0x82652254
	if (!ctx.cr6.eq) goto loc_82652254;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// b 0x82652268
	goto loc_82652268;
loc_82652254:
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
loc_82652268:
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v13,v11,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)));
	// stvx v0,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
loc_826522BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82663698) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x826636A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826636d0
	if (!ctx.cr6.eq) goto loc_826636D0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258df80
	ctx.lr = 0x826636D0;
	sub_8258DF80(ctx, base);
loc_826636D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82669AD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8266A2E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26392(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x8266A300;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258ccf8
	ctx.lr = 0x8266A308;
	sub_8258CCF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8266AB50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efdc
	ctx.lr = 0x8266AB58;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 116);
	// lwz r23,112(r27)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r27.u32 + 112);
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r11,r24
	ctx.r21.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8266acbc
	if (!ctx.cr6.lt) goto loc_8266ACBC;
loc_8266AB94:
	REX_LOOP_BARRIER();
	// lwz r28,0(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8266acac
	if (ctx.cr6.eq) goto loc_8266ACAC;
loc_8266ABA4:
	REX_LOOP_BARRIER();
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266abbc
	if (!ctx.cr6.eq) goto loc_8266ABBC;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// rlwinm r28,r28,24,8,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFFFFFF;
	// b 0x8266aca4
	goto loc_8266ACA4;
loc_8266ABBC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266ac9c
	if (ctx.cr6.eq) goto loc_8266AC9C;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,4(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r11,r11,0,16,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266ac9c
	if (!ctx.cr6.eq) goto loc_8266AC9C;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266ac4c
	if (!ctx.cr6.eq) goto loc_8266AC4C;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8266ac28
	if (!ctx.cr6.eq) goto loc_8266AC28;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8258df80
	ctx.lr = 0x8266AC28;
	sub_8258DF80(ctx, base);
loc_8266AC28:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r11,r9
	REX_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u64);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// b 0x8266ac9c
	goto loc_8266AC9C;
loc_8266AC4C:
	// lwz r10,168(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 168);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r30,r25,16
	ctx.r30.u64 = ctx.r25.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8266ac80
	if (!ctx.cr6.eq) goto loc_8266AC80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258df80
	ctx.lr = 0x8266AC80;
	sub_8258DF80(ctx, base);
loc_8266AC80:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8266AC9C:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_8266ACA4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8266aba4
	if (!ctx.cr6.eq) goto loc_8266ABA4;
loc_8266ACAC:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r23,r23,512
	ctx.r23.s64 = ctx.r23.s64 + 512;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8266ab94
	if (ctx.cr6.lt) goto loc_8266AB94;
loc_8266ACBC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8248f02c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82678180) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826781c8
	if (!ctx.cr6.eq) goto loc_826781C8;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r3,-26392(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x826781B8;
	__imp__KeTlsGetValue(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r31,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8258c9d8
	ctx.lr = 0x826781C8;
	sub_8258C9D8(ctx, base);
loc_826781C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82678E38) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82679010) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8267905c
	if (!ctx.cr6.lt) goto loc_8267905C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8267904c
	if (ctx.cr6.lt) goto loc_8267904C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8267904C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258def0
	ctx.lr = 0x8267905C;
	sub_8258DEF0(ctx, base);
loc_8267905C:
	// stw r31,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267E698) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efec
	ctx.lr = 0x8267E6A0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r31,108
	ctx.r28.s64 = ctx.r31.s64 + 108;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8267eba0
	if (ctx.cr6.gt) goto loc_8267EBA0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,3
	ctx.r25.s64 = 3;
	// lfs f30,5328(r9)
	ctx.f30.f64 = double(REX_LOAD_F32(ctx.r9.u32 + 5328));
	// lfs f31,4180(r10)
	ctx.f31.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 4180));
	// lis r12,-32152
	ctx.r12.s64 = -2107113472;
	// addi r12,r12,-6400
	ctx.r12.s64 = ctx.r12.s64 + -6400;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8267E8C8;
	case 1:
		goto loc_8267E88C;
	case 2:
		goto loc_8267E844;
	case 3:
		goto loc_8267E7C4;
	case 4:
		goto loc_8267E714;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8267E714:
	REX_LOOP_BARRIER();
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r5,r9,48
	ctx.r5.s64 = ctx.r9.s64 + 48;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v13,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 84));
	// lfs f13,80(r31)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 80));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,88(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 88));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8267eb88
	if (ctx.cr6.gt) goto loc_8267EB88;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x8267ea04
	if (!ctx.cr6.lt) goto loc_8267EA04;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267E7C4:
	REX_LOOP_BARRIER();
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v0,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v13,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx v13,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 92));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8267e91c
	if (!ctx.cr6.eq) goto loc_8267E91C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x8267ea1c
	if (!ctx.cr6.lt) goto loc_8267EA1C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267E844:
	REX_LOOP_BARRIER();
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v0,v0,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 80));
	// lfs f13,96(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 96));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8267e90c
	if (ctx.cr6.gt) goto loc_8267E90C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x8267ea04
	if (!ctx.cr6.lt) goto loc_8267EA04;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267E88C:
	REX_LOOP_BARRIER();
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 80));
	// lfs f13,100(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 100));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8267e8fc
	if (ctx.cr6.gt) goto loc_8267E8FC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8267ea04
	if (!ctx.cr6.lt) goto loc_8267EA04;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267E8C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267e0c8
	ctx.lr = 0x8267E8D8;
	sub_8267E0C8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267e9ec
	if (!ctx.cr6.eq) goto loc_8267E9EC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8267e88c
	goto loc_8267E88C;
loc_8267E8FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8267e258
	ctx.lr = 0x8267E908;
	sub_8267E258(ctx, base);
	// b 0x8267e844
	goto loc_8267E844;
loc_8267E90C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x8267e398
	ctx.lr = 0x8267E918;
	sub_8267E398(ctx, base);
	// b 0x8267e7c4
	goto loc_8267E7C4;
loc_8267E91C:
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stvx v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 160));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bl 0x8267e5d0
	ctx.lr = 0x8267E968;
	sub_8267E5D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8267e714
	if (!ctx.cr6.eq) goto loc_8267E714;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f31,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stvx v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bl 0x82645540
	ctx.lr = 0x8267E99C;
	sub_82645540(ctx, base);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vspltw v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v0,v13,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8267E9EC:
	// stw r27,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
loc_8267EA04:
	// stw r25,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
loc_8267EA1C:
	// stfs f31,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 144));
	// lfs f13,148(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 148));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,152(r1)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 152));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8267ea74
	if (!ctx.cr6.lt) goto loc_8267EA74;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8267EA74:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8267ea80
	if (!ctx.cr6.lt) goto loc_8267EA80;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8267EA80:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stvx v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + ctx.r9.u32));
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// lfsx f13,r10,r8
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r8.u32));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r11,r29
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfsx f0,r10,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 160));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// addi r11,r11,-31024
	ctx.r11.s64 = ctx.r11.s64 + -31024;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,-32352
	ctx.r11.s64 = ctx.r11.s64 + -32352;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// vand v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmsum3fp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 100));
	// lfs f13,96(r1)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r1.u32 + 96));
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,-11292(r10)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r10.u32 + -11292));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v13,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r27,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
loc_8267EB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
loc_8267EBA0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B01E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826afe58
	ctx.lr = 0x826B0200;
	sub_826AFE58(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826b022c
	if (!ctx.cr6.gt) goto loc_826B022C;
	// li r9,2
	ctx.r9.s64 = 2;
loc_826B0218:
	REX_LOOP_BARRIER();
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826b0218
	if (ctx.cr6.lt) goto loc_826B0218;
loc_826B022C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
	// stb r11,41(r31)
	REX_STORE_U8(ctx.r31.u32 + 41, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B4D48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826B5070) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B50D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,30468
	ctx.r3.s64 = ctx.r11.s64 + 30468;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B5C40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 12));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826b5c88
	if (!ctx.cr6.gt) goto loc_826B5C88;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826B5C88:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r11
	ctx.r8.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BDD48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32042
	ctx.r11.s64 = -2099904512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26392(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26392);
	// bl 0x828bb21c
	ctx.lr = 0x826BDD68;
	__imp__KeTlsGetValue(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r4,r11,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x826bdda0
	if (ctx.cr6.gt) goto loc_826BDDA0;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826BDDA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BDDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C0AD8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826c0ae8
	if (!ctx.cr6.eq) goto loc_826C0AE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_826C0AE8:
	// lwz r11,31992(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31992);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C0CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826c9a60
	ctx.lr = 0x826C0D0C;
	sub_826C9A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c0d20
	if (!ctx.cr6.eq) goto loc_826C0D20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826cb1a0
	ctx.lr = 0x826C0D20;
	sub_826CB1A0(ctx, base);
loc_826C0D20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826c9a60
	ctx.lr = 0x826C1434;
	sub_826C9A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c1444
	if (!ctx.cr6.eq) goto loc_826C1444;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826d2590
	ctx.lr = 0x826C1444;
	sub_826D2590(ctx, base);
loc_826C1444:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1C30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x826c9a60
	ctx.lr = 0x826C1C54;
	sub_826C9A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c1c6c
	if (!ctx.cr6.eq) goto loc_826C1C6C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826cc400
	ctx.lr = 0x826C1C6C;
	sub_826CC400(ctx, base);
loc_826C1C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C2D18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x826C2D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x826d3090
	ctx.lr = 0x826C2D38;
	sub_826D3090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c2d54
	if (!ctx.cr6.eq) goto loc_826C2D54;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d3d00
	ctx.lr = 0x826C2D54;
	sub_826D3D00(ctx, base);
loc_826C2D54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C4168) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff8
	ctx.lr = 0x826C4170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x826d4220
	ctx.lr = 0x826C418C;
	sub_826D4220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826c41b0
	if (ctx.cr6.eq) goto loc_826C41B0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c41c8
	if (ctx.cr6.eq) goto loc_826C41C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
loc_826C41B0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d65a8
	ctx.lr = 0x826C41C8;
	sub_826D65A8(ctx, base);
loc_826C41C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f048
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C5880) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// lwz r11,-24628(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -24628);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_826C5890:
	REX_LOOP_BARRIER();
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826c58bc
	if (ctx.cr6.eq) goto loc_826C58BC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826c5890
	if (!ctx.cr6.eq) goto loc_826C5890;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826C58A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c58c4
	if (!ctx.cr6.eq) goto loc_826C58C4;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_826C58BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826c58a8
	goto loc_826C58A8;
loc_826C58C4:
	// b 0x826c1bd8
	sub_826C1BD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C6AD8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826c6ae8
	if (!ctx.cr6.eq) goto loc_826C6AE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_826C6AE8:
	// b 0x826c3de8
	sub_826C3DE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C7278) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826c7288
	if (!ctx.cr6.eq) goto loc_826C7288;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_826C7288:
	// b 0x826c8d98
	sub_826C8D98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C8060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x826db2d8
	ctx.lr = 0x826C8084;
	sub_826DB2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c80bc
	if (!ctx.cr6.eq) goto loc_826C80BC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c80a4
	if (ctx.cr6.eq) goto loc_826C80A4;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x826c80bc
	goto loc_826C80BC;
loc_826C80A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C80BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C80BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826CBF88) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826cbf98
	if (!ctx.cr6.eq) goto loc_826CBF98;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_826CBF98:
	// lwz r11,928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cbfac
	if (!ctx.cr6.eq) goto loc_826CBFAC;
	// li r3,71
	ctx.r3.s64 = 71;
	// blr 
	return;
loc_826CBFAC:
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826cbfe4
	if (ctx.cr6.eq) goto loc_826CBFE4;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// addi r10,r10,19504
	ctx.r10.s64 = ctx.r10.s64 + 19504;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x826cbfd8
	if (!ctx.cr6.eq) goto loc_826CBFD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826CBFD8:
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_826CBFE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826D3DF8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826d3e08
	if (!ctx.cr6.eq) goto loc_826D3E08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_826D3E08:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826D4AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x826D4AF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4bac
	if (ctx.cr6.eq) goto loc_826D4BAC;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r27,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4b2c
	if (ctx.cr6.eq) goto loc_826D4B2C;
	// lwz r11,31740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31740);
	// stw r11,136(r30)
	REX_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
loc_826D4B2C:
	// lwz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,29,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// lfs f0,5328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,204(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// stfs f0,248(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 248, temp.u32);
	// stfs f0,208(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// stfs f0,200(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// stw r10,116(r30)
	REX_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// lfs f12,100(r29)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r29.u32 + 100));
	// stfs f12,240(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r30.u32 + 240, temp.u32);
	// lfs f12,104(r29)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r29.u32 + 104));
	// lfs f13,4180(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// stfs f12,244(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r30.u32 + 244, temp.u32);
	// stfs f13,236(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// lfs f12,108(r29)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r29.u32 + 108));
	// stfs f12,252(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r30.u32 + 252, temp.u32);
	// lfs f12,112(r29)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r29.u32 + 112));
	// stfs f12,256(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// lfs f12,116(r29)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r29.u32 + 116));
	// stfs f12,260(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r30.u32 + 260, temp.u32);
	// stfs f13,264(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r30.u32 + 264, temp.u32);
	// stfs f13,268(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r30.u32 + 268, temp.u32);
	// stfs f0,272(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 272, temp.u32);
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// stw r11,292(r30)
	REX_STORE_U32(ctx.r30.u32 + 292, ctx.r11.u32);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// stfs f0,304(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 304, temp.u32);
	// stfs f0,308(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 308, temp.u32);
	// stw r11,296(r30)
	REX_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
loc_826D4BAC:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d4cb4
	if (!ctx.cr6.gt) goto loc_826D4CB4;
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
	// addi r26,r29,212
	ctx.r26.s64 = ctx.r29.s64 + 212;
loc_826D4BC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4cc0
	if (ctx.cr6.eq) goto loc_826D4CC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D4BE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4bfc
	if (ctx.cr6.eq) goto loc_826D4BFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r29.u32);
	// b 0x826d4c1c
	goto loc_826D4C1C;
loc_826D4BFC:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x826d4c10
	if (!ctx.cr6.gt) goto loc_826D4C10;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x826d4c14
	goto loc_826D4C14;
loc_826D4C10:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826D4C14:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
loc_826D4C1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// stw r10,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D4C94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826d4cb8
	if (!ctx.cr6.eq) goto loc_826D4CB8;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826d4bc4
	if (ctx.cr6.lt) goto loc_826D4BC4;
loc_826D4CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D4CB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
loc_826D4CC0:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826E4C30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x826e4c40
	if (!ctx.cr6.eq) goto loc_826E4C40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826E4C40:
	// b 0x826e4980
	sub_826E4980(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826E5668) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826e5678
	if (!ctx.cr6.eq) goto loc_826E5678;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_826E5678:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E6B98) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x826e6ba8
	if (!ctx.cr6.eq) goto loc_826E6BA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826E6BA8:
	// b 0x826e66e0
	sub_826E66E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826E7540) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x826e7568
	if (!ctx.cr6.lt) goto loc_826E7568;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x826e7574
	goto loc_826E7574;
loc_826E7568:
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// ble cr6,0x826e7578
	if (!ctx.cr6.gt) goto loc_826E7578;
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_826E7574:
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
loc_826E7578:
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f1,26808(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26808);
	// stw r10,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,30180(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 30180));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,-15520(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -15520));
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82492b98
	ctx.lr = 0x826E75C4;
	sub_82492B98(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,316(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f0,-31040(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -31040);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,464(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 464, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826EE3C0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x826ee3d0
	if (!ctx.cr6.eq) goto loc_826EE3D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826EE3D0:
	// b 0x826ee180
	sub_826EE180(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826EF2B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826ef300
	if (ctx.cr6.eq) goto loc_826EF300;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-27080
	ctx.r5.s64 = ctx.r11.s64 + -27080;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// li r6,148
	ctx.r6.s64 = 148;
	// lwz r11,-24628(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -24628);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826da298
	ctx.lr = 0x826EF2F8;
	sub_826DA298(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_826EF300:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F2180) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f5,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f6,0(r10)
	ctx.f6.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 0));
	// fmuls f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f11,f3,f7
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f13,30240(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 30240));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,30236(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 30236));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f12,f12,f13,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmadds f11,f11,f13,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f8,f12,f7,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmadds f12,f11,f7,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f1.f64)));
	// lfs f11,-5940(r11)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5940));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmsubs f10,f10,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fmsubs f9,f9,f13,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f2.f64)));
	// lfs f13,5328(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmsubs f7,f4,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, -ctx.f7.f64)));
	// fmsubs f11,f1,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f11.f64)));
	// fdivs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fadds f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FDBE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff0
	ctx.lr = 0x826FDBF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r27,-32101
	ctx.r27.s64 = -2103771136;
	// lwz r11,10084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10084);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r28,r11,-23296
	ctx.r28.s64 = ctx.r11.s64 + -23296;
	// beq cr6,0x826fdc84
	if (ctx.cr6.eq) goto loc_826FDC84;
	// lwz r11,10060(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10060);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826fdc68
	if (!ctx.cr6.gt) goto loc_826FDC68;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_826FDC28:
	REX_LOOP_BARRIER();
	// lwz r11,10084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10084);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826fdc54
	if (ctx.cr6.eq) goto loc_826FDC54;
	// lwz r11,-24628(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -24628);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3255
	ctx.r6.s64 = 3255;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826da298
	ctx.lr = 0x826FDC54;
	sub_826DA298(ctx, base);
loc_826FDC54:
	// lwz r11,10060(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10060);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826fdc28
	if (ctx.cr6.lt) goto loc_826FDC28;
loc_826FDC68:
	// lwz r11,-24628(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -24628);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3258
	ctx.r6.s64 = 3258;
	// lwz r4,10084(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 10084);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826da298
	ctx.lr = 0x826FDC84;
	sub_826DA298(ctx, base);
loc_826FDC84:
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826fdcac
	if (ctx.cr6.eq) goto loc_826FDCAC;
	// lwz r11,-24628(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -24628);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3263
	ctx.r6.s64 = 3263;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826da298
	ctx.lr = 0x826FDCA8;
	sub_826DA298(ctx, base);
	// stw r26,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r26.u32);
loc_826FDCAC:
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fdcc0
	if (ctx.cr6.eq) goto loc_826FDCC0;
	// bl 0x826e5348
	ctx.lr = 0x826FDCBC;
	sub_826E5348(ctx, base);
	// stw r26,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
loc_826FDCC0:
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826fdce8
	if (ctx.cr6.eq) goto loc_826FDCE8;
	// lwz r11,-24628(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -24628);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3274
	ctx.r6.s64 = 3274;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826da298
	ctx.lr = 0x826FDCE4;
	sub_826DA298(ctx, base);
	// stw r26,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r26.u32);
loc_826FDCE8:
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fdd0c
	if (ctx.cr6.eq) goto loc_826FDD0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FDD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r26.u32);
loc_826FDD0C:
	// lwz r3,10100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 10100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fdd30
	if (ctx.cr6.eq) goto loc_826FDD30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FDD2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,10100(r31)
	REX_STORE_U32(ctx.r31.u32 + 10100, ctx.r26.u32);
loc_826FDD30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f040
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827146E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-22000
	ctx.r5.s64 = ctx.r11.s64 + -22000;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,227
	ctx.r6.s64 = 227;
	// lwz r11,-24628(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -24628);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826da298
	sub_826DA298(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82715DF0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82715e00
	if (!ctx.cr6.eq) goto loc_82715E00;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82715E00:
	// b 0x82715700
	sub_82715700(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82716860) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82716870
	if (!ctx.cr6.eq) goto loc_82716870;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82716870:
	// b 0x827164a0
	sub_827164A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82718718) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82718728
	if (!ctx.cr6.eq) goto loc_82718728;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82718728:
	// b 0x827183b0
	sub_827183B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8271A8E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r31,r11,-12688
	ctx.r31.s64 = ctx.r11.s64 + -12688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82490540
	ctx.lr = 0x8271A910;
	sub_82490540(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r7,-32142
	ctx.r7.s64 = -2106458112;
	// addi r11,r11,-21492
	ctx.r11.s64 = ctx.r11.s64 + -21492;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r7,-22320
	ctx.r11.s64 = ctx.r7.s64 + -22320;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r8,-23232
	ctx.r11.s64 = ctx.r8.s64 + -23232;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r9,-23224
	ctx.r11.s64 = ctx.r9.s64 + -23224;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r10,-23216
	ctx.r11.s64 = ctx.r10.s64 + -23216;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r11,216
	ctx.r11.s64 = 216;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8271D718) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d770
	if (ctx.cr6.eq) goto loc_8271D770;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826e0fe0
	ctx.lr = 0x8271D740;
	sub_826E0FE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271d774
	if (!ctx.cr6.eq) goto loc_8271D774;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271d774
	if (!ctx.cr6.eq) goto loc_8271D774;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8271D770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271D774:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82720D20) {
	REX_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827212F8) {
	REX_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827216F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efec
	ctx.lr = 0x827216F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x826dd048
	ctx.lr = 0x82721714;
	sub_826DD048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8272176c
	if (!ctx.cr6.eq) goto loc_8272176C;
	// lwz r11,208(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 208);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82721768
	if (!ctx.cr6.gt) goto loc_82721768;
	// addi r31,r29,212
	ctx.r31.s64 = ctx.r29.s64 + 212;
loc_82721730:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82721754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 208);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82721730
	if (ctx.cr6.lt) goto loc_82721730;
loc_82721768:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8272176C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8248f03c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82724498) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r10,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stb r11,37(r3)
	REX_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82726068) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x82726070;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827260c4
	if (!ctx.cr6.gt) goto loc_827260C4;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
loc_82726098:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827260B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82726098
	if (ctx.cr6.lt) goto loc_82726098;
loc_827260C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827292D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827292e8
	if (!ctx.cr6.eq) goto loc_827292E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_827292E8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x827292f8
	if (!ctx.cr6.eq) goto loc_827292F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827292F8:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 96));
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827293ec
	if (!ctx.cr6.eq) goto loc_827293EC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bge cr6,0x827293ec
	if (!ctx.cr6.lt) goto loc_827293EC;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,0(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 0));
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 4));
	// bne cr6,0x82729368
	if (!ctx.cr6.eq) goto loc_82729368;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,8(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 8));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,12(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 12));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,16(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 16));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,20(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 20));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82729468
	goto loc_82729468;
loc_82729368:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f0,8(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 8));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f0,12(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 12));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,16(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 16));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,20(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 20));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,24(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 24));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,28(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 28));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,32(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 32));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,36(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 36));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,40(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 40));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,44(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 44));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x82729468
	goto loc_82729468;
loc_827293EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82729468
	if (!ctx.cr6.gt) goto loc_82729468;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// lfs f0,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
loc_82729408:
	REX_LOOP_BARRIER();
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82729450
	if (!ctx.cr6.gt) goto loc_82729450;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_8272941C:
	REX_LOOP_BARRIER();
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82729438
	if (!ctx.cr6.lt) goto loc_82729438;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r6.u32 + ctx.r4.u32));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8272943c
	goto loc_8272943C;
loc_82729438:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8272943C:
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8272941c
	if (ctx.cr6.lt) goto loc_8272941C;
loc_82729450:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82729408
	if (ctx.cr6.lt) goto loc_82729408;
loc_82729468:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,144(r3)
	REX_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// b 0x82728988
	sub_82728988(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8273AEF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8273af10
	if (ctx.cr6.eq) goto loc_8273AF10;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8273AF10:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8273af28
	if (!ctx.cr6.eq) goto loc_8273AF28;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,236(r11)
	REX_STORE_U32(ctx.r11.u32 + 236, ctx.r10.u32);
	// b 0x8273af3c
	goto loc_8273AF3C;
loc_8273AF28:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8273af3c
	if (!ctx.cr6.eq) goto loc_8273AF3C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_8273AF3C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82753c00
	sub_82753C00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8273CA50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efe4
	ctx.lr = 0x8273CA58;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r30,r11,-17120
	ctx.r30.s64 = ctx.r11.s64 + -17120;
	// li r6,307
	ctx.r6.s64 = 307;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r4,r10,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x826da6c8
	ctx.lr = 0x8273CA84;
	sub_826DA6C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,308
	ctx.r6.s64 = 308;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x826da6c8
	ctx.lr = 0x8273CAA4;
	sub_826DA6C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,309
	ctx.r5.s64 = 309;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x826da620
	ctx.lr = 0x8273CAC0;
	sub_826DA620(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,310
	ctx.r5.s64 = 310;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x826da620
	ctx.lr = 0x8273CADC;
	sub_826DA620(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273cda0
	if (!ctx.cr6.gt) goto loc_8273CDA0;
	// li r23,-1
	ctx.r23.s64 = -1;
loc_8273CAF4:
	REX_LOOP_BARRIER();
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8273cb34
	if (!ctx.cr6.eq) goto loc_8273CB34;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273cbb0
	if (ctx.cr6.eq) goto loc_8273CBB0;
	// lwz r11,700(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273CB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// std r24,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r24.u64);
	// bl 0x8275a1c0
	ctx.lr = 0x8273CB30;
	sub_8275A1C0(ctx, base);
	// b 0x8273cbb0
	goto loc_8273CBB0;
loc_8273CB34:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ldx r30,r11,r29
	ctx.r30.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r29.u32);
	// beq cr6,0x8273cb6c
	if (ctx.cr6.eq) goto loc_8273CB6C;
	// lwz r11,700(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273CB60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// std r30,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// bl 0x8275a1c0
	ctx.lr = 0x8273CB6C;
	sub_8275A1C0(ctx, base);
loc_8273CB6C:
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273c900
	ctx.lr = 0x8273CB94;
	sub_8273C900(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8273cba8
	if (!ctx.cr6.lt) goto loc_8273CBA8;
	// stdx r23,r29,r11
	REX_STORE_U64(ctx.r29.u32 + ctx.r11.u32, ctx.r23.u64);
	// b 0x8273cbb0
	goto loc_8273CBB0;
loc_8273CBA8:
	// ld r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// stdx r10,r29,r11
	REX_STORE_U64(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u64);
loc_8273CBB0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r25,r28,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x8273ccd0
	if (ctx.cr6.eq) goto loc_8273CCD0;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r26,r28,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r31,112
	ctx.r27.s64 = ctx.r31.s64 + 112;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwzx r4,r26,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x8275a228
	ctx.lr = 0x8273CBE4;
	sub_8275A228(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273c4d8
	ctx.lr = 0x8273CBF4;
	sub_8273C4D8(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x8273ccc4
	if (ctx.cr6.lt) goto loc_8273CCC4;
loc_8273CBFC:
	REX_LOOP_BARRIER();
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82759208
	ctx.lr = 0x8273CC04;
	sub_82759208(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8273ccb8
	if (!ctx.cr6.eq) goto loc_8273CCB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82759dc0
	ctx.lr = 0x8273CC20;
	sub_82759DC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8275a3a8
	ctx.lr = 0x8273CC2C;
	sub_8275A3A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273cc80
	if (ctx.cr6.eq) goto loc_8273CC80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_8273CC38:
	REX_LOOP_BARRIER();
	// ble cr6,0x8273cc6c
	if (!ctx.cr6.gt) goto loc_8273CC6C;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8275a798
	ctx.lr = 0x8273CC50;
	sub_8275A798(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8273cc68
	if (ctx.cr6.eq) goto loc_8273CC68;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// sradi r11,r11,2
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 2;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8273CC68:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8273CC6C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8275a3a8
	ctx.lr = 0x8273CC78;
	sub_8275A3A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273cc38
	if (!ctx.cr6.eq) goto loc_8273CC38;
loc_8273CC80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827591a8
	ctx.lr = 0x8273CC88;
	sub_827591A8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x8273ccac
	if (!ctx.cr6.eq) goto loc_8273CCAC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273c4d8
	ctx.lr = 0x8273CCA0;
	sub_8273C4D8(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x8273cbfc
	if (!ctx.cr6.lt) goto loc_8273CBFC;
	// b 0x8273ccb8
	goto loc_8273CCB8;
loc_8273CCAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827591a8
	ctx.lr = 0x8273CCB4;
	sub_827591A8(ctx, base);
	// subf r29,r29,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r29.u64;
loc_8273CCB8:
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(ctx.r29.s64, 0, ctx.xer);
	// bge cr6,0x8273ccc4
	if (!ctx.cr6.lt) goto loc_8273CCC4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8273CCC4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stdx r29,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u64);
loc_8273CCD0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// beq cr6,0x8273cd08
	if (ctx.cr6.eq) goto loc_8273CD08;
	// lwz r11,700(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8273CCFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// std r30,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// bl 0x8275a1c0
	ctx.lr = 0x8273CD08;
	sub_8275A1C0(ctx, base);
loc_8273CD08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273c600
	ctx.lr = 0x8273CD14;
	sub_8273C600(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// blt cr6,0x8273cd4c
	if (ctx.cr6.lt) goto loc_8273CD4C;
loc_8273CD20:
	REX_LOOP_BARRIER();
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827591a8
	ctx.lr = 0x8273CD28;
	sub_827591A8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x8273cd70
	if (!ctx.cr6.eq) goto loc_8273CD70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273c600
	ctx.lr = 0x8273CD40;
	sub_8273C600(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bge cr6,0x8273cd20
	if (!ctx.cr6.lt) goto loc_8273CD20;
loc_8273CD4C:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x827409a0
	ctx.lr = 0x8273CD5C;
	sub_827409A0(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82740850
	ctx.lr = 0x8273CD6C;
	sub_82740850(ctx, base);
	// b 0x8273cd90
	goto loc_8273CD90;
loc_8273CD70:
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x827591a8
	ctx.lr = 0x8273CD84;
	sub_827591A8(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// std r11,8(r30)
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_8273CD90:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8273caf4
	if (ctx.cr6.lt) goto loc_8273CAF4;
loc_8273CDA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8248f034
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8275A500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efe8
	ctx.lr = 0x8275A508;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r25,4(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,104(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r26,28(r25)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// bl 0x8275a998
	ctx.lr = 0x8275A52C;
	sub_8275A998(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8275c8e0
	ctx.lr = 0x8275A53C;
	sub_8275C8E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8275cc08
	ctx.lr = 0x8275A548;
	sub_8275CC08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275a55c
	if (ctx.cr6.eq) goto loc_8275A55C;
	// li r3,-135
	ctx.r3.s64 = -135;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f038
	__restgprlr_24(ctx, base);
	return;
loc_8275A55C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x8275cc08
	ctx.lr = 0x8275A568;
	sub_8275CC08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8275a5c0
	if (ctx.cr6.eq) goto loc_8275A5C0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r24,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r26.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x8275a5cc
	if (ctx.cr6.eq) goto loc_8275A5CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8275cc08
	ctx.lr = 0x8275A5A0;
	sub_8275CC08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x8275cc08
	ctx.lr = 0x8275A5B4;
	sub_8275CC08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x8275a5d4
	if (!ctx.cr6.eq) goto loc_8275A5D4;
loc_8275A5C0:
	// li r3,-136
	ctx.r3.s64 = -136;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f038
	__restgprlr_24(ctx, base);
	return;
loc_8275A5CC:
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8275A5D4:
	// ld r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,48(r31)
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// ld r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 24);
	// std r11,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwzx r11,r10,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8275a8e8
	ctx.lr = 0x8275A60C;
	sub_8275A8E8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8275a64c
	if (!ctx.cr6.gt) goto loc_8275A64C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8275A620:
	REX_LOOP_BARRIER();
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8275a8e8
	ctx.lr = 0x8275A630;
	sub_8275A8E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8275a620
	if (ctx.cr6.lt) goto loc_8275A620;
loc_8275A64C:
	// lwzx r9,r24,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r26.u32);
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,29484
	ctx.r10.s64 = ctx.r11.s64 + 29484;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lwzx r4,r8,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8275A68C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f038
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82766398) {
	REX_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82766510) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efe8
	ctx.lr = 0x82766518;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r9,-12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + -12);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r7,-16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x82766628
	if (ctx.cr6.eq) goto loc_82766628;
loc_82766578:
	REX_LOOP_BARRIER();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// blt cr6,0x8276658c
	if (ctx.cr6.lt) goto loc_8276658C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8276658C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// blt cr6,0x827665a8
	if (ctx.cr6.lt) goto loc_827665A8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_827665A8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// blt cr6,0x827665c8
	if (ctx.cr6.lt) goto loc_827665C8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_827665C8:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// blt cr6,0x827665e8
	if (ctx.cr6.lt) goto loc_827665E8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_827665E8:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82766604
	if (!ctx.cr6.lt) goto loc_82766604;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82766604:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82766578
	if (!ctx.cr6.eq) goto loc_82766578;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x8276662c
	if (ctx.cr6.lt) goto loc_8276662C;
loc_82766628:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276662C:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8276664c
	if (!ctx.cr6.lt) goto loc_8276664C;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82766644
	if (!ctx.cr6.lt) goto loc_82766644;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82766650
	goto loc_82766650;
loc_82766644:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82766650
	goto loc_82766650;
loc_8276664C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82766650:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82766690
	if (!ctx.cr6.lt) goto loc_82766690;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x82766668
	if (ctx.cr6.lt) goto loc_82766668;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82766668:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82766688
	if (!ctx.cr6.lt) goto loc_82766688;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82766680
	if (!ctx.cr6.lt) goto loc_82766680;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82766694
	goto loc_82766694;
loc_82766680:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82766694
	goto loc_82766694;
loc_82766688:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82766694
	goto loc_82766694;
loc_82766690:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82766694:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827666a4
	if (!ctx.cr6.lt) goto loc_827666A4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82766714
	goto loc_82766714;
loc_827666A4:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x827666b4
	if (ctx.cr6.lt) goto loc_827666B4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827666B4:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x827666d4
	if (!ctx.cr6.lt) goto loc_827666D4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x827666cc
	if (!ctx.cr6.lt) goto loc_827666CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x827666d8
	goto loc_827666D8;
loc_827666CC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x827666d8
	goto loc_827666D8;
loc_827666D4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827666D8:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827666e8
	if (!ctx.cr6.lt) goto loc_827666E8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82766714
	goto loc_82766714;
loc_827666E8:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x827666f8
	if (ctx.cr6.lt) goto loc_827666F8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827666F8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82766708
	if (!ctx.cr6.lt) goto loc_82766708;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82766714
	goto loc_82766714;
loc_82766708:
	// subfc r11,r27,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r27.u32;
	ctx.r11.u64 = ctx.r29.u64 - ctx.r27.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82766714:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfd f30,19912(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 19912);
	// lfd f31,-11936(r10)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -11936);
	// lfd f29,-27176(r11)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -27176);
	// beq cr6,0x82766768
	if (ctx.cr6.eq) goto loc_82766768;
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x82491ab0
	ctx.lr = 0x82766760;
	sub_82491AB0(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// b 0x8276676c
	goto loc_8276676C;
loc_82766768:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_8276676C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// beq cr6,0x827667b0
	if (ctx.cr6.eq) goto loc_827667B0;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x82491ab0
	ctx.lr = 0x827667A8;
	sub_82491AB0(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// b 0x827667b4
	goto loc_827667B4;
loc_827667B0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_827667B4:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// beq cr6,0x827667f8
	if (ctx.cr6.eq) goto loc_827667F8;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x82491ab0
	ctx.lr = 0x827667F0;
	sub_82491AB0(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// b 0x827667fc
	goto loc_827667FC;
loc_827667F8:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_827667FC:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stfs f0,8(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// beq cr6,0x82766840
	if (ctx.cr6.eq) goto loc_82766840;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x82491ab0
	ctx.lr = 0x82766838;
	sub_82491AB0(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// b 0x82766844
	goto loc_82766844;
loc_82766840:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_82766844:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stfs f0,12(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// beq cr6,0x82766888
	if (ctx.cr6.eq) goto loc_82766888;
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x82491ab0
	ctx.lr = 0x82766880;
	sub_82491AB0(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64;
	// b 0x8276688c
	goto loc_8276688C;
loc_82766888:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_8276688C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8248f038
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8277EB80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,1380
	ctx.r11.s64 = ctx.r11.s64 + 1380;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82779788
	sub_82779788(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8277FE98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277a690
	ctx.lr = 0x8277FEB8;
	sub_8277A690(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// bl 0x8277a6d0
	ctx.lr = 0x8277FEC8;
	sub_8277A6D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277a690
	ctx.lr = 0x8277FED8;
	sub_8277A690(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,82(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 82);
	// bl 0x8277a6d0
	ctx.lr = 0x8277FEE8;
	sub_8277A6D0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,211
	ctx.r4.s64 = 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277aae8
	ctx.lr = 0x8277FEFC;
	sub_8277AAE8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277a458
	ctx.lr = 0x8277FF08;
	sub_8277A458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82783B08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8213d588
	ctx.lr = 0x82783B4C;
	sub_8213D588(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82783b5c
	if (!ctx.cr6.eq) goto loc_82783B5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82783b6c
	goto loc_82783B6C;
loc_82783B5C:
	// subf r11,r31,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82783B6C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827867D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,116
	ctx.r31.s64 = ctx.r30.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82779438
	ctx.lr = 0x827867F4;
	sub_82779438(ctx, base);
	// b 0x82786818
	goto loc_82786818;
loc_827867F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827794a8
	ctx.lr = 0x82786800;
	sub_827794A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82786810;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82779458
	ctx.lr = 0x82786818;
	sub_82779458(ctx, base);
loc_82786818:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x827867f8
	if (!ctx.cr0.eq) goto loc_827867F8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82788DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248efe8
	ctx.lr = 0x82788DC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82788e2c
	if (!ctx.cr6.eq) goto loc_82788E2C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82788e2c
	if (ctx.cr6.eq) goto loc_82788E2C;
loc_82788DF8:
	// bl 0x82499020
	ctx.lr = 0x82788DFC;
	sub_82499020(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82498e68
	ctx.lr = 0x82788E20;
	sub_82498E68(ctx, base);
loc_82788E20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82788E24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8248f038
	__restgprlr_24(ctx, base);
	return;
loc_82788E2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82788df8
	if (ctx.cr6.eq) goto loc_82788DF8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82788df8
	if (ctx.cr6.eq) goto loc_82788DF8;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82788e20
	if (ctx.cr6.gt) goto loc_82788E20;
loc_82788E44:
	// rlwinm. r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82788eb4
	if (ctx.cr0.eq) goto loc_82788EB4;
	// clrlwi. r27,r5,31
	ctx.r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82788e5c
	if (!ctx.cr0.eq) goto loc_82788E5C;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_82788E5C:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82788E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82788eac
	if (ctx.cr0.eq) goto loc_82788EAC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82788e98
	if (!ctx.cr6.lt) goto loc_82788E98;
	// subf r24,r30,r31
	ctx.r24.u64 = ctx.r31.u64 - ctx.r30.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82788e9c
	if (!ctx.cr6.eq) goto loc_82788E9C;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// b 0x82788ea0
	goto loc_82788EA0;
loc_82788E98:
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82788E9C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82788EA0:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82788e44
	if (!ctx.cr6.gt) goto loc_82788E44;
	// b 0x82788e20
	goto loc_82788E20;
loc_82788EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82788e24
	goto loc_82788E24;
loc_82788EB4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82788e20
	if (ctx.cr6.eq) goto loc_82788E20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82788ECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82788e24
	if (!ctx.cr0.eq) goto loc_82788E24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82788e24
	goto loc_82788E24;
}

DEFINE_REX_FUNC(sub_827958D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,42
	ctx.r6.s64 = 42;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82795708
	ctx.lr = 0x827958F4;
	sub_82795708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827969C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828bb2fc
	ctx.lr = 0x827969D8;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x828bb4cc
	ctx.lr = 0x827969FC;
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82796a0c
	if (ctx.cr0.lt) goto loc_82796A0C;
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x82796a14
	goto loc_82796A14;
loc_82796A0C:
	// bl 0x82137e38
	ctx.lr = 0x82796A10;
	sub_82137E38(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82796A14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82797B20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-32160
	ctx.r31.s64 = ctx.r11.s64 + -32160;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828ba9fc
	ctx.lr = 0x82797B48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,-9948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82797b6c
	if (!ctx.cr6.eq) goto loc_82797B6C;
loc_82797B5C:
	// bl 0x828ba9ec
	ctx.lr = 0x82797B60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82797b84
	goto loc_82797B84;
loc_82797B6C:
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82797b5c
	if (ctx.cr6.eq) goto loc_82797B5C;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x828ba9ec
	ctx.lr = 0x82797B80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82797B84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8279A948) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248effc
	ctx.lr = 0x8279A950;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x827a6658
	ctx.lr = 0x8279A960;
	sub_827A6658(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279a998
	if (ctx.cr6.eq) goto loc_8279A998;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a998
	if (ctx.cr6.eq) goto loc_8279A998;
	// lwz r10,-4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279A998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8279A998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f04c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8279CFA8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8279bef8
	sub_8279BEF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8279F3F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8279F710) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8279F7E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827A1C58) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,143
	ctx.r11.s64 = ctx.r11.s64 + 143;
	// rlwinm r7,r11,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x827a1ca8
	if (ctx.cr6.eq) goto loc_827A1CA8;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_827A1C80:
	REX_LOOP_BARRIER();
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x827a1c80
	if (!ctx.cr6.eq) goto loc_827A1C80;
loc_827A1CA8:
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827A2EA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827A3C40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x827a3c64
	if (!ctx.cr6.lt) goto loc_827A3C64;
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lwz r11,-9948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9948);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r10.u32 + ctx.r11.u32));
	// b 0x827a3c6c
	goto loc_827A3C6C;
loc_827A3C64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
loc_827A3C6C:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f13,140(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 140));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,88(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827A60C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827a60f8
	if (ctx.cr6.eq) goto loc_827A60F8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_827A60F8:
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827A8940) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827A9610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,20(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 20));
	// lfs f12,16(r3)
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 16));
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lfs f7,5328(r10)
	ctx.f7.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 5328));
	// blt cr6,0x827a96e0
	if (ctx.cr6.lt) goto loc_827A96E0;
	// lfs f0,28(r3)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 28));
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// fsubs f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f11,24(r3)
	ctx.f11.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 24));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
loc_827A9650:
	REX_LOOP_BARRIER();
	// lfs f6,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 0));
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	ctx.f5.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 4));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f4,8(r4)
	ctx.f4.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 8));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f3,12(r4)
	ctx.f3.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 12));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmadds f12,f0,f12,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// fmadds f9,f13,f8,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f9.f64)));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f12,f5,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmuls f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f9,f13,f8,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f12,f4,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f9,f13,f8,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f12,f6,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f9,f13,f8,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f6.f64)));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x827a9650
	if (!ctx.cr6.eq) goto loc_827A9650;
loc_827A96E0:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x827a9730
	if (ctx.cr6.gt) goto loc_827A9730;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 28));
	// subf r10,r9,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r9.u64;
	// fsubs f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f13,24(r3)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 24));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
loc_827A9700:
	REX_LOOP_BARRIER();
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f9,0(r4)
	ctx.f9.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 0));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmadds f12,f13,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f9,f13,f11,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f10.f64)));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x827a9700
	if (!ctx.cr6.eq) goto loc_827A9700;
loc_827A9730:
	// stfs f12,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B2690) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// vspltisb v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x1)));
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// vsubfp v0,v0,v2
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vsr v13,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vcfux v13,v13,31
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// vsldoi v0,v2,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx v13,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vupkhsh v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vcfsx v13,v13,15
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvlx v12,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vupkhsh v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16))));
	// vsldoi v0,v0,v2,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 8));
	// vcfsx v12,v12,15
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vrlimi128 v13,v12,8,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 8));
	// vmsum3fp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827BDEA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 36));
	// lbz r5,13(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r8,r5,r11
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// blt cr6,0x827bdef0
	if (ctx.cr6.lt) goto loc_827BDEF0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_827BDEF0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r3.u32 + 40));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f13,-5340(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -5340));
loc_827BDF1C:
	REX_LOOP_BARRIER();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827bdf68
	if (ctx.cr6.eq) goto loc_827BDF68;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_827BDF30:
	REX_LOOP_BARRIER();
	// lhz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
	// bne cr6,0x827bdf30
	if (!ctx.cr6.eq) goto loc_827BDF30;
loc_827BDF68:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fadds f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827bdf1c
	if (!ctx.cr6.eq) goto loc_827BDF1C;
	// lbz r10,13(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r9,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x827bdfac
	if (ctx.cr6.lt) goto loc_827BDFAC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_827BDFAC:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827bdfcc
	if (!ctx.cr6.lt) goto loc_827BDFCC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827BDFCC:
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C4A68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c6c68
	ctx.lr = 0x827C4A80;
	sub_827C6C68(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,13440
	ctx.r11.s64 = ctx.r11.s64 + 13440;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C5188) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x827C5190;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x827c4c60
	ctx.lr = 0x827C519C;
	sub_827C4C60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827c525c
	if (ctx.cr6.eq) goto loc_827C525C;
	// bl 0x828bbaec
	ctx.lr = 0x827C51AC;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10056
	ctx.r31.s64 = ctx.r11.s64 + -10056;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827c51d4
	if (ctx.cr6.eq) goto loc_827C51D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827c51e8
	if (ctx.cr6.eq) goto loc_827C51E8;
loc_827C51D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828bb6dc
	ctx.lr = 0x827C51DC;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_827C51E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827c525c
	if (ctx.cr6.eq) goto loc_827C525C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827c525c
	if (!ctx.cr6.eq) goto loc_827C525C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x827c525c
	if (!ctx.cr6.eq) goto loc_827C525C;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828bb6cc
	ctx.lr = 0x827C5254;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828bbafc
	ctx.lr = 0x827C525C;
	__imp__KfLowerIrql(ctx, base);
loc_827C525C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827C7B28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C7BC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C8430) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827c7fe0
	ctx.lr = 0x827C8454;
	sub_827C7FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827CB668) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827cb5e0
	ctx.lr = 0x827CB684;
	sub_827CB5E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827CC1E0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827CC870) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827CC890:
	REX_LOOP_BARRIER();
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x827cc8d8
	if (ctx.cr6.lt) goto loc_827CC8D8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x827cc8d8
	if (ctx.cr6.lt) goto loc_827CC8D8;
loc_827CC8AC:
	REX_LOOP_BARRIER();
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x827cc8ac
	if (!ctx.cr6.lt) goto loc_827CC8AC;
loc_827CC8D8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x827cc890
	if (!ctx.cr6.eq) goto loc_827CC890;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827CFC48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8248eff4
	ctx.lr = 0x827CFC50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,32
	ctx.r27.s64 = 32;
	// addi r11,r30,144
	ctx.r11.s64 = ctx.r30.s64 + 144;
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// li r28,48
	ctx.r28.s64 = 48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vxor v0,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_setzero_si128());
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r31,r27
	ea = (ctx.r31.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r31,r28
	ea = (ctx.r31.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bl 0x827d04f8
	ctx.lr = 0x827CFC90;
	sub_827D04F8(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx128 v0,r30,r28
	ea = (ctx.r30.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v13,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v11,r30,r27
	ea = (ctx.r30.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v10,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v9,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,4180(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r10.u32 + 4180));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltw v8,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lfs f13,12(r31)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r31.u32 + 12));
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)));
	// lvx128 v12,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v13,v12,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v0,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8248f044
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827DBEB8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827DBEE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vspltw v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// stvx v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827DC8C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lvx128 v8,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmulfp128 v13,v8,v88
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v88.f32)));
	// vor128 v11,v87,v87
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v87.u8));
	// vor128 v10,v90,v90
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v90.u8));
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// lvewx v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vaddfp v9,v9,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v7,v91
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v91.f32)));
	// vmaddfp v13,v0,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvewx v9,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// vmaddfp v0,v0,v12,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vor128 v87,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v90,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827EB908) {
	REX_FUNC_PROLOGUE();
	// b 0x825a24b8
	sub_825A24B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827EBA68) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mulli r11,r11,308
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(308));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827EC7E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827EC8A8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827ECFC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lwz r9,52(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// lfs f13,32(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 32));
	// addi r11,r10,64
	ctx.r11.s64 = ctx.r10.s64 + 64;
	// addi r7,r9,64
	ctx.r7.s64 = ctx.r9.s64 + 64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// stvx v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// vsubfp v12,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vsubfp v11,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vpermwi128 v0,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// vpermwi128 v10,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vpermwi128 v13,v12,99
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x9C));
	// vpermwi128 v12,v12,135
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x78));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vsubfp v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// bne cr6,0x827ed064
	if (!ctx.cr6.eq) goto loc_827ED064;
	// addi r11,r10,80
	ctx.r11.s64 = ctx.r10.s64 + 80;
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vmulfp128 v13,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v13,v10,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
loc_827ED064:
	// stvx v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vpermwi128 v13,v11,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x78));
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vpermwi128 v11,v11,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v12,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// vpermwi128 v0,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// vmulfp128 v13,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// vmulfp128 v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// vsubfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// bne cr6,0x827ed0d8
	if (!ctx.cr6.eq) goto loc_827ED0D8;
	// addi r8,r9,80
	ctx.r8.s64 = ctx.r9.s64 + 80;
	// vspltw v13,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// vspltw v0,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// vmulfp128 v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmaddfp v13,v11,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
loc_827ED0D8:
	// stvx v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vmulfp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vmulfp128 v13,v13,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r11,-32352
	ctx.r11.s64 = ctx.r11.s64 + -32352;
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// vaddfp v9,v12,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, REX_BSWAP128(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea))));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vmulfp128 v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v0,v9,1,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 1));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(REX_LOAD_F32(ctx.r1.u32 + -16));
	// lfs f0,-11292(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + -11292));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f0,28(r4)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r4.u32 + 28));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827FC7E0) {
	REX_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r10,r11,-25104
	ctx.r10.s64 = ctx.r11.s64 + -25104;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r9,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r9,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828017A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-8
	ctx.r9.s64 = ctx.r1.s64 + -8;
	// addi r8,r1,-4
	ctx.r8.s64 = ctx.r1.s64 + -4;
	// lfs f0,4180(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 4180));
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// vrlimi128 v0,v12,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828034E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// addi r3,r11,29184
	ctx.r3.s64 = ctx.r11.s64 + 29184;
	// bl 0x828baaac
	ctx.lr = 0x828034F8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-28032
	ctx.r3.s64 = ctx.r11.s64 + -28032;
	// bl 0x824900d0
	ctx.lr = 0x82803504;
	sub_824900D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82803BD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r3,r11,-26656
	ctx.r3.s64 = ctx.r11.s64 + -26656;
	// b 0x824900d0
	sub_824900D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82803E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// lfs f0,5328(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5328));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,31388(r11)
	ctx.f0.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 31388));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,5516(r11)
	ctx.f13.f64 = double(REX_LOAD_F32(ctx.r11.u32 + 5516));
	// addi r11,r1,-4
	ctx.r11.s64 = ctx.r1.s64 + -4;
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, REX_SHUFFLE_TABLE(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), &VectorMaskL[(temp.u32 & 0xF) * 16]));
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// vrlimi128 v0,v12,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// addi r11,r11,-10784
	ctx.r11.s64 = ctx.r11.s64 + -10784;
	// vrlimi128 v0,v13,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), REX_BSWAP128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82806A48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,11
	ctx.r8.s64 = 11;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r10,-30052
	ctx.r4.s64 = ctx.r10.s64 + -30052;
	// addi r11,r11,-30272
	ctx.r11.s64 = ctx.r11.s64 + -30272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25012
	ctx.r3.s64 = ctx.r10.s64 + -25012;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82806A98;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82808118) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-26064
	ctx.r5.s64 = ctx.r10.s64 + -26064;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r10,-21184
	ctx.r4.s64 = ctx.r10.s64 + -21184;
	// addi r11,r11,-21352
	ctx.r11.s64 = ctx.r11.s64 + -21352;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23136
	ctx.r3.s64 = ctx.r10.s64 + -23136;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x825994e0
	ctx.lr = 0x8280816C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8280A138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,-21024
	ctx.r5.s64 = ctx.r10.s64 + -21024;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r10,1188
	ctx.r4.s64 = ctx.r10.s64 + 1188;
	// addi r11,r11,1048
	ctx.r11.s64 = ctx.r11.s64 + 1048;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19640
	ctx.r3.s64 = ctx.r10.s64 + -19640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x825994e0
	ctx.lr = 0x8280A18C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8280C1D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r10,17752
	ctx.r4.s64 = ctx.r10.s64 + 17752;
	// addi r11,r11,17612
	ctx.r11.s64 = ctx.r11.s64 + 17612;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16828
	ctx.r3.s64 = ctx.r10.s64 + -16828;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8280C220;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8280E138) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r10,r10,24488
	ctx.r10.s64 = ctx.r10.s64 + 24488;
	// lwz r11,-6264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6264);
	// stw r11,248(r10)
	REX_STORE_U32(ctx.r10.u32 + 248, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8280EF18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r5,r10,-10640
	ctx.r5.s64 = ctx.r10.s64 + -10640;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r4,r10,-14860
	ctx.r4.s64 = ctx.r10.s64 + -14860;
	// addi r11,r11,-3368
	ctx.r11.s64 = ctx.r11.s64 + -3368;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10352
	ctx.r3.s64 = ctx.r10.s64 + -10352;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8280EF6C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82811280) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r10,r10,26504
	ctx.r10.s64 = ctx.r10.s64 + 26504;
	// lwz r11,2660(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2660);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82811AD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r4,r10,-12428
	ctx.r4.s64 = ctx.r10.s64 + -12428;
	// addi r11,r11,4016
	ctx.r11.s64 = ctx.r11.s64 + 4016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8084
	ctx.r3.s64 = ctx.r10.s64 + -8084;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82811B20;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82813EF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-11144
	ctx.r5.s64 = ctx.r10.s64 + -11144;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r4,r10,-21496
	ctx.r4.s64 = ctx.r10.s64 + -21496;
	// addi r11,r11,9444
	ctx.r11.s64 = ctx.r11.s64 + 9444;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3656
	ctx.r3.s64 = ctx.r10.s64 + -3656;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82813F44;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828165B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-4556
	ctx.r5.s64 = ctx.r10.s64 + -4556;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r4,r10,1684
	ctx.r4.s64 = ctx.r10.s64 + 1684;
	// addi r11,r11,14856
	ctx.r11.s64 = ctx.r11.s64 + 14856;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8300
	ctx.r3.s64 = ctx.r10.s64 + -8300;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82816604;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82818D20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r5,r10,7648
	ctx.r5.s64 = ctx.r10.s64 + 7648;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r4,r10,-16392
	ctx.r4.s64 = ctx.r10.s64 + -16392;
	// addi r11,r11,27408
	ctx.r11.s64 = ctx.r11.s64 + 27408;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6568
	ctx.r3.s64 = ctx.r10.s64 + 6568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82818D74;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8281B520) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,11032
	ctx.r5.s64 = ctx.r10.s64 + 11032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r4,r10,-13328
	ctx.r4.s64 = ctx.r10.s64 + -13328;
	// addi r11,r11,-29760
	ctx.r11.s64 = ctx.r11.s64 + -29760;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6748
	ctx.r3.s64 = ctx.r10.s64 + 6748;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8281B574;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8281DD80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,11968
	ctx.r5.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r4,r10,-27756
	ctx.r4.s64 = ctx.r10.s64 + -27756;
	// addi r11,r11,-22988
	ctx.r11.s64 = ctx.r11.s64 + -22988;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6856
	ctx.r3.s64 = ctx.r10.s64 + 6856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8281DDD4;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82820958) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,5488
	ctx.r5.s64 = ctx.r10.s64 + 5488;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r4,r10,904
	ctx.r4.s64 = ctx.r10.s64 + 904;
	// addi r11,r11,-18036
	ctx.r11.s64 = ctx.r11.s64 + -18036;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10312
	ctx.r3.s64 = ctx.r10.s64 + 10312;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828209AC;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82823420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r5,r10,12976
	ctx.r5.s64 = ctx.r10.s64 + 12976;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r4,r10,29384
	ctx.r4.s64 = ctx.r10.s64 + 29384;
	// addi r11,r11,-10928
	ctx.r11.s64 = ctx.r11.s64 + -10928;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7072
	ctx.r3.s64 = ctx.r10.s64 + 7072;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82823474;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82826220) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// addi r10,r10,26944
	ctx.r10.s64 = ctx.r10.s64 + 26944;
	// lwz r11,3612(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3612);
	// stw r11,128(r10)
	REX_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82826AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r4,r10,27524
	ctx.r4.s64 = ctx.r10.s64 + 27524;
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19744
	ctx.r3.s64 = ctx.r10.s64 + 19744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82826B08;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828295E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// addi r9,r11,-1328
	ctx.r9.s64 = ctx.r11.s64 + -1328;
	// addi r5,r10,17548
	ctx.r5.s64 = ctx.r10.s64 + 17548;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r9,72
	ctx.r8.s64 = ctx.r9.s64 + 72;
	// li r7,7
	ctx.r7.s64 = 7;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r4,r10,-23376
	ctx.r4.s64 = ctx.r10.s64 + -23376;
	// addi r11,r11,28568
	ctx.r11.s64 = ctx.r11.s64 + 28568;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17728
	ctx.r3.s64 = ctx.r10.s64 + 17728;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82829644;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8282C6B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32108
	ctx.r11.s64 = -2104229888;
	// addi r4,r10,1648
	ctx.r4.s64 = ctx.r10.s64 + 1648;
	// addi r11,r11,18280
	ctx.r11.s64 = ctx.r11.s64 + 18280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32042
	ctx.r10.s64 = -2099904512;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29032
	ctx.r3.s64 = ctx.r10.s64 + 29032;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8282C700;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8282F1E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r9,r10,3436
	ctx.r9.s64 = ctx.r10.s64 + 3436;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r5,r10,-23328
	ctx.r5.s64 = ctx.r10.s64 + -23328;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-4984
	ctx.r11.s64 = ctx.r11.s64 + -4984;
	// addi r4,r10,-15992
	ctx.r4.s64 = ctx.r10.s64 + -15992;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26316
	ctx.r3.s64 = ctx.r10.s64 + -26316;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x825994e0
	ctx.lr = 0x8282F240;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828321B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r4,r10,-12912
	ctx.r4.s64 = ctx.r10.s64 + -12912;
	// addi r11,r11,-25468
	ctx.r11.s64 = ctx.r11.s64 + -25468;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19368
	ctx.r3.s64 = ctx.r10.s64 + -19368;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82832208;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82834EF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-32328
	ctx.r5.s64 = ctx.r10.s64 + -32328;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r4,r10,-21496
	ctx.r4.s64 = ctx.r10.s64 + -21496;
	// addi r11,r11,-18924
	ctx.r11.s64 = ctx.r11.s64 + -18924;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25272
	ctx.r3.s64 = ctx.r10.s64 + -25272;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82834F44;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82837F70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r10,8356
	ctx.r9.s64 = ctx.r10.s64 + 8356;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r4,r10,2376
	ctx.r4.s64 = ctx.r10.s64 + 2376;
	// addi r11,r11,-12688
	ctx.r11.s64 = ctx.r11.s64 + -12688;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26964
	ctx.r3.s64 = ctx.r10.s64 + -26964;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82837FC4;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8283AE68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-8424
	ctx.r5.s64 = ctx.r10.s64 + -8424;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r4,r10,-14676
	ctx.r4.s64 = ctx.r10.s64 + -14676;
	// addi r11,r11,2196
	ctx.r11.s64 = ctx.r11.s64 + 2196;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10224
	ctx.r3.s64 = ctx.r10.s64 + -10224;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8283AEBC;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8283DEC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r4,r10,-25656
	ctx.r4.s64 = ctx.r10.s64 + -25656;
	// addi r11,r11,9504
	ctx.r11.s64 = ctx.r11.s64 + 9504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7056
	ctx.r3.s64 = ctx.r10.s64 + -7056;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8283DF10;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82840F70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r4,r10,4884
	ctx.r4.s64 = ctx.r10.s64 + 4884;
	// addi r11,r11,15328
	ctx.r11.s64 = ctx.r11.s64 + 15328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3492
	ctx.r3.s64 = ctx.r10.s64 + -3492;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82840FC0;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82843E10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// addi r4,r10,-16248
	ctx.r4.s64 = ctx.r10.s64 + -16248;
	// addi r11,r11,28224
	ctx.r11.s64 = ctx.r11.s64 + 28224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9432
	ctx.r3.s64 = ctx.r10.s64 + 9432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82843E60;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82846C08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r10,-12992
	ctx.r4.s64 = ctx.r10.s64 + -12992;
	// addi r11,r11,-29752
	ctx.r11.s64 = ctx.r11.s64 + -29752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,936
	ctx.r3.s64 = ctx.r10.s64 + 936;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82846C58;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82849C00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-23728
	ctx.r8.s64 = ctx.r10.s64 + -23728;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r10,9324
	ctx.r5.s64 = ctx.r10.s64 + 9324;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,20224
	ctx.r11.s64 = ctx.r11.s64 + 20224;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-192
	ctx.r4.s64 = ctx.r10.s64 + -192;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,2916
	ctx.r3.s64 = ctx.r10.s64 + 2916;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82849C5C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8284D028) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,6120
	ctx.r5.s64 = ctx.r10.s64 + 6120;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,22732
	ctx.r4.s64 = ctx.r10.s64 + 22732;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-1440
	ctx.r3.s64 = ctx.r10.s64 + -1440;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8284D074;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8284FF00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r10,-13200
	ctx.r4.s64 = ctx.r10.s64 + -13200;
	// addi r11,r11,-2260
	ctx.r11.s64 = ctx.r11.s64 + -2260;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15048
	ctx.r3.s64 = ctx.r10.s64 + 15048;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8284FF50;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82852EE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,22428
	ctx.r5.s64 = ctx.r10.s64 + 22428;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r10,36
	ctx.r4.s64 = ctx.r10.s64 + 36;
	// addi r11,r11,4304
	ctx.r11.s64 = ctx.r11.s64 + 4304;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24012
	ctx.r3.s64 = ctx.r10.s64 + 24012;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82852F34;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82856038) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,20484
	ctx.r5.s64 = ctx.r10.s64 + 20484;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r10,28168
	ctx.r4.s64 = ctx.r10.s64 + 28168;
	// addi r11,r11,11832
	ctx.r11.s64 = ctx.r11.s64 + 11832;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22212
	ctx.r3.s64 = ctx.r10.s64 + 22212;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8285608C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828592A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,31636
	ctx.r9.s64 = ctx.r10.s64 + 31636;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r10,-12844
	ctx.r4.s64 = ctx.r10.s64 + -12844;
	// addi r11,r11,24064
	ctx.r11.s64 = ctx.r11.s64 + 24064;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29068
	ctx.r3.s64 = ctx.r10.s64 + -29068;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828592FC;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8285C600) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32105
	ctx.r10.s64 = -2104033280;
	// addi r10,r10,-26096
	ctx.r10.s64 = ctx.r10.s64 + -26096;
	// lwz r11,30820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30820);
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8285D5C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-28744
	ctx.r5.s64 = ctx.r10.s64 + -28744;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,11068
	ctx.r4.s64 = ctx.r10.s64 + 11068;
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,25560
	ctx.r3.s64 = ctx.r10.s64 + 25560;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8285D614;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82860608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32105
	ctx.r10.s64 = -2104033280;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r10,-20232
	ctx.r8.s64 = ctx.r10.s64 + -20232;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r10,-24568
	ctx.r5.s64 = ctx.r10.s64 + -24568;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-29440
	ctx.r11.s64 = ctx.r11.s64 + -29440;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-14860
	ctx.r4.s64 = ctx.r10.s64 + -14860;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-24208
	ctx.r3.s64 = ctx.r10.s64 + -24208;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82860664;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82863B90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-23092
	ctx.r5.s64 = ctx.r10.s64 + -23092;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r4,r10,-21712
	ctx.r4.s64 = ctx.r10.s64 + -21712;
	// addi r11,r11,-11936
	ctx.r11.s64 = ctx.r11.s64 + -11936;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21544
	ctx.r3.s64 = ctx.r10.s64 + -21544;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82863BE4;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82866F88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r4,r10,18116
	ctx.r4.s64 = ctx.r10.s64 + 18116;
	// addi r11,r11,-5216
	ctx.r11.s64 = ctx.r11.s64 + -5216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28060
	ctx.r3.s64 = ctx.r10.s64 + -28060;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82866FD8;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8286A0B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r4,r10,-31068
	ctx.r4.s64 = ctx.r10.s64 + -31068;
	// addi r11,r11,7188
	ctx.r11.s64 = ctx.r11.s64 + 7188;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13804
	ctx.r3.s64 = ctx.r10.s64 + -13804;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8286A108;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8286D068) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-5380
	ctx.r5.s64 = ctx.r10.s64 + -5380;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r4,r10,-20
	ctx.r4.s64 = ctx.r10.s64 + -20;
	// addi r11,r11,13580
	ctx.r11.s64 = ctx.r11.s64 + 13580;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4012
	ctx.r3.s64 = ctx.r10.s64 + -4012;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8286D0BC;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828702F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-12940
	ctx.r5.s64 = ctx.r10.s64 + -12940;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// addi r4,r10,28204
	ctx.r4.s64 = ctx.r10.s64 + 28204;
	// addi r11,r11,21488
	ctx.r11.s64 = ctx.r11.s64 + 21488;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6856
	ctx.r3.s64 = ctx.r10.s64 + -6856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8287034C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828737C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r10,-31592
	ctx.r7.s64 = ctx.r10.s64 + -31592;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r10,-12380
	ctx.r4.s64 = ctx.r10.s64 + -12380;
	// addi r11,r11,-16576
	ctx.r11.s64 = ctx.r11.s64 + -16576;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,3908
	ctx.r3.s64 = ctx.r10.s64 + 3908;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82873820;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82877000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,3980
	ctx.r5.s64 = ctx.r10.s64 + 3980;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-6596
	ctx.r4.s64 = ctx.r10.s64 + -6596;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,416
	ctx.r3.s64 = ctx.r10.s64 + 416;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8287704C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82879ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,9344
	ctx.r5.s64 = ctx.r10.s64 + 9344;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-15632
	ctx.r4.s64 = ctx.r10.s64 + -15632;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,16400
	ctx.r3.s64 = ctx.r10.s64 + 16400;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82879F24;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8287CFD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// addi r10,r10,6680
	ctx.r10.s64 = ctx.r10.s64 + 6680;
	// lwz r11,-5832(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5832);
	// stw r11,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8287DF00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,9884
	ctx.r5.s64 = ctx.r10.s64 + 9884;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r4,r10,-108
	ctx.r4.s64 = ctx.r10.s64 + -108;
	// addi r11,r11,-4232
	ctx.r11.s64 = ctx.r11.s64 + -4232;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,12656
	ctx.r3.s64 = ctx.r10.s64 + 12656;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8287DF54;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82881208) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,16004
	ctx.r5.s64 = ctx.r10.s64 + 16004;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,22664
	ctx.r4.s64 = ctx.r10.s64 + 22664;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,8840
	ctx.r3.s64 = ctx.r10.s64 + 8840;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82881254;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828841F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// addi r10,r10,29972
	ctx.r10.s64 = ctx.r10.s64 + 29972;
	// lwz r11,14688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14688);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82885228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,29540
	ctx.r5.s64 = ctx.r10.s64 + 29540;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r4,r10,-27008
	ctx.r4.s64 = ctx.r10.s64 + -27008;
	// addi r11,r11,17360
	ctx.r11.s64 = ctx.r11.s64 + 17360;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21908
	ctx.r3.s64 = ctx.r10.s64 + 21908;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8288527C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828887C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// addi r4,r10,18088
	ctx.r4.s64 = ctx.r10.s64 + 18088;
	// addi r11,r11,25012
	ctx.r11.s64 = ctx.r11.s64 + 25012;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30908
	ctx.r3.s64 = ctx.r10.s64 + 30908;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82888810;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8288B680) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r4,r10,10236
	ctx.r4.s64 = ctx.r10.s64 + 10236;
	// addi r11,r11,-29604
	ctx.r11.s64 = ctx.r11.s64 + -29604;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31244
	ctx.r3.s64 = ctx.r10.s64 + -31244;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8288B6D0;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8288EBD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r4,r10,13760
	ctx.r4.s64 = ctx.r10.s64 + 13760;
	// addi r11,r11,-22232
	ctx.r11.s64 = ctx.r11.s64 + -22232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28076
	ctx.r3.s64 = ctx.r10.s64 + -28076;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8288EC28;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82891A90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// addi r10,r10,3688
	ctx.r10.s64 = ctx.r10.s64 + 3688;
	// lwz r11,-12388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12388);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82892CF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-20948
	ctx.r5.s64 = ctx.r10.s64 + -20948;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r4,r10,-19048
	ctx.r4.s64 = ctx.r10.s64 + -19048;
	// addi r11,r11,-9252
	ctx.r11.s64 = ctx.r11.s64 + -9252;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17528
	ctx.r3.s64 = ctx.r10.s64 + -17528;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82892D4C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828962D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r4,r10,17752
	ctx.r4.s64 = ctx.r10.s64 + 17752;
	// addi r11,r11,-1540
	ctx.r11.s64 = ctx.r11.s64 + -1540;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19616
	ctx.r3.s64 = ctx.r10.s64 + -19616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82896320;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828991F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,-27732
	ctx.r4.s64 = ctx.r10.s64 + -27732;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-10112
	ctx.r3.s64 = ctx.r10.s64 + -10112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x82899238;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8289C048) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-12596
	ctx.r5.s64 = ctx.r10.s64 + -12596;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r4,r10,11152
	ctx.r4.s64 = ctx.r10.s64 + 11152;
	// addi r11,r11,14748
	ctx.r11.s64 = ctx.r11.s64 + 14748;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10256
	ctx.r3.s64 = ctx.r10.s64 + -10256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8289C09C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8289F290) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,7
	ctx.r8.s64 = 7;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r4,r10,-12964
	ctx.r4.s64 = ctx.r10.s64 + -12964;
	// addi r11,r11,24856
	ctx.r11.s64 = ctx.r11.s64 + 24856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1264
	ctx.r3.s64 = ctx.r10.s64 + 1264;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x8289F2E0;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828A25F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,1768
	ctx.r5.s64 = ctx.r10.s64 + 1768;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r4,r10,7848
	ctx.r4.s64 = ctx.r10.s64 + 7848;
	// addi r11,r11,32536
	ctx.r11.s64 = ctx.r11.s64 + 32536;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,868
	ctx.r3.s64 = ctx.r10.s64 + 868;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828A264C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828A5A10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// lis r10,-32102
	ctx.r10.s64 = -2103836672;
	// addi r10,r10,-8832
	ctx.r10.s64 = ctx.r10.s64 + -8832;
	// lwz r11,-22236(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -22236);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828A68B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r4,r10,10284
	ctx.r4.s64 = ctx.r10.s64 + 10284;
	// addi r11,r11,-19636
	ctx.r11.s64 = ctx.r11.s64 + -19636;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14836
	ctx.r3.s64 = ctx.r10.s64 + 14836;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828A6900;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828A9F30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r5,r10,14476
	ctx.r5.s64 = ctx.r10.s64 + 14476;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-11992
	ctx.r11.s64 = ctx.r11.s64 + -11992;
	// addi r4,r10,20760
	ctx.r4.s64 = ctx.r10.s64 + 20760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,13432
	ctx.r3.s64 = ctx.r10.s64 + 13432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x825994e0
	ctx.lr = 0x828A9F80;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828AD218) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19480
	ctx.r5.s64 = ctx.r10.s64 + 19480;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r4,r10,-23944
	ctx.r4.s64 = ctx.r10.s64 + -23944;
	// addi r11,r11,-1548
	ctx.r11.s64 = ctx.r11.s64 + -1548;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20956
	ctx.r3.s64 = ctx.r10.s64 + 20956;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828AD26C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828B0838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,23584
	ctx.r5.s64 = ctx.r10.s64 + 23584;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r4,r10,28744
	ctx.r4.s64 = ctx.r10.s64 + 28744;
	// addi r11,r11,7328
	ctx.r11.s64 = ctx.r11.s64 + 7328;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17896
	ctx.r3.s64 = ctx.r10.s64 + 17896;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828B088C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828B3CC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,26248
	ctx.r5.s64 = ctx.r10.s64 + 26248;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32102
	ctx.r11.s64 = -2103836672;
	// addi r4,r10,4212
	ctx.r4.s64 = ctx.r10.s64 + 4212;
	// addi r11,r11,16672
	ctx.r11.s64 = ctx.r11.s64 + 16672;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32039
	ctx.r10.s64 = -2099707904;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29848
	ctx.r3.s64 = ctx.r10.s64 + 29848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828B3D1C;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828B7140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,26892
	ctx.r9.s64 = ctx.r10.s64 + 26892;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32101
	ctx.r11.s64 = -2103771136;
	// addi r4,r10,-12880
	ctx.r4.s64 = ctx.r10.s64 + -12880;
	// addi r11,r11,-26016
	ctx.r11.s64 = ctx.r11.s64 + -26016;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32038
	ctx.r10.s64 = -2099642368;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-32188
	ctx.r3.s64 = ctx.r10.s64 + -32188;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825994e0
	ctx.lr = 0x828B7194;
	sub_825994E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828BA418) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x82483240
	sub_82483240(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_828BDC58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,668(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 668);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r9.u32);
	// stw r11,668(r3)
	REX_STORE_U32(ctx.r3.u32 + 668, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828C18D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82137e18
	ctx.lr = 0x828C18F8;
	sub_82137E18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828CC130) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bne cr6,0x828cc1a0
	if (!ctx.cr6.eq) goto loc_828CC1A0;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x828caea8
	ctx.lr = 0x828CC160;
	sub_828CAEA8(ctx, base);
	// addi r11,r5,-32
	ctx.r11.s64 = ctx.r5.s64 + -32;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x828cb2c8
	ctx.lr = 0x828CC178;
	sub_828CB2C8(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// bl 0x828caea8
	ctx.lr = 0x828CC184;
	sub_828CAEA8(ctx, base);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r10,384
	ctx.r3.s64 = ctx.r10.s64 + 384;
	// bl 0x828cb2c8
	ctx.lr = 0x828CC190;
	sub_828CB2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828CC1A0:
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x828cb828
	ctx.lr = 0x828CC1B0;
	sub_828CB828(ctx, base);
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// bl 0x828cb9b0
	ctx.lr = 0x828CC1B8;
	sub_828CB9B0(ctx, base);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// bl 0x828cb828
	ctx.lr = 0x828CC1C0;
	sub_828CB828(ctx, base);
	// addi r3,r10,192
	ctx.r3.s64 = ctx.r10.s64 + 192;
	// bl 0x828cb9b0
	ctx.lr = 0x828CC1C8;
	sub_828CB9B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

