// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__0(Vcmp_top_io_xbar_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_xbar_top__DOT__myChipID_f = 
        ((IData)(vlSelfRef.__PVT__io_xbar_top__DOT__reset)
          ? 0U : 0x2000U);
}

void Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__1(Vcmp_top_io_xbar_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_xbar_top__DOT__reset = (1U 
                                                & (~ (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff)));
}
