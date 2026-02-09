// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__0(Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_valid = ((1U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_req_buf_status_f)) 
                          & (0U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f)));
    vlSelfRef.w_valid = ((1U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_req_buf_status)) 
                         & (0U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_data_resp_buf_status_f)));
    vlSelfRef.aw_valid = ((1U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_req_buf_status)) 
                          & (0U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_addr_resp_buf_status_f)));
}

std::string VL_TO_STRING(const Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
