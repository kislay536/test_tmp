// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn0_dNo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_h7d848c96_0;

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx7 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                          | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                             | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__valid_out) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                   << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                              & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                             | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                 & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                    & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                   | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                       & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                      | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                         & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx7];
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtile__ConstPool__TABLE_h2e02da23_0;

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx5];
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_h2577a7aa_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_h9b50a213_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_h9cd71130_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_h56fdd77c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_h343a10f8_0;

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__valid_out) 
                     << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx4];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx4];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx4];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx4];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx4];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__new_route_needed 
        = (1U & ((IData)(vlSelfRef.__PVT__route_req_a_in)
                  ? ((IData)(vlSelfRef.__PVT__valid_out)
                      ? (IData)(vlSelfRef.__PVT__control__DOT__tail_current_route)
                      : ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route)
                          ? (~ (IData)(vlSelfRef.__PVT__control__DOT__planned_f))
                          : (~ (IData)(vlSelfRef.__PVT__control__DOT__planned_f))))
                  : ((IData)(vlSelfRef.__PVT__valid_out)
                      ? (IData)(vlSelfRef.__PVT__control__DOT__tail_current_route)
                      : ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route)
                          ? (~ (IData)(vlSelfRef.__PVT__control__DOT__planned_f))
                          : (~ (IData)(vlSelfRef.__PVT__control__DOT__planned_f))))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__5(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__5\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__count_temp = (7U & 
                                               ((0U 
                                                 == (IData)(vlSelfRef.__PVT__space__DOT__count_f))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__space__DOT__up)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__space__DOT__count_f))
                                                  : (IData)(vlSelfRef.__PVT__space__DOT__count_f))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelfRef.__PVT__space__DOT__count_f))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__space__DOT__down)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelfRef.__PVT__space__DOT__count_f))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (((IData)(vlSelfRef.__PVT__space__DOT__up) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.__PVT__space__DOT__down)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__space__DOT__count_f))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (((IData)(vlSelfRef.__PVT__space__DOT__up) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.__PVT__space__DOT__down)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                    - (IData)(1U))
                                                    : (IData)(vlSelfRef.__PVT__space__DOT__count_f))))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_hc29402a1_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_h5ac2ceba_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_hd2f72be3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_h236e682a_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtile__ConstPool__TABLE_hc717182e_0;

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                     << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx6];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx6];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx6];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx6];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx6];
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtile__ConstPool__TABLE_he76c0134_0;

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                        << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                  << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__tail_a_in))) 
                     << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx3];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx2 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                        << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                  << 2U)) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                              << 1U) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                     << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx2];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__10(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__10\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_temp = vlSelfRef.__Vdly__control__DOT__planned_temp;
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__5(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__5\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_b_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                 | (IData)(vlSelfRef.__PVT__route_req_x_in))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtile_dynamic_output_top___ico_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___ico_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = ((IData)(vlSymsp->TOP.clk) 
                            & (IData)(vlSymsp->TOP.tile__DOT__clk_gating_latch__DOT__clk_en_sync_latch));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn0_dEo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx14 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx14];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx12];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx11];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx11];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx11];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx11];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx11];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_b_in = vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx13];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx13];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx13];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx13];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx13];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx10 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__tail_b_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx10];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__10(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__10\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSelfRef.__PVT__data_b_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx9 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                        << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                  << 2U)) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                              << 1U) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)))) 
                     << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx9];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tail_b_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_b_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_b_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn0_dSo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx21 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx21];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx19];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx18 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx18];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx18];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx18];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx18];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx18];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    __Vtableidx20 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx20];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx20];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx20];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx20];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx20];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_b_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx17];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx16 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx16];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn0_dWo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx28 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx28];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    __Vtableidx26 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx26];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    __Vtableidx25 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx25];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    __Vtableidx27 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx27];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    __Vtableidx24 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx24];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx23 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx23];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.tile__DOT__cgni_blk1__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx35 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx35];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    // Body
    __Vtableidx33 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx33];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    __Vtableidx32 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx32];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx32];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx32];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx32];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx32];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    __Vtableidx34 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx34];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx34];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx34];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx34];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx34];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    __Vtableidx31 = ((((((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx31];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_b_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__north_output.__PVT__data_a_in));
    }
    __Vtableidx30 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx30];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network0__dynamic_node_top__DOT__proc_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network0.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn1_dNo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx42 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx42];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    // Body
    __Vtableidx40 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx40];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    // Body
    __Vtableidx39 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx39];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx39];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx39];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx39];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx39];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    // Body
    __Vtableidx41 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx41];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx41];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx41];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx41];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx41];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
    __Vtableidx38 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx38];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx37 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx37];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn1_dEo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx49 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx49];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    // Body
    __Vtableidx47 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx47];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    // Body
    __Vtableidx46 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx46];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx46];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx46];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx46];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx46];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_b_in = vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    // Body
    __Vtableidx48 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx48];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx48];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx48];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx48];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx48];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    // Body
    __Vtableidx45 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__tail_b_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx45];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSelfRef.__PVT__data_b_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx44 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx44];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tail_b_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_b_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_b_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn1_dSo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx56 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx56];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    // Body
    __Vtableidx54 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx54];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    // Body
    __Vtableidx53 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx53];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    // Body
    __Vtableidx55 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx55];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    // Body
    __Vtableidx52 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_b_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx52];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx51 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx51];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn1_dWo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx63 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx63];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    // Body
    __Vtableidx61 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx61];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    __Vtableidx60 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx60];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx60];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx60];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx60];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx60];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    __Vtableidx62 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx62];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx62];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx62];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx62];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx62];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    // Body
    __Vtableidx59 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx59];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx58 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx58];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.tile__DOT__cgni_blk2__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx70 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx70];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
    __Vtableidx68 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx68];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    // Body
    __Vtableidx67 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx67];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx67];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx67];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx67];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx67];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    // Body
    __Vtableidx69 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx69];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx69];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx69];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx69];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx69];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    // Body
    __Vtableidx66 = ((((((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx66];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_b_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__north_output.__PVT__data_a_in));
    }
    __Vtableidx65 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx65];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network1__dynamic_node_top__DOT__proc_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network1.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn2_dNo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx77;
    __Vtableidx77 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx77 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx77];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx75;
    __Vtableidx75 = 0;
    // Body
    __Vtableidx75 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx75];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    // Body
    __Vtableidx74 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx74];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx74];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx74];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx74];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx74];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    // Body
    __Vtableidx76 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx76];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx76];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx76];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx76];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx76];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    // Body
    __Vtableidx73 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx73];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx72 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx72];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                               ? (0U 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f))
                                               : ((0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__data_a_in 
                                                              >> 0x00000022U))) 
                                                  < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((5U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn2_dEo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx84;
    __Vtableidx84 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx84 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx84];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx82;
    __Vtableidx82 = 0;
    // Body
    __Vtableidx82 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx82];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx81;
    __Vtableidx81 = 0;
    // Body
    __Vtableidx81 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx81];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx81];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx81];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx81];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx81];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_b_in = vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    // Body
    __Vtableidx83 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx83];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx83];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx83];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx83];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx83];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx80;
    __Vtableidx80 = 0;
    // Body
    __Vtableidx80 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__tail_b_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx80];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSelfRef.__PVT__data_b_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx79 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx79];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tail_b_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_b_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_b_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                           & ((0x000000ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                          >> 0x0000002aU))) 
                                              > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((4U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn2_dSo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx91;
    __Vtableidx91 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx91 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx91];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx89;
    __Vtableidx89 = 0;
    // Body
    __Vtableidx89 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx89];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx88;
    __Vtableidx88 = 0;
    // Body
    __Vtableidx88 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx88];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx88];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx88];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx88];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx88];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx90;
    __Vtableidx90 = 0;
    // Body
    __Vtableidx90 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx90];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx90];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx90];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx90];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx90];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx87;
    __Vtableidx87 = 0;
    // Body
    __Vtableidx87 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_b_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx87];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx86 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx86];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
                                           & ((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)) 
                                              & ((0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                             >> 0x00000022U))) 
                                                 > (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocY_f)))) 
                                          | ((3U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.dyn2_dWo_yummy));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx98;
    __Vtableidx98 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx98 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                              | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                               & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                              | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                  & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                 | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                     & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                    | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                        & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                       | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                          & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx98];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx96;
    __Vtableidx96 = 0;
    // Body
    __Vtableidx96 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                         << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx96];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx95;
    __Vtableidx95 = 0;
    // Body
    __Vtableidx95 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx95];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx95];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx95];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx95];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx95];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__6(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__6\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_a_in = vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__space__DOT__up = ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                       & (IData)(vlSelfRef.__PVT__space__DOT__yummy_f));
    vlSelfRef.__PVT__space__DOT__down = ((~ (IData)(vlSelfRef.__PVT__space__DOT__yummy_f)) 
                                         & (IData)(vlSelfRef.__PVT__space__DOT__valid_f));
    vlSelfRef.__PVT__space__DOT__count_f = vlSelfRef.__Vdly__space__DOT__count_f;
    vlSelfRef.__PVT__space__DOT__count_plus_1 = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__space__DOT__count_f)));
    vlSelfRef.__PVT__space__DOT__count_minus_1 = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__space__DOT__count_f) 
                                                     - (IData)(1U)));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx97;
    __Vtableidx97 = 0;
    // Body
    __Vtableidx97 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx97];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx97];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx97];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx97];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx97];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx94;
    __Vtableidx94 = 0;
    // Body
    __Vtableidx94 = ((((((IData)(vlSelfRef.__PVT__tail_a_in) 
                         << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__tail_a_in))) 
                      << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx94];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx93;
    __Vtableidx93 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in
                                                   : vlSelfRef.__PVT__data_a_in));
    }
    __Vtableidx93 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)) 
                         << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                                   << 2U)) | (((0U 
                                                != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)))) 
                      << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx93];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_a_in = (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__data_a_in))) 
                                  | (((~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done))));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
                                            ? (0U < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))
                                            : ((0x000000ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in 
                                                           >> 0x0000002aU))) 
                                               < (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__myLocX_f))) 
                                          | ((2U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                             & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.tile__DOT__cgni_blk3__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx105;
    __Vtableidx105 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx105 = (((((IData)(vlSelfRef.__PVT__route_req_b_in) 
                         | ((IData)(vlSelfRef.__PVT__route_req_c_in) 
                            | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                               | (IData)(vlSelfRef.__PVT__route_req_x_in)))) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__valid_out) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                     << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_a_mask) 
                                                & (IData)(vlSelfRef.__PVT__route_req_a_in)) 
                                               | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_b_mask) 
                                                   & (IData)(vlSelfRef.__PVT__route_req_b_in)) 
                                                  | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_c_mask) 
                                                      & (IData)(vlSelfRef.__PVT__route_req_c_in)) 
                                                     | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_d_mask) 
                                                         & (IData)(vlSelfRef.__PVT__route_req_d_in)) 
                                                        | ((IData)(vlSelfRef.__PVT__control__DOT__route_req_x_mask) 
                                                           & (IData)(vlSelfRef.__PVT__route_req_x_in)))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vtile__ConstPool__TABLE_h7d848c96_0[__Vtableidx105];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx103;
    __Vtableidx103 = 0;
    // Body
    __Vtableidx103 = ((((((IData)(vlSelfRef.__PVT__route_req_x_in) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__route_req_d_in) 
                                    << 2U)) | (((IData)(vlSelfRef.__PVT__route_req_c_in) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__route_req_b_in))) 
                       << 4U) | (((IData)(vlSelfRef.__PVT__route_req_a_in) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__new_route = Vtile__ConstPool__TABLE_h2e02da23_0
        [__Vtableidx103];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx102;
    __Vtableidx102 = 0;
    // Body
    __Vtableidx102 = (((IData)(vlSelfRef.__PVT__valid_out) 
                       << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_a_out = Vtile__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx102];
    vlSelfRef.__PVT__thanks_b_out = Vtile__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx102];
    vlSelfRef.__PVT__thanks_c_out = Vtile__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx102];
    vlSelfRef.__PVT__thanks_d_out = Vtile__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx102];
    vlSelfRef.__PVT__thanks_x_out = Vtile__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx102];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__7(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__7\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx104;
    __Vtableidx104 = 0;
    // Body
    __Vtableidx104 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                       << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_a_mask 
        = Vtile__ConstPool__TABLE_hc29402a1_0[__Vtableidx104];
    vlSelfRef.__PVT__control__DOT__route_req_b_mask 
        = Vtile__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx104];
    vlSelfRef.__PVT__control__DOT__route_req_c_mask 
        = Vtile__ConstPool__TABLE_hd2f72be3_0[__Vtableidx104];
    vlSelfRef.__PVT__control__DOT__route_req_d_mask 
        = Vtile__ConstPool__TABLE_h236e682a_0[__Vtableidx104];
    vlSelfRef.__PVT__control__DOT__route_req_x_mask 
        = Vtile__ConstPool__TABLE_hc717182e_0[__Vtableidx104];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__8(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__8\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx101;
    __Vtableidx101 = 0;
    // Body
    __Vtableidx101 = ((((((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__tail_a_in) 
                          << 3U) | ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_a_in) 
                                    << 2U)) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__tail_a_in) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__tail_a_in))) 
                       << 4U) | (((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__tail_b_in) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = Vtile__ConstPool__TABLE_he76c0134_0[__Vtableidx101];
}

void Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__9(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_sequent__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__9\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx100;
    __Vtableidx100 = 0;
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
    vlSelfRef.__PVT__data_out_internal = 0ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)))) {
                vlSelfRef.__PVT__data_out_internal 
                    = vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_b_in;
            }
        }
    } else {
        vlSelfRef.__PVT__data_out_internal = ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__west_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__south_output.__PVT__data_a_in)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                                                   ? vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__east_output.__PVT__data_a_in
                                                   : vlSymsp->TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__north_output.__PVT__data_a_in));
    }
    __Vtableidx100 = ((((((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)) 
                          << 3U) | ((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)) 
                                    << 2U)) | (((0U 
                                                 != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)) 
                                                << 1U) 
                                               | (0U 
                                                  != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)))) 
                       << 4U) | (((0U != (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f)));
    vlSelfRef.__PVT__valid_out_temp_connection = Vtile__ConstPool__TABLE_he76c0134_0
        [__Vtableidx100];
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__0(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__0\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_x_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__1(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_c_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__2(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__2\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_d_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__3(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__3\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_b_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done)));
}

void Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__4(Vtile_dynamic_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtile_dynamic_output_top___nba_comb__TOP__tile__DOT__user_dynamic_network2__dynamic_node_top__DOT__proc_output__4\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__route_req_a_in = ((IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header) 
                                       & ((0U == (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits)) 
                                          & (IData)(vlSymsp->TOP__tile__DOT__user_dynamic_network2.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_a_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}
