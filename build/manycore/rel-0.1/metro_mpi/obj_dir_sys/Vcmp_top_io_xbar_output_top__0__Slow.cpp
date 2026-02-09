// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_2_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_4_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_3_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_7_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_5_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_6_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_2_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_4_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_3_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_7_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_5_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    vlSelfRef.__PVT__route_req_6_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))));
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
    vlSelfRef.__PVT__valid_out_temp_connection = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__elements_in_array_f))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__elements_in_array_f)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                     ? 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__elements_in_array_f))
                                                     : 
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__elements_in_array_f)))));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_0_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_1_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_1_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_2_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_2_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_3_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_3_in)) 
                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_4_mask) 
                        & (IData)(vlSelfRef.__PVT__route_req_4_in)) 
                       | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_5_mask) 
                           & (IData)(vlSelfRef.__PVT__route_req_5_in)) 
                          | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_6_mask) 
                              & (IData)(vlSelfRef.__PVT__route_req_6_in)) 
                             | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_7_mask) 
                                & (IData)(vlSelfRef.__PVT__route_req_7_in)))))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_io_xbar_output_top___ctor_var_reset(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__data_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11675680895196038875ull);
    vlSelf->__PVT__thanks_0_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 821662375416187540ull);
    vlSelf->__PVT__thanks_1_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5616499338592052684ull);
    vlSelf->__PVT__thanks_2_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11597358262988172515ull);
    vlSelf->__PVT__thanks_3_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10963407487960040659ull);
    vlSelf->__PVT__thanks_4_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7947397176097215988ull);
    vlSelf->__PVT__thanks_5_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8310048883321344071ull);
    vlSelf->__PVT__thanks_6_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11690971719657940305ull);
    vlSelf->__PVT__thanks_7_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3791762228257065362ull);
    vlSelf->__PVT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->__PVT__popped_interrupt_mesg_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2974006259972704994ull);
    vlSelf->__PVT__popped_memory_ack_mesg_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13423241892203515938ull);
    vlSelf->__PVT__popped_memory_ack_mesg_out_sender = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2493179432365764253ull);
    vlSelf->__PVT__ec_wants_to_send_but_cannot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6070027287557912858ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__route_req_0_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11070506478214717558ull);
    vlSelf->__PVT__route_req_1_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8667052886209126720ull);
    vlSelf->__PVT__route_req_2_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13394941272315960977ull);
    vlSelf->__PVT__route_req_3_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17363135770984188442ull);
    vlSelf->__PVT__route_req_4_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12408967474387500922ull);
    vlSelf->__PVT__route_req_5_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9795031665250268531ull);
    vlSelf->__PVT__route_req_6_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7146003387376394351ull);
    vlSelf->__PVT__route_req_7_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10999768390749490907ull);
    vlSelf->__PVT__tail_0_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4798837008180305157ull);
    vlSelf->__PVT__tail_1_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11525437079300521784ull);
    vlSelf->__PVT__tail_2_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936708123834216064ull);
    vlSelf->__PVT__tail_3_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6063920161876225107ull);
    vlSelf->__PVT__tail_4_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15829767416109651124ull);
    vlSelf->__PVT__tail_5_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17876769827191885412ull);
    vlSelf->__PVT__tail_6_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4677314997268224389ull);
    vlSelf->__PVT__tail_7_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13827769776145237833ull);
    vlSelf->__PVT__data_0_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3695285888100754330ull);
    vlSelf->__PVT__data_1_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12750394211762929531ull);
    vlSelf->__PVT__data_2_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12743672843380495363ull);
    vlSelf->__PVT__data_3_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3581584745107451909ull);
    vlSelf->__PVT__data_4_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16484184288835276371ull);
    vlSelf->__PVT__data_5_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12779274104315849262ull);
    vlSelf->__PVT__data_6_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16908553133952478085ull);
    vlSelf->__PVT__data_7_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15835473561488320060ull);
    vlSelf->__PVT__valid_0_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2517297552389712170ull);
    vlSelf->__PVT__valid_1_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5774632615633090344ull);
    vlSelf->__PVT__valid_2_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7047028748158788153ull);
    vlSelf->__PVT__valid_3_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17138215944513286721ull);
    vlSelf->__PVT__valid_4_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17105497125689006853ull);
    vlSelf->__PVT__valid_5_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10997147916014239393ull);
    vlSelf->__PVT__valid_6_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1969534215549789521ull);
    vlSelf->__PVT__valid_7_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11042395964053809214ull);
    vlSelf->__PVT__default_ready_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16550045217081772141ull);
    vlSelf->__PVT__yummy_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3911004631806781389ull);
    vlSelf->__PVT__valid_out_temp_connection = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7305706558712969292ull);
    vlSelf->__PVT__space_avail_connection = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7960024422537897840ull);
    vlSelf->__PVT__space__DOT__yummy_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444138335156304531ull);
    vlSelf->__PVT__space__DOT__valid_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3479418969618407815ull);
    vlSelf->__PVT__space__DOT__count_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12292049388243544563ull);
    vlSelf->__PVT__space__DOT__is_one_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12617755136574384108ull);
    vlSelf->__PVT__space__DOT__is_two_or_more_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3669313317744777045ull);
    vlSelf->__PVT__space__DOT__count_plus_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10605290437959933615ull);
    vlSelf->__PVT__space__DOT__count_minus_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15103036217761716730ull);
    vlSelf->__PVT__space__DOT__up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3064517350524865005ull);
    vlSelf->__PVT__space__DOT__down = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16767472214736147627ull);
    vlSelf->__PVT__space__DOT__count_temp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1656680973027992078ull);
    vlSelf->__PVT__datapath__DOT__data_mux__DOT__in0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11302230399932713240ull);
    vlSelf->__PVT__datapath__DOT__data_mux__DOT__in1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15207217342131258082ull);
    vlSelf->__PVT__control__DOT__current_route_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15055447638333863066ull);
    vlSelf->__PVT__control__DOT__planned_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12962233133498340291ull);
    vlSelf->__PVT__control__DOT__current_route_temp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5492575144946676377ull);
    vlSelf->__PVT__control__DOT__route_req_all_or_with_planned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10864468459724668570ull);
    vlSelf->__PVT__control__DOT__route_req_all_but_default = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15789813872673286542ull);
    vlSelf->__PVT__control__DOT__new_route_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12921065606046581715ull);
    vlSelf->__PVT__control__DOT__planned_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5149420523038206403ull);
    vlSelf->__PVT__control__DOT__new_route = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11124780647863079094ull);
    vlSelf->__PVT__control__DOT__tail_current_route = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15601017538460964059ull);
    vlSelf->__PVT__control__DOT__route_req_0_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11770059393211767203ull);
    vlSelf->__PVT__control__DOT__route_req_1_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9141627166606388968ull);
    vlSelf->__PVT__control__DOT__route_req_2_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3826198885365726395ull);
    vlSelf->__PVT__control__DOT__route_req_3_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9078510381162276409ull);
    vlSelf->__PVT__control__DOT__route_req_4_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5672705761471564578ull);
    vlSelf->__PVT__control__DOT__route_req_5_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18362154774503853638ull);
    vlSelf->__PVT__control__DOT__route_req_6_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10449529837784610229ull);
    vlSelf->__PVT__control__DOT__route_req_7_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12318902643999030589ull);
    vlSelf->__Vdly__space__DOT__count_f = 0;
    vlSelf->__Vdly__control__DOT__planned_temp = 0;
}
