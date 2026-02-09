// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top___024root___nba_sequent__TOP__80(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__80\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_sync__DOT__presyncdata_tmp;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_sync__DOT__presyncdata_tmp 
        = vlSelfRef.cmp_top__DOT__jtag_rst_l;
}

void Vcmp_top___024root___nba_sequent__TOP__81(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__81\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_f 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n;
}

void Vcmp_top___024root___nba_comb__TOP__18(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__18\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__valid_out) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__19(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__19\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__valid_out) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__20(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__20\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__valid_out) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__21(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__21\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__22(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__22\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__23(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__23\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__24(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__24\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__25(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__25\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__26(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__26\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__27(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__27\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__28(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__28\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__29(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__29\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__30(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__30\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__oram_offchip_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__oram_on)
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__oram_offchip_valid_oram)
            : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__valid_out));
}

void Vcmp_top___024root___nba_comb__TOP__31(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__31\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

extern const VlWide<12>/*383:0*/ Vcmp_top__ConstPool__CONST_h1ba4b964_0;
extern const VlWide<10>/*319:0*/ Vcmp_top__ConstPool__CONST_h3c9d8e9d_0;

void Vcmp_top___024root___nba_comb__TOP__34(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__34\n"); );
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

void Vcmp_top___024root___nba_comb__TOP__39(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__39\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state_reset_negedge)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vcmp_top__ConstPool__TABLE_he5f5e051_0;

void Vcmp_top___024root___nba_sequent__TOP__82(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__82\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    SData/*8:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_sync__DOT__presyncdata_tmp;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo1_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo2_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo3_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wsync2))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)));
    __Vtableidx16 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_rsync2) 
                      << 5U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_wptr) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo1_full 
        = Vcmp_top__ConstPool__TABLE_he5f5e051_0[__Vtableidx16];
    __Vtableidx17 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_rsync2) 
                      << 5U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_wptr) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo2_full 
        = Vcmp_top__ConstPool__TABLE_he5f5e051_0[__Vtableidx17];
    __Vtableidx18 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_rsync2) 
                      << 5U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_wptr) 
                                 << 1U) | (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo3_full 
        = Vcmp_top__ConstPool__TABLE_he5f5e051_0[__Vtableidx18];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo1_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo2_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo3_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_3 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_1 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_2 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT____Vcellinp__data__thanks_in 
        = ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo1_full)
                : (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f)))) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT____Vcellinp__data__thanks_in 
        = ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo2_full)
                : (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f)))) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT____Vcellinp__data__thanks_in 
        = ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo3_full)
                : (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f)))) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_f)));
    if (vlSelfRef.async_mux) {
        vlSelfRef.__VdfgRegularize_he50b618e_0_0 = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_3;
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_1;
        vlSelfRef.__VdfgRegularize_he50b618e_0_1 = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_2;
    } else {
        vlSelfRef.__VdfgRegularize_he50b618e_0_0 = 
            (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f));
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = 
            (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f));
        vlSelfRef.__VdfgRegularize_he50b618e_0_1 = 
            (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0 
        = (1U & (~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo_full)
                     : (0x10U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_sync__DOT__presyncdata_tmp 
        = vlSelfRef.sys_rst_n;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2 
        = ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0) 
           | (0x00ffU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__credit_3)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_6 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__is_two_or_more_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_5 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__is_two_or_more_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_4 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__is_two_or_more_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc3_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__is_two_or_more_f) 
           & ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo3_empty)
                   : (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f)))) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4 
        = ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_2) 
           | (0x00ffU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__credit_1)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3 
        = ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1) 
           | (0x00ffU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__credit_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_5)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_4)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_1 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_reg)
            : (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_1) 
                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2))
                ? 0U : (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3) 
                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2))
                         ? 1U : (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4) 
                                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2))
                                  ? 2U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_1)
                                           ? 3U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4)
                                                    ? 
                                                   ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_23)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3)
                                                     ? 
                                                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_13)
                                                      ? 3U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2)
                                                      ? 
                                                     ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_12)
                                                       ? 2U
                                                       : 1U)
                                                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_123)))))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_1 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)) 
           & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_2 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)) 
           & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_3 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)) 
           & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((0U 
                                                  != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f)) 
                                                 & ((~ (IData)(vlSelfRef.async_mux)) 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_1)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((0U 
                                                  != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f)) 
                                                 & ((~ (IData)(vlSelfRef.async_mux)) 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_3)));
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_wr_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_wr_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_wr_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_next 
            = (0x0000003fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_next 
            = (0x0000003fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_next 
            = (0x0000003fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_next 
            = (0x0000001fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_next 
            = (0x0000001fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_next 
            = (0x0000001fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))));
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_next = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__data_to_serial_buffer 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_1)
            ? ((IData)(vlSelfRef.async_mux) ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__fifo
               [(7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__b_rptr))]
                : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_mem_f
               [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_f])
            : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_2)
                ? ((IData)(vlSelfRef.async_mux) ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__fifo
                   [(7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__b_rptr))]
                    : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_mem_f
                   [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_f])
                : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_3)
                    ? ((IData)(vlSelfRef.async_mux)
                        ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__fifo
                       [(7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__b_rptr))]
                        : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_mem_f
                       [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_f])
                    : 0ULL)));
}

void Vcmp_top___024root___nba_comb__TOP__40(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__40\n"); );
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

void Vcmp_top___024root___nba_comb__TOP__41(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__41\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(4U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U] 
                                        >> 9U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                          >> 0x0000000bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U] 
                                              >> 8U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                               >> 0x0000000aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__24__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__24__Vfuncout = 1U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__24__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel0: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U] 
                                        >> 0x00000015U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                          >> 0x00000017U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U] 
                                              >> 0x00000014U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                               >> 0x00000016U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__27__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__27__Vfuncout = 1U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__27__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel1: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU] 
                                        >> 1U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                          >> 3U)) & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU]) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                               >> 2U)) == ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__30__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__30__Vfuncout = 1U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__30__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel2: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU] 
                                        >> 0x0000000dU)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                          >> 0x0000000fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U] 
                                              >> 0x0000000cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                               >> 0x0000000eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__33__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__33__Vfuncout = 1U;
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__33__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel3: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U] 
                                        >> 0x00000019U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                          >> 0x0000001bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U] 
                                              >> 0x00000018U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                               >> 0x0000001aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__36__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__36__Vfuncout = 1U;
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__36__Vfuncout = 0U;
                                goto __Vlabel4;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel4: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U] 
                                        >> 5U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                          >> 7U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU] 
                                     >> 4U)) & ((1U 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                                                    >> 6U)) 
                                                == 
                                                ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__39__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__39__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__39__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel5: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU] 
                                        >> 0x00000011U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                          >> 0x00000013U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU] 
                                              >> 0x00000010U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                               >> 0x00000012U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__42__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__42__Vfuncout = 1U;
                                goto __Vlabel6;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__42__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel6: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0bU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000058U] 
                                         << 3U) | (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U] 
                                                   >> 0x0000001dU))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                          >> 0x0000001fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U] 
                                              >> 0x0000001cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                               >> 0x0000001eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__45__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__45__Vfuncout = 1U;
                                goto __Vlabel7;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__45__Vfuncout = 0U;
                                goto __Vlabel7;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel7: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_imm_fpr__12__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__12__Vfuncout = 1U;
                                goto __Vlabel8;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__12__Vfuncout = 0U;
                                goto __Vlabel8;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel8: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_imm_fpr__15__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__15__Vfuncout = 1U;
                                goto __Vlabel9;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__15__Vfuncout = 0U;
                                goto __Vlabel9;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel9: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_imm_fpr__18__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__18__Vfuncout = 1U;
                                goto __Vlabel10;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__18__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel10: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_imm_fpr__21__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__21__Vfuncout = 1U;
                                goto __Vlabel11;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__21__Vfuncout = 0U;
                                goto __Vlabel11;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel11: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__Vfuncout)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_344 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x00e0U 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x000eU 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))));
}

void Vcmp_top___024root___nba_comb__TOP__42(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__42\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(4U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U] 
                                        >> 9U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                          >> 0x0000000bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U] 
                                              >> 8U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                               >> 0x0000000aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__23__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__23__Vfuncout = 1U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__23__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel0: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U] 
                                        >> 0x00000015U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                          >> 0x00000017U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U] 
                                              >> 0x00000014U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                               >> 0x00000016U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__26__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__26__Vfuncout = 1U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__26__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel1: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU] 
                                        >> 1U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                          >> 3U)) & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU]) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                               >> 2U)) == ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__29__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__29__Vfuncout = 1U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__29__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel2: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU] 
                                        >> 0x0000000dU)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                          >> 0x0000000fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U] 
                                              >> 0x0000000cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                               >> 0x0000000eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__32__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__32__Vfuncout = 1U;
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__32__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel3: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U] 
                                        >> 0x00000019U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                          >> 0x0000001bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U] 
                                              >> 0x00000018U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                               >> 0x0000001aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__35__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__35__Vfuncout = 1U;
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__35__Vfuncout = 0U;
                                goto __Vlabel4;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel4: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U] 
                                        >> 5U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                          >> 7U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU] 
                                     >> 4U)) & ((1U 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                                                    >> 6U)) 
                                                == 
                                                ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__38__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__38__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__38__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel5: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU] 
                                        >> 0x00000011U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                          >> 0x00000013U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU] 
                                              >> 0x00000010U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                               >> 0x00000012U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__41__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__41__Vfuncout = 1U;
                                goto __Vlabel6;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__41__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel6: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0bU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000058U] 
                                         << 3U) | (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U] 
                                                   >> 0x0000001dU))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                          >> 0x0000001fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U] 
                                              >> 0x0000001cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                               >> 0x0000001eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__44__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__44__Vfuncout = 1U;
                                goto __Vlabel7;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__44__Vfuncout = 0U;
                                goto __Vlabel7;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel7: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_rs2_fpr__11__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__11__Vfuncout = 1U;
                                goto __Vlabel8;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__11__Vfuncout = 0U;
                                goto __Vlabel8;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel8: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_rs2_fpr__14__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__14__Vfuncout = 1U;
                                goto __Vlabel9;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__14__Vfuncout = 0U;
                                goto __Vlabel9;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel9: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_rs2_fpr__17__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__17__Vfuncout = 1U;
                                goto __Vlabel10;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__17__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel10: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
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
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
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
                        vlSelfRef.__Vfunc_is_rs2_fpr__20__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__20__Vfuncout = 1U;
                                goto __Vlabel11;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__20__Vfuncout = 0U;
                                goto __Vlabel11;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel11: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__Vfuncout)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x00e0U 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_347 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x000eU 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_valid_iro_sb 
        = ((IData)((((0U != (0x0f11U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_347)) 
                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346))) 
           & ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
              | ([&]() {
                    vlSelfRef.__Vfunc_is_rs2_fpr__47__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                           << 5U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 0x0000001bU)));
                    {
                        if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                   && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                  || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                      && (0x5dU >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                 || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                     && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                               || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                   && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                              || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))))) {
                            vlSelfRef.__Vfunc_is_rs2_fpr__47__Vfuncout = 1U;
                            goto __Vlabel12;
                        } else {
                            vlSelfRef.__Vfunc_is_rs2_fpr__47__Vfuncout = 0U;
                            goto __Vlabel12;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                   << 3U) 
                                                                  | ((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                     << 2U)) 
                                                                 | ((((0x66U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                      & (0x67U 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                     << 1U) 
                                                                    | (0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                                                << 3U) 
                                                               | ((((0x5fU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                   << 2U) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                       & (0x5dU 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                      << 1U) 
                                                                     | ((0x55U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                        & (0x58U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                            << 3U) 
                                           | ((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                              << 2U)) 
                                          | ((((0x66U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                               & (0x67U 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                              << 1U) 
                                             | (0x65U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                         << 3U) | (
                                                   (((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                    << 2U) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                        & (0x5dU 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                       << 1U) 
                                                      | ((0x55U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                         & (0x58U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                }
                            }
                        }
                        __Vlabel12: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__Vfuncout))));
}

extern const VlUnpacked<CData/*2:0*/, 256> Vcmp_top__ConstPool__TABLE_h72febd37_0;
extern const VlWide<32>/*1023:0*/ Vcmp_top__ConstPool__CONST_hd6b7ba52_0;

void Vcmp_top___024root___nba_comb__TOP__44(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__44\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__amo_alu_op_S1 = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__atomic_state_S1_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           && ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__valid_S1) 
                 & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__mshr_pending))) 
                & (((((((((((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                            | (0x0aU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                           | (0x3fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                          | (0x2cU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                         | (0x2dU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                        | (0x2eU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                       | (0x2fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                      | (0x30U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                     | (0x31U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                    | (0x32U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                   | (0x33U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)))) 
               || ((1U & (~ (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__valid_S1) 
                              & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__mshr_pending))) 
                             & ((((((((((((7U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                          | (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                         | (0x0bU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                        | (0x40U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                       | (0x34U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                      | (0x35U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                     | (0x36U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                    | (0x37U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                   | (0x38U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                  | (0x39U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                 | (0x3aU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                | (0x3bU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)))))) 
                   && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__atomic_state_S1_f))));
    vlSelfRef.__Vtableidx4 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_data_state_f) 
                               << 6U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_state_f) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__real_ready_in) 
                                           << 2U) | 
                                          (((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f)) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_state_next 
        = Vcmp_top__ConstPool__TABLE_h72febd37_0[vlSelfRef.__Vtableidx4];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_or_mask = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_and_mask = 0xffffU;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask = 0xffffU;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_wr_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_wr_ptr_next 
            = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__rd_ptr_f) 
                              + (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.validIn_P)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_wr_ptr_next 
            = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)));
        if ((1U & (~ (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__valid_S1) 
                       & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__mshr_pending))) 
                      & (((((((((((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                  | (0x0aU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                 | (0x3fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                | (0x2cU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                               | (0x2dU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                              | (0x2eU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                             | (0x2fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                            | (0x30U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                           | (0x31U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                          | (0x32U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                         | (0x33U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))))))) {
            if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__valid_S1) 
                  & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__mshr_pending))) 
                 & ((((((((((((7U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                              | (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                             | (0x0bU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                            | (0x40U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                           | (0x34U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                          | (0x35U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                         | (0x36U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                        | (0x37U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                       | (0x38U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                      | (0x39U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                     | (0x3aU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                    | (0x3bU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))))) {
                if (((((((((0x34U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                           | (0x35U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                          | (0x36U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                         | (0x37U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                        | (0x38U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                       | (0x39U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                      | (0x3aU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                     | (0x3bU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__amo_alu_op_S1 
                        = ((0x34U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))
                            ? 1U : ((0x35U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))
                                     ? 2U : ((0x36U 
                                              == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))
                                              ? 3U : 
                                             ((0x37U 
                                               == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))
                                               ? 4U
                                               : ((0x38U 
                                                   == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))
                                                   ? 5U
                                                   : 
                                                  ((0x39U 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))
                                                    ? 6U
                                                    : 
                                                   ((0x3aU 
                                                     == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))
                                                     ? 7U
                                                     : 8U)))))));
                }
            }
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_int_state_next 
            = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120))
                ? 1U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42) 
                         & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_int_state_f)))
                         ? 2U : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42) 
                                  & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_int_state_f)))
                                  ? 0U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_int_state_f))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_data_state_next 
            = (3U & (((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_state_f)) 
                      & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f)))
                      ? ((0x20U == (0x000000ffU & (IData)(
                                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__noc1_data_in 
                                                           >> 0x0000000eU))))
                          ? 1U : ((IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__noc1_data_in 
                                           >> 0x00000016U)) 
                                  - (IData)(2U))) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_data_state_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_data_state_next 
            = (((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_f)) 
                & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_f)))
                ? ((8U == (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__noc3_data_in 
                                                  >> 0x00000016U))))
                    ? 4U : ((0U == (0x000000ffU & (IData)(
                                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__noc3_data_in 
                                                           >> 0x00000016U))))
                             ? 0U : 2U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_data_state_f));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__l2_load_data_subline_S2_next 
            = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__l2_load_data_subline_S2_f) 
                     + ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_S2_f) 
                        & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__stall_real_S2)) 
                           & (0x18U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__msg_type_S2_f))))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_next 
            = (0x0000000fU & (((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_f)) 
                               & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__noc3_ready_in))
                               ? (((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_f)) 
                                   & (0x0cU != (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__noc3_data_in 
                                                           >> 0x0000000eU)))))
                                   ? ((0U == (0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__noc3_data_in 
                                                         >> 0x00000016U))))
                                       ? 0U : 3U) : 
                                  (((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_f)) 
                                    & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_data_state_f)))
                                    ? 0U : ((0x0aU 
                                             == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_f))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_f)))))
                               : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_f)));
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__wr_diag_en)))) {
            if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid_in))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_or_mask 
                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_or_mask) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__wr_index))));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask 
                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__wr_index))));
            }
            if ((1U & (~ (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid_in))))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_and_mask 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__wr_index))) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_and_mask));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__wr_index))) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask));
            }
            if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_buf_S4_f) 
                   & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_buf_S4_f))) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_hit)) 
                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__wr_index) 
                    != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask 
                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index))));
            }
            if ((((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_buf_S4_f) 
                    & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_buf_S4_f))) 
                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_hit)) 
                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__wr_index) 
                     != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index))) 
                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_f) 
                    >> (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index))) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask));
            }
        } else {
            if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_buf_S4_f) 
                  & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_buf_S4_f))) 
                 & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_hit))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask 
                    = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index))));
            }
            if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_buf_S4_f) 
                   & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_buf_S4_f))) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_hit)) 
                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_f) 
                    >> (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__hit_index))) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask));
            }
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                               ? ((IData)(2U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_rd_ptr_f))
                               : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_rd_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_next 
            = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_next_S1)
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f) 
                         + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_flits))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f)));
        if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__state_data_out[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__state_data_out[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__state_data_out[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[3U] = 0U;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[3U];
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_next 
            = (7U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125) 
                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_next_S1))
                      ? (((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f)) 
                         - (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_flits))
                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f))
                          : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_next_S1)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f) 
                                 - (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_flits))
                              : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f)))));
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p2) {
            if ((1U == ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_max2)
                         ? 0U : 2U))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_next 
                    = (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                              >> 0x00000022U)));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next 
                    = (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                              >> 0x0000002aU)));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next 
                    = (0x00003fffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                              >> 0x00000032U)));
            } else if ((0U == ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_max2)
                                ? 0U : 2U))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_next 
                    = (0x000000ffU & 0U);
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next 
                    = (0x000000ffU & 0U);
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next 
                    = (0x00003fffU & 0U);
            } else if ((2U == ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_max2)
                                ? 0U : 2U))) {
                if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_f) 
                     == (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                                >> 0x00000022U))))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_next 
                        = (0x000000ffU & 0U);
                    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_f) 
                         == (0x000000ffU & (IData)(
                                                   (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                                    >> 0x0000002aU))))) {
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next 
                            = (0x000000ffU & 0U);
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next 
                            = (0x00003fffU & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_f) 
                                               == (0x00003fffU 
                                                   & (IData)(
                                                             (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                                              >> 0x00000032U))))
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_f))));
                    } else {
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_f)));
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next 
                            = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_f));
                    }
                } else {
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_next 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_f)));
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next 
                        = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_f));
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next 
                        = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_f));
                }
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_next 
                    = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_f));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next 
                    = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_f));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next 
                    = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_f));
            }
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_next 
                = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_f));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next 
                = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_f));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next 
                = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_f));
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                               ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__wr_ptr_f) 
                                  + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__buf_rd_flits))
                               : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__wr_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_sharer_counter_S4_next 
            = (0x000003ffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83) 
                               & (0x12U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__msg_send_type_pre)))
                               ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_stall_S4)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_sharer_counter_S4_f))
                                   : 1U) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_sharer_counter_S4_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__buf_counter_next 
            = (0x0000001fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83) 
                               & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.validIn_P))
                               ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103) 
                                  - (IData)(1U)) : 
                              ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83)
                                ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103)
                                : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__buf_counter_f) 
                                   - (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.validIn_P)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_next 
            = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__stall_smc_buf_S4)
                ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)
                : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_S4));
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p1) {
            if ((1U == ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p1)
                         ? 2U : 0U))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_next 
                    = (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                              >> 0x00000022U)));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next 
                    = (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                              >> 0x0000002aU)));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next 
                    = (0x00003fffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                              >> 0x00000032U)));
            } else if ((0U == ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p1)
                                ? 2U : 0U))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_next 
                    = (0x000000ffU & 0U);
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next 
                    = (0x000000ffU & 0U);
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next 
                    = (0x00003fffU & 0U);
            } else if ((2U == ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p1)
                                ? 2U : 0U))) {
                if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_f) 
                     == (0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                                >> 0x00000022U))))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_next 
                        = (0x000000ffU & 0U);
                    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_f) 
                         == (0x000000ffU & (IData)(
                                                   (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                                    >> 0x0000002aU))))) {
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next 
                            = (0x000000ffU & 0U);
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next 
                            = (0x00003fffU & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_f) 
                                               == (0x00003fffU 
                                                   & (IData)(
                                                             (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                                              >> 0x00000032U))))
                                               ? 0U
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_f))));
                    } else {
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_f)));
                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next 
                            = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_f));
                    }
                } else {
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_next 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_f)));
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next 
                        = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_f));
                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next 
                        = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_f));
                }
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_next 
                    = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_f));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next 
                    = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_f));
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next 
                    = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_f));
            }
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_next 
                = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_f));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next 
                = (0x000000ffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_f));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next 
                = (0x00003fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_f));
        }
        if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_empty_index_buf_S4_next 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__mshr_empty_index;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[4U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[4U];
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_empty_index_buf_S4_next 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_empty_index_buf_S4_f;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[4U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[4U];
        }
        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130) 
             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))) {
            if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[1U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[2U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[3U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[4U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[4U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[5U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[5U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[6U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[6U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[7U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[7U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[8U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[8U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[9U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[9U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000aU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000000aU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000bU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000000bU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000cU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000000cU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000dU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000000dU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000eU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000000eU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000fU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000000fU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000010U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000010U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000011U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000011U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000012U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000012U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000013U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000013U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000014U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000014U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000015U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000015U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000016U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000016U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000017U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000017U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000018U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000018U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000019U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x00000019U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001aU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000001aU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001bU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000001bU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001cU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000001cU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001dU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000001dU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001eU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000001eU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001fU] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82[0x0000001fU];
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[1U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[1U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[2U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[2U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[3U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[3U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[4U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[4U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[5U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[5U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[6U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[6U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[7U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[7U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[8U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[8U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[9U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[9U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000aU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000aU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000bU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000bU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000cU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000cU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000dU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000dU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000eU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000eU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000fU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000fU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000010U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000010U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000011U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000011U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000012U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000012U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000013U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000013U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000014U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000014U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000015U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000015U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000016U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000016U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000017U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000017U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000018U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000018U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000019U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000019U];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001aU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001aU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001bU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001bU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001cU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001cU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001dU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001dU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001eU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001eU];
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001fU] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001fU];
            }
        } else if (((~ ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT____VdfgRegularize_he225fdf4_0_25) 
                        | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2_valid_S3) 
                            | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_stall_S4)) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)))) 
                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_stall_S4))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[4U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[4U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[5U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[5U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[6U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[6U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[7U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[7U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[8U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[8U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[9U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[9U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000aU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000aU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000bU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000bU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000cU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000cU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000dU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000dU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000eU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000eU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000fU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000000fU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000010U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000010U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000011U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000011U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000012U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000012U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000013U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000013U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000014U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000014U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000015U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000015U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000016U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000016U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000017U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000017U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000018U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000018U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000019U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x00000019U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001aU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001aU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001bU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001bU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001cU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001cU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001dU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001dU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001eU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001eU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001fU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_trans_S4[0x0000001fU];
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[4U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[4U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[5U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[5U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[6U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[6U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[7U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[7U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[8U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[8U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[9U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[9U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000aU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000aU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000bU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000bU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000cU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000cU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000dU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000dU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000eU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000eU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000fU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000fU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000010U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000010U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000011U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000011U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000012U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000012U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000013U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000013U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000014U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000014U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000015U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000015U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000016U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000016U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000017U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000017U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000018U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000018U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000019U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000019U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001aU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001aU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001bU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001bU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001cU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001cU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001dU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001dU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001eU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001eU];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001fU] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001fU];
        }
        if ((((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
              | ((0x0aU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                 | ((0x3fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                    | ((0x2cU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                       | ((0x2dU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                          | ((0x2eU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                             | ((0x2fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                                | ((0x30U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                                   | ((0x31U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                                      | ((0x32U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
                                         | (0x33U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)))))))))))) 
             & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT____VdfgRegularize_he225fdf4_0_27))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_ecc_S4[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_ecc_S4[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_ecc_S4[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_ecc_S4[3U];
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_f[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_f[3U];
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_load_data_subline_S2_next 
            = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__valid_S2_next) 
                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                   & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_load_data_subline_S2_f))))
                ? 0U : (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_load_data_subline_S2_f) 
                              + ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__valid_S2_next) 
                                 & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_wb_S2) 
                                     | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_ifill_32B_S2)) 
                                    | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_load_noshare_32B_S2) 
                                       | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_load_noshare_64B_S2)))))));
        if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__tag_data_out[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__state_data_out[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__state_data_out[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__state_data_out[2U];
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_f[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_f[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_f[2U];
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_next 
            = (7U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                      ? ((IData)(3U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_rd_ptr_next 
            = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_rd_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_counter_next 
            = (7U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132) 
                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45))
                      ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_counter_f)
                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_counter_f))
                          : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_counter_f) 
                             - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__stall_before_S3_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__stall_S3;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_int_state_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_data_state_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_data_state_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__l2_load_data_subline_S2_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_state_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_and_mask = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_next[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_next[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_sharer_counter_S4_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__x_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_empty_index_buf_S4_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_next[4U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__y_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter1__DOT__chipid_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[1U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[2U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[3U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[4U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[5U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[6U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[7U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[8U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[9U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000aU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000bU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000cU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000dU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000eU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000000fU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000010U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000011U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000012U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000013U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000014U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000015U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000016U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000017U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000018U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x00000019U] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001aU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001bU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001cU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001dU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001eU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_next[0x0000001fU] 
            = Vcmp_top__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__atomic_read_data_S1_next[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_load_data_subline_S2_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_next[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__stall_before_S3_next = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_buf_S4_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           && ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__stall_smc_buf_S4)
                ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_buf_S4_f)
                : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_S4)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_buf_S4_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           && ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__stall_smc_buf_S4)
                ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_buf_S4_f)
                : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_S4)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_state_S4_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           & (((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__stall_smc_buf_S4)) 
               & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_en_S4))
               ? (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_state_S4_f))
               : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_state_S4_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_state_S4_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           & ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg0_send_valid_S4) 
                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg1_send_valid_S4)) 
               & ((~ ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_stall_S4) 
                      | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127) 
                         | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe2_valid_S3) 
                            | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__broadcast_stall_S4))))) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__valid_S4_f)))
               ? ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_state_S4_f)) 
                  | (3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_load_data_subline_S4_f)))
               : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_state_S4_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__state_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p1) 
               & (2U == ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p1)
                          ? 2U : 0U))) | ((~ ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_op_val_p2) 
                                              & (0U 
                                                 == 
                                                 ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__broadcast_counter_max2)
                                                   ? 0U
                                                   : 2U)))) 
                                          & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__state_f))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__broadcast_state_S4_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT____VdfgRegularize_he225fdf4_0_26)) 
              & ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__valid_S4_f) 
                   & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S4_f))) 
                  & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128) 
                         | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__broadcast_stall_S4))) 
                     & (0x12U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__msg_send_type)))) 
                 | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__broadcast_state_S4_f))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_cas_cmp_S1_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f) 
           & (((6U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)) 
               & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__cas_cmp_en_S4))
               ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__cas_cmp_en_S4) 
                  & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__data_size_S4_f))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_shift_S4[3U] 
                         == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__msg_data_S4_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__data_size_S4_f)) 
                         & ((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_shift_S4[3U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_shift_S4[2U]))) 
                            == vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dpath__DOT__msg_data_S4_f))))
               : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_cas_cmp_S1_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_input_en_S1_next 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__rst_n_f)) 
                 | ((~ ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__valid_S1_next) 
                        & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__mshr_pending)) 
                           & (((7U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                               | (0x0bU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                              | (((0x40U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                  | (0x34U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1))) 
                                 | ((0x35U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                    | ((0x36U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                       | ((0x37U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                          | ((0x38U 
                                              == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                             | ((0x39U 
                                                 == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                                | ((0x3aU 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                                   | ((0x3bU 
                                                       == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)) 
                                                      | (0x0fU 
                                                         == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1)))))))))))))) 
                    & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__valid_S2_f) 
                        & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__stall_S2)) 
                           & ((((7U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                | (((0x0bU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                    | (0x40U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f))) 
                                   | ((0x34U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                      | ((0x35U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                         | ((0x36U 
                                             == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                            | ((0x37U 
                                                == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                               | ((0x38U 
                                                   == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                                  | ((0x39U 
                                                      == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                                     | ((0x3aU 
                                                         == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                                        | (0x3bU 
                                                           == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f))))))))))) 
                               & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_tag_hit_S2) 
                                  & (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_way_state_mesi_S2)))) 
                              | ((0x0fU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                                 & (((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_tag_hit_S2)) 
                                     & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S2_f))) 
                                    | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_tag_hit_S2) 
                                       & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_way_state_mesi_S2)) 
                                          & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__l2_way_state_vd_S2))))))))) 
                       | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_input_en_S1_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT____VdfgRegularize_he0210fa6_0_0 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_and_mask) 
            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_f)) 
           | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_used_or_mask));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_next 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_and_mask) 
            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_f)) 
           | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__entry_locked_or_mask));
}

void Vcmp_top___024root___nba_comb__TOP__45(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__45\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__46(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__46\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_f;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__oram_offchip_valid) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__47(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__47\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}
