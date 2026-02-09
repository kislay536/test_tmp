// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_7_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_4_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_3_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_2_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_0_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_6_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_5_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_4_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_valid) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_5_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_7_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_4_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_3_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_1_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_0_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_6_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_5_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_6_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_5_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_7_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_4_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_2_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_1_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_0_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_6_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_valid) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_0_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_6_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_5_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_7_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_3_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_2_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_1_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_0_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__is_two_or_more_f) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_valid));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_1_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_0_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_6_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_5_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_7_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_3_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_2_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_1_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_2_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_1_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_0_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_6_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_4_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_7_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_3_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_2_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_3_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_2_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_1_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_0_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_5_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_4_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_7_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_3_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_4_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_3_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_2_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_1_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_6_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_5_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_4_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_7_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_7_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_4_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_3_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_2_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_0_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_6_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_5_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_4_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_5_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_7_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_4_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_3_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_1_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_0_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_6_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_5_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_xbar_noc3_valid) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc3_valid) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_6_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_5_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_7_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_4_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_2_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_1_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_0_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_6_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_0_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_6_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_5_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_7_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_3_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_2_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_1_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_0_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__is_two_or_more_f) 
                                 & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                     ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_status))
                                     : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_status_f))));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_1_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_0_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_6_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_5_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_7_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_3_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_2_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_1_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_2_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_1_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_0_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_6_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_4_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_7_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_3_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_2_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_3_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_2_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_1_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_0_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_5_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_4_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_7_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_3_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_4_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_3_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_2_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_1_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_6_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_5_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_4_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_7_out))))))));
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__NIB__DOT__head_ptr_next = vlSelfRef.__PVT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__valid_in) {
        if (vlSelfRef.__PVT__thanks_all_temp) {
            vlSelfRef.__PVT__NIB__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.__PVT__NIB__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__thanks_all_temp)))) {
            vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.__PVT__thanks_all_temp) {
        vlSelfRef.__PVT__NIB__DOT__head_ptr_next = 
            (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__control__length = (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1 
                                                        >> 0x00000016U)));
    vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip 
        = ((0x00003fffU & (IData)((vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1 
                                   >> 0x00000032U))) 
           != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__myChipID_f));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_input_top_4___ctor_var_reset(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__route_req_0_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1848926683983643889ull);
    vlSelf->__PVT__route_req_1_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14289798722550334226ull);
    vlSelf->__PVT__route_req_2_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15158798305403249924ull);
    vlSelf->__PVT__route_req_3_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8483701296515819487ull);
    vlSelf->__PVT__route_req_4_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6669511120685248462ull);
    vlSelf->__PVT__route_req_5_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9313839154736275182ull);
    vlSelf->__PVT__route_req_6_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3138467145041947060ull);
    vlSelf->__PVT__route_req_7_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 824551970018338660ull);
    vlSelf->__PVT__default_ready_0_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15233004068917355681ull);
    vlSelf->__PVT__default_ready_1_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11452824540330440ull);
    vlSelf->__PVT__default_ready_2_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4774601402352293452ull);
    vlSelf->__PVT__default_ready_3_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4809563538353043563ull);
    vlSelf->__PVT__default_ready_4_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2797614951912463957ull);
    vlSelf->__PVT__default_ready_5_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13929430617998302991ull);
    vlSelf->__PVT__default_ready_6_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10921536926528353070ull);
    vlSelf->__PVT__default_ready_7_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6928651914369301598ull);
    vlSelf->__PVT__tail_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17273288964802552015ull);
    vlSelf->__PVT__yummy_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3723180240150133702ull);
    vlSelf->__PVT__data_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11675680895196038875ull);
    vlSelf->__PVT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__my_loc_x_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7209479156948866641ull);
    vlSelf->__PVT__my_loc_y_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1625660722901386475ull);
    vlSelf->__PVT__my_chip_id_in = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4610377187203349437ull);
    vlSelf->__PVT__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->__PVT__data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10574596302020702150ull);
    vlSelf->__PVT__thanks_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16238516153929230334ull);
    vlSelf->__PVT__thanks_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17867581381451157810ull);
    vlSelf->__PVT__thanks_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1352582046851940577ull);
    vlSelf->__PVT__thanks_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16571317686263209077ull);
    vlSelf->__PVT__thanks_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16582194776774791624ull);
    vlSelf->__PVT__thanks_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14954014559609778357ull);
    vlSelf->__PVT__thanks_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18305825478371840342ull);
    vlSelf->__PVT__thanks_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14175183549771416569ull);
    vlSelf->__PVT__thanks_all_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5436938860716924344ull);
    vlSelf->__Vcellinp__control__length = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__NIB__DOT__storage_data_f[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5222014762400757150ull);
    }
    vlSelf->__PVT__NIB__DOT__head_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15920498856665602382ull);
    vlSelf->__PVT__NIB__DOT__tail_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2593644930367871579ull);
    vlSelf->__PVT__NIB__DOT__elements_in_array_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16545656107308822925ull);
    vlSelf->__PVT__NIB__DOT__head_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18214044086440669424ull);
    vlSelf->__PVT__NIB__DOT__tail_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15695109884682086064ull);
    vlSelf->__PVT__NIB__DOT__elements_in_array_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11259803409531367587ull);
    vlSelf->__PVT__NIB__DOT__yummy_out_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13305893051843850545ull);
    vlSelf->__PVT__control__DOT__count_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16715831452959333995ull);
    vlSelf->__PVT__control__DOT__header_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137053013564493080ull);
    vlSelf->__PVT__control__DOT__thanks_all_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16595592804357212892ull);
    vlSelf->__PVT__control__DOT__count_zero_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2928727295594648959ull);
    vlSelf->__PVT__control__DOT__count_one_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14151186363883909919ull);
    vlSelf->__PVT__control__DOT__tail_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716098605914717823ull);
    vlSelf->__PVT__control__DOT__count_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7400544622931234999ull);
    vlSelf->__PVT__control__DOT__header = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 924571719605275535ull);
    vlSelf->__PVT__control__DOT__count_minus_one = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10525501522853668394ull);
    vlSelf->__PVT__control__DOT__header_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11856123617502845046ull);
    vlSelf->__PVT__control__DOT__tail_calc__DOT__off_chip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6593734908406007622ull);
    vlSelf->control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 = 0;
    vlSelf->__Vdly__control__DOT__header_temp = 0;
    vlSelf->__Vdly__control__DOT__count_temp = 0;
}
