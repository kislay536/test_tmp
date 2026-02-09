// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__0(Vcmp_top_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_a_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_d_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_x_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_a_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_b_out)))));
    vlSelfRef.thanksIn_P = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_c_out) 
                            | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_b_out) 
                               | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_d_out) 
                                  | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_x_out) 
                                     | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_c_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_b_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_a_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_c_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_b_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_x_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.validIn_W = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__is_two_or_more_f) 
                           & ((~ ((IData)(vlSymsp->TOP.async_mux)
                                   ? (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo1_empty)
                                   : (0U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f)))) 
                              & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0)));
    vlSelfRef.validIn_P = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgno_blk1__DOT__is_two_or_more_f) 
                           & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__processor_router_valid_noc1));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
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
    if (vlSelfRef.validIn_W) {
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
}

VL_ATTR_COLD void Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__1(Vcmp_top_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network0__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
            ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f))
            : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                                       >> 0x0000002aU))) 
               == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocX_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__data_a_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__data_a_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x) 
           & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip)
               ? (0U == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))
               : ((0x000000ffU & (IData)((vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__data_a_in 
                                          >> 0x00000022U))) 
                  == (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__myLocY_f))));
}

VL_ATTR_COLD void Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__0(Vcmp_top_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network1__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_a_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_d_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_x_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_a_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_b_out)))));
    vlSelfRef.thanksIn_P = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_c_out) 
                            | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_b_out) 
                               | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_d_out) 
                                  | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_x_out) 
                                     | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_c_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_b_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_a_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_c_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_b_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_x_out)))));
    vlSelfRef.validIn_P = ((0U != (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l2__DOT__pipe1__DOT__buf_out__DOT__buf_counter_f)) 
                           & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgno_blk2__DOT__is_two_or_more_f));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.validIn_W = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__is_two_or_more_f) 
                           & ((~ ((IData)(vlSymsp->TOP.async_mux)
                                   ? (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo2_empty)
                                   : (0U == (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f)))) 
                              & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.validIn_W) {
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

VL_ATTR_COLD void Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__0(Vcmp_top_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_dynamic_node_top_wrap___stl_sequent__TOP__cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__user_dynamic_network2__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_minus_one 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f) 
                          - (IData)(1U)));
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_a_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_d_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_x_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_a_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_b_out)))));
    vlSelfRef.thanksIn_P = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_c_out) 
                            | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_b_out) 
                               | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_d_out) 
                                  | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_x_out) 
                                     | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_c_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp 
        = ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__north_output->__PVT__thanks_b_out) 
           | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__east_output->__PVT__thanks_a_out) 
              | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__south_output->__PVT__thanks_c_out) 
                 | ((IData)(vlSelf->__PVT__dynamic_node_top__DOT__proc_output->__PVT__thanks_b_out) 
                    | (IData)(vlSelf->__PVT__dynamic_node_top__DOT__west_output->__PVT__thanks_x_out)))));
    vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header 
        = ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp) 
           & (0U != (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f)));
    vlSelfRef.validIn_P = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__cgno_blk3__DOT__is_two_or_more_f) 
                           & (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__processor_router_valid_noc3));
    vlSelfRef.validIn_W = ((IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__oram_on)
                            ? (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__oram_proc_valid_oram)
                            : (IData)(vlSymsp->TOP.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc3_valid));
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp) {
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f)));
        vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
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
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
    vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next 
        = vlSelfRef.__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
    if (vlSelfRef.validIn_W) {
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

VL_ATTR_COLD void Vcmp_top_dynamic_node_top_wrap___ctor_var_reset(Vcmp_top_dynamic_node_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_dynamic_node_top_wrap___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13674424877890067050ull);
    vlSelf->dataIn_N = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15225324330010231269ull);
    vlSelf->dataIn_E = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9610509155181722427ull);
    vlSelf->dataIn_S = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16468403852878262255ull);
    vlSelf->dataIn_W = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8364327930133365915ull);
    vlSelf->dataIn_P = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6066128990546505551ull);
    vlSelf->validIn_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13870144055907378970ull);
    vlSelf->validIn_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14666177801264111731ull);
    vlSelf->validIn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10734472411252006821ull);
    vlSelf->validIn_W = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7345702394335335096ull);
    vlSelf->validIn_P = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2667125056400592575ull);
    vlSelf->yummyIn_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2642762408270360662ull);
    vlSelf->yummyIn_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13595888158090229005ull);
    vlSelf->yummyIn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2944325194023522268ull);
    vlSelf->yummyIn_W = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14383000512372198798ull);
    vlSelf->yummyIn_P = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5937409656127876547ull);
    vlSelf->myLocX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7790989163723288770ull);
    vlSelf->myLocY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4151810988513214364ull);
    vlSelf->myChipID = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14347425411887281440ull);
    vlSelf->dataOut_N = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13566611118392815735ull);
    vlSelf->dataOut_E = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8789785401771947872ull);
    vlSelf->dataOut_S = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5509980670095106212ull);
    vlSelf->dataOut_W = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2245853310635033370ull);
    vlSelf->dataOut_P = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7787620697455549747ull);
    vlSelf->validOut_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7873632936453941919ull);
    vlSelf->validOut_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15100055669232027587ull);
    vlSelf->validOut_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248844960739668930ull);
    vlSelf->validOut_W = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12540750687258259113ull);
    vlSelf->validOut_P = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14229680630200355509ull);
    vlSelf->yummyOut_N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2518883423608503419ull);
    vlSelf->yummyOut_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10436554187202870237ull);
    vlSelf->yummyOut_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15606489309841188658ull);
    vlSelf->yummyOut_W = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16012866036296499934ull);
    vlSelf->yummyOut_P = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13928133387891494941ull);
    vlSelf->thanksIn_P = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14201559866784867393ull);
    vlSelf->__PVT__dynamic_node_top__DOT__myLocX_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 98532186396332970ull);
    vlSelf->__PVT__dynamic_node_top__DOT__myLocY_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3300908537033594418ull);
    vlSelf->__PVT__dynamic_node_top__DOT__myChipID_f = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10009877415464394287ull);
    vlSelf->__PVT__dynamic_node_top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17489967185820737229ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15255008000591612758ull);
    vlSelf->dynamic_node_top__DOT__north_input__DOT____Vcellinp__control__length = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4901862414405083093ull);
    }
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16187213702193140212ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17381808756371165175ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12172135969594908689ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13113418837642647244ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17195636198860983652ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17506038398772700252ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6024401345634297551ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13927085194316152578ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7708058446792445007ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16642827468670767036ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_zero_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15434684825880296951ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16868649368344061147ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3186337534513605958ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13564045856522526063ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4309808039614977199ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_minus_one = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6023178841992108253ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 322513534072484133ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13446714701628827135ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5690129841474574886ull);
    vlSelf->__PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6317792609824915106ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4651257108957569090ull);
    vlSelf->dynamic_node_top__DOT__east_input__DOT____Vcellinp__control__length = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8582160336949476922ull);
    }
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6328470923608991999ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11414361671638521452ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11837404363939851186ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11143241228657411440ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12289850708090993488ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15652178834170116728ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17071204088570364621ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7365603737601897750ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10369196547349019992ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3885996160824392019ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_zero_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 90854931420315893ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6779845412634803000ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16093122142623341070ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10578638644511983263ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13693382432909350899ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_minus_one = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13166216275212302804ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 785747309576575492ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17285019092574397034ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16752098657629199428ull);
    vlSelf->__PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8790783026458842049ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1811341532759803574ull);
    vlSelf->dynamic_node_top__DOT__south_input__DOT____Vcellinp__control__length = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16181110287752483275ull);
    }
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3512237407036718943ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14474004046412843583ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11853955293457537561ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 910865644681701619ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8691150989046001763ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15534185106603442499ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10036993690572311093ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10754892183629167247ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13424538205851575235ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1406391257017008984ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_zero_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10946749857891258806ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9044764667639005488ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13255806889681902438ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11147315427585977966ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11863462908516188567ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_minus_one = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15842924393396740777ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13343808518987370667ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6839105168053299316ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11336273269484910036ull);
    vlSelf->__PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1255650568294257189ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6086254992160060673ull);
    vlSelf->dynamic_node_top__DOT__west_input__DOT____Vcellinp__control__length = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7232597227545237183ull);
    }
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 941017841944815338ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17960410743975369889ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2432075387626818113ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15666854588147569563ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6439438801277014940ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4039443763453427774ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__yummy_out_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8124595994706420643ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 92513874923293313ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2952252040755979916ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12231284246575660178ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6605131450271995078ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_zero_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18024538371118000078ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2526331319067727253ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11337075152856631429ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4496167965682782201ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5429445265272725639ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_minus_one = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14960187559628324118ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2265262778947163729ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11152027706958565914ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14484352624149810797ull);
    vlSelf->__PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6938702777139811275ull);
    vlSelf->dynamic_node_top__DOT__proc_input__DOT____Vcellinp__control__length = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1288461682310970183ull);
    }
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13703380441629321582ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14023416384544091046ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12551724091092641954ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8615370912459290222ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10811852057545661120ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13171004039808811888ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__yummy_out_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15347203900276527100ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16611726006104123872ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5813285358959818189ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11337298051907568401ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9249708914986733328ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_zero_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11431337990162444885ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17086751980959384801ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3193569925955896168ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7059637251522255173ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10390293046107262286ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_minus_one = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11142641134049528105ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13929796145317351661ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10444297844550978401ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12368103684301399615ull);
    vlSelf->__PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18194753717778677411ull);
    vlSelf->__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp = 0;
    vlSelf->__Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp = 0;
}
