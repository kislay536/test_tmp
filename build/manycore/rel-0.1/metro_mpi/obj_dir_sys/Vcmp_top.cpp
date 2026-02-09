// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcmp_top__pch.h"

//============================================================
// Constructors

Vcmp_top::Vcmp_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcmp_top__Syms(contextp(), _vcname__, this)}
    , core_ref_clk{vlSymsp->TOP.core_ref_clk}
    , sys_rst_n{vlSymsp->TOP.sys_rst_n}
    , clk_en{vlSymsp->TOP.clk_en}
    , async_mux{vlSymsp->TOP.async_mux}
    , ok_iob{vlSymsp->TOP.ok_iob}
    , good_end{vlSymsp->TOP.good_end}
    , bad_end{vlSymsp->TOP.bad_end}
    , test_ena{vlSymsp->TOP.test_ena}
    , pll_rst_n{vlSymsp->TOP.pll_rst_n}
    , pll_bypass{vlSymsp->TOP.pll_bypass}
    , pll_rangea{vlSymsp->TOP.pll_rangea}
    , pll_lock{vlSymsp->TOP.pll_lock}
    , clk_mux_sel{vlSymsp->TOP.clk_mux_sel}
    , diag_done{vlSymsp->TOP.diag_done}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2{vlSymsp->TOP.__PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2}
    , __PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3{vlSymsp->TOP.__PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3}
    , __PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master{vlSymsp->TOP.__PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master}
    , __PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master{vlSymsp->TOP.__PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master}
    , __PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__plic_master{vlSymsp->TOP.__PVT__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__plic_master}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcmp_top::Vcmp_top(const char* _vcname__)
    : Vcmp_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcmp_top::~Vcmp_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcmp_top___024root___eval_debug_assertions(Vcmp_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcmp_top___024root___eval_static(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___eval_initial(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___eval_settle(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___eval(Vcmp_top___024root* vlSelf);

void Vcmp_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcmp_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcmp_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcmp_top___024root___eval_static(&(vlSymsp->TOP));
        Vcmp_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcmp_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcmp_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcmp_top::eventsPending() { return false; }

uint64_t Vcmp_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcmp_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcmp_top___024root___eval_final(Vcmp_top___024root* vlSelf);

VL_ATTR_COLD void Vcmp_top::final() {
    Vcmp_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcmp_top::hierName() const { return vlSymsp->name(); }
const char* Vcmp_top::modelName() const { return "Vcmp_top"; }
unsigned Vcmp_top::threads() const { return 1; }
void Vcmp_top::prepareClone() const { contextp()->prepareClone(); }
void Vcmp_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
