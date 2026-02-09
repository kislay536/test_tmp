// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
}

void Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6__0(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___nba_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000f0000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x00000f00U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0000000fU & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f00000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x000000f0U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out 
        = (IData)((((0U != (0x0000f000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out)));
    vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out 
        = (IData)(((((0U != (0xf0000000U & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U])) 
                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                    | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                   | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out)));
    vlSelfRef.nonzero_out = (IData)((((((0U != (0xf0000000U 
                                                & vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U])) 
                                        | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out)) 
                                       | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out)) 
                                      | (IData)(vlSelfRef.__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out)) 
                                     | (IData)(vlSelfRef.__PVT__encoder_low_5__DOT__nonzero_out)));
}
