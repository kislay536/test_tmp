// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.we_i = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__load_ack) 
                      | (0U != (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__wr_cl_we)));
}

VL_ATTR_COLD void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__1__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__1__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__2__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__2__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__3__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__3__KET____DOT__i_tag_sram__DOT__gen_cut__BRA__0__KET____DOT__gen_mem__DOT__i_tc_sram_wrapper__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___ctor_var_reset(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_tc_sram_wrapper__N80_D40_NB1___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841108072821397437ull);
    vlSelf->we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580956079526588133ull);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5910257723895866083ull);
    vlSelf->wdata_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5130823727116858121ull);
    vlSelf->be_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11504187847728164574ull);
    vlSelf->rdata_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8843381805826685208ull);
    vlSelf->i_tc_sram__DOT____Vlvbound_ha66a6d2f__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__i_tc_sram__DOT__sram[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11119694749140869386ull);
    }
    vlSelf->__PVT__i_tc_sram__DOT__r_addr_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14393533914663838483ull);
    vlSelf->__PVT__i_tc_sram__DOT__rdata_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1413385575682011341ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_287 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_293 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_296 = 0;
}
