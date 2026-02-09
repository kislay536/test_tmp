// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vcmp_top__ConstPool__TABLE_he76c0134_0;

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    __Vtableidx2 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                        << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                  << 2U)) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                              << 1U) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                     << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx2];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
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
    __Vtableidx9 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                        << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                  << 2U)) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                              << 1U) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)))) 
                     << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx9];
    vlSelfRef.__PVT__data_b_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__clk = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__clk_gating_latch__DOT__clk_en_sync_latch) 
                            & (IData)(vlSymsp->TOP.core_ref_clk));
    vlSelfRef.__PVT__tail_b_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_b_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_b_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
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
    __Vtableidx16 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx16];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
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
    __Vtableidx23 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx23];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
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
    __Vtableidx30 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx30];
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in));
    }
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
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
    __Vtableidx37 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx37];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
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
    __Vtableidx44 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx44];
    vlSelfRef.__PVT__data_b_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_b_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_b_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_b_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
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
    __Vtableidx51 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx51];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
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
    __Vtableidx58 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx58];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
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
    __Vtableidx65 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx65];
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in));
    }
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
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
    __Vtableidx72 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx72];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
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
    __Vtableidx79 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx79];
    vlSelfRef.__PVT__data_b_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_b_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_b_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_b_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
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
    __Vtableidx86 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx86];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx93;
    __Vtableidx93 = 0;
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
    __Vtableidx93 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx93];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__0(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx100;
    __Vtableidx100 = 0;
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
    __Vtableidx100 = ((((((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                          << 3U) | ((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                    << 2U)) | (((0U 
                                                 != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                                << 1U) 
                                               | (0U 
                                                  != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                       << 4U) | (((0U != (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vcmp_top__ConstPool__TABLE_he76c0134_0
        [__Vtableidx100];
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in));
    }
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__1(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done)));
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
    vlSelfRef.__PVT__control__DOT__route_req_all_or_with_planned 
        = (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
            & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
           | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
               & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                  & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                     & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                    | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                       & (IData)(vlSelfRef.__PVT__route_req_x_in))))));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

VL_ATTR_COLD void Vcmp_top_dynamic_output_top___ctor_var_reset(Vcmp_top_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_dynamic_output_top___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__data_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11675680895196038875ull);
    vlSelf->__PVT__thanks_a_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2977063499616051255ull);
    vlSelf->__PVT__thanks_b_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12101480639362958864ull);
    vlSelf->__PVT__thanks_c_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5885199136336828750ull);
    vlSelf->__PVT__thanks_d_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7819848268089850036ull);
    vlSelf->__PVT__thanks_x_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4323365910296863991ull);
    vlSelf->__PVT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->__PVT__popped_interrupt_mesg_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2974006259972704994ull);
    vlSelf->__PVT__popped_memory_ack_mesg_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13423241892203515938ull);
    vlSelf->__PVT__popped_memory_ack_mesg_out_sender = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2493179432365764253ull);
    vlSelf->__PVT__ec_wants_to_send_but_cannot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6070027287557912858ull);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__route_req_a_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18112704990547143068ull);
    vlSelf->__PVT__route_req_b_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11811794987338315028ull);
    vlSelf->__PVT__route_req_c_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11950455792001707785ull);
    vlSelf->__PVT__route_req_d_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15521032232626332336ull);
    vlSelf->__PVT__route_req_x_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15643742438360741737ull);
    vlSelf->__PVT__tail_a_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10560747790396518993ull);
    vlSelf->__PVT__tail_b_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9835819047308635423ull);
    vlSelf->__PVT__tail_c_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18265632192487292311ull);
    vlSelf->__PVT__tail_d_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11270712483152296662ull);
    vlSelf->__PVT__tail_x_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9904016799697893367ull);
    vlSelf->__PVT__data_a_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6144321511385128405ull);
    vlSelf->__PVT__data_b_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12196896079807135812ull);
    vlSelf->__PVT__data_c_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 703493207062962142ull);
    vlSelf->__PVT__data_d_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4317007098347864486ull);
    vlSelf->__PVT__data_x_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11730920897375208559ull);
    vlSelf->__PVT__valid_a_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17988481712686871544ull);
    vlSelf->__PVT__valid_b_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10230122423912110705ull);
    vlSelf->__PVT__valid_c_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16669899114618726120ull);
    vlSelf->__PVT__valid_d_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1614102409852226701ull);
    vlSelf->__PVT__valid_x_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4787872470610914597ull);
    vlSelf->__PVT__default_ready_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16550045217081772141ull);
    vlSelf->__PVT__yummy_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3911004631806781389ull);
    vlSelf->__PVT__valid_out_temp_connection = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7305706558712969292ull);
    vlSelf->__PVT__space_avail_connection = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7960024422537897840ull);
    vlSelf->__PVT__data_out_internal = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10823439396852886541ull);
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
    vlSelf->__PVT__control__DOT__current_route_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15055447638333863066ull);
    vlSelf->__PVT__control__DOT__planned_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12962233133498340291ull);
    vlSelf->__PVT__control__DOT__current_route_temp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5492575144946676377ull);
    vlSelf->__PVT__control__DOT__route_req_all_or_with_planned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10864468459724668570ull);
    vlSelf->__PVT__control__DOT__route_req_all_but_default = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15789813872673286542ull);
    vlSelf->__PVT__control__DOT__new_route_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12921065606046581715ull);
    vlSelf->__PVT__control__DOT__planned_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5149420523038206403ull);
    vlSelf->__PVT__control__DOT__new_route = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11124780647863079094ull);
    vlSelf->__PVT__control__DOT__tail_current_route = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15601017538460964059ull);
    vlSelf->__PVT__control__DOT__route_req_a_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18395549979319362154ull);
    vlSelf->__PVT__control__DOT__route_req_b_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9712519425131870517ull);
    vlSelf->__PVT__control__DOT__route_req_c_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4490405075626322818ull);
    vlSelf->__PVT__control__DOT__route_req_d_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18038226775380041714ull);
    vlSelf->__PVT__control__DOT__route_req_x_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1630202615392388523ull);
    vlSelf->__Vdly__space__DOT__count_f = 0;
    vlSelf->__Vdly__control__DOT__planned_temp = 0;
}
