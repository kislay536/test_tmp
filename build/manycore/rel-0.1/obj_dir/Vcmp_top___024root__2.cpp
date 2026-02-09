// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

extern const VlWide<202>/*6463:0*/ Vcmp_top__ConstPool__CONST_hf97fafb6_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vcmp_top__ConstPool__TABLE_heeedb9c6_0;

void Vcmp_top___024root___act_comb__TOP__3(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__in_tmp;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__in_tmp = 0;
    CData/*0:0*/ __Vfunc_is_inside_execute_regions__72__Vfuncout;
    __Vfunc_is_inside_execute_regions__72__Vfuncout = 0;
    VlWide<202>/*6433:0*/ __Vfunc_is_inside_execute_regions__72__Cfg;
    VL_ZERO_W(6434, __Vfunc_is_inside_execute_regions__72__Cfg);
    QData/*63:0*/ __Vfunc_is_inside_execute_regions__72__address;
    __Vfunc_is_inside_execute_regions__72__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k;
    __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k = 0;
    SData/*15:0*/ __Vfunc_is_inside_execute_regions__72__pass;
    __Vfunc_is_inside_execute_regions__72__pass = 0;
    CData/*0:0*/ __Vfunc_is_inside_nonidempotent_regions__107__Vfuncout;
    __Vfunc_is_inside_nonidempotent_regions__107__Vfuncout = 0;
    VlWide<202>/*6433:0*/ __Vfunc_is_inside_nonidempotent_regions__107__Cfg;
    VL_ZERO_W(6434, __Vfunc_is_inside_nonidempotent_regions__107__Cfg);
    QData/*63:0*/ __Vfunc_is_inside_nonidempotent_regions__107__address;
    __Vfunc_is_inside_nonidempotent_regions__107__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k;
    __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k = 0;
    SData/*15:0*/ __Vfunc_is_inside_nonidempotent_regions__107__pass;
    __Vfunc_is_inside_nonidempotent_regions__107__pass = 0;
    CData/*3:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    // Body
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__match_any_execute_region) 
          | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_error)) 
         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__enable_translation_csr_ex) 
            | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_pmp_if.allow_o)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[3U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[4U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U];
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[0U] 
            = (1U | ((IData)((0x00ffffffffffffffULL 
                              & (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U])) 
                                  << 0x0000001fU) | 
                                 ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U])) 
                                  >> 1U)))) << 1U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[1U] 
            = (((IData)((0x00ffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U])) 
                                                   << 0x0000001fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U])) 
                                                     >> 1U)))) 
                >> 0x0000001fU) | ((IData)(((0x00ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U])) 
                                                 << 0x0000001fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U])) 
                                                   >> 1U))) 
                                            >> 0x00000020U)) 
                                   << 1U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[2U] 
            = (2U | ((IData)(((0x00ffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U])) 
                                   << 0x0000001fU) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U])) 
                                     >> 1U))) >> 0x00000020U)) 
                     >> 0x0000001fU));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[4U] 
            = ((IData)((0x01ffffffffffffffULL & (((QData)((IData)(
                                                                  vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U])) 
                                                  << 0x0000001fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U])) 
                                                    >> 1U)))) 
               << 1U);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U] 
            = (((IData)((0x01ffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U])) 
                                                   << 0x0000001fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U])) 
                                                     >> 1U)))) 
                >> 0x0000001fU) | ((IData)(((0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[5U])) 
                                                 << 0x0000001fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT____VdfgRegularize_h091f6de0_0_6[4U])) 
                                                   >> 1U))) 
                                            >> 0x00000020U)) 
                                   << 1U));
    }
    __Vfunc_is_inside_execute_regions__72__address 
        = (0x00ffffffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[4U])) 
                                       >> 1U)));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x000000c9U)) {
        __Vfunc_is_inside_execute_regions__72__Cfg[__Vilp1] 
            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_is_inside_execute_regions__72__pass = 0U;
    __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k = 0U;
    while ((__Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k 
            < ((__Vfunc_is_inside_execute_regions__72__Cfg[0x00000085U] 
                << 0x0000001eU) | (__Vfunc_is_inside_execute_regions__72__Cfg[0x00000084U] 
                                   >> 2U)))) {
        vlSelfRef.__Vfunc_range_check__73__address 
            = __Vfunc_is_inside_execute_regions__72__address;
        vlSelfRef.__Vfunc_range_check__73__len = (((QData)((IData)(
                                                                   __Vfunc_is_inside_execute_regions__72__Cfg[
                                                                   (((IData)(0x000008c1U) 
                                                                     + 
                                                                     (0x000003ffU 
                                                                      & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((IData)(0x00000882U) 
                                                         + 
                                                         (0x000003ffU 
                                                          & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U)))))
                                                     ? 0x00000020U
                                                     : 
                                                    ((IData)(0x00000040U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & ((IData)(0x00000882U) 
                                                         + 
                                                         (0x000003ffU 
                                                          & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000882U) 
                                                           + 
                                                           (0x000003ffU 
                                                            & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U)))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vfunc_is_inside_execute_regions__72__Cfg[
                                                                       (((IData)(0x000008a1U) 
                                                                         + 
                                                                         (0x000003ffU 
                                                                          & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000882U) 
                                                            + 
                                                            (0x000003ffU 
                                                             & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))))))) 
                                                     | ((QData)((IData)(
                                                                        __Vfunc_is_inside_execute_regions__72__Cfg[
                                                                        (((IData)(0x00000882U) 
                                                                          + 
                                                                          (0x000003ffU 
                                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000882U) 
                                                            + 
                                                            (0x000003ffU 
                                                             & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U)))))));
        vlSelfRef.__Vfunc_range_check__73__base = (
                                                   ((QData)((IData)(
                                                                    __Vfunc_is_inside_execute_regions__72__Cfg[
                                                                    (((IData)(0x00000cc1U) 
                                                                      + 
                                                                      (0x000003ffU 
                                                                       & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(0x00000c82U) 
                                                          + 
                                                          (0x000003ffU 
                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U)))))
                                                      ? 0x00000020U
                                                      : 
                                                     ((IData)(0x00000040U) 
                                                      - 
                                                      (0x0000001fU 
                                                       & ((IData)(0x00000c82U) 
                                                          + 
                                                          (0x000003ffU 
                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(0x00000c82U) 
                                                            + 
                                                            (0x000003ffU 
                                                             & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U)))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vfunc_is_inside_execute_regions__72__Cfg[
                                                                        (((IData)(0x00000ca1U) 
                                                                          + 
                                                                          (0x000003ffU 
                                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000c82U) 
                                                             + 
                                                             (0x000003ffU 
                                                              & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))))))) 
                                                      | ((QData)((IData)(
                                                                         __Vfunc_is_inside_execute_regions__72__Cfg[
                                                                         (((IData)(0x00000c82U) 
                                                                           + 
                                                                           (0x000003ffU 
                                                                            & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U))) 
                                                                          >> 5U)])) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000c82U) 
                                                             + 
                                                             (0x000003ffU 
                                                              & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k, 6U)))))));
        __Vtemp_6[0U] = (IData)(vlSelfRef.__Vfunc_range_check__73__address);
        __Vtemp_6[1U] = (IData)((vlSelfRef.__Vfunc_range_check__73__address 
                                 >> 0x00000020U));
        __Vtemp_6[2U] = 0U;
        __Vtemp_8[0U] = (IData)(vlSelfRef.__Vfunc_range_check__73__base);
        __Vtemp_8[1U] = (IData)((vlSelfRef.__Vfunc_range_check__73__base 
                                 >> 0x00000020U));
        __Vtemp_8[2U] = 0U;
        __Vtemp_9[0U] = (IData)(vlSelfRef.__Vfunc_range_check__73__len);
        __Vtemp_9[1U] = (IData)((vlSelfRef.__Vfunc_range_check__73__len 
                                 >> 0x00000020U));
        __Vtemp_9[2U] = 0U;
        VL_ADD_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
        __Vtemp_11[0U] = __Vtemp_10[0U];
        __Vtemp_11[1U] = __Vtemp_10[1U];
        __Vtemp_11[2U] = (1U & __Vtemp_10[2U]);
        vlSelfRef.__Vfunc_range_check__73__Vfuncout 
            = ((vlSelfRef.__Vfunc_range_check__73__address 
                >= vlSelfRef.__Vfunc_range_check__73__base) 
               & VL_LT_W(3, __Vtemp_6, __Vtemp_11));
        __Vfunc_is_inside_execute_regions__72__pass 
            = (((~ ((IData)(1U) << (0x0000000fU & __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k))) 
                & (IData)(__Vfunc_is_inside_execute_regions__72__pass)) 
               | (0x0000ffffU & ((IData)(vlSelfRef.__Vfunc_range_check__73__Vfuncout) 
                                 << (0x0000000fU & __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k))));
        __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_execute_regions__72__unnamedblk2__DOT__k);
    }
    __Vfunc_is_inside_execute_regions__72__Vfuncout 
        = (0U != (IData)(__Vfunc_is_inside_execute_regions__72__pass));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__match_any_execute_region 
        = __Vfunc_is_inside_execute_regions__72__Vfuncout;
    __Vfunc_is_inside_nonidempotent_regions__107__address 
        = (0x00ffffffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[4U])) 
                                       >> 1U)));
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x000000c9U)) {
        __Vfunc_is_inside_nonidempotent_regions__107__Cfg[__Vilp2] 
            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_is_inside_nonidempotent_regions__107__pass = 0U;
    __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k = 0U;
    while ((__Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k 
            < ((__Vfunc_is_inside_nonidempotent_regions__107__Cfg[0x000000c6U] 
                << 0x0000001eU) | (__Vfunc_is_inside_nonidempotent_regions__107__Cfg[0x000000c5U] 
                                   >> 2U)))) {
        vlSelfRef.__Vfunc_range_check__108__address 
            = __Vfunc_is_inside_nonidempotent_regions__107__address;
        vlSelfRef.__Vfunc_range_check__108__len = (
                                                   ((QData)((IData)(
                                                                    __Vfunc_is_inside_nonidempotent_regions__107__Cfg[
                                                                    (((IData)(0x000010e1U) 
                                                                      + 
                                                                      (0x000003ffU 
                                                                       & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(0x000010a2U) 
                                                          + 
                                                          (0x000003ffU 
                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U)))))
                                                      ? 0x00000020U
                                                      : 
                                                     ((IData)(0x00000040U) 
                                                      - 
                                                      (0x0000001fU 
                                                       & ((IData)(0x000010a2U) 
                                                          + 
                                                          (0x000003ffU 
                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(0x000010a2U) 
                                                            + 
                                                            (0x000003ffU 
                                                             & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U)))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vfunc_is_inside_nonidempotent_regions__107__Cfg[
                                                                        (((IData)(0x000010c1U) 
                                                                          + 
                                                                          (0x000003ffU 
                                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & ((IData)(0x000010a2U) 
                                                             + 
                                                             (0x000003ffU 
                                                              & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))))))) 
                                                      | ((QData)((IData)(
                                                                         __Vfunc_is_inside_nonidempotent_regions__107__Cfg[
                                                                         (((IData)(0x000010a2U) 
                                                                           + 
                                                                           (0x000003ffU 
                                                                            & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))) 
                                                                          >> 5U)])) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((IData)(0x000010a2U) 
                                                             + 
                                                             (0x000003ffU 
                                                              & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U)))))));
        vlSelfRef.__Vfunc_range_check__108__base = 
            (((QData)((IData)(__Vfunc_is_inside_nonidempotent_regions__107__Cfg[
                              (((IData)(0x000014e1U) 
                                + (0x000003ffU & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))) 
                               >> 5U)])) << ((0U == 
                                              (0x0000001fU 
                                               & ((IData)(0x000014a2U) 
                                                  + 
                                                  (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U)))))
                                              ? 0x00000020U
                                              : ((IData)(0x00000040U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x000014a2U) 
                                                     + 
                                                     (0x000003ffU 
                                                      & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))))))) 
             | (((0U == (0x0000001fU & ((IData)(0x000014a2U) 
                                        + (0x000003ffU 
                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U)))))
                  ? 0ULL : ((QData)((IData)(__Vfunc_is_inside_nonidempotent_regions__107__Cfg[
                                            (((IData)(0x000014c1U) 
                                              + (0x000003ffU 
                                                 & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))) 
                                             >> 5U)])) 
                            << ((IData)(0x00000020U) 
                                - (0x0000001fU & ((IData)(0x000014a2U) 
                                                  + 
                                                  (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))))))) 
                | ((QData)((IData)(__Vfunc_is_inside_nonidempotent_regions__107__Cfg[
                                   (((IData)(0x000014a2U) 
                                     + (0x000003ffU 
                                        & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U))) 
                                    >> 5U)])) >> (0x0000001fU 
                                                  & ((IData)(0x000014a2U) 
                                                     + 
                                                     (0x000003ffU 
                                                      & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k, 6U)))))));
        __Vtemp_12[0U] = (IData)(vlSelfRef.__Vfunc_range_check__108__address);
        __Vtemp_12[1U] = (IData)((vlSelfRef.__Vfunc_range_check__108__address 
                                  >> 0x00000020U));
        __Vtemp_12[2U] = 0U;
        __Vtemp_14[0U] = (IData)(vlSelfRef.__Vfunc_range_check__108__base);
        __Vtemp_14[1U] = (IData)((vlSelfRef.__Vfunc_range_check__108__base 
                                  >> 0x00000020U));
        __Vtemp_14[2U] = 0U;
        __Vtemp_15[0U] = (IData)(vlSelfRef.__Vfunc_range_check__108__len);
        __Vtemp_15[1U] = (IData)((vlSelfRef.__Vfunc_range_check__108__len 
                                  >> 0x00000020U));
        __Vtemp_15[2U] = 0U;
        VL_ADD_W(3, __Vtemp_16, __Vtemp_14, __Vtemp_15);
        __Vtemp_17[0U] = __Vtemp_16[0U];
        __Vtemp_17[1U] = __Vtemp_16[1U];
        __Vtemp_17[2U] = (1U & __Vtemp_16[2U]);
        vlSelfRef.__Vfunc_range_check__108__Vfuncout 
            = ((vlSelfRef.__Vfunc_range_check__108__address 
                >= vlSelfRef.__Vfunc_range_check__108__base) 
               & VL_LT_W(3, __Vtemp_12, __Vtemp_17));
        __Vfunc_is_inside_nonidempotent_regions__107__pass 
            = (((~ ((IData)(1U) << (0x0000000fU & __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k))) 
                & (IData)(__Vfunc_is_inside_nonidempotent_regions__107__pass)) 
               | (0x0000ffffU & ((IData)(vlSelfRef.__Vfunc_range_check__108__Vfuncout) 
                                 << (0x0000000fU & __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k))));
        __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_nonidempotent_regions__107__unnamedblk1__DOT__k);
    }
    __Vfunc_is_inside_nonidempotent_regions__107__Vfuncout 
        = (0U != (IData)(__Vfunc_is_inside_nonidempotent_regions__107__pass));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__addr_ni 
        = __Vfunc_is_inside_nonidempotent_regions__107__Vfuncout;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
        = (0x00000fffffffffffULL & ((0x02000000U & 
                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U])
                                     ? (((QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U])) 
                                         << 0x00000033U) 
                                        | (((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U])) 
                                            << 0x00000013U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[4U])) 
                                              >> 0x0000000dU)))
                                     : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_q));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__paddr_is_nc 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_en_q)) 
                 | (~ ([&]() {
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__address 
                            = (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
                               << 0x0000000cU);
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[1U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[1U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[2U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[2U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[3U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[3U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[4U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[4U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[5U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[5U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[6U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[6U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[7U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[7U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[8U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[8U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[9U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[9U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000000aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000000aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000000bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000000bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000000cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000000cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000000dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000000dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000000eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000000eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000000fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000000fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000010U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000010U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000011U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000011U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000012U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000012U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000013U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000013U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000014U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000014U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000015U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000015U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000016U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000016U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000017U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000017U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000018U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000018U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000019U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000019U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000001aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000001aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000001bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000001bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000001cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000001cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000001dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000001dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000001eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000001eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000001fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000001fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000020U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000020U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000021U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000021U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000022U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000022U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000023U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000023U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000024U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000024U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000025U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000025U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000026U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000026U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000027U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000027U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000028U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000028U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000029U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000029U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000002aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000002aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000002bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000002bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000002cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000002cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000002dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000002dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000002eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000002eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000002fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000002fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000030U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000030U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000031U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000031U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000032U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000032U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000033U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000033U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000034U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000034U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000035U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000035U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000036U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000036U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000037U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000037U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000038U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000038U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000039U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000039U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000003aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000003aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000003bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000003bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000003cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000003cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000003dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000003dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000003eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000003eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000003fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000003fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000040U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000040U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000041U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000041U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000042U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000042U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000043U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000043U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000044U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000044U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000045U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000045U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000046U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000046U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000047U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000047U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000048U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000048U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000049U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000049U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000004aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000004aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000004bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000004bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000004cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000004cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000004dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000004dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000004eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000004eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000004fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000004fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000050U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000050U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000051U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000051U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000052U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000052U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000053U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000053U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000054U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000054U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000055U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000055U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000056U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000056U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000057U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000057U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000058U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000058U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000059U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000059U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000005aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000005aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000005bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000005bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000005cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000005cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000005dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000005dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000005eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000005eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000005fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000005fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000060U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000060U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000061U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000061U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000062U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000062U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000063U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000063U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000064U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000064U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000065U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000065U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000066U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000066U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000067U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000067U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000068U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000068U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000069U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000069U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000006aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000006aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000006bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000006bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000006cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000006cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000006dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000006dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000006eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000006eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000006fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000006fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000070U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000070U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000071U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000071U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000072U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000072U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000073U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000073U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000074U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000074U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000075U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000075U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000076U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000076U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000077U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000077U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000078U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000078U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000079U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000079U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000007aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000007aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000007bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000007bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000007cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000007cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000007dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000007dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000007eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000007eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000007fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000007fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000080U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000080U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000081U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000081U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000082U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000082U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000083U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000083U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000084U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000084U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000085U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000085U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000086U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000086U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000087U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000087U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000088U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000088U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000089U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000089U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000008aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000008aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000008bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000008bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000008cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000008cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000008dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000008dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000008eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000008eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000008fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000008fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000090U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000090U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000091U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000091U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000092U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000092U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000093U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000093U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000094U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000094U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000095U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000095U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000096U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000096U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000097U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000097U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000098U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000098U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000099U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x00000099U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000009aU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000009aU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000009bU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000009bU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000009cU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000009cU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000009dU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000009dU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000009eU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000009eU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x0000009fU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x0000009fU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a0U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a0U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a1U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a1U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a2U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a2U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a3U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a3U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a4U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a4U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a5U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a5U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a6U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a6U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a7U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a7U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a8U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a8U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000a9U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000a9U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000aaU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000aaU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000abU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000abU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000acU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000acU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000adU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000adU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000aeU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000aeU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000afU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000afU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b0U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b0U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b1U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b1U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b2U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b2U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b3U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b3U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b4U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b4U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b5U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b5U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b6U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b6U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b7U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b7U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b8U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b8U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000b9U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000b9U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000baU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000baU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000bbU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000bbU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000bcU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000bcU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000bdU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000bdU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000beU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000beU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000bfU] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000bfU];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c0U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c0U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c1U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c1U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c2U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c2U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c3U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c3U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c4U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c4U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c5U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c5U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c6U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c6U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c7U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c7U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c8U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c8U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x000000c9U] 
                            = Vcmp_top__ConstPool__CONST_hf97fafb6_0[0x000000c9U];
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__pass = 0U;
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k = 0U;
                        while ((vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k 
                                < ((vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000044U] 
                                    << 0x0000001eU) 
                                   | (vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[0x00000043U] 
                                      >> 2U)))) {
                            vlSelfRef.__Vfunc_range_check__106__address 
                                = vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__address;
                            vlSelfRef.__Vfunc_range_check__106__len 
                                = (((QData)((IData)(
                                                    vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[
                                                    (((IData)(0x000000a1U) 
                                                      + 
                                                      (0x000003ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x0000001fU 
                                                & ((IData)(0x00000062U) 
                                                   + 
                                                   (0x000003ffU 
                                                    & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U)))))
                                         ? 0x00000020U
                                         : ((IData)(0x00000040U) 
                                            - (0x0000001fU 
                                               & ((IData)(0x00000062U) 
                                                  + 
                                                  (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))))))) 
                                   | (((0U == (0x0000001fU 
                                               & ((IData)(0x00000062U) 
                                                  + 
                                                  (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U)))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[
                                                                  (((IData)(0x00000081U) 
                                                                    + 
                                                                    (0x000003ffU 
                                                                     & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000062U) 
                                                       + 
                                                       (0x000003ffU 
                                                        & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))))))) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[
                                                         (((IData)(0x00000062U) 
                                                           + 
                                                           (0x000003ffU 
                                                            & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))) 
                                                          >> 5U)])) 
                                         >> (0x0000001fU 
                                             & ((IData)(0x00000062U) 
                                                + (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U)))))));
                            vlSelfRef.__Vfunc_range_check__106__base 
                                = (((QData)((IData)(
                                                    vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[
                                                    (((IData)(0x000004a1U) 
                                                      + 
                                                      (0x000003ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x0000001fU 
                                                & ((IData)(0x00000462U) 
                                                   + 
                                                   (0x000003ffU 
                                                    & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U)))))
                                         ? 0x00000020U
                                         : ((IData)(0x00000040U) 
                                            - (0x0000001fU 
                                               & ((IData)(0x00000462U) 
                                                  + 
                                                  (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))))))) 
                                   | (((0U == (0x0000001fU 
                                               & ((IData)(0x00000462U) 
                                                  + 
                                                  (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U)))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[
                                                                  (((IData)(0x00000481U) 
                                                                    + 
                                                                    (0x000003ffU 
                                                                     & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000462U) 
                                                       + 
                                                       (0x000003ffU 
                                                        & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))))))) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Cfg[
                                                         (((IData)(0x00000462U) 
                                                           + 
                                                           (0x000003ffU 
                                                            & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U))) 
                                                          >> 5U)])) 
                                         >> (0x0000001fU 
                                             & ((IData)(0x00000462U) 
                                                + (0x000003ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k, 6U)))))));
                            __Vtemp_18[0U] = (IData)(vlSelfRef.__Vfunc_range_check__106__address);
                            __Vtemp_18[1U] = (IData)(
                                                     (vlSelfRef.__Vfunc_range_check__106__address 
                                                      >> 0x00000020U));
                            __Vtemp_18[2U] = 0U;
                            __Vtemp_20[0U] = (IData)(vlSelfRef.__Vfunc_range_check__106__base);
                            __Vtemp_20[1U] = (IData)(
                                                     (vlSelfRef.__Vfunc_range_check__106__base 
                                                      >> 0x00000020U));
                            __Vtemp_20[2U] = 0U;
                            __Vtemp_21[0U] = (IData)(vlSelfRef.__Vfunc_range_check__106__len);
                            __Vtemp_21[1U] = (IData)(
                                                     (vlSelfRef.__Vfunc_range_check__106__len 
                                                      >> 0x00000020U));
                            __Vtemp_21[2U] = 0U;
                            VL_ADD_W(3, __Vtemp_22, __Vtemp_20, __Vtemp_21);
                            __Vtemp_23[0U] = __Vtemp_22[0U];
                            __Vtemp_23[1U] = __Vtemp_22[1U];
                            __Vtemp_23[2U] = (1U & 
                                              __Vtemp_22[2U]);
                            vlSelfRef.__Vfunc_range_check__106__Vfuncout 
                                = ((vlSelfRef.__Vfunc_range_check__106__address 
                                    >= vlSelfRef.__Vfunc_range_check__106__base) 
                                   & VL_LT_W(3, __Vtemp_18, __Vtemp_23));
                            vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__pass 
                                = (((~ ((IData)(1U) 
                                        << (0x0000000fU 
                                            & vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k))) 
                                    & (IData)(vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__pass)) 
                                   | (0x0000ffffU & 
                                      ((IData)(vlSelfRef.__Vfunc_range_check__106__Vfuncout) 
                                       << (0x0000000fU 
                                           & vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k))));
                            vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k 
                                = ((IData)(1U) + vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__unnamedblk3__DOT__k);
                        }
                        vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Vfuncout 
                            = (0U != (IData)(vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__pass));
                    }(), (IData)(vlSelfRef.__Vfunc_is_inside_cacheable_regions__105__Vfuncout)))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__in_tmp 
        = ((((((0x00000fffffffffffULL & vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q) 
               == vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
              & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                         >> 0x0000002cU))) << 3U) | 
            ((((0x00000fffffffffffULL & vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q) 
               == vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
              & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                         >> 0x0000002cU))) << 2U)) 
           | (((((0x00000fffffffffffULL & vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q) 
                 == vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                           >> 0x0000002cU))) << 1U) 
              | (((0x00000fffffffffffULL & vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q) 
                  == vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                 & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                            >> 0x0000002cU)))));
    __Vtableidx45 = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__in_tmp;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__hit_idx 
        = Vcmp_top__ConstPool__TABLE_heeedb9c6_0[__Vtableidx45];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_358 = (1U 
                                                  & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__inv_q)) 
                                                     & (((0U 
                                                          != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__in_tmp)) 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_en_q)) 
                                                        | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[0U])));
}

void Vcmp_top___024root___act_comb__TOP__4(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_val_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_val_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_rw_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_rw_s1 = 0;
    CData/*7:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__msg_len;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__msg_len = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_alloc_mask;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_alloc_mask = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_alloc_mask;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_alloc_mask = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_alloc_mask;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_alloc_mask = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_dealloc_mask;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_dealloc_mask = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_dealloc_mask;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_dealloc_mask = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_dealloc_mask;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_dealloc_mask = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_s1 = 0;
    IData/*28:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dtag_write_data_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dtag_write_data_s1 = 0;
    CData/*5:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0;
    QData/*39:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 = 0;
    QData/*39:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1 = 0;
    QData/*39:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1 = 0;
    QData/*39:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1 = 0;
    QData/*39:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_upX;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_upX = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_atomic_instruction_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_atomic_instruction_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_storenc_instruction_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_storenc_instruction_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_loadnc_instruction_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_loadnc_instruction_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_data_invalidation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_data_invalidation_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_instruction_invalidation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_instruction_invalidation_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_ackdt_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_ackdt_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_flush_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_flush_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 0;
    CData/*3:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 0;
    CData/*2:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 0;
    CData/*2:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 0;
    CData/*2:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 0;
    CData/*2:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 0;
    CData/*2:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 0;
    CData/*4:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 0;
    CData/*4:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0;
    CData/*3:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 0;
    CData/*3:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_no_free_mshr_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_no_free_mshr_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshrid_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshrid_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1 = 0;
    CData/*2:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_val_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_val_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1 = 0;
    CData/*6:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_s1 = 0;
    QData/*32:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 = 0;
    CData/*3:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_val_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_val_s1 = 0;
    CData/*6:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_index_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_index_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_val_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_val_s1 = 0;
    CData/*6:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_index_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_index_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_val_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_val_s1 = 0;
    CData/*2:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1 = 0;
    QData/*39:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_address_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_address_s1 = 0;
    SData/*12:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_control_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_control_s1 = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_mshrid_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_mshrid_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__acklogic_noc2_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__acklogic_noc2_s1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_141;
    __VdfgRegularize_h6e95ff9d_0_141 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_170;
    __VdfgRegularize_h6e95ff9d_0_170 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_414;
    __VdfgRegularize_h6e95ff9d_0_414 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_416;
    __VdfgRegularize_h6e95ff9d_0_416 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_417;
    __VdfgRegularize_h6e95ff9d_0_417 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_418;
    __VdfgRegularize_h6e95ff9d_0_418 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_419;
    __VdfgRegularize_h6e95ff9d_0_419 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_420;
    __VdfgRegularize_h6e95ff9d_0_420 = 0;
    // Body
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 = 0ULL;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1 = 0ULL;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1 = 0ULL;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1 = 0ULL;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1 = 0ULL;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1 = 0U;
    if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1 
            = (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 0x0bU));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 
            = (1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 
            = (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 3U));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1 
            = (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 2U));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1 
            = (2U == vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array
               [cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1]);
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1 
            = (1U == vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array
               [cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1]);
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                 >> 0x00000010U)))));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x00000010U | (0x0000000fU 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                    >> 0x00000010U))))));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x00000020U | (0x0000000fU 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                    >> 0x00000010U))))));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x00000030U | (0x0000000fU 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                    >> 0x00000010U))))));
        if ((0x11U == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                      >> 0x0000000eU)))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                         >> 0x0000000bU));
            if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x12U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                        : cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1);
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 6U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1
                        : ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                            ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                            : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1
                                : cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1)));
            }
        } else if ((0x12U == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                             >> 0x0000000eU)))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                         >> 0x0000000bU));
            if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x12U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                        : cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1);
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 6U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1
                        : ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                            ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                            : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1
                                : cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1)));
            }
        } else if ((0x10U == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                             >> 0x0000000eU)))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                         >> 0x0000000bU));
            if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x12U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                        : cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1);
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 7U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1
                        : ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                            ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                            : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                ? cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1
                                : cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1)));
            }
        } else if (((0x1dU == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                              >> 0x0000000eU))) 
                    || (0x1aU == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                                 >> 0x0000000eU))))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                         >> 4U));
            if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_ld_address_array
                    [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
            } else if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                    [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
            }
            if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_hmc_fill) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1cU;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 = 0ULL;
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 
                    = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1)
                        ? ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1)
                            ? 9U : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1)
                                     ? 8U : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1)
                                              ? 0x0eU
                                              : 1U)))
                        : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1)
                            ? 9U : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1)
                                     ? 0x2eU : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1)
                                                 ? 0x0aU
                                                 : 
                                                ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1)
                                                  ? 0x0bU
                                                  : 
                                                 ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1)
                                                   ? 0x0cU
                                                   : 1U))))));
            }
        } else if (((0x1cU == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                              >> 0x0000000eU))) 
                    || (0x1bU == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                                 >> 0x0000000eU))))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                         >> 4U));
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
            if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x0dU;
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x20U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 = 0ULL;
            }
        } else if ((0x21U == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                             >> 0x0000000eU)))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x14U;
        }
    } else if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1 
            = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                     >> 0x00000017U));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
            = (0x000000ffffffffffULL & (((QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U])) 
                                         << 0x0000001bU) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[5U])) 
                                           >> 5U)));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1 
            = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                     >> 0x00000013U));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 
            = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                     >> 0x00000012U));
        if (((((((((0U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                          >> 0x00000018U))) 
                   | (0x10U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                               >> 0x00000018U)))) 
                  | (1U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                           >> 0x00000018U)))) 
                 | (6U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                          >> 0x00000018U)))) 
                | (9U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                         >> 0x00000018U)))) 
               | (0x0aU == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                           >> 0x00000018U)))) 
              | (0x0bU == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                          >> 0x00000018U)))) 
             | (4U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                      >> 0x00000018U))))) {
            if ((0U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                       >> 0x00000018U)))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 
                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_config_asi_s1)
                        ? 0x18U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_diag_data_access_s1)
                                    ? 0x19U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_hmc_diag_access_s1)
                                                ? 0x1dU
                                                : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1)
                                                    ? 0x10U
                                                    : 
                                                   ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1)
                                                     ? 0x0fU
                                                     : 
                                                    ((0x00020000U 
                                                      & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U])
                                                      ? 0x22U
                                                      : 0x15U))))));
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1 = 1U;
            } else if ((0x10U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                                 >> 0x00000018U)))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 
                    = ((0x00020000U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U])
                        ? 0x21U : 2U);
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 = 1U;
            } else if ((1U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                              >> 0x00000018U)))) {
                if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_config_asi_s1) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x17U;
                } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_diag_data_access_s1) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1aU;
                } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_diag_line_flush_s1) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1bU;
                } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_hmc_diag_access_s1) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1eU;
                } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_hmc_flush_s1) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1fU;
                } else if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x11U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 = 0U;
                } else {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 3U;
                }
            } else if ((6U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                              >> 0x00000018U)))) {
                if (((((((((0U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U])) 
                           | (1U == (0x0000000fU & 
                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) 
                          | (2U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) 
                         | (3U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) 
                        | (4U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) 
                       | (5U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) 
                      | (6U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) 
                     | (7U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U])))) {
                    if ((0U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
                    } else if ((1U == (0x0000000fU 
                                       & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x23U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((2U == (0x0000000fU 
                                       & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x24U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((3U == (0x0000000fU 
                                       & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 5U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((4U == (0x0000000fU 
                                       & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x26U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((5U == (0x0000000fU 
                                       & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x27U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((6U == (0x0000000fU 
                                       & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x28U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x29U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    }
                } else if ((8U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2aU;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((9U == (0x0000000fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2bU;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0aU == (0x0000000fU & 
                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2cU;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0bU == (0x0000000fU & 
                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2dU;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0cU == (0x0000000fU & 
                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 4U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0dU == (0x0000000fU & 
                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[0U]))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
                }
            } else if ((9U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                              >> 0x00000018U)))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x13U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1 
                    = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1;
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
            }
        } else if ((5U == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                          >> 0x00000018U)))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
        } else if ((0x0dU == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                             >> 0x00000018U)))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
        } else if ((0x0eU == (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U] 
                                             >> 0x00000018U)))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1 
        = (0x0000007fU & (IData)((cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                                  >> 4U)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dtag_write_data_s1 
        = (0x1fffffffU & (IData)((cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                                  >> 0x0bU)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 0U;
    __VdfgRegularize_h6e95ff9d_0_170 = ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                         ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_415)
                                         : (3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 0U;
    if (((((((((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
               | (0x10U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (0x19U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
            | (2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
           | (0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
          | (3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
         | (0x1aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0x0aU;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 9U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 1U;
            }
            if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
            }
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 2U;
        } else {
            if ((0x10U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 4U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 2U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 6U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 2U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 2U;
                } else {
                    if ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                                    }
                                }
                            } else if ((3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                                if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 1U;
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                                }
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 
                                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)
                                        ? 4U : 2U);
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                            }
                        }
                        if ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 3U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 1U;
                        } else if ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 
                                    = ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                        ? 0x0aU : 1U);
                                if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                                }
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 3U;
                            }
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 
                                = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)
                                    ? 0x0aU : ((0U 
                                                == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                                ? 9U
                                                : 5U));
                        } else if ((3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 2U;
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 4U;
                            }
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 
                                = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)
                                    ? 2U : 1U);
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 3U;
                        }
                    }
                    if ((0x19U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 8U;
                    } else if ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                                }
                            }
                        } else if ((3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 4U;
                            }
                        } else {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 9U;
                        }
                    }
                }
                if ((0x15U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 5U;
                                    }
                                }
                            } else if ((3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 2U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 2U;
            } else if ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 4U;
            } else if ((0x19U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x10U;
            } else if ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
                    } else if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                    }
                } else {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 
                        = ((3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                            ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)
                                ? 0x0bU : 7U) : 6U);
                }
            }
        }
        if ((0x0fU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0x10U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x15U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x11U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 2U;
                } else if ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 6U;
                                }
                            }
                        } else if ((3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else if (((((((((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                      | (0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                 || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) 
                    | (0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x21U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x22U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (7U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 4U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 6U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 0x0aU;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 8U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 9U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x0cU;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
            }
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 
                = ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                    ? 6U : 0x11U);
        } else {
            if ((0x24U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 5U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0x0aU;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 9U;
                    } else {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 1U;
                        if (((((((((0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                   | (4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  | (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 | (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                | (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               | (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              | (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             | (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 
                                = ((0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                    ? 0x15U : ((4U 
                                                == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                ? 6U
                                                : (
                                                   (5U 
                                                    == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                    ? 7U
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                     ? 0x0dU
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                      ? 0x0eU
                                                      : 
                                                     ((0x28U 
                                                       == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                       ? 0x0fU
                                                       : 
                                                      ((0x29U 
                                                        == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                        ? 0x10U
                                                        : 0x11U)))))));
                        } else if ((0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x12U;
                        } else if ((0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x13U;
                        } else if ((0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x14U;
                        }
                    }
                } else {
                    if ((0x12U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x21U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x22U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                            } else if ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                            }
                            if ((0x22U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0x0aU;
                                } else {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 1U;
                                }
                            }
                        }
                    }
                    if ((0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 7U;
                        }
                    } else if ((0x21U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x22U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 
                                = ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                    ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1)
                                        ? 1U : 2U) : 
                                   ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1)
                                     ? 3U : 4U));
                        }
                    }
                }
            }
            if ((0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 6U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 0x0bU;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x14U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
            } else if ((((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                 || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                }
            } else {
                if ((0x12U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x21U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x22U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                        } else if ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                        }
                        if ((0x22U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                            if ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                            }
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                        }
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                    }
                }
                if ((0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0eU;
                } else if ((0x21U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0eU;
                } else if ((0x22U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x13U;
                } else if ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                }
            }
        }
        if ((0x1bU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 3U;
            } else {
                if ((1U & (~ (((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                       || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                      || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                     || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                    || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                   || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
                    if ((0x12U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x21U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x22U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 4U;
                                }
                            }
                        }
                    }
                }
                if ((((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                    if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                    }
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 2U;
                }
            }
        }
    } else if (((((((((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                      | (8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (9U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x0dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x20U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (0x0eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 6U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 8U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 8U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 8U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 2U;
            }
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
            if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 4U;
            }
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 1U;
        } else {
            if ((8U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((9U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 2U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 3U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 2U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 3U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 6U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 8U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 8U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                        } else {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 3U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 6U;
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 2U;
                        }
                        if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 4U;
                        }
                    } else if ((0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 5U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 7U;
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 4U;
                    }
                }
            }
            if ((8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 5U;
            } else if ((9U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 9U;
            } else if ((0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 5U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 8U;
                } else {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
                }
            } else if ((0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0bU;
            } else if ((0x0dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
            } else if ((0x20U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0aU;
            }
        }
        if ((0x0aU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((8U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((9U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                        }
                    } else if ((0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                    }
                }
            }
        }
    } else if (((((((((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                      | (0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x13U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x18U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x17U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x1cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x1dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (0x1eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 2U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 6U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 8U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 8U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 8U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 3U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 5U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0aU;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 2U;
            }
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
            if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 1U;
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 4U;
            }
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 1U;
        } else {
            if ((0x14U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x13U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x18U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x17U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 
                                = ((0x1cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                    ? 3U : ((0x1dU 
                                             == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                             ? 5U : 4U));
                        }
                    }
                }
                if ((0x13U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((1U & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x0aU;
                    }
                }
            }
            if ((0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0dU;
            } else if ((0x13U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0cU;
                }
            } else if ((0x18U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0fU;
            } else if ((0x17U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
            } else if ((0x1cU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 
                    = ((0x1dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                        ? 0x12U : 6U);
            }
        }
    } else if ((0x1fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 7U;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshrid_s1 
        = ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1))
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid)
            : (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_no_free_mshr_s1 
        = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
                 [cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1] 
                 >> (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1 = 0U;
    if ((1U & (~ ((((((((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                        | (0x10U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x19U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x1aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
        if ((1U & (~ ((((((((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                            | (0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                       || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                      || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                     || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                    || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                   || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) 
                          | (0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x21U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x22U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (7U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
            if ((1U & (~ ((((((((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                | (8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               | (9U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              | (0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             | (0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            | (0x0dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (0x20U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x0eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
                if (((((((((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                           | (0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x13U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x18U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x17U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x1cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x1dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x1eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                    if ((0x2eU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x14U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x13U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((0x18U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1 = 1U;
                                } else if ((0x17U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1 = 2U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                       | (8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (9U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x0dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x20U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x0eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                    }
                } else if ((8U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((9U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 1U;
                            }
                            if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                            }
                        } else if ((0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                        }
                    }
                }
            } else if (((((((((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              | (0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             | (0x13U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            | (0x18U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (0x17U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x1cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x1dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x1eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                    }
                }
            }
        }
        if (((((((((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                   | (0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) 
                 | (0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (0x21U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
               | (0x22U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (7U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x1bU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1 = 1U;
                }
                if ((0x24U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((1U & (~ (((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                           || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                          || (0x23U 
                                              == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                         || (0x26U 
                                             == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                        || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                       || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                      || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                     || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                    || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                   || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
                        if ((0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 1U;
                            }
                        } else if ((0x21U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x22U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 
                                    = ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                        ? ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                            ? 0U : 
                                           ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                             ? 1U : 0U))
                                        : ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                            ? 0U : 
                                           ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                             ? 1U : 0U)));
                            }
                        }
                    }
                    if ((((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                  || (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 || (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                        if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            if ((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1 = 1U;
                            }
                        }
                    }
                }
            }
        } else if (((((((((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          | (8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (9U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x0dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x20U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x0eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
                }
            } else if ((8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
            } else if ((9U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
            } else if ((0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
                }
            } else {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 
                    = ((0x0cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                        ? 1U : ((0x0dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                 ? 1U : ((0x20U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                          ? 1U : 3U)));
            }
        } else if (((((((((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          | (0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x13U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x18U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x17U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x1cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x1dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x1eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
                }
            } else if ((0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
            } else if ((0x13U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x18U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x17U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x1cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 2U;
                        }
                    }
                }
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_416 = (((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                         | (0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                        | (((0x13U 
                                             == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                            | (0x18U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                           | ((0x17U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                              | ((0x1cU 
                                                  == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                 | ((0x1dU 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                    | (0x1eU 
                                                       == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))));
    __VdfgRegularize_h6e95ff9d_0_417 = (((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                         | (8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                        | (((9U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                            | (0x0bU 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                           | ((0x0cU 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                              | ((0x0dU 
                                                  == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                 | ((0x20U 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                    | (0x0eU 
                                                       == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))));
    __VdfgRegularize_h6e95ff9d_0_420 = (((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                         | (0x10U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                        | (((0x15U 
                                             == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                            | (0x19U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                           | ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                              | ((0x11U 
                                                  == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                 | ((3U 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                    | (0x1aU 
                                                       == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))));
    __VdfgRegularize_h6e95ff9d_0_419 = ((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                        | ((5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                           | ((0x23U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                              | ((0x26U 
                                                  == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                 | ((0x27U 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                    | ((0x28U 
                                                        == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                       | ((0x29U 
                                                           == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                          | ((0x2aU 
                                                              == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                             | ((0x2bU 
                                                                 == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                                | ((0x2cU 
                                                                    == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                                   | (0x2dU 
                                                                      == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))))))))))));
    __VdfgRegularize_h6e95ff9d_0_141 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lruarray_read_val_s1) 
                                        & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_index_s1 = 0U;
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_index_s1 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lrsc_flag_read_index_s1 
        = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_index_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_index_s1 = 0U;
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_index_s1 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_mesi_read_index_s1 
        = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_index_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 = 0ULL;
    if ((1U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
        if ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 
                = (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dtag_write_data_s1));
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_data_s1[0U] 
        = (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_data_s1[1U] 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1) 
            << 1U) | (IData)((cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 
                              >> 0x00000020U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_data_s1[2U] 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1) 
            << 2U) | (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1) 
                       >> 0x0000001fU) | ((IData)((cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 
                                                   >> 0x00000020U)) 
                                          << 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_data_s1[3U] 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1) 
            << 3U) | ((((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1) 
                        >> 0x0000001eU) | ((IData)(
                                                   (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 
                                                    >> 0x00000020U)) 
                                           << 2U)) 
                      | ((IData)((cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 
                                  >> 0x00000020U)) 
                         >> 0x0000001fU)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_data_s1[4U] 
        = (0x0000000fU & ((((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1) 
                            >> 0x0000001dU) | ((IData)(
                                                       (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 
                                                        >> 0x00000020U)) 
                                               << 3U)) 
                          | ((IData)((cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_tag_s1 
                                      >> 0x00000020U)) 
                             >> 0x0000001eU)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_s1 = 0U;
    if ((1U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
        if ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_s1 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2;
        }
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask 
        = ((0U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_s1))
            ? 1U : ((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_s1))
                     ? 2U : ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_s1))
                              ? 4U : 8U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[0U] 
        = (IData)((0x00000001ffffffffULL & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[1U] 
        = (((IData)((0x00000001ffffffffULL & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                    >> 1U))))))) 
            << 1U) | (IData)(((0x00000001ffffffffULL 
                               & (- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask)))))) 
                              >> 0x00000020U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[2U] 
        = ((0xfffffffcU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[2U]) 
           | (((IData)((0x00000001ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                       >> 1U))))))) 
               >> 0x0000001fU) | ((IData)(((0x00000001ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                     >> 1U)))))) 
                                           >> 0x00000020U)) 
                                  << 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[2U] 
        = ((3U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[2U]) 
           | ((IData)((0x00000001ffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                      >> 2U))))))) 
              << 2U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[3U] 
        = (((IData)((0x00000001ffffffffULL & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                    >> 2U))))))) 
            >> 0x0000001eU) | (((IData)((0x00000001ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                  >> 3U))))))) 
                                << 3U) | ((IData)((
                                                   (0x00000001ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                             >> 2U)))))) 
                                                   >> 0x00000020U)) 
                                          << 2U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_write_mask_s1[4U] 
        = (0x0000000fU & (((3U & ((IData)((0x00000001ffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                    >> 3U))))))) 
                                  >> 0x0000001dU)) 
                           | ((IData)(((0x00000001ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                 >> 2U)))))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001eU)) | ((4U 
                                                   & ((IData)(
                                                              (0x00000001ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                                >> 3U))))))) 
                                                      >> 0x0000001dU)) 
                                                  | ((IData)(
                                                             ((0x00000001ffffffffULL 
                                                               & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_write_way_mask) 
                                                                                >> 3U)))))) 
                                                              >> 0x00000020U)) 
                                                     << 3U))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1 = 0U;
    if ((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_index_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1 = 0U;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1 = 1U;
    } else if ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_index_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1 = 0U;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1 = 0U;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_index_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_index_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1 = 0U;
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_rw_s1 
        = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_rw_s1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_address_s1 = 0ULL;
    if ((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_address_s1 
            = (0x000000ffffffffffULL & (((QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[6U])) 
                                         << 0x0000001bU) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__l15_req[5U])) 
                                           >> 5U)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_address_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_address_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_control_s1 = 0U;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_control_s1 
            = ((((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_bit_s1) 
                   << 4U) | (((0x23U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1)) 
                             << 3U)) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_l1_replacement_way_s1) 
                                         << 1U) | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1))) 
                << 8U) | ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1) 
                            << 5U) | ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1) 
                                      << 4U)) | ((((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1) 
                                                   << 3U) 
                                                  | ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_init_s1) 
                                                     << 1U) 
                                                    | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_control_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_control_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1 = 0U;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1 = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_op_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1 = 0U;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_threadid_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_mshrid_s1 = 0U;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_mshrid_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_address_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_address_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_control_s1 = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_control_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_control_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1 = 0U;
        if ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1 = 4U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_op_s1 
                = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1;
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1 = 0U;
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_threadid_s1;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_op_s1 
                = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_type_s1;
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1 = 0U;
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_threadid_s1 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_threadid_s1;
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_mshrid_s1 = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_mshrid_s1 
        = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_mshrid_s1;
    __VdfgRegularize_h6e95ff9d_0_418 = (((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                         | (0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                        | (((IData)(__VdfgRegularize_h6e95ff9d_0_419) 
                                            | (0x12U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                           | ((0x21U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                              | ((0x22U 
                                                  == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                 | ((6U 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                    | (7U 
                                                       == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve_next 
        = (0x0000000fU & (((~ (IData)(__VdfgRegularize_h6e95ff9d_0_141)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_421))
                           ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve))
                           : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve) 
                              - ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_421)) 
                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_141)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_420)
            ? ((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                ? ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                    ? 0U : 1U) : ((0x10U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                   ? 1U : ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                            ? 1U : 
                                           ((0x19U 
                                             == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                             ? 1U : 
                                            ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                              ? 1U : 
                                             ((0x11U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                               ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                                    ? 0U
                                                    : 3U))
                                               : ((3U 
                                                   == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                   ? 1U
                                                   : 2U)))))))
            : ((IData)(__VdfgRegularize_h6e95ff9d_0_418)
                ? ((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                    ? ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? 0U : 1U) : ((0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                       ? 1U : ((IData)(__VdfgRegularize_h6e95ff9d_0_419)
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                                    ? 0U
                                                    : 3U)
                                                : (
                                                   (0x12U 
                                                    == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                    ? 0U
                                                    : 
                                                   ((0x21U 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                     ? 1U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                      ? 1U
                                                      : 0U))))))
                : ((IData)(__VdfgRegularize_h6e95ff9d_0_417)
                    ? 0U : ((IData)(__VdfgRegularize_h6e95ff9d_0_416)
                             ? ((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                 ? 0U : ((0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                          ? 0U : ((0x13U 
                                                   == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                   ? 
                                                  ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)
                                                    ? 1U
                                                    : 3U)
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                    ? 1U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                     ? 2U
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                      ? 0U
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                       ? 1U
                                                       : 2U)))))))
                             : ((0x1fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                 ? 1U : ((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                          ? 1U : 0U))))));
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s2) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__non_cacheable_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__non_cacheable_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__prefetch_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__prefetch_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__config_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__config_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__hmt_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__hmt_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_read_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_read_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s2_mshr_operation_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s2_mshr_operation_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__cpx_operation_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__cpx_operation_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_stage_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_stage_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshrid_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshrid_s2;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__pcx_ack_stage_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__pcx_ack_stage_s2;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lruarray_read_val_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__non_cacheable_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__prefetch_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__config_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__hmt_op_s2_next 
            = (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_read_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s2_mshr_operation_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__cpx_operation_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_stage_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshrid_s2_next 
            = cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshrid_s1;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__pcx_ack_stage_s2_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1;
    }
    if (__VdfgRegularize_h6e95ff9d_0_420) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 
            = ((0x0fU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
               & ((0x10U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                  & ((0x15U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                     & ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                        & ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                           & ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1) 
                                 | (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)))))))));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed 
            = ((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                ? ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                    ? 2U : 0U) : ((0x10U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                   ? 0U : ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                            ? 1U : 
                                           ((0x19U 
                                             == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                             ? 0U : 
                                            ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                              ? 1U : 
                                             ((0x11U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                               ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)
                                                   ? 1U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                                    ? 2U
                                                    : 0U))
                                               : ((3U 
                                                   == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                   ? 
                                                  ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)
                                                    ? 0U
                                                    : 1U)
                                                   : 0U)))))));
    } else if (__VdfgRegularize_h6e95ff9d_0_418) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 
            = ((0x1bU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
               & ((0x24U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                  & ((IData)(__VdfgRegularize_h6e95ff9d_0_419) 
                     & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)) 
                        & ((4U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                           & (0x23U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed 
            = ((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                ? ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                    ? 0U : 1U) : ((0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                   ? 0U : ((IData)(__VdfgRegularize_h6e95ff9d_0_419)
                                            ? ((0U 
                                                == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                                ? 2U
                                                : 0U)
                                            : 0U)));
    } else {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 
            = ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_417)) 
               & ((IData)(__VdfgRegularize_h6e95ff9d_0_416) 
                  & ((0x2eU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                     & ((0x14U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                        & ((~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)) 
                           & (0x13U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))));
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed 
            = ((IData)(__VdfgRegularize_h6e95ff9d_0_417)
                ? ((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                    ? ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? 1U : 0U) : ((8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                       ? 0U : ((9U 
                                                == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                ? 0U
                                                : (
                                                   (0x0bU 
                                                    == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))))
                : ((IData)(__VdfgRegularize_h6e95ff9d_0_416)
                    ? ((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                        ? ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                            ? 1U : 0U) : ((0x14U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                           ? 0U : (
                                                   (0x13U 
                                                    == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                    ? 
                                                   ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)
                                                     ? 0U
                                                     : 1U)
                                                    : 0U)))
                    : 0U));
    }
    __VdfgRegularize_h6e95ff9d_0_414 = ((IData)(__VdfgRegularize_h6e95ff9d_0_418) 
                                        & ((0x1bU != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                           & ((0x24U 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                              | ((IData)(__VdfgRegularize_h6e95ff9d_0_419) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__en_i 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lruarray_read_val_s1) 
            & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1))) 
           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_408) 
               & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__pcx_ack_stage_s2))) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_407) 
                 & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__pcx_ack_stage_s3)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1) 
           & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_s1) 
               & ((IData)(__VdfgRegularize_h6e95ff9d_0_420)
                   ? ((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                       ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                       : ((0x10U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          & ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                             | ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                & ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                   & ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_415)
                                       : ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)) 
                                          & (3U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))))))
                   : (IData)(__VdfgRegularize_h6e95ff9d_0_414))) 
              | (((((IData)(__VdfgRegularize_h6e95ff9d_0_420)
                     ? ((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                         ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                         : ((0x10U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                            & ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                               | ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                  & ((2U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_170))))))
                     : ((IData)(__VdfgRegularize_h6e95ff9d_0_418)
                         ? ((0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                             ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                             : ((0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_419)
                                    ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                    : (~ ((0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                          | (0x21U 
                                             == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))))
                         : ((IData)(__VdfgRegularize_h6e95ff9d_0_417)
                             ? ((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                 ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                 : ((8U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                    | ((9U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                       & ((0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                           ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                           : ((0x0cU 
                                               == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                              | ((0x20U 
                                                  != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                                 | (0x0dU 
                                                    == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))))))))
                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_416) 
                                & ((0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                   & (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))))))) 
                   & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s2) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1) 
                          == (0x0000007fU & (IData)(
                                                    (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                                     >> 4U))))) 
                      | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__cache_index_s3) 
                            == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1))))) 
                  | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s2)) 
                 | (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_no_free_mshr_s1) 
                     & ((IData)(__VdfgRegularize_h6e95ff9d_0_420)
                         ? ((0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                             ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                             : ((0x10U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                & ((0x15U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                   | ((0x19U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                      & ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_170))))))
                         : (IData)(__VdfgRegularize_h6e95ff9d_0_414))) 
                    | (((((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed)) 
                          & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_noc1_command_buffer_1_unavail_s1)) 
                         | ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed)) 
                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_noc1_command_buffer_1_unavail_s1) 
                               | (1U == (0x0000000fU 
                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_tmp_result)))))) 
                        | ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1)
                            ? (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail))
                            : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1) 
                               & (2U > (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail))))) 
                       & ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1)) 
                          & (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__en_i) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__req));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_val_s1 = 0U;
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_val_s1 = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_mesi_read_val_s1 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_read_val_s1) 
            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1)) 
           & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_val_s1 = 0U;
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_val_s1 = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lrsc_flag_read_val_s1 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_read_val_s1) 
            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1)) 
           & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_atomic_instruction_s1 
        = ((((((((((((4U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                     | (5U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x23U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x24U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x26U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x27U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (0x28U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
               | (0x29U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (0x2aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (0x2bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
            | (0x2cU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
           | (0x2dU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_storenc_instruction_s1 
        = ((0x11U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
           & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_loadnc_instruction_s1 
        = (0x0fU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_data_invalidation_s1 
        = ((6U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
           | (7U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_instruction_invalidation_s1 
        = (0x12U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_ackdt_s1 
        = (((0x0aU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
            | (0x0bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
           | (0x2eU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_flush_s1 
        = (0x1bU == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1));
    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 0U;
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)))) {
            if ((((((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_atomic_instruction_s1) 
                    & (0x24U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_storenc_instruction_s1)) 
                  | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_loadnc_instruction_s1)) 
                 | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_pcx_flush_s1))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 1U;
            } else if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_data_invalidation_s1) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 2U;
            } else if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_instruction_invalidation_s1) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 6U;
            } else if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_is_noc2_ackdt_s1) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 5U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 1U;
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 0U;
        }
    } else if ((5U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 5U;
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 2U;
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 3U;
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 4U;
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 0U;
        }
    } else if ((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 6U;
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_next_s1 = 0U;
        }
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_val_s1 = 0U;
    if ((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_val_s1 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1;
    } else if ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_val_s1 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1;
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_val_s1 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_val_s1) 
           & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__acklogic_noc2_s1 = 0U;
    if ((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__acklogic_noc2_s1 = 1U;
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_s1 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1) 
            & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1))) 
           & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__acklogic_noc2_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_val_s1 = 0U;
    if ((1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_val_s1 = 1U;
    } else if ((2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_val_s1 = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_val_s1 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__s1_mshr_write_val_s1) 
            & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1))) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1) 
            & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1))) 
           & (0U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_upX 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_csm_clear_ticket_val) 
           | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up1 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_csm_clear_ticket_val) 
           ^ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up2 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_csm_clear_ticket_val) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down1 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req) 
           & (1U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down2 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req) 
           & (2U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add2 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up2) 
           & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add1 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up2) 
            & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down1)) 
           | ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up1) 
              & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus1 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down2) 
            & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_up1)) 
           | ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down1) 
              & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_upX))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus2 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_down2) 
           & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_upX)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up1 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_csm_clear_ticket_val) 
           & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc1encoder_l15_req_data_sent)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up2 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_csm_clear_ticket_val) 
           & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc1encoder_l15_req_data_sent)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down1 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req) 
           & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down2 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_req) 
           & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add2 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up2) 
            & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down1))) 
           & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down2)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add1 
        = ((((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up1) 
             & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down1))) 
            & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down2))) 
           | ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up2) 
              & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down1)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus2 
        = (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down2) 
            & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up1))) 
           & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up2)));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus1 
        = ((((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down1) 
             & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up1))) 
            & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up2))) 
           | ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_down2) 
              & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_up1)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__req))
                  ? ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                     | ((1U > (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                        & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                           >> 1U))) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_icache_data_fifo__pop_i 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i) 
           & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__arb_idx)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i) 
           & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
               >> 1U) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__arb_idx)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__write_en 
        = ((~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_rw_s1)) 
           & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_val_s1));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__read_en 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_rw_s1) 
           & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_val_s1));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__rw_conflict 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__wen_r) 
           & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_val_s1) 
              & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__A_r) 
                 == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_dtag_index_s1))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data_ack 
        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_s1) 
           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_408) 
               & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_stage_s2))) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_407) 
                 & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_stage_s3)))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_alloc_mask = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_dealloc_mask = 0U;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_val_s1) 
         & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_op_s1)))) {
        if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_mshrid_s1))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_alloc_mask 
                = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_alloc_mask) 
                   | (3U & ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_threadid_s1))));
        }
    }
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_val_s3) 
         & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_op_s3)))) {
        if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_mshrid_s3))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_dealloc_mask 
                = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_dealloc_mask) 
                   | (3U & ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_threadid_s3))));
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_val_next 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_val) 
            & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_dealloc_mask))) 
           | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_alloc_mask));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_alloc_mask = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_dealloc_mask = 0U;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_val_s1) 
         & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_op_s1)))) {
        if ((2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_mshrid_s1))) {
            if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_mshrid_s1))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_alloc_mask 
                    = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_alloc_mask) 
                       | (3U & ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_threadid_s1))));
            }
        }
    }
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_val_s3) 
         & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_op_s3)))) {
        if ((2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_mshrid_s3))) {
            if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_mshrid_s3))) {
                cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_dealloc_mask 
                    = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_dealloc_mask) 
                       | (3U & ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_threadid_s3))));
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_val_next 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_val) 
            & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_dealloc_mask))) 
           | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__st_alloc_mask));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_alloc_mask = 0U;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_val_s1) 
         & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_op_s1)))) {
        if ((2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_mshrid_s1))) {
            if ((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_mshrid_s1))) {
                if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_mshrid_s1))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_alloc_mask 
                        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_alloc_mask) 
                           | (3U & ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_threadid_s1))));
                }
            }
        }
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_dealloc_mask = 0U;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_val_s3) 
         & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_op_s3)))) {
        if ((2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_mshrid_s3))) {
            if ((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_mshrid_s3))) {
                if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_mshrid_s3))) {
                    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_dealloc_mask 
                        = ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_dealloc_mask) 
                           | (3U & ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipe_mshr_threadid_s3))));
                }
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_val_next 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_val) 
            & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_dealloc_mask))) 
           | (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_alloc_mask));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_avail_next 
        = (0x0000000fU & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add2)
                           ? ((IData)(2U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_avail))
                           : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_add1)
                               ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_avail))
                               : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus1)
                                   ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_avail) 
                                      - (IData)(1U))
                                   : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_minus2)
                                       ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_avail) 
                                          - (IData)(2U))
                                       : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_avail))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail_next 
        = (0x0000000fU & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add1)
                           ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail))
                           : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_add2)
                               ? ((IData)(2U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail))
                               : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus1)
                                   ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail) 
                                      - (IData)(1U))
                                   : ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_minus2)
                                       ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail) 
                                          - (IData)(2U))
                                       : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_data_avail))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = (1U & (((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_icache_data_fifo__pop_i))
                  ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))
                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = (1U & (((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i))
                  ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))
                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_response_val_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_l2_miss_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_l2_miss_mshrid_next = 0U;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data_ack) {
        if ((0x1dU == (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                      >> 0x0000000eU)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_response_val_next = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_l2_miss_next 
                = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                         >> 3U));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_l2_miss_mshrid_next 
                = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid) 
                    << 2U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid));
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__is_message_new_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data_ack) 
           | ((~ ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)) 
                  & ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_409)))) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__is_message_new)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__msg_len = 0U;
    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__msg_len 
            = (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__buffer_processor_data_noc2 
                                      >> 0x16U)));
        if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_f))) {
            if ((0U == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__msg_len))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next = 2U;
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index)));
            }
        }
    } else if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__msg_len 
            = (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
                                      [0U] >> 0x16U)));
        if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_f))) {
            if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index) 
                 == (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__msg_len))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next = 2U;
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index)));
            }
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state;
        }
    } else if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state))) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data_ack) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index_next = 0U;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state_next = 2U;
        }
    }
}

void Vcmp_top___024root___act_comb__TOP__5(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent = 0;
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[0U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[1U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[2U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[3U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[3U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[4U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[4U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[5U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[5U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[6U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[6U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[7U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[7U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[8U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[8U];
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) 
         & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h948b70fc__0[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__dcache_adapter[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h948b70fc__0[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__dcache_adapter[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h948b70fc__0[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__dcache_adapter[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h948b70fc__0[3U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__dcache_adapter[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h948b70fc__0[4U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__dcache_adapter[4U];
        if ((0x010bU >= (0x000001ffU & ((IData)(0x00000086U) 
                                        * (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(268, 134, (0x000001ffU 
                                       & ((IData)(0x00000086U) 
                                          * (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__mem_n, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h948b70fc__0);
        }
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__dcache_adapter_data_req) 
            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack)) 
           & (0U == (0x30U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__dcache_adapter[4U])));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_d 
        = (3U & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_ack) 
                  & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent))
                  ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_q)
                  : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_ack)
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_q) 
                         - (IData)(1U)) : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_q) 
                                           + (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent)))));
}

extern const VlWide<12>/*383:0*/ Vcmp_top__ConstPool__CONST_h1ba4b964_0;
extern const VlWide<10>/*319:0*/ Vcmp_top__ConstPool__CONST_h3c9d8e9d_0;

void Vcmp_top___024root___act_comb__TOP__6(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rd;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rd = 0;
    VlWide<4>/*127:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o;
    VL_ZERO_W(128, cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o);
    VlWide<6>/*191:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o;
    VL_ZERO_W(192, cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o);
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[0U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[1U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[1U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[1U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[2U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[1U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[2U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[2U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[3U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[2U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[3U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[3U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[4U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[3U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[4U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[4U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[5U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[4U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[5U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[5U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[5U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[6U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[7U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[7U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[7U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[7U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[8U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[9U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000aU] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[0x0000000aU] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000bU] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000aU] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[0x0000000bU] 
           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000bU] 
              >> 1U));
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_instr_issue_id) 
         & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flush_unissued_instr_ctrl_id)))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_is_rd_fpr__4__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if ((((((((((0x51U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                    && (0x54U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                   || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                       && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                                  || (0x64U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                 || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                               || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                              || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                  && (0x6fU >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                             || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))))) {
                            vlSelfRef.__Vfunc_is_rd_fpr__4__Vfuncout = 1U;
                            goto __Vlabel0;
                        } else {
                            vlSelfRef.__Vfunc_is_rd_fpr__4__Vfuncout = 0U;
                            goto __Vlabel0;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x76U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                                   << 3U) 
                                                                  | (((0x6bU 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                      & (0x6fU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                                     << 2U)) 
                                                                 | (((0x68U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                     << 1U) 
                                                                    | (0x66U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                                                                << 4U) 
                                                               | ((((0x65U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                    << 3U) 
                                                                   | ((0x64U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                      << 2U)) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                                      << 1U) 
                                                                     | ((0x51U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                        & (0x54U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))))))))))) {
                            if ((0U != (((((((0x76U 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                            << 3U) 
                                           | (((0x6bU 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                               & (0x6fU 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                              << 2U)) 
                                          | (((0x68U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                              << 1U) 
                                             | (0x66U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                                         << 4U) | (
                                                   (((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))))))) {
                                if (vlSymsp->_vm_contextp__->assertOn()) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                }
                            }
                        }
                        __Vlabel0: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__Vfuncout))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000000aU)))) 
                    & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n) 
                   | (0x00000000ffffffffULL & ((1U 
                                                & (~ 
                                                   (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                                                    >> 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                        >> 0x0000000aU))))) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                      >> 0x0000000aU)))));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000000aU)))) 
                    & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n) 
                   | (0x00000000ffffffffULL & ((1U 
                                                & (~ 
                                                   (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                                                    >> 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                        >> 0x0000000aU))))) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                      >> 0x0000000aU)))));
        }
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs1 
        = (1U & (([&]() {
                    vlSelfRef.__Vfunc_is_rs1_fpr__5__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                    && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                   || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                  || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                 || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                               || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                              || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))))) {
                            vlSelfRef.__Vfunc_is_rs1_fpr__5__Vfuncout = 1U;
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.__Vfunc_is_rs1_fpr__5__Vfuncout = 0U;
                            goto __Vlabel1;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                                                   << 3U) 
                                                                  | ((0x6aU 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                     << 2U)) 
                                                                 | (((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                     << 1U) 
                                                                    | (0x67U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))) 
                                                                << 4U) 
                                                               | ((((0x66U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                    << 3U) 
                                                                   | ((0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                      << 2U)) 
                                                                  | (((0x63U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                      << 1U) 
                                                                     | ((0x5bU 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                        & (0x62U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                            << 3U) 
                                           | ((0x6aU 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                              << 2U)) 
                                          | (((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                              << 1U) 
                                             | (0x67U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))) 
                                         << 4U) | (
                                                   (((0x66U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                     << 3U) 
                                                    | ((0x65U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                       << 2U)) 
                                                   | (((0x63U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                       << 1U) 
                                                      | ((0x5bU 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                         & (0x62U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                }
                            }
                        }
                        __Vlabel1: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__Vfuncout))
                  ? (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000016U)))
                  : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000016U)))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs2 
        = (1U & (([&]() {
                    vlSelfRef.__Vfunc_is_rs2_fpr__6__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                   && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                  || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                      && (0x5dU >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                 || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                     && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                               || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                   && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                              || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))))) {
                            vlSelfRef.__Vfunc_is_rs2_fpr__6__Vfuncout = 1U;
                            goto __Vlabel2;
                        } else {
                            vlSelfRef.__Vfunc_is_rs2_fpr__6__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                   << 3U) 
                                                                  | ((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                     << 2U)) 
                                                                 | ((((0x66U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                      & (0x67U 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                     << 1U) 
                                                                    | (0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                                                << 3U) 
                                                               | ((((0x5fU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                   << 2U) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                       & (0x5dU 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                      << 1U) 
                                                                     | ((0x55U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                        & (0x58U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                            << 3U) 
                                           | ((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                              << 2U)) 
                                          | ((((0x66U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                               & (0x67U 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                              << 1U) 
                                             | (0x65U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                         << 3U) | (
                                                   (((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                    << 2U) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                        & (0x5dU 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                       << 1U) 
                                                      | ((0x55U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                         & (0x58U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                }
                            }
                        }
                        __Vlabel2: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__Vfuncout))
                  ? (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000010U)))
                  : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000010U)))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rd 
        = (1U & (([&]() {
                    vlSelfRef.__Vfunc_is_rd_fpr__7__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if ((((((((((0x51U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                    && (0x54U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                   || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                       && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                                  || (0x64U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                 || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                               || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                              || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                  && (0x6fU >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                             || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))))) {
                            vlSelfRef.__Vfunc_is_rd_fpr__7__Vfuncout = 1U;
                            goto __Vlabel3;
                        } else {
                            vlSelfRef.__Vfunc_is_rd_fpr__7__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x76U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                                   << 3U) 
                                                                  | (((0x6bU 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                      & (0x6fU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                                     << 2U)) 
                                                                 | (((0x68U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                     << 1U) 
                                                                    | (0x66U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                                                                << 4U) 
                                                               | ((((0x65U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                    << 3U) 
                                                                   | ((0x64U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                      << 2U)) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                                      << 1U) 
                                                                     | ((0x51U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                        & (0x54U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))))))))))) {
                            if ((0U != (((((((0x76U 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                            << 3U) 
                                           | (((0x6bU 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                               & (0x6fU 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                              << 2U)) 
                                          | (((0x68U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                              << 1U) 
                                             | (0x66U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                                         << 4U) | (
                                                   (((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                }
                            }
                        }
                        __Vlabel3: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__Vfuncout))
                  ? (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                        >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000000aU))))
                  : ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                      >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                         >> 0x0000000aU))) 
                     ^ (0U != (0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                              >> 0x0000000aU))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = ((0xf81fffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
           | (0x07e00000U & ((IData)((QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                         >> 0x00000016U))))) 
                             << 0x00000015U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = ((0xffe07fffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
           | (0x001f8000U & ((IData)((QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                         >> 0x00000010U))))) 
                             << 0x0000000fU)));
    if (([&]() {
                vlSelfRef.__Vfunc_is_imm_fpr__8__op 
                    = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                       << 4U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                 >> 0x0000001cU)));
                {
                    if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                           && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                          || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                              && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)))) 
                         || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                             && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))))) {
                        vlSelfRef.__Vfunc_is_imm_fpr__8__Vfuncout = 1U;
                        goto __Vlabel4;
                    } else {
                        vlSelfRef.__Vfunc_is_imm_fpr__8__Vfuncout = 0U;
                        goto __Vlabel4;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          ((((0x76U 
                                                              <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                             & (0x79U 
                                                                >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                                            << 2U) 
                                                           | ((((0x5fU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                                & (0x62U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                                               << 1U) 
                                                              | ((0x59U 
                                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                                 & (0x5aU 
                                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))))))))))) {
                        if ((0U != ((((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                      & (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                     << 2U) | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))))))) {
                            if (vlSymsp->_vm_contextp__->assertOn()) {
                                VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             8,(IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op));
                                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                            }
                        }
                    }
                    __Vlabel4: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__Vfuncout))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
            = ((0x000001ffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U]) 
               | ((IData)((QData)((IData)((0x0000001fU 
                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                              >> 0x0000000aU))))) 
                  << 9U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[7U] 
            = (((IData)((QData)((IData)((0x0000001fU 
                                         & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                            >> 0x0000000aU))))) 
                >> 0x00000017U) | ((IData)(((QData)((IData)(
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                                                >> 0x0000000aU)))) 
                                            >> 0x00000020U)) 
                                   << 9U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
            = ((0xfffffe00U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
               | ((IData)(((QData)((IData)((0x0000001fU 
                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                               >> 0x0000000aU)))) 
                           >> 0x00000020U)) >> 0x00000017U));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = ((0xffff81ffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
           | (0x00007e00U & ((IData)((QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                         >> 0x0000000aU))))) 
                             << 9U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n 
        = (0xfffffffeU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n);
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flush_ctrl_id) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n = 0U;
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x00000015U)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                   >> 0x00000020U));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x0000000fU)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                   >> 0x00000020U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile 
        = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                            (((IData)(0x0000003fU) 
                              + (0x000007ffU & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                 >> 9U)), 6U))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                       >> 9U)), 6U)))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                      >> 9U)), 6U))))) 
           | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                       >> 9U)), 6U)))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                          (((IData)(0x0000001fU) 
                                            + (0x000007ffU 
                                               & VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                   >> 9U)), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                 >> 9U)), 6U))))) 
              | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                 (0x0000003fU & (VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                   >> 9U)), 6U) 
                                                 >> 5U))])) 
                 >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                     >> 9U)), 6U)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[0U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[1U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[1U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[1U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[2U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[2U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[2U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[3U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[3U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[3U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[4U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[4U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[4U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[5U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[5U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[5U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[6U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[7U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[7U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[7U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[8U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
        = (((IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                      << 0x00000036U) | (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                          << 0x00000016U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                            >> 0x0000000aU)))) 
            << 0x0000000aU) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q) 
                                << 7U) | (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[9U] 
                                          & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x0000000aU] 
        = (((IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                      << 0x00000036U) | (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                          << 0x00000016U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                            >> 0x0000000aU)))) 
            >> 0x00000016U) | ((IData)(((((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                                          << 0x00000036U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                             << 0x00000016U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                               >> 0x0000000aU))) 
                                        >> 0x00000020U)) 
                               << 0x0000000aU));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x0000000bU] 
        = ((IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                      << 0x00000036U) | (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                          << 0x00000016U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                            >> 0x0000000aU))) 
                    >> 0x00000020U)) >> 0x00000016U);
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x00000015U)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                   >> 0x00000020U));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x0000000fU)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                   >> 0x00000020U));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[4U] 
        = (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile);
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[5U] 
        = (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile 
                   >> 0x00000020U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile 
        = (([&]() {
                vlSelfRef.__Vfunc_is_rs1_fpr__57__op 
                    = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                       << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                {
                    if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                               || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                              || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                             || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                            || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                           || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                          || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                         || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                             && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))))) {
                        vlSelfRef.__Vfunc_is_rs1_fpr__57__Vfuncout = 1U;
                        goto __Vlabel5;
                    } else {
                        vlSelfRef.__Vfunc_is_rs1_fpr__57__Vfuncout = 0U;
                        goto __Vlabel5;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((((((0x6bU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                                                               << 3U) 
                                                              | ((0x6aU 
                                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                 << 2U)) 
                                                             | (((0x69U 
                                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                 << 1U) 
                                                                | (0x67U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))) 
                                                            << 4U) 
                                                           | ((((0x66U 
                                                                 == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                << 3U) 
                                                               | ((0x65U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                  << 2U)) 
                                                              | (((0x63U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                  << 1U) 
                                                                 | ((0x5bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))))))))))) {
                        if ((0U != (((((((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                         & (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                                        << 3U) | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                  << 2U)) 
                                      | (((0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                          << 1U) | 
                                         (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))) 
                                     << 4U) | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             8,(IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op));
                                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                            }
                        }
                    }
                    __Vlabel5: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__Vfuncout))
            ? (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[1U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[0U])))
            : (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[1U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[0U]))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile 
        = (([&]() {
                vlSelfRef.__Vfunc_is_rs2_fpr__58__op 
                    = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                       << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                {
                    if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                               && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                              || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                  && (0x5dU >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                             || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                 && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                            || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                           || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                               && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                          || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                         || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                             && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))))) {
                        vlSelfRef.__Vfunc_is_rs2_fpr__58__Vfuncout = 1U;
                        goto __Vlabel6;
                    } else {
                        vlSelfRef.__Vfunc_is_rs2_fpr__58__Vfuncout = 0U;
                        goto __Vlabel6;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((((((0x6bU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                               << 3U) 
                                                              | ((0x69U 
                                                                  == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                 << 2U)) 
                                                             | ((((0x66U 
                                                                   <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                  & (0x67U 
                                                                     >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                                 << 1U) 
                                                                | (0x65U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                                                            << 3U) 
                                                           | ((((0x5fU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                & (0x62U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                               << 2U) 
                                                              | ((((0x59U 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                   & (0x5dU 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                                  << 1U) 
                                                                 | ((0x55U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                    & (0x58U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))))))))))) {
                        if ((0U != (((((((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                         & (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                        << 3U) | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                  << 2U)) 
                                      | ((((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                           & (0x67U 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                          << 1U) | 
                                         (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                                     << 3U) | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             8,(IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op));
                                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                            }
                        }
                    }
                    __Vlabel6: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__Vfuncout))
            ? (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[3U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[2U])))
            : (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[3U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[2U]))));
}

void Vcmp_top___024root___act_comb__TOP__7(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN 
                = ((0x01fffffffffffff8ULL & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                             << 3U)) 
                   | (QData)((IData)((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                            >> 1U)))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN 
                = (((QData)((IData)((1U & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__Sum_DO 
                                                   >> 0x00000039U))))) 
                    << 0x00000039U) | ((0x01fffffffffffffcULL 
                                        & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__Sum_DO 
                                           << 2U)) 
                                       | (QData)((IData)(
                                                         (3U 
                                                          & (~ 
                                                             ((2U 
                                                               & ((0xfffffffeU 
                                                                   & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                                                   [2U]) 
                                                                  ^ 
                                                                  (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                                                   [2U] 
                                                                   << 1U))) 
                                                              | (1U 
                                                                 & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                                                 [2U]))))))));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN 
                = ((0x01fffffffffffff8ULL & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                             << 3U)) 
                   | (QData)((IData)(((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                       [0U] << 2U) 
                                      | ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                          [1U] << 1U) 
                                         | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                         [2U])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                [2U];
        }
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP;
    }
}

void Vcmp_top___024root___act_comb__TOP__8(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready = 0;
    // Body
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_valid) 
           & ((((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                  & ((4U >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)) 
                     & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                        >> (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)))) 
                 << 3U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                            & ((4U >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)) 
                               & ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__in_ready_o) 
                                    << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__in_ready_o)) 
                                  >> (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)))) 
                           << 2U)) | ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                                        & ((4U >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)) 
                                           & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                              >> (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)))) 
                                       << 1U) | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                                 & ((4U 
                                                     >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)) 
                                                    & ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__in_ready_o) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__in_ready_o)) 
                                                       >> (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt)))))) 
              >> ([&]() {
                    vlSelfRef.__Vfunc_get_opgroup__74__op 
                        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op;
                    vlSelfRef.__Vfunc_get_opgroup__74__Vfuncout 
                        = ((8U & (IData)(vlSelfRef.__Vfunc_get_opgroup__74__op))
                            ? ((4U & (IData)(vlSelfRef.__Vfunc_get_opgroup__74__op))
                                ? ((2U & (IData)(vlSelfRef.__Vfunc_get_opgroup__74__op))
                                    ? ((1U & (IData)(vlSelfRef.__Vfunc_get_opgroup__74__op))
                                        ? 2U : 3U) : 3U)
                                : ((2U & (IData)(vlSelfRef.__Vfunc_get_opgroup__74__op))
                                    ? 3U : 2U)) : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vfunc_get_opgroup__74__op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_get_opgroup__74__op))
                                                     ? 2U
                                                     : 1U)
                                                    : 0U));
                }(), (IData)(vlSelfRef.__Vfunc_get_opgroup__74__Vfuncout))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__hold_inputs = 0U;
    if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_q)))) {
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q) 
             & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__hold_inputs = 1U;
        }
    }
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_q) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_d = 1U;
        if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_d = 0U;
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q) 
             & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_d = 1U;
        }
    }
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flush_ctrl_ex) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_d = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fpu_ready_ex_id = 0U;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__state_q) {
        if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fpu_ready_ex_id = 1U;
        }
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fpu_ready_ex_id = 1U;
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q) 
             & (~ (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_in_ready)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fpu_ready_ex_id = 0U;
        }
    }
}

void Vcmp_top___024root___act_comb__TOP__9(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_286;
    __VdfgRegularize_h6e95ff9d_0_286 = 0;
    QData/*63:0*/ __Vtemp_1;
    QData/*63:0*/ __Vtemp_2;
    QData/*63:0*/ __Vtemp_3;
    QData/*63:0*/ __Vtemp_4;
    QData/*63:0*/ __Vtemp_5;
    QData/*63:0*/ __Vtemp_6;
    QData/*63:0*/ __Vtemp_7;
    QData/*63:0*/ __Vtemp_8;
    QData/*63:0*/ __Vtemp_9;
    QData/*63:0*/ __Vtemp_10;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_359 = (IData)(
                                                         ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U] 
                                                           >> 0x00000019U) 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__speculative_d) 
                                                              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__addr_ni)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_data_ack 
        = (IData)((((((((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q)) 
                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_359)) 
                       & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_360))) 
                      & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_358))) 
                     & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT____Vcellinp__i_instr_realign__flush_i))) 
                    & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__inv_q))) 
                   & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))));
    if ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))) {
        __VdfgRegularize_h6e95ff9d_0_286 = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d 
            = ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_285)
                             ? 1U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))
                         : ((0x02000000U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[5U])
                             ? 1U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))));
    } else if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))) {
            if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_285) {
                __VdfgRegularize_h6e95ff9d_0_286 = 
                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282)
                      ? 0U : 1U);
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d = 1U;
            } else {
                __VdfgRegularize_h6e95ff9d_0_286 = 0U;
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d 
                    = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282)
                        ? 5U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q));
            }
        } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_359) {
            if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_360) {
                __VdfgRegularize_h6e95ff9d_0_286 = 0U;
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d = 1U;
            } else if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_358) {
                __VdfgRegularize_h6e95ff9d_0_286 = 
                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_rtrn_vld)
                      ? (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT____Vcellinp__i_instr_realign__flush_i)))
                      : (2U | (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT____Vcellinp__i_instr_realign__flush_i)))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d 
                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT____VdfgRegularize_hda97a0a8_0_2)
                        ? 1U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_rtrn_vld)
                                 ? 1U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__ready_o)
                                          ? 2U : 1U)));
            } else {
                __VdfgRegularize_h6e95ff9d_0_286 = 0U;
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d 
                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT____Vcellinp__i_instr_realign__flush_i)
                        ? 1U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__inv_q)
                                 ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q)
                                 : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_data_ack)
                                     ? 3U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))));
            }
        } else {
            __VdfgRegularize_h6e95ff9d_0_286 = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d 
                = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_282)
                    ? 4U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q));
        }
    } else if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))) {
        if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_281) {
            __VdfgRegularize_h6e95ff9d_0_286 = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d = 0U;
        } else {
            __VdfgRegularize_h6e95ff9d_0_286 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_rtrn_vld)
                                                 ? 0U
                                                 : 2U);
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d 
                = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT____VdfgRegularize_hda97a0a8_0_2)
                    ? 1U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_rtrn_vld)
                             ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q)
                             : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__ready_o)
                                 ? 2U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q))));
        }
    } else {
        __VdfgRegularize_h6e95ff9d_0_286 = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_d 
            = ((0x7fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__flush_cnt_q))
                ? 1U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352 = ((2U 
                                                   != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_data_ack));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[0U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[1U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[2U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_n[3U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_q[3U];
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_data_ack) 
         & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h2de0ee30__0 
            = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__repl_way)) 
                << 0x0000003aU) | ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__paddr_is_nc)
                                      ? ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
                                          << 0x0000000cU) 
                                         | (QData)((IData)(
                                                           (0x00000ffcU 
                                                            & ((IData)(
                                                                       (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                                                                        >> 2U)) 
                                                               << 2U)))))
                                      : ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
                                          << 0x0000000cU) 
                                         | (QData)((IData)(
                                                           (0x00000fe0U 
                                                            & ((IData)(
                                                                       (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                                                                        >> 5U)) 
                                                               << 5U)))))) 
                                    << 2U) | (QData)((IData)(
                                                             ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__paddr_is_nc) 
                                                              << 1U)))));
        if ((0x77U >= (0x0000007fU & ((IData)(0x0000003cU) 
                                      * (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WQ(120, 60, (0x0000007fU & 
                                      ((IData)(0x0000003cU) 
                                       * (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__mem_n, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT____Vlvbound_h2de0ee30__0);
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[1U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[2U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[3U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[3U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[4U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[4U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[5U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[5U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[6U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[6U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[7U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[7U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[8U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[8U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[9U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[9U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000aU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000aU];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000bU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000bU];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000cU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000cU];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000dU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000dU];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000eU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000eU];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000fU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000fU];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000010U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000010U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000011U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000011U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000012U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000012U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000013U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000013U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000014U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000014U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000015U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000015U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000016U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000016U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000017U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000017U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000018U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000018U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000019U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000019U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000001aU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000001aU];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000001bU] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000001bU];
    if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__csr_regfile_i__DOT__debug_mode_q)))) {
        if ((IData)(((((((((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_359)) 
                          & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_360))) 
                         & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_358))) 
                        & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT____Vcellinp__i_instr_realign__flush_i))) 
                       & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__inv_q))) 
                      & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__paddr_is_nc))) 
                     & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache_data_ack)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0U] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[1U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0U])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[1U] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0U])))) 
                           >> 0x00000020U));
        }
        if (((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgRegularize_hed5e3b4b_0_10)) 
             & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_allocate))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[2U] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[3U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[2U])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[3U] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[3U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[2U])))) 
                           >> 0x00000020U));
        }
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__itlb_miss_ex_perf) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[4U] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[5U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[4U])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[5U] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[5U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[4U])))) 
                           >> 0x00000020U));
        }
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__dtlb_miss_ex_perf) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[6U] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[7U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[6U])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[7U] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[7U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[6U])))) 
                           >> 0x00000020U));
        }
        if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__commit_ack))) {
            if ((1U == (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U] 
                                       >> 3U)))) {
                __Vtemp_1 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[9U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[8U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[8U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[9U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[8U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[9U] 
                    = (IData)((__Vtemp_1 >> 0x00000020U));
            }
            if ((2U == (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U] 
                                       >> 3U)))) {
                __Vtemp_2 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000bU])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000aU]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000aU] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000bU])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000aU])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000bU] 
                    = (IData)((__Vtemp_2 >> 0x00000020U));
            }
            if ((4U == (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U] 
                                       >> 3U)))) {
                __Vtemp_3 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000011U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000010U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000010U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000011U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000010U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000011U] 
                    = (IData)((__Vtemp_3 >> 0x00000020U));
            }
            if ((IData)(((0x00000020U == (0x00000078U 
                                          & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U])) 
                         & (((0U == (0x000000ffU & 
                                     ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U] 
                                       << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U] 
                                                 >> 0x0000001bU)))) 
                             | (0x13U == (0x000000ffU 
                                          & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U] 
                                              << 5U) 
                                             | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U] 
                                                >> 0x0000001bU))))) 
                            & ((1U == (0x0000003fU 
                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U] 
                                          >> 9U))) 
                               | (5U == (0x0000003fU 
                                         & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U] 
                                            >> 9U)))))))) {
                __Vtemp_4 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000013U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000012U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000012U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000013U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000012U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000013U] 
                    = (IData)((__Vtemp_4 >> 0x00000020U));
            }
            if ((IData)(((0U == (0x00007e00U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U])) 
                         & (0x13U == (0x000000ffU & 
                                      ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U] 
                                        << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U] 
                                                  >> 0x0000001bU))))))) {
                __Vtemp_5 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000015U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000014U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000014U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000015U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000014U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000015U] 
                    = (IData)((__Vtemp_5 >> 0x00000020U));
            }
        }
        if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__commit_ack))) {
            if ((1U == (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000014U] 
                                       >> 0x0000000dU)))) {
                __Vtemp_6 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[9U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[8U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[8U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[9U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[8U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[9U] 
                    = (IData)((__Vtemp_6 >> 0x00000020U));
            }
            if ((2U == (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000014U] 
                                       >> 0x0000000dU)))) {
                __Vtemp_7 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000bU])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000aU]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000aU] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000bU])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000aU])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000bU] 
                    = (IData)((__Vtemp_7 >> 0x00000020U));
            }
            if ((4U == (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000014U] 
                                       >> 0x0000000dU)))) {
                __Vtemp_8 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000011U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000010U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000010U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000011U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000010U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000011U] 
                    = (IData)((__Vtemp_8 >> 0x00000020U));
            }
            if ((IData)(((0x00008000U == (0x0001e000U 
                                          & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000014U])) 
                         & (((0U == (0x000000ffU & 
                                     (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000014U] 
                                      >> 5U))) | (0x13U 
                                                  == 
                                                  (0x000000ffU 
                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000014U] 
                                                      >> 5U)))) 
                            & ((1U == (0x0000003fU 
                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000013U] 
                                          >> 0x00000013U))) 
                               | (5U == (0x0000003fU 
                                         & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000013U] 
                                            >> 0x00000013U)))))))) {
                __Vtemp_9 = (1ULL + (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000013U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000012U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000012U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000013U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000012U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000013U] 
                    = (IData)((__Vtemp_9 >> 0x00000020U));
            }
            if ((IData)(((0U == (0x01f80000U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000013U])) 
                         & (0x00000260U == (0x00001fe0U 
                                            & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x00000014U]))))) {
                __Vtemp_10 = (1ULL + (((QData)((IData)(
                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000015U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000014U]))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000014U] 
                    = (IData)((1ULL + (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000015U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000014U])))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000015U] 
                    = (IData)((__Vtemp_10 >> 0x00000020U));
            }
        }
        if ((1U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_commit[0U])) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000cU] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000dU])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000cU])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000dU] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000dU])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000cU])))) 
                           >> 0x00000020U));
        }
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__eret) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000eU] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000fU])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000eU])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000000fU] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000fU])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000000eU])))) 
                           >> 0x00000020U));
        }
        if (((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[0U] 
              >> 4U) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[4U] 
                        >> 5U))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000016U] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000017U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000016U])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000017U] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000017U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000016U])))) 
                           >> 0x00000020U));
        }
        if ((8U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_q))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000018U] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000019U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000018U])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x00000019U] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000019U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x00000018U])))) 
                           >> 0x00000020U));
        }
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__i_perf_counters__if_empty_i) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000001aU] 
                = (IData)((1ULL + (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000001bU])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000001aU])))));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d[0x0000001bU] 
                = (IData)(((1ULL + (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000001bU])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_q[0x0000001aU])))) 
                           >> 0x00000020U));
        }
    }
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__we_csr_perf) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT____Vlvbound_h46c6b499__0 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__data_csr_perf;
        if ((0x0000037fU >= (0x0003ffffU & VL_SHIFTL_III(18,32,32, 
                                                         ((0x00000b00U 
                                                           | (0x0000001fU 
                                                              & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                                 >> 1U))) 
                                                          - (IData)(0x00000b03U)), 6U)))) {
            VL_ASSIGNSEL_WQ(896, 64, (0x0003ffffU & 
                                      VL_SHIFTL_III(18,32,32, 
                                                    ((0x00000b00U 
                                                      | (0x0000001fU 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                            >> 1U))) 
                                                     - (IData)(0x00000b03U)), 6U)), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT__perf_counter_d, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_perf_counters__DOT____Vlvbound_h46c6b499__0);
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[0U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[1U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[2U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[3U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[3U];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[4U] 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q) 
            << 1U) | (1U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_areq_ex_cache[4U]));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[5U] 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q) 
            >> 0x0000001fU) | ((IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[6U] 
        = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__VdfgRegularize_h6e95ff9d_0_287) 
            << 1U) | ((IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                               >> 0x00000020U)) >> 0x0000001fU));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[7U] 
        = ((0x0000000cU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[7U]) 
           | (0x0000000fU & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__VdfgRegularize_h6e95ff9d_0_287) 
                              >> 0x0000001fU) | ((IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__VdfgRegularize_h6e95ff9d_0_287 
                                                          >> 0x00000020U)) 
                                                 << 1U))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[7U] 
        = ((3U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__icache_dreq_cache_if[7U]) 
           | (0x0000000fU & ((IData)(__VdfgRegularize_h6e95ff9d_0_286) 
                             << 2U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT____VdfgRegularize_h8fa03dbb_0_0 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_286) 
            >> 1U) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__ready_o));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_352)
                  ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__write_pointer_q))
                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT____VdfgRegularize_h8fa03dbb_0_0) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_d 
            = (0x0000001fU & ((IData)(VL_SHIFTR_QQI(64,64,32, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__npc_select__DOT__fetch_address, 2U)) 
                              << 2U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__npc_select__DOT__fetch_address;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_d 
            = (0x0000001fU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q;
    }
}

void Vcmp_top___024root___act_comb__TOP__10(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__10\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_rden)
            ? 0x0fU : ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)
                        ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__repl_way_oh_q)
                        : 0U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_d 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_73)) 
                           & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))
                           ? (VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_q), 1U) 
                              ^ (0x0cU & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_q))))))
                           : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_q)));
}

