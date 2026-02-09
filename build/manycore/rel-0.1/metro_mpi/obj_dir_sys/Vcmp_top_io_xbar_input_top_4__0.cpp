// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data;
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_valid) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__is_two_or_more_f));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__header_temp = vlSelfRef.__PVT__control__DOT__header_temp;
    vlSelfRef.__Vdly__control__DOT__header_temp = ((IData)(vlSelfRef.__PVT__control__DOT__header_last_f)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__control__DOT__count_zero_f) 
                                                    || (1U 
                                                        & (~ (IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f))))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__control__DOT__count_zero_f) 
                                                    && (IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_7_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_4_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_3_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_2_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_0_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_6_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_5_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_4_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__count_temp = vlSelfRef.__Vdly__control__DOT__count_temp;
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__header_temp = vlSelfRef.__Vdly__control__DOT__header_temp;
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__header = ((IData)(vlSelfRef.__PVT__control__DOT__header_temp) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0 
        = ((~ (IData)(vlSelfRef.__PVT__control__DOT__tail_calc__DOT__off_chip)) 
           & (IData)(vlSelfRef.__PVT__control__DOT__header));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in));
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_5_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_7_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_4_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_3_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_1_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_0_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_6_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_5_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data;
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_valid) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__is_two_or_more_f));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_6_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_5_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_7_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_4_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_2_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_1_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_0_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_6_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data;
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__is_two_or_more_f) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_valid));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_0_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_6_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_5_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_7_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_3_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_2_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_1_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_0_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in));
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_1_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_0_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_6_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_5_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_7_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_3_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_2_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_1_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in));
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_2_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_1_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_0_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_6_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_4_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_7_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_3_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_2_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in));
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_3_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_2_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_1_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_0_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_5_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_4_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_7_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_3_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in));
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__thanks_4_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__thanks_3_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__thanks_2_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__thanks_1_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__thanks_6_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__thanks_5_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__thanks_4_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__thanks_7_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in));
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__NIB__DOT__tail_ptr_next = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_7_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_4_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_3_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_2_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_0_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_6_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_5_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_4_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_xbar_noc3_valid) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_noc3_data;
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_5_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_7_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_4_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_3_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_1_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_0_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_6_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_5_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc3_data;
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc3_valid) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__is_two_or_more_f));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__3\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_6_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_5_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_7_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_4_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_2_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_1_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_0_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_6_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                    ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_header0_f
                    : ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_39)
                        ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_header0_f
                        : vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_data0_f));
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_in = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__is_two_or_more_f) 
                                 & ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                     ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_status))
                                     : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_status_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__4\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_0_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_6_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_5_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_7_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_3_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_2_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_1_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_0_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                    ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_header0_f
                    : ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_41)
                        ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_header0_f
                        : vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_data0_f));
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__is_two_or_more_f));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__4\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_1_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_0_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_6_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_5_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_7_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_3_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_2_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_1_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                    ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_header0_f
                    : ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43)
                        ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_header0_f
                        : vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_data0_f));
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__is_two_or_more_f));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__4\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_2_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_1_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_0_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_6_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_4_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_7_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_3_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_2_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                    ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_header0_f
                    : ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_45)
                        ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_header0_f
                        : vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_data0_f));
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__is_two_or_more_f));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__4\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_3_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_2_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_1_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_0_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_5_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_4_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_7_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_3_out))))))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__NIB__DOT__storage_data_f__v0;
    __VdlyVal__NIB__DOT__storage_data_f__v0 = 0;
    CData/*1:0*/ __VdlyDim0__NIB__DOT__storage_data_f__v0;
    __VdlyDim0__NIB__DOT__storage_data_f__v0 = 0;
    CData/*0:0*/ __VdlySet__NIB__DOT__storage_data_f__v0;
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0;
    // Body
    __VdlySet__NIB__DOT__storage_data_f__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)))) {
        if (vlSelfRef.__PVT__valid_in) {
            __VdlyVal__NIB__DOT__storage_data_f__v0 
                = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                    ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_header0_f
                    : ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_52)
                        ? vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_header0_f
                        : vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_data0_f));
            __VdlyDim0__NIB__DOT__storage_data_f__v0 
                = vlSelfRef.__PVT__NIB__DOT__tail_ptr_f;
            __VdlySet__NIB__DOT__storage_data_f__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__control__DOT__count_one_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__tail_last_f = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                  && (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in));
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = 0U;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = 0U;
    } else {
        vlSelfRef.__PVT__NIB__DOT__elements_in_array_f 
            = vlSelfRef.__PVT__NIB__DOT__elements_in_array_next;
        vlSelfRef.__PVT__NIB__DOT__head_ptr_f = vlSelfRef.__PVT__NIB__DOT__head_ptr_next;
        vlSelfRef.__PVT__NIB__DOT__tail_ptr_f = vlSelfRef.__PVT__NIB__DOT__tail_ptr_next;
    }
    vlSelfRef.__PVT__NIB__DOT__yummy_out_f = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                              && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    if (__VdlySet__NIB__DOT__storage_data_f__v0) {
        vlSelfRef.__PVT__NIB__DOT__storage_data_f[__VdlyDim0__NIB__DOT__storage_data_f__v0] 
            = __VdlyVal__NIB__DOT__storage_data_f__v0;
    }
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_in = (((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_mux_sel)
                                   ? (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_status))
                                   : (3U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_status_f))) 
                                 & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__is_two_or_more_f));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__control__DOT__count_temp = vlSelfRef.__PVT__control__DOT__count_temp;
    vlSelfRef.__Vdly__control__DOT__count_temp = (0x000000ffU 
                                                  & ((IData)(vlSelfRef.__PVT__control__DOT__header)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1 
                                                                 >> 0x00000016U))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__control__DOT__thanks_all_f)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                                                       - (IData)(1U))
                                                       : (IData)(vlSelfRef.__PVT__control__DOT__count_f))));
}

void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__4\n"); );
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
    vlSelfRef.__PVT__control__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelfRef.__PVT__control__DOT__count_temp));
    vlSelfRef.__PVT__control__DOT__count_zero_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
                                                   || (0U 
                                                       == (IData)(vlSelfRef.__PVT__control__DOT__count_temp)));
    vlSelfRef.__PVT__control__DOT__thanks_all_f = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                   && (IData)(vlSelfRef.__PVT__thanks_all_temp));
    vlSelfRef.__PVT__control__DOT__header_last_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (IData)(vlSelfRef.__PVT__control__DOT__header_temp));
    vlSelfRef.__PVT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__control__DOT__count_f) 
                          - (IData)(1U)));
}

void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__thanks_all_temp = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__thanks_4_out) 
                                        | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__thanks_3_out) 
                                           | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__thanks_2_out) 
                                              | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__thanks_1_out) 
                                                 | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__thanks_6_out) 
                                                    | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__thanks_5_out) 
                                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__thanks_4_out) 
                                                          | (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output.__PVT__thanks_7_out))))))));
}
