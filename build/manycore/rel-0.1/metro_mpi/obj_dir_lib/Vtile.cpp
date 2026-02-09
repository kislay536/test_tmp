// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtile__pch.h"

//============================================================
// Constructors

Vtile::Vtile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtile__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , clk_en{vlSymsp->TOP.clk_en}
    , default_coreid_x{vlSymsp->TOP.default_coreid_x}
    , default_coreid_y{vlSymsp->TOP.default_coreid_y}
    , flat_tileid{vlSymsp->TOP.flat_tileid}
    , jtag_tiles_ucb_val{vlSymsp->TOP.jtag_tiles_ucb_val}
    , jtag_tiles_ucb_data{vlSymsp->TOP.jtag_tiles_ucb_data}
    , tile_jtag_ucb_val{vlSymsp->TOP.tile_jtag_ucb_val}
    , tile_jtag_ucb_data{vlSymsp->TOP.tile_jtag_ucb_data}
    , dyn0_validIn_N{vlSymsp->TOP.dyn0_validIn_N}
    , dyn0_validIn_E{vlSymsp->TOP.dyn0_validIn_E}
    , dyn0_validIn_W{vlSymsp->TOP.dyn0_validIn_W}
    , dyn0_validIn_S{vlSymsp->TOP.dyn0_validIn_S}
    , dyn0_dNo_yummy{vlSymsp->TOP.dyn0_dNo_yummy}
    , dyn0_dEo_yummy{vlSymsp->TOP.dyn0_dEo_yummy}
    , dyn0_dWo_yummy{vlSymsp->TOP.dyn0_dWo_yummy}
    , dyn0_dSo_yummy{vlSymsp->TOP.dyn0_dSo_yummy}
    , dyn1_validIn_N{vlSymsp->TOP.dyn1_validIn_N}
    , dyn1_validIn_E{vlSymsp->TOP.dyn1_validIn_E}
    , dyn1_validIn_W{vlSymsp->TOP.dyn1_validIn_W}
    , dyn1_validIn_S{vlSymsp->TOP.dyn1_validIn_S}
    , dyn1_dNo_yummy{vlSymsp->TOP.dyn1_dNo_yummy}
    , dyn1_dEo_yummy{vlSymsp->TOP.dyn1_dEo_yummy}
    , dyn1_dWo_yummy{vlSymsp->TOP.dyn1_dWo_yummy}
    , dyn1_dSo_yummy{vlSymsp->TOP.dyn1_dSo_yummy}
    , dyn2_validIn_N{vlSymsp->TOP.dyn2_validIn_N}
    , dyn2_validIn_E{vlSymsp->TOP.dyn2_validIn_E}
    , dyn2_validIn_W{vlSymsp->TOP.dyn2_validIn_W}
    , dyn2_validIn_S{vlSymsp->TOP.dyn2_validIn_S}
    , dyn2_dNo_yummy{vlSymsp->TOP.dyn2_dNo_yummy}
    , dyn2_dEo_yummy{vlSymsp->TOP.dyn2_dEo_yummy}
    , dyn2_dWo_yummy{vlSymsp->TOP.dyn2_dWo_yummy}
    , dyn2_dSo_yummy{vlSymsp->TOP.dyn2_dSo_yummy}
    , dyn0_dNo_valid{vlSymsp->TOP.dyn0_dNo_valid}
    , dyn0_dEo_valid{vlSymsp->TOP.dyn0_dEo_valid}
    , dyn0_dWo_valid{vlSymsp->TOP.dyn0_dWo_valid}
    , dyn0_dSo_valid{vlSymsp->TOP.dyn0_dSo_valid}
    , dyn0_yummyOut_N{vlSymsp->TOP.dyn0_yummyOut_N}
    , dyn0_yummyOut_E{vlSymsp->TOP.dyn0_yummyOut_E}
    , dyn0_yummyOut_W{vlSymsp->TOP.dyn0_yummyOut_W}
    , dyn0_yummyOut_S{vlSymsp->TOP.dyn0_yummyOut_S}
    , dyn1_dNo_valid{vlSymsp->TOP.dyn1_dNo_valid}
    , dyn1_dEo_valid{vlSymsp->TOP.dyn1_dEo_valid}
    , dyn1_dWo_valid{vlSymsp->TOP.dyn1_dWo_valid}
    , dyn1_dSo_valid{vlSymsp->TOP.dyn1_dSo_valid}
    , dyn1_yummyOut_N{vlSymsp->TOP.dyn1_yummyOut_N}
    , dyn1_yummyOut_E{vlSymsp->TOP.dyn1_yummyOut_E}
    , dyn1_yummyOut_W{vlSymsp->TOP.dyn1_yummyOut_W}
    , dyn1_yummyOut_S{vlSymsp->TOP.dyn1_yummyOut_S}
    , dyn2_dNo_valid{vlSymsp->TOP.dyn2_dNo_valid}
    , dyn2_dEo_valid{vlSymsp->TOP.dyn2_dEo_valid}
    , dyn2_dWo_valid{vlSymsp->TOP.dyn2_dWo_valid}
    , dyn2_dSo_valid{vlSymsp->TOP.dyn2_dSo_valid}
    , dyn2_yummyOut_N{vlSymsp->TOP.dyn2_yummyOut_N}
    , dyn2_yummyOut_E{vlSymsp->TOP.dyn2_yummyOut_E}
    , dyn2_yummyOut_W{vlSymsp->TOP.dyn2_yummyOut_W}
    , dyn2_yummyOut_S{vlSymsp->TOP.dyn2_yummyOut_S}
    , debug_req_i{vlSymsp->TOP.debug_req_i}
    , unavailable_o{vlSymsp->TOP.unavailable_o}
    , timer_irq_i{vlSymsp->TOP.timer_irq_i}
    , ipi_i{vlSymsp->TOP.ipi_i}
    , irq_i{vlSymsp->TOP.irq_i}
    , default_chipid{vlSymsp->TOP.default_chipid}
    , default_total_num_tiles{vlSymsp->TOP.default_total_num_tiles}
    , dyn0_dataIn_N{vlSymsp->TOP.dyn0_dataIn_N}
    , dyn0_dataIn_E{vlSymsp->TOP.dyn0_dataIn_E}
    , dyn0_dataIn_W{vlSymsp->TOP.dyn0_dataIn_W}
    , dyn0_dataIn_S{vlSymsp->TOP.dyn0_dataIn_S}
    , dyn1_dataIn_N{vlSymsp->TOP.dyn1_dataIn_N}
    , dyn1_dataIn_E{vlSymsp->TOP.dyn1_dataIn_E}
    , dyn1_dataIn_W{vlSymsp->TOP.dyn1_dataIn_W}
    , dyn1_dataIn_S{vlSymsp->TOP.dyn1_dataIn_S}
    , dyn2_dataIn_N{vlSymsp->TOP.dyn2_dataIn_N}
    , dyn2_dataIn_E{vlSymsp->TOP.dyn2_dataIn_E}
    , dyn2_dataIn_W{vlSymsp->TOP.dyn2_dataIn_W}
    , dyn2_dataIn_S{vlSymsp->TOP.dyn2_dataIn_S}
    , dyn0_dNo{vlSymsp->TOP.dyn0_dNo}
    , dyn0_dEo{vlSymsp->TOP.dyn0_dEo}
    , dyn0_dWo{vlSymsp->TOP.dyn0_dWo}
    , dyn0_dSo{vlSymsp->TOP.dyn0_dSo}
    , dyn1_dNo{vlSymsp->TOP.dyn1_dNo}
    , dyn1_dEo{vlSymsp->TOP.dyn1_dEo}
    , dyn1_dWo{vlSymsp->TOP.dyn1_dWo}
    , dyn1_dSo{vlSymsp->TOP.dyn1_dSo}
    , dyn2_dNo{vlSymsp->TOP.dyn2_dNo}
    , dyn2_dEo{vlSymsp->TOP.dyn2_dEo}
    , dyn2_dWo{vlSymsp->TOP.dyn2_dWo}
    , dyn2_dSo{vlSymsp->TOP.dyn2_dSo}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__tile__DOT__user_dynamic_network0{vlSymsp->TOP.__PVT__tile__DOT__user_dynamic_network0}
    , __PVT__tile__DOT__user_dynamic_network1{vlSymsp->TOP.__PVT__tile__DOT__user_dynamic_network1}
    , __PVT__tile__DOT__user_dynamic_network2{vlSymsp->TOP.__PVT__tile__DOT__user_dynamic_network2}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6}
    , __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6{vlSymsp->TOP.__PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtile::Vtile(const char* _vcname__)
    : Vtile(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtile::~Vtile() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtile___024root___eval_debug_assertions(Vtile___024root* vlSelf);
#endif  // VL_DEBUG
void Vtile___024root___eval_static(Vtile___024root* vlSelf);
void Vtile___024root___eval_initial(Vtile___024root* vlSelf);
void Vtile___024root___eval_settle(Vtile___024root* vlSelf);
void Vtile___024root___eval(Vtile___024root* vlSelf);

void Vtile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtile::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtile___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtile___024root___eval_static(&(vlSymsp->TOP));
        Vtile___024root___eval_initial(&(vlSymsp->TOP));
        Vtile___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtile___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtile::eventsPending() { return false; }

uint64_t Vtile::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtile::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtile___024root___eval_final(Vtile___024root* vlSelf);

VL_ATTR_COLD void Vtile::final() {
    Vtile___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtile::hierName() const { return vlSymsp->name(); }
const char* Vtile::modelName() const { return "Vtile"; }
unsigned Vtile::threads() const { return 1; }
void Vtile::prepareClone() const { contextp()->prepareClone(); }
void Vtile::atClone() const {
    contextp()->threadPoolpOnClone();
}