void Vcmp_top___024root___act_comb__TOP__11(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__11\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) 
         & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i)) 
          & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

void Vcmp_top___024root___act_comb__TOP__12(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___act_comb__TOP__12\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(4U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U] 
                                        >> 9U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                          >> 0x0000000bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U] 
                                              >> 8U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                               >> 0x0000000aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__22__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__22__Vfuncout = 1U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__22__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel0: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U] 
                                        >> 0x00000015U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                          >> 0x00000017U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U] 
                                              >> 0x00000014U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                               >> 0x00000016U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__25__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__25__Vfuncout = 1U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__25__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel1: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU] 
                                        >> 1U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                          >> 3U)) & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU]) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                               >> 2U)) == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__28__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__28__Vfuncout = 1U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__28__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel2: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU] 
                                        >> 0x0000000dU)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                          >> 0x0000000fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U] 
                                              >> 0x0000000cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                               >> 0x0000000eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__31__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__31__Vfuncout = 1U;
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__31__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel3: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U] 
                                        >> 0x00000019U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                          >> 0x0000001bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U] 
                                              >> 0x00000018U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                               >> 0x0000001aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__34__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__34__Vfuncout = 1U;
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__34__Vfuncout = 0U;
                                goto __Vlabel4;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel4: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U] 
                                        >> 5U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                          >> 7U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU] 
                                     >> 4U)) & ((1U 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                                                    >> 6U)) 
                                                == 
                                                ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__37__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__37__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__37__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel5: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU] 
                                        >> 0x00000011U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                          >> 0x00000013U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU] 
                                              >> 0x00000010U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                               >> 0x00000012U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__40__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__40__Vfuncout = 1U;
                                goto __Vlabel6;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__40__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel6: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0bU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000058U] 
                                         << 3U) | (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U] 
                                                   >> 0x0000001dU))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                          >> 0x0000001fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U] 
                                              >> 0x0000001cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                               >> 0x0000001eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__43__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__43__Vfuncout = 1U;
                                goto __Vlabel7;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__43__Vfuncout = 0U;
                                goto __Vlabel7;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel7: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id)) 
                      & (~ vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U])) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                               (((IData)(0x0000016aU) 
                                 + (0x00000fffU & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x0000016aU) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) 
                        == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__10__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__10__Vfuncout = 1U;
                                goto __Vlabel8;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__10__Vfuncout = 0U;
                                goto __Vlabel8;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel8: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 3U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 1U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U] 
                                        >> 1U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__13__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__13__Vfuncout = 1U;
                                goto __Vlabel9;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__13__Vfuncout = 0U;
                                goto __Vlabel9;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel9: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 6U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 2U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                        >> 2U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__16__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__16__Vfuncout = 1U;
                                goto __Vlabel10;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__16__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel10: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 9U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 3U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU] 
                                        >> 3U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__19__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__19__Vfuncout = 1U;
                                goto __Vlabel11;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__19__Vfuncout = 0U;
                                goto __Vlabel11;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel11: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__Vfuncout)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_valid_sb_iro 
        = ((IData)((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))) 
           & ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
              | ([&]() {
                    vlSelfRef.__Vfunc_is_rs1_fpr__46__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                           << 5U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 0x0000001bU)));
                    {
                        if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                    && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                   || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                  || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                 || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                               || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                              || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))))) {
                            vlSelfRef.__Vfunc_is_rs1_fpr__46__Vfuncout = 1U;
                            goto __Vlabel12;
                        } else {
                            vlSelfRef.__Vfunc_is_rs1_fpr__46__Vfuncout = 0U;
                            goto __Vlabel12;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                                                   << 3U) 
                                                                  | ((0x6aU 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                     << 2U)) 
                                                                 | (((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                     << 1U) 
                                                                    | (0x67U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))) 
                                                                << 4U) 
                                                               | ((((0x66U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                    << 3U) 
                                                                   | ((0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                      << 2U)) 
                                                                  | (((0x63U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                      << 1U) 
                                                                     | ((0x5bU 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                        & (0x62U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                            << 3U) 
                                           | ((0x6aU 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                              << 2U)) 
                                          | (((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                              << 1U) 
                                             | (0x67U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))) 
                                         << 4U) | (
                                                   (((0x66U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                     << 3U) 
                                                    | ((0x65U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                       << 2U)) 
                                                   | (((0x63U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                       << 1U) 
                                                      | ((0x5bU 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                         & (0x62U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                }
                            }
                        }
                        __Vlabel12: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__Vfuncout))));
}
