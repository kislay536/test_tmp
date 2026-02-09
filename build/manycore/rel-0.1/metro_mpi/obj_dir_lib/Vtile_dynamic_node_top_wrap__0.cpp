// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

void Vtile_dynamic_node_top_wrap___ico_sequent__TOP__tile__DOT__user_dynamic_network0__0(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___ico_sequent__TOP__tile__DOT__user_dynamic_network0__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_N) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_E) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_S) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_W) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__0(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*3:0*/ __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset)))) {
        if (vlSelfRef.validIn_P) {
            __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__flit;
            __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn0_validIn_E) {
            __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn0_dataIn_E;
            __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn0_validIn_W) {
            __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn0_dataIn_W;
            __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn0_validIn_N) {
            __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn0_dataIn_N;
            __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn0_validIn_S) {
            __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn0_dataIn_S;
            __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__tail_b_in));
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__reset) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__coreid_y;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__coreid_x;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__chipid;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.thanksIn_P));
    if (__VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    vlSelfRef.validIn_P = ((IData)(vlSymsp->TOP.tile__DOT__cgno_blk1__DOT__is_two_or_more_f) 
                           & (IData)(vlSymsp->TOP.tile__DOT__processor_router_valid_noc1));
    if (__VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    }
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__1(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header)
                           ? (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_b_in 
                                      >> 0x00000016U))
                           : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)
                               ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f))));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__2(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header)
                           ? (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                                      >> 0x00000016U))
                           : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)
                               ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f))));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__3(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header)
                           ? (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_a_in 
                                      >> 0x00000016U))
                           : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)
                               ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f))));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__4(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header)
                           ? (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                                      >> 0x00000016U))
                           : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)
                               ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f))));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__5(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__5\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header)
                           ? (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                                      >> 0x00000016U))
                           : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)
                               ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f))));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__6(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_last_f)
            ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_zero_f) 
               || (1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f))))
            : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_zero_f) 
               && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__7(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_last_f)
            ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_zero_f) 
               || (1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f))))
            : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_zero_f) 
               && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__8(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_last_f)
            ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_zero_f) 
               || (1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f))))
            : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_zero_f) 
               && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__9(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_last_f)
            ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_zero_f) 
               || (1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f))))
            : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_zero_f) 
               && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__10(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__10\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp;
    vlSelfRef.__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_last_f)
            ? ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_zero_f) 
               || (1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f))))
            : ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_zero_f) 
               && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__11(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__11\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dynamic_node_top__DOT__proc_input__DOT____Vcellinp__control__length 
        = (0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_b_in 
                                  >> 0x00000016U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits 
        = ((1U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_b_in 
                          >> 0x00000021U))) ? 0U : 
           (7U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_b_in 
                          >> 0x0000001eU))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_b_in 
                                   >> 0x00000032U))) 
           != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f));
    vlSelfRef.dynamic_node_top__DOT__west_input__DOT____Vcellinp__control__length 
        = (0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_a_in 
                                  >> 0x00000016U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits 
        = ((1U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_a_in 
                          >> 0x00000021U))) ? 0U : 
           (7U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_a_in 
                          >> 0x0000001eU))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_a_in 
                                   >> 0x00000032U))) 
           != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f));
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__reset) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f = 0U;
    } else {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp;
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_zero_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.thanksIn_P));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_last_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_zero_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_last_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_zero_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_last_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_zero_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_last_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_zero_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_last_f 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset) 
           || (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_b_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_a_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_b_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__data_a_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__12(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__12\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dynamic_node_top__DOT__east_input__DOT____Vcellinp__control__length 
        = (0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                                  >> 0x00000016U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits 
        = ((1U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                          >> 0x00000021U))) ? 0U : 
           (7U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                          >> 0x0000001eU))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                                   >> 0x00000032U))) 
           != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f));
    vlSelfRef.dynamic_node_top__DOT__north_input__DOT____Vcellinp__control__length 
        = (0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                                  >> 0x00000016U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits 
        = ((1U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                          >> 0x00000021U))) ? 0U : 
           (7U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                          >> 0x0000001eU))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                                   >> 0x00000032U))) 
           != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f));
    vlSelfRef.dynamic_node_top__DOT__south_input__DOT____Vcellinp__control__length 
        = (0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                                  >> 0x00000016U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits 
        = ((1U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                          >> 0x00000021U))) ? 0U : 
           (7U & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                          >> 0x0000001eU))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                                   >> 0x00000032U))) 
           != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__13(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__13\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp;
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__0(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thanksIn_P = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_c_out) 
                            | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_b_out) 
                               | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_d_out) 
                                  | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_x_out) 
                                     | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_c_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_x_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_c_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_a_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_c_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_d_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_d_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_x_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_b_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_d_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_a_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_b_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_a_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_c_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_b_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_x_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_a_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_d_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_x_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_a_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_b_out)))));
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__14(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__14\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__15(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__15\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__16(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__16\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__17(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__17\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__18(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__18\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__19(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__19\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__20(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__20\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__21(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__21\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__22(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__22\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp 
        = vlSelfRef.__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp;
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__23(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network0__23\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__reset = 
        (1U & (~ (IData)(vlSymsp->TOP.tile__DOT__rst_n_f)));
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__1(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.validIn_P) {
        if (vlSelfRef.thanksIn_P) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.thanksIn_P)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.thanksIn_P) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f) 
                              - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_N) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_E) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_W) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn0_validIn_S) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__2(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)));
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__3(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__4(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__5(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__5\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__6(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network0__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
}

void Vtile_dynamic_node_top_wrap___ico_sequent__TOP__tile__DOT__user_dynamic_network1__0(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___ico_sequent__TOP__tile__DOT__user_dynamic_network1__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_N) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_E) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_S) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_W) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network1__0(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network1__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*3:0*/ __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset)))) {
        if (vlSelfRef.validIn_P) {
            __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.tile__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__buf_mem_f
                [vlSymsp->TOP.tile__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__rd_ptr_f];
            __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn1_validIn_E) {
            __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn1_dataIn_E;
            __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn1_validIn_W) {
            __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn1_dataIn_W;
            __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn1_validIn_N) {
            __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn1_dataIn_N;
            __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn1_validIn_S) {
            __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn1_dataIn_S;
            __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__tail_b_in));
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__reset) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__coreid_y;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__coreid_x;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__chipid;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.thanksIn_P));
    if (__VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    vlSelfRef.validIn_P = ((0U != (IData)(vlSymsp->TOP.tile__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__buf_counter_f)) 
                           & (IData)(vlSymsp->TOP.tile__DOT__cgno_blk2__DOT__is_two_or_more_f));
    if (__VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    }
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network1__1(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network1__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.validIn_P) {
        if (vlSelfRef.thanksIn_P) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.thanksIn_P)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.thanksIn_P) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f) 
                              - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_N) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_E) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_W) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn1_validIn_S) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vtile_dynamic_node_top_wrap___ico_sequent__TOP__tile__DOT__user_dynamic_network2__0(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___ico_sequent__TOP__tile__DOT__user_dynamic_network2__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_N) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_E) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_S) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_W) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network2__0(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network2__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    QData/*63:0*/ __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*3:0*/ __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset)))) {
        if (vlSymsp->TOP.dyn2_validIn_E) {
            __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn2_dataIn_E;
            __VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn2_validIn_W) {
            __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn2_dataIn_W;
            __VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn2_validIn_N) {
            __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn2_dataIn_N;
            __VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSymsp->TOP.dyn2_validIn_S) {
            __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.dyn2_dataIn_S;
            __VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
        if (vlSelfRef.validIn_P) {
            __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.tile__DOT__processor_router_data_noc3;
            __VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f;
            __VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (1U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__tail_a_in));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__tail_b_in));
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__reset) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__coreid_y;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__coreid_x;
        vlSelfRef.__PVT__dynamic_node_top__DOT__myChipID_f 
            = vlSymsp->TOP.tile__DOT__uncore_config__DOT__chipid;
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f 
            = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__yummy_out_f 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__reset))) 
           && (IData)(vlSelfRef.thanksIn_P));
    if (__VdlySet__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f__v0;
    }
    if (__VdlySet__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f[__VdlyDim0__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f__v0;
    }
}

void Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network2__1(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_sequent__TOP__tile__DOT__user_dynamic_network2__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.validIn_P = ((IData)(vlSymsp->TOP.tile__DOT__cgno_blk3__DOT__is_two_or_more_f) 
                           & (IData)(vlSymsp->TOP.tile__DOT__processor_router_valid_noc3));
}

void Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network2__1(Vtile_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtile_dynamic_node_top_wrap___nba_comb__TOP__tile__DOT__user_dynamic_network2__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.validIn_P) {
        if (vlSelfRef.thanksIn_P) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.thanksIn_P)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.thanksIn_P) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f) 
                              - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_N) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_E) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_W) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.dyn2_validIn_S) {
        if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp)))) {
            vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}
