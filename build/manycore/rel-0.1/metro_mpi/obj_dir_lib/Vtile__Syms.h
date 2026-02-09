// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTILE__SYMS_H_
#define VERILATED_VTILE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtile.h"

// INCLUDE MODULE CLASSES
#include "Vtile___024root.h"
#include "Vtile___024unit.h"
#include "Vtile_dynamic_node_top_wrap.h"
#include "Vtile_dynamic_output_top.h"
#include "Vtile_l2_priority_encoder_6.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtile__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtile* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtile___024root                TOP;
    Vtile___024unit                TOP____024unit;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6    TOP__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6;
    Vtile_dynamic_node_top_wrap    TOP__tile__DOT__user_dynamic_network0;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output;
    Vtile_dynamic_node_top_wrap    TOP__tile__DOT__user_dynamic_network1;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output;
    Vtile_dynamic_node_top_wrap    TOP__tile__DOT__user_dynamic_network2;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output;
    Vtile_dynamic_output_top       TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output;

    // CONSTRUCTORS
    Vtile__Syms(VerilatedContext* contextp, const char* namep, Vtile* modelp);
    ~Vtile__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
