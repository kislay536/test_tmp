// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__valid_temp_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vcmp_top__ConstPool__TABLE_h7d848c96_0;

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx4 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                          | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                             | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                   | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                      | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__valid_out) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                   << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                  & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx4];
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vcmp_top__ConstPool__TABLE_h0e8b3d05_0;

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx2];
}

extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h2577a7aa_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h9b50a213_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h9cd71130_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h56fdd77c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h343a10f8_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_hc2327028_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h5e63354f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h5e4fa443_0;

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.__PVT__valid_out) 
                     << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx1];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx1];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx1];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx1];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx1];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx1];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx1];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__new_route_needed 
        = (1U & ((IData)(vlSelfRef.__PVT__route_req_0_in)
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__head_ptr_f];
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

extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_hc29402a1_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h5ac2ceba_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_hd2f72be3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h236e682a_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_hc717182e_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h38f7f7da_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h0c17ca4b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcmp_top__ConstPool__TABLE_h071ea3e6_0;

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                     << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx3];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx3];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx3];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx3];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx3];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx3];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx3];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx3];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_temp = vlSelfRef.__Vdly__control__DOT__planned_temp;
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__current_route_temp 
        = ((IData)(vlSelfRef.__PVT__control__DOT__new_route_needed)
            ? (IData)(vlSelfRef.__PVT__control__DOT__new_route)
            : (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__route_req_all_but_default 
        = ((IData)(vlSelfRef.__PVT__route_req_1_in) 
           | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
              | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                 | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                    | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                          | (IData)(vlSelfRef.__PVT__route_req_7_in)))))));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx8 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                       | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                          | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                             | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                   | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                      | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__valid_out) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                   << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                  & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx8];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx6];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = (((IData)(vlSelfRef.__PVT__valid_out) 
                     << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx5];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx5];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx5];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx5];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx5];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx5];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx5];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx5];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                     << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx7];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx7];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx7];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx7];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx7];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx7];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx7];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx7];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx12 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx12];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx10 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx10];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    __Vtableidx9 = (((IData)(vlSelfRef.__PVT__valid_out) 
                     << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx9];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx9];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx9];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx9];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx9];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx9];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx9];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx9];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx11];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx11];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx11];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx11];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx11];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx11];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx11];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx11];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx16 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx16];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx14 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx14];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx13];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx13];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx13];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx13];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx13];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx13];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx13];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx13];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx15];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx15];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx15];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx15];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx15];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx15];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx15];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx15];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSelfRef.__PVT__tail_1_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tail_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx20 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx20];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx18 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx18];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx17];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx17];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx17];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx17];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx17];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx17];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx17];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx17];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx19];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx19];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx19];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx19];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx19];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx19];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx19];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx19];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx24 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx24];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    __Vtableidx22 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx22];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    __Vtableidx21 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx21];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx21];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx21];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx21];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx21];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx21];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx21];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx21];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    __Vtableidx23 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx23];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx23];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx23];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx23];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx23];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx23];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx23];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx23];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx28 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx28];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    __Vtableidx26 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx26];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    __Vtableidx25 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx25];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx25];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    __Vtableidx27 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx27];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx27];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx32 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx32];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    __Vtableidx30 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx30];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    __Vtableidx29 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx29];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx29];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx29];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx29];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx29];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx29];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx29];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx29];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    __Vtableidx31 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx31];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx31];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx31];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx31];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx31];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx31];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx31];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx31];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7\n"); );
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
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__valid_temp_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx36 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx36];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    __Vtableidx34 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx34];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    // Body
    __Vtableidx33 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx33];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx33];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx33];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx33];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx33];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx33];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx33];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx33];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    // Body
    __Vtableidx35 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx35];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx35];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx35];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx35];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx35];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx35];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx35];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx35];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                        & (0ULL == 
                                           (0x0003fc0000000000ULL 
                                            & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                       | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__header) 
                                          & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.__PVT__control__DOT__tail_calc__DOT__off_chip)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx40 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx40];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
    __Vtableidx38 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx38];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    // Body
    __Vtableidx37 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx37];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx37];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx37];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx37];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx37];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx37];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx37];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx37];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    // Body
    __Vtableidx39 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx39];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx39];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx39];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx39];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx39];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx39];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx39];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx39];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000040000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx44 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx44];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    __Vtableidx42 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx42];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    // Body
    __Vtableidx41 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx41];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx41];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx41];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx41];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx41];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx41];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx41];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx41];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    // Body
    __Vtableidx43 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx43];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx43];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx43];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx43];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx43];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx43];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx43];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx43];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000080000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__space__DOT__count_f = vlSelfRef.__PVT__space__DOT__count_f;
    vlSelfRef.__Vdly__space__DOT__count_f = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
                                              ? 4U : (IData)(vlSelfRef.__PVT__space__DOT__count_temp));
    vlSelfRef.__PVT__space__DOT__valid_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSelfRef.__PVT__valid_out));
    vlSelfRef.__PVT__space__DOT__is_one_f = ((1U & 
                                              (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                             && (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                                                          >> 1U)))) 
                                                    & (IData)(vlSelfRef.__PVT__space__DOT__count_temp))));
    vlSelfRef.__PVT__space__DOT__is_two_or_more_f = 
        ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset) 
         || (0U != (3U & ((IData)(vlSelfRef.__PVT__space__DOT__count_temp) 
                          >> 1U))));
    vlSelfRef.__PVT__space__DOT__yummy_f = ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                            && (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__yummy_out_f));
    vlSelfRef.__PVT__space_avail_connection = ((IData)(vlSelfRef.__PVT__space__DOT__is_two_or_more_f) 
                                               | ((IData)(vlSelfRef.__PVT__space__DOT__yummy_f) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__space__DOT__valid_f)) 
                                                     & (IData)(vlSelfRef.__PVT__space__DOT__is_one_f))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx48 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx48];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    // Body
    __Vtableidx46 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx46];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    // Body
    __Vtableidx45 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx45];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx45];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx45];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx45];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx45];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx45];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx45];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx45];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__NIB__DOT__head_ptr_f];
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    // Body
    __Vtableidx47 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx47];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx47];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx47];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx47];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx47];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx47];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx47];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx47];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSelfRef.__PVT__tail_1_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tail_1_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00000c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx52 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx52];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    // Body
    __Vtableidx50 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx50];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    __Vtableidx49 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx49];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx49];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx49];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx49];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx49];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx49];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx49];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx49];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    // Body
    __Vtableidx51 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx51];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx51];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx51];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx51];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx51];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx51];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx51];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx51];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000100000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx56 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx56];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    // Body
    __Vtableidx54 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx54];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    // Body
    __Vtableidx53 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx53];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx53];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    // Body
    __Vtableidx55 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx55];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx55];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000140000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx60 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx60];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
    __Vtableidx58 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx58];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    // Body
    __Vtableidx57 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx57];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx57];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx57];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx57];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx57];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx57];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx57];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx57];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0 
        = vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__storage_data_f
        [vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__NIB__DOT__head_ptr_f];
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

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    // Body
    __Vtableidx59 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx59];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx59];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx59];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx59];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx59];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx59];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx59];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx59];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in)
                    : (IData)(vlSelfRef.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__control__DOT__planned_or_default;
    __PVT__control__DOT__planned_or_default = 0;
    // Body
    vlSelfRef.__PVT__tail_0_in = (((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__header) 
                                   & (0ULL == (0x000000003fc00000ULL 
                                               & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0))) 
                                  | (((~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f)) 
                                      & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__tail_last_f)) 
                                     | ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__count_one_f) 
                                        & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.__PVT__control__DOT__thanks_all_f))));
    vlSelfRef.__PVT__route_req_0_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSelfRef.__PVT__datapath__DOT__data_mux__DOT__in0)));
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x0000180000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    // Body
    vlSelfRef.__Vdly__control__DOT__planned_temp = vlSelfRef.__PVT__control__DOT__planned_temp;
    __Vtableidx64 = (((((IData)(vlSelfRef.__PVT__route_req_1_in) 
                        | ((IData)(vlSelfRef.__PVT__route_req_2_in) 
                           | ((IData)(vlSelfRef.__PVT__route_req_3_in) 
                              | ((IData)(vlSelfRef.__PVT__route_req_4_in) 
                                 | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                    | ((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                       | (IData)(vlSelfRef.__PVT__route_req_7_in))))))) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__control__DOT__tail_current_route) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__valid_out) 
                         << 2U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                    << 1U) | (((IData)(vlSelfRef.__PVT__control__DOT__route_req_0_mask) 
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
                                                                   & (IData)(vlSelfRef.__PVT__route_req_7_in))))))))))));
    vlSelfRef.__Vdly__control__DOT__planned_temp = 
        Vcmp_top__ConstPool__TABLE_h7d848c96_0[__Vtableidx64];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    __Vtableidx62 = ((((((IData)(vlSelfRef.__PVT__route_req_7_in) 
                         << 5U) | (((IData)(vlSelfRef.__PVT__route_req_6_in) 
                                    << 4U) | ((IData)(vlSelfRef.__PVT__route_req_5_in) 
                                              << 3U))) 
                       | (((IData)(vlSelfRef.__PVT__route_req_4_in) 
                           << 2U) | (((IData)(vlSelfRef.__PVT__route_req_3_in) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__route_req_2_in)))) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__route_req_1_in) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__route_req_0_in) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))));
    vlSelfRef.__PVT__control__DOT__new_route = Vcmp_top__ConstPool__TABLE_h0e8b3d05_0
        [__Vtableidx62];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    // Body
    __Vtableidx61 = (((IData)(vlSelfRef.__PVT__valid_out) 
                      << 3U) | (IData)(vlSelfRef.__PVT__control__DOT__current_route_f));
    vlSelfRef.__PVT__thanks_0_out = Vcmp_top__ConstPool__TABLE_h2577a7aa_0
        [__Vtableidx61];
    vlSelfRef.__PVT__thanks_1_out = Vcmp_top__ConstPool__TABLE_h9b50a213_0
        [__Vtableidx61];
    vlSelfRef.__PVT__thanks_2_out = Vcmp_top__ConstPool__TABLE_h9cd71130_0
        [__Vtableidx61];
    vlSelfRef.__PVT__thanks_3_out = Vcmp_top__ConstPool__TABLE_h56fdd77c_0
        [__Vtableidx61];
    vlSelfRef.__PVT__thanks_4_out = Vcmp_top__ConstPool__TABLE_h343a10f8_0
        [__Vtableidx61];
    vlSelfRef.__PVT__thanks_5_out = Vcmp_top__ConstPool__TABLE_hc2327028_0
        [__Vtableidx61];
    vlSelfRef.__PVT__thanks_6_out = Vcmp_top__ConstPool__TABLE_h5e63354f_0
        [__Vtableidx61];
    vlSelfRef.__PVT__thanks_7_out = Vcmp_top__ConstPool__TABLE_h5e4fa443_0
        [__Vtableidx61];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    // Body
    __Vtableidx63 = (((IData)(vlSelfRef.__PVT__control__DOT__current_route_f) 
                      << 1U) | (IData)(vlSelfRef.__PVT__control__DOT__planned_f));
    vlSelfRef.__PVT__control__DOT__route_req_0_mask 
        = Vcmp_top__ConstPool__TABLE_hc29402a1_0[__Vtableidx63];
    vlSelfRef.__PVT__control__DOT__route_req_1_mask 
        = Vcmp_top__ConstPool__TABLE_h5ac2ceba_0[__Vtableidx63];
    vlSelfRef.__PVT__control__DOT__route_req_2_mask 
        = Vcmp_top__ConstPool__TABLE_hd2f72be3_0[__Vtableidx63];
    vlSelfRef.__PVT__control__DOT__route_req_3_mask 
        = Vcmp_top__ConstPool__TABLE_h236e682a_0[__Vtableidx63];
    vlSelfRef.__PVT__control__DOT__route_req_4_mask 
        = Vcmp_top__ConstPool__TABLE_hc717182e_0[__Vtableidx63];
    vlSelfRef.__PVT__control__DOT__route_req_5_mask 
        = Vcmp_top__ConstPool__TABLE_h38f7f7da_0[__Vtableidx63];
    vlSelfRef.__PVT__control__DOT__route_req_6_mask 
        = Vcmp_top__ConstPool__TABLE_h0c17ca4b_0[__Vtableidx63];
    vlSelfRef.__PVT__control__DOT__route_req_7_mask 
        = Vcmp_top__ConstPool__TABLE_h071ea3e6_0[__Vtableidx63];
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__8(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__tail_current_route 
        = ((4U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
            ? ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_1_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__tail_0_in)))
            : ((2U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                ? ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__tail_0_in))
                : ((1U & (IData)(vlSelfRef.__PVT__control__DOT__current_route_f))
                    ? (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__tail_0_in)
                    : (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__tail_0_in))));
}

void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__9(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__control__DOT__planned_f = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset))) 
                                                && (IData)(vlSelfRef.__PVT__control__DOT__planned_temp));
    vlSelfRef.__PVT__control__DOT__current_route_f 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3.__PVT__io_xbar_top__DOT__reset)
            ? 0U : (IData)(vlSelfRef.__PVT__control__DOT__current_route_temp));
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

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_4_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_5_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_6_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_1_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__4(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_7_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in1)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__5(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_2_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__6(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_req_3_in = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input.control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0) 
                                       & (0x00001c0000000000ULL 
                                          == (0x0003fc0000000000ULL 
                                              & vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__datapath__DOT__data_mux__DOT__in0)));
}

void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7\n"); );
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
    __PVT__control__DOT__planned_or_default = ((IData)(vlSelfRef.__PVT__control__DOT__planned_f) 
                                               | (IData)(vlSelfRef.__PVT__route_req_0_in));
    vlSelfRef.__PVT__valid_out = ((IData)(vlSelfRef.__PVT__valid_out_temp_connection) 
                                  & ((IData)(__PVT__control__DOT__planned_or_default) 
                                     & (IData)(vlSelfRef.__PVT__space_avail_connection)));
}
