// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.addr_i = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__flush_en)
                                        ? (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__flush_cnt_q)
                                        : ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__inv_en)
                                            ? ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0U] 
                                                << 0x00000018U) 
                                               | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0U] 
                                                  >> 8U))
                                            : (IData)(
                                                      (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                                       >> 5U)))));
    vlSelfRef.wdata_i = (((QData)((IData)(((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)
                                            ? 1U : 0U))) 
                          << 0x0000002cU) | vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_q);
    vlSelfRef.we_i = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) 
                      | ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__flush_en) 
                         | (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__inv_en)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req) 
                    & (~ (IData)(vlSelfRef.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.addr_i] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req))) {
            if (vlSelfRef.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSelfRef.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSelfRef.addr_i;
            }
            if ((1U & (~ (IData)(vlSelfRef.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSelfRef.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.we_i = (IData)(((((3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q)) 
                                & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_285)) 
                               & (~ (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_282))) 
                              & (~ (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__paddr_is_nc))));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                    & (~ (IData)(vlSelfRef.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSelfRef.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSelfRef.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = (((QData)((IData)((1U & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)
                                                   ? 0x0fU
                                                   : 0U) 
                                                 >> 1U)))) 
                          << 0x0000002cU) | vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_q);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i]
              : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = (((QData)((IData)((1U & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)
                                                   ? 0x0fU
                                                   : 0U) 
                                                 >> 2U)))) 
                          << 0x0000002cU) | vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_q);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i]
              : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((4U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((4U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((4U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((4U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((4U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = (((QData)((IData)((1U & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)
                                                   ? 0x0fU
                                                   : 0U) 
                                                 >> 3U)))) 
                          << 0x0000002cU) | vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_q);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((IData)((((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req) 
                       >> 3U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i]
              : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((8U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vld_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((IData)((((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                       >> 3U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((8U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[4U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[5U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((IData)((((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                       >> 3U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((8U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[6U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[7U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((IData)((((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                       >> 3U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((8U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[8U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[9U] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___act_comb__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<8>/*255:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    // Body
    __Vtemp_3[0U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_3[1U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_3[2U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_3[3U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_3[4U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_3[5U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_3[6U] = (IData)(vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_3[7U] = (IData)((vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_6[0U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_6[1U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_6[2U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_6[3U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_6[4U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_6[5U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_6[6U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_6[7U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_9[0U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_9[1U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_9[2U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_9[3U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_9[4U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_9[5U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_9[6U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_9[7U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                             >> 0x00000020U));
    __Vtemp_10[1U] = (IData)((((QData)((IData)((((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (__Vtemp_3[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                     << 3U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                                | (__Vtemp_3[
                                                   (0x07ffffffU 
                                                    & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U)))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                        << 3U)))
                                                                    ? 0U
                                                                    : 
                                                                   (__Vtemp_6[
                                                                    (((IData)(0x0000001fU) 
                                                                      + 
                                                                      ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       << 3U)) 
                                                                     >> 5U)] 
                                                                    << 
                                                                    ((IData)(0x00000020U) 
                                                                     - 
                                                                     (0x0000001fU 
                                                                      & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                         << 3U))))) 
                                                                  | (__Vtemp_6[
                                                                     (0x07ffffffU 
                                                                      & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                         >> 2U))] 
                                                                     >> 
                                                                     (0x0000001fU 
                                                                      & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                         << 3U))))))));
    __Vtemp_10[2U] = (IData)(((((QData)((IData)((((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U)))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_3[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                        << 3U))))) 
                                                 | (__Vtemp_3[
                                                    (0x07ffffffU 
                                                     & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                        << 3U)))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((0U 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                         << 3U)))
                                                                     ? 0U
                                                                     : 
                                                                    (__Vtemp_6[
                                                                     (((IData)(0x0000001fU) 
                                                                       + 
                                                                       ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                        << 3U)) 
                                                                      >> 5U)] 
                                                                     << 
                                                                     ((IData)(0x00000020U) 
                                                                      - 
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                          << 3U))))) 
                                                                   | (__Vtemp_6[
                                                                      (0x07ffffffU 
                                                                       & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                          >> 2U))] 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                          << 3U))))))) 
                              >> 0x00000020U));
    __Vtemp_13[0U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_13[1U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                              >> 0x00000020U));
    __Vtemp_13[2U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_13[3U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                              >> 0x00000020U));
    __Vtemp_13[4U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_13[5U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                              >> 0x00000020U));
    __Vtemp_13[6U] = (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q);
    __Vtemp_13[7U] = (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.__PVT__i_tc_sram__DOT__rdata_q 
                              >> 0x00000020U));
    __Vtemp_14[0U] = (((0U == (0x0000001fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                              << 3U)))
                        ? 0U : (__Vtemp_13[(((IData)(0x0000001fU) 
                                             + ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                << 3U)) 
                                            >> 5U)] 
                                << ((IData)(0x00000020U) 
                                    - (0x0000001fU 
                                       & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                          << 3U))))) 
                      | (__Vtemp_13[(0x07ffffffU & 
                                     ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                      >> 2U))] >> (0x0000001fU 
                                                   & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))));
    __Vtemp_14[1U] = (((0U == (0x0000001fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                              << 3U)))
                        ? 0U : (__Vtemp_9[(((IData)(0x0000001fU) 
                                            + ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                               << 3U)) 
                                           >> 5U)] 
                                << ((IData)(0x00000020U) 
                                    - (0x0000001fU 
                                       & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                          << 3U))))) 
                      | (__Vtemp_9[(0x07ffffffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   >> 2U))] 
                         >> (0x0000001fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                            << 3U))));
    __Vtemp_14[2U] = __Vtemp_10[1U];
    __Vtemp_14[3U] = __Vtemp_10[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_287 = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cmp_en_q)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (((0U 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__hit_idx), 5U)))
                                                                       ? 0U
                                                                       : 
                                                                      (__Vtemp_14[
                                                                       (((IData)(0x0000001fU) 
                                                                         + 
                                                                         (0x0000007fU 
                                                                          & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__hit_idx), 5U))) 
                                                                        >> 5U)] 
                                                                       << 
                                                                       ((IData)(0x00000020U) 
                                                                        - 
                                                                        (0x0000001fU 
                                                                         & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__hit_idx), 5U))))) 
                                                                     | (__Vtemp_14[
                                                                        (3U 
                                                                         & (VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__hit_idx), 5U) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x0000001fU 
                                                                         & VL_SHIFTL_III(7,7,32, (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__hit_idx), 5U)))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (((((2U 
                                                                             & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__ruser_aligned__BRA__127__03a0__KET__[
                                                                                (3U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                >> 2U))] 
                                                                                >> 
                                                                                (0x00000018U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                << 3U))) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__ruser_aligned__BRA__127__03a0__KET__[
                                                                                (3U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                >> 2U))] 
                                                                                >> 
                                                                                (0x00000018U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                << 3U))))) 
                                                                           << 2U) 
                                                                          | ((2U 
                                                                              & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__ruser_aligned__BRA__127__03a0__KET__[
                                                                                (3U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                >> 2U))] 
                                                                                >> 
                                                                                (0x00000018U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                << 3U))) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__ruser_aligned__BRA__127__03a0__KET__[
                                                                                (3U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                >> 2U))] 
                                                                                >> 
                                                                                (0x00000018U 
                                                                                & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                << 3U)))))) 
                                                                         >> (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__hit_idx))))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (((0U 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & ((IData)(0x00000091U) 
                                                                           + 
                                                                           ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                            << 3U))))
                                                                       ? 0U
                                                                       : 
                                                                      (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                                       (((IData)(0x000000b0U) 
                                                                         + 
                                                                         ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                          << 3U)) 
                                                                        >> 5U)] 
                                                                       << 
                                                                       ((IData)(0x00000020U) 
                                                                        - 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x00000091U) 
                                                                            + 
                                                                            ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                             << 3U)))))) 
                                                                     | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                                        (((IData)(0x00000091U) 
                                                                          + 
                                                                          ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                           << 3U)) 
                                                                         >> 5U)] 
                                                                        >> 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x00000091U) 
                                                                            + 
                                                                            ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                             << 3U))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                                         (((IData)(0x00000011U) 
                                                                           + 
                                                                           (0x00000078U 
                                                                            & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                               << 3U))) 
                                                                          >> 5U)] 
                                                                         >> 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x00000011U) 
                                                                             + 
                                                                             (0x00000078U 
                                                                              & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                << 3U))))))))));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((IData)((((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req) 
                       >> 3U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                      >> 5U)))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((8U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000aU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                      >> 0x00000011U));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & ((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                       << 7U) | (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000bU] 
                                                 >> 0x00000019U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v6 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 1U));
                __VdlyDim0__i_tc_sram__DOT__sram__v6 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                __VdlyVal__i_tc_sram__DOT__sram__v7 
                    = (0x000000ffU & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_icache[0x0000000cU] 
                                      >> 9U));
                __VdlyDim0__i_tc_sram__DOT__sram__v7 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)((vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_d 
                                              >> 5U)));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v1;
    __VdlySet__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v2;
    __VdlySet__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v3;
    __VdlySet__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v4;
    __VdlySet__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v5;
    __VdlySet__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v6;
    __VdlySet__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v7;
    __VdlySet__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v1 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v2 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v3 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v4 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v5 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v6 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v7 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_req) 
                    & (~ (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_we))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx))]
              : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_req))) {
            if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_we))) {
                if ((1U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                    __VdlyDim0__i_tc_sram__DOT__sram__v0 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                }
                if ((2U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v1 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 8U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v1 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v1 = 1U;
                }
                if ((4U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v2 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x10U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v2 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v2 = 1U;
                }
                if ((8U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v3 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x18U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v3 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v3 = 1U;
                }
                if ((0x00000010U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v4 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x20U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v4 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v4 = 1U;
                }
                if ((0x00000020U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v5 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x28U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v5 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v5 = 1U;
                }
                if ((0x00000040U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v6 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x30U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v6 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v6 = 1U;
                }
                if ((0x00000080U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v7 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x38U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v7 
                        = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                    __VdlySet__i_tc_sram__DOT__sram__v7 = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_we)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v1) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v2) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v3) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v4) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v5) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v6) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v7) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_0)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[5U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[4U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_0)
                                      ? ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                          ? 0xffffU
                                          : 0U) : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_1)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_3)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[5U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[4U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_3)
                                      ? ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                          ? 0xffffU
                                          : 0U) : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_4)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_5)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[5U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[4U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_5)
                                      ? ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                          ? 0xffffU
                                          : 0U) : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_6)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_7)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[5U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[4U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__0__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_7)
                                      ? ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                          ? 0xffffU
                                          : 0U) : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_8)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v1;
    __VdlySet__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v2;
    __VdlySet__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v3;
    __VdlySet__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v4;
    __VdlySet__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v5;
    __VdlySet__i_tc_sram__DOT__sram__v5 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v6;
    __VdlyVal__i_tc_sram__DOT__sram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v6;
    __VdlyDim0__i_tc_sram__DOT__sram__v6 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v6;
    __VdlySet__i_tc_sram__DOT__sram__v6 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v7;
    __VdlyVal__i_tc_sram__DOT__sram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v7;
    __VdlyDim0__i_tc_sram__DOT__sram__v7 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v7;
    __VdlySet__i_tc_sram__DOT__sram__v7 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v1 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v2 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v3 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v4 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v5 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v6 = 0U;
    __VdlySet__i_tc_sram__DOT__sram__v7 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((IData)((((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_req) 
                       >> 1U) & (~ ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_we) 
                                    >> 1U)))) ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [(0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                              >> 7U))] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_req))) {
            if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_we))) {
                if ((1U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                    __VdlyDim0__i_tc_sram__DOT__sram__v0 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                }
                if ((2U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v1 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 8U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v1 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v1 = 1U;
                }
                if ((4U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v2 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x10U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v2 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v2 = 1U;
                }
                if ((8U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v3 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x18U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v3 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v3 = 1U;
                }
                if ((0x00000010U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v4 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x20U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v4 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v4 = 1U;
                }
                if ((0x00000020U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v5 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x28U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v5 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v5 = 1U;
                }
                if ((0x00000040U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v6 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x30U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v6 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v6 = 1U;
                }
                if ((0x00000080U & (IData)(vlSelfRef.be_i))) {
                    __VdlyVal__i_tc_sram__DOT__sram__v7 
                        = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                                  >> 0x38U)));
                    __VdlyDim0__i_tc_sram__DOT__sram__v7 
                        = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                          >> 7U));
                    __VdlySet__i_tc_sram__DOT__sram__v7 = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_we) 
                          >> 1U)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = (0x0000007fU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx) 
                                      >> 7U));
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v1) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v2) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v3) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v4) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v5) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v6) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v6]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v6)) 
                  << 0x00000030U));
    }
    if (__VdlySet__i_tc_sram__DOT__sram__v7) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v7]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v7)) 
                  << 0x00000038U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_0)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[8U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[7U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_0)
                                      ? (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                           ? 0xffffU
                                           : 0U) >> 8U)
                                      : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_1)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_3)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[8U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[7U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__1__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_3)
                                      ? (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                           ? 0xffffU
                                           : 0U) >> 8U)
                                      : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_4)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_5)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[8U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[7U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__2__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_5)
                                      ? (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                           ? 0xffffU
                                           : 0U) >> 8U)
                                      : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_6)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wdata_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_7)
                          ? (((QData)((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[8U])) 
                              << 0x00000030U) | (((QData)((IData)(
                                                                  vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[7U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__adapter_dcache[6U])) 
                                                    >> 0x00000010U)))
                          : vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wr_data_i);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_data_banks__BRA__1__KET____DOT__i_data_sram__DOT__gen_cut__BRA__3__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be_i = (0x000000ffU & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_7)
                                      ? (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cl_write_en)
                                           ? 0xffffU
                                           : 0U) >> 8U)
                                      : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT____VdfgRegularize_hc6e009ae_0_8)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req) 
                    & (~ (IData)(vlSelfRef.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.addr_i] : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req))) {
            if (vlSelfRef.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSelfRef.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSelfRef.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSelfRef.addr_i;
            }
            if ((1U & (~ (IData)(vlSelfRef.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSelfRef.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    vlSelfRef.wdata_i = (((QData)((IData)((1U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__wr_vld_bits)))) 
                          << 0x0000002dU) | (0x00001fffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                 << 0x00000028U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                      >> 0x00000018U)))));
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.we_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__load_ack) 
                      | (0U != (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__wr_cl_we)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_291;
    __VdfgRegularize_h6e95ff9d_0_291 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_294;
    __VdfgRegularize_h6e95ff9d_0_294 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_291 = ((2U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu_sv39__DOT__i_cva6_mmu__req_port_o[0U])
                                         ? 1U : ((1U 
                                                  & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu_sv39__DOT__i_cva6_mmu__req_port_o[0U] 
                                                     | (7U 
                                                        == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))))
                                                  ? 
                                                 ((1U 
                                                   & ((~ (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__rd_ack_q)) 
                                                      | (IData)(vlSelfRef.we_i)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_290)
                                                    ? 
                                                   (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__rd_ack_i) 
                                                     & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu_sv39__DOT__i_cva6_mmu__req_port_o[0U] 
                                                        >> 0x0000000dU))
                                                     ? 3U
                                                     : 1U)
                                                    : 0U))
                                                  : 0U));
    __VdfgRegularize_h6e95ff9d_0_294 = ((2U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U])
                                         ? 1U : ((1U 
                                                  & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                                                     | (7U 
                                                        == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))))
                                                  ? 
                                                 ((1U 
                                                   & ((~ (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__rd_ack_q)) 
                                                      | (IData)(vlSelfRef.we_i)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_290)
                                                    ? 
                                                   (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__rd_ack_i) 
                                                     & (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                                                        >> 0x0000000dU))
                                                     ? 3U
                                                     : 1U)
                                                    : 0U))
                                                  : 0U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_293 = ((4U 
                                                   & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_291)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu_sv39__DOT__i_cva6_mmu__req_port_o[0U])
                                                      ? 1U
                                                      : 0U))
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu_sv39__DOT__i_cva6_mmu__req_port_o[0U])
                                                      ? 1U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu_sv39__DOT__i_cva6_mmu__req_port_o[0U])
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_291)
                                                     : 
                                                    ((0x00002000U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu_sv39__DOT__i_cva6_mmu__req_port_o[0U])
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__0__KET____DOT__i_wt_dcache_ctrl__rd_ack_i)
                                                       ? 2U
                                                       : 0U)
                                                      : 0U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_296 = ((4U 
                                                   & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_294)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U])
                                                      ? 1U
                                                      : 0U))
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U])
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U])
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__DOT__state_q))
                                                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_294)
                                                     : 
                                                    ((0x00002000U 
                                                      & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U])
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__1__KET____DOT__i_wt_dcache_ctrl__rd_ack_i)
                                                       ? 2U
                                                       : 0U)
                                                      : 0U))));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__3(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.addr_i = (0x0000007fU & ((IData)(vlSelfRef.we_i)
                                        ? (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__wr_cl_idx)
                                        : ((0x14U >= 
                                            (0x0000001fU 
                                             & ((IData)(7U) 
                                                * (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_d))))
                                            ? (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__i_wt_dcache_mem__rd_idx_i 
                                               >> (0x0000001fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_d))))
                                            : 0U)));
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__1__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__1__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req) 
                     >> 1U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i]
              : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((2U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    vlSelfRef.wdata_i = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__wr_vld_bits) 
                                                 >> 1U)))) 
                          << 0x0000002dU) | (0x00001fffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                 << 0x00000028U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                      >> 0x00000018U)))));
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__2__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__2__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((1U & (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req) 
                     >> 2U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i]
              : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((4U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    vlSelfRef.wdata_i = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__wr_vld_bits) 
                                                 >> 2U)))) 
                          << 0x0000002dU) | (0x00001fffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                 << 0x00000028U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                      >> 0x00000018U)))));
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__3__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__3__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v0;
    __VdlyVal__i_tc_sram__DOT__sram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v0;
    __VdlyDim0__i_tc_sram__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__i_tc_sram__DOT__sram__v0;
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v1;
    __VdlyVal__i_tc_sram__DOT__sram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v1;
    __VdlyDim0__i_tc_sram__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v2;
    __VdlyVal__i_tc_sram__DOT__sram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v2;
    __VdlyDim0__i_tc_sram__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v3;
    __VdlyVal__i_tc_sram__DOT__sram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v3;
    __VdlyDim0__i_tc_sram__DOT__sram__v3 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v4;
    __VdlyVal__i_tc_sram__DOT__sram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v4;
    __VdlyDim0__i_tc_sram__DOT__sram__v4 = 0;
    CData/*7:0*/ __VdlyVal__i_tc_sram__DOT__sram__v5;
    __VdlyVal__i_tc_sram__DOT__sram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__i_tc_sram__DOT__sram__v5;
    __VdlyDim0__i_tc_sram__DOT__sram__v5 = 0;
    // Body
    __VdlySet__i_tc_sram__DOT__sram__v0 = 0U;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__spc_grst_l) {
        vlSelfRef.__PVT__i_tc_sram__DOT__rdata_q = 
            ((IData)((((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req) 
                       >> 3U) & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i))))
              ? vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i]
              : vlSelfRef.__PVT__i_tc_sram__DOT__sram
             [vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q]);
        if ((8U & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_req))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i) {
                __VdlyVal__i_tc_sram__DOT__sram__v0 
                    = (0x000000ffU & (IData)(vlSelfRef.wdata_i));
                __VdlyDim0__i_tc_sram__DOT__sram__v0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlySet__i_tc_sram__DOT__sram__v0 = 1U;
                __VdlyVal__i_tc_sram__DOT__sram__v1 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 8U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v1 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v2 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x10U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v2 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v3 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x18U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v3 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v4 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x20U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v4 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                __VdlyVal__i_tc_sram__DOT__sram__v5 
                    = (0x000000ffU & (IData)((vlSelfRef.wdata_i 
                                              >> 0x28U)));
                __VdlyDim0__i_tc_sram__DOT__sram__v5 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.we_i)))) {
                vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper.addr_i;
                vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q 
                    = vlSelfRef.i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
            }
        }
    } else {
        vlSelfRef.__PVT__i_tc_sram__DOT__r_addr_q = 0U;
    }
    vlSelfRef.wdata_i = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__wr_vld_bits) 
                                                 >> 3U)))) 
                          << 0x0000002dU) | (0x00001fffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                 << 0x00000028U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                      >> 0x00000018U)))));
    if (__VdlySet__i_tc_sram__DOT__sram__v0) {
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v0]) 
               | (IData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v0)));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v1]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v1)) 
                  << 8U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v2]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v2)) 
                  << 0x00000010U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v3]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v3)) 
                  << 0x00000018U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v4]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v4)) 
                  << 0x00000020U));
        vlSelfRef.__PVT__i_tc_sram__DOT__sram[__VdlyDim0__i_tc_sram__DOT__sram__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__i_tc_sram__DOT__sram
                [__VdlyDim0__i_tc_sram__DOT__sram__v5]) 
               | ((QData)((IData)(__VdlyVal__i_tc_sram__DOT__sram__v5)) 
                  << 0x00000028U));
    }
}
