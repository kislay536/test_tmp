// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 16> &out, const VlUnpacked<QData/*63:0*/, 16> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0x00000010U > n));
}

void Vcmp_top___024root___eval_triggers__act(Vcmp_top___024root* vlSelf);
bool Vcmp_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 16> &in);
void Vcmp_top___024root___eval_act(Vcmp_top___024root* vlSelf);

bool Vcmp_top___024root___eval_phase__act(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__act\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcmp_top___024root___eval_triggers__act(vlSelf);
    Vcmp_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcmp_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcmp_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vcmp_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 16> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((0x00000010U > n));
}

void Vcmp_top___024root___eval_nba(Vcmp_top___024root* vlSelf);

bool Vcmp_top___024root___eval_phase__nba(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__nba\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcmp_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcmp_top___024root___eval_nba(vlSelf);
        Vcmp_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcmp_top___024root___eval_phase__ico(Vcmp_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 16> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcmp_top___024root___eval(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcmp_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v", 46, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vcmp_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcmp_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v", 46, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcmp_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v", 46, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcmp_top___024root___eval_phase__act(vlSelf));
    } while (Vcmp_top___024root___eval_phase__nba(vlSelf));
}

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
