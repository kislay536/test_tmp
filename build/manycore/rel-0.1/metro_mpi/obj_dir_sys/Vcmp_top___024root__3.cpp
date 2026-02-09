// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

#ifdef VL_DEBUG
void Vcmp_top___024root___eval_debug_assertions(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_debug_assertions\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.test_ena & 0xfeU)))) {
        Verilated::overWidthError("test_ena");
    }
    if (VL_UNLIKELY(((vlSelfRef.core_ref_clk & 0xfeU)))) {
        Verilated::overWidthError("core_ref_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.sys_rst_n & 0xfeU)))) {
        Verilated::overWidthError("sys_rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.pll_rst_n & 0xfeU)))) {
        Verilated::overWidthError("pll_rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk_en & 0xfeU)))) {
        Verilated::overWidthError("clk_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.pll_bypass & 0xfeU)))) {
        Verilated::overWidthError("pll_bypass");
    }
    if (VL_UNLIKELY(((vlSelfRef.pll_rangea & 0xe0U)))) {
        Verilated::overWidthError("pll_rangea");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk_mux_sel & 0xfcU)))) {
        Verilated::overWidthError("clk_mux_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.async_mux & 0xfeU)))) {
        Verilated::overWidthError("async_mux");
    }
    if (VL_UNLIKELY(((vlSelfRef.diag_done & 0xfeU)))) {
        Verilated::overWidthError("diag_done");
    }
    if (VL_UNLIKELY(((vlSelfRef.ok_iob & 0xfeU)))) {
        Verilated::overWidthError("ok_iob");
    }
}
#endif  // VL_DEBUG
