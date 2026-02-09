// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top___024root___nba_sequent__TOP__1(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__1\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_noc3_data = 0ULL;
    if ((9U > (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_mem_ctrl__DOT__buf_out_rd_ptr_f))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_noc3_data 
            = ((8U >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_mem_ctrl__DOT__buf_out_rd_ptr_f))
                ? vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_mem_ctrl__DOT__buf_out_mem_f
               [vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_mem_ctrl__DOT__buf_out_rd_ptr_f]
                : 0ULL);
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_xbar_noc3_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_noc3_valid) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__is_two_or_more_f));
    if ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__state_reg))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data 
            = ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__state_reg))
                ? ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__state_reg))
                    ? 0ULL : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__flit_buffer_0_reg)
                : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__flit_buffer_0_reg);
    } else if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__state_reg))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data 
            = ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__state_reg))
                ? vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__flit_buffer_0_reg
                : 0ULL);
    } else if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__state_reg))) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__is_two_or_more_f) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__flit_buffer_0_reg;
            if ((IData)(((0ULL == (0x000000003fc00000ULL 
                                   & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__intf_chipset_data_noc2)) 
                         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_c2v__DOT__data__DOT__elements_in_array_f))))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__flit_buffer_0_reg;
            }
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__flit_buffer_0_reg;
        }
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data = 0ULL;
        if ((IData)(((0ULL == (0x000000003fc00000ULL 
                               & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__intf_chipset_data_noc2)) 
                     & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_c2v__DOT__data__DOT__elements_in_array_f))))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__chip_packet_filter__DOT__flit_buffer_0_reg;
        }
    }
    if ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__state_reg))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data 
            = ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__state_reg))
                ? ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__state_reg))
                    ? 0ULL : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__flit_buffer_0_reg)
                : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__flit_buffer_0_reg);
    } else if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__state_reg))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data 
            = ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__state_reg))
                ? vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__flit_buffer_0_reg
                : 0ULL);
    } else if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__state_reg))) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__is_two_or_more_f) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__flit_buffer_0_reg;
            if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_filter_noc2_valid) 
                 & (0ULL == (0x000000003fc00000ULL 
                             & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_filter_noc2_data)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__flit_buffer_0_reg;
            }
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__flit_buffer_0_reg;
        }
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data = 0ULL;
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_filter_noc2_valid) 
             & (0ULL == (0x000000003fc00000ULL & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_filter_noc2_data)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_packet_filter__DOT__flit_buffer_0_reg;
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_data0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_data0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_data0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_data0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_data0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_data0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_data0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_data0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_header0_f;
    if ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__state_reg))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data 
            = ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__state_reg))
                ? ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__state_reg))
                    ? 0ULL : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__flit_buffer_0_reg)
                : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__flit_buffer_0_reg);
    } else if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__state_reg))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data 
            = ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__state_reg))
                ? vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__flit_buffer_0_reg
                : 0ULL);
    } else if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__state_reg))) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__is_two_or_more_f) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__flit_buffer_0_reg;
            if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_filter_noc2_valid) 
                 & (0ULL == (0x000000003fc00000ULL 
                             & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_filter_noc2_data)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__flit_buffer_0_reg;
            }
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__flit_buffer_0_reg;
        }
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data = 0ULL;
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_filter_noc2_valid) 
             & (0ULL == (0x000000003fc00000ULL & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_filter_noc2_data)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_buf_noc2_data 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_packet_filter__DOT__flit_buffer_0_reg;
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_data0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_data0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_header0_f 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_header0_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__valid_temp_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__valid_temp_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__yummy_out_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_load_counter_f) 
                                                 == 
                                                 (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_header0_f 
                                                             >> 0x00000016U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_load_counter_f) 
                                                 == 
                                                 (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_header0_f 
                                                             >> 0x00000016U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_load_counter_f) 
                                                 == 
                                                 (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_header0_f 
                                                             >> 0x00000016U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_load_counter_f) 
                                                 == 
                                                 (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_header0_f 
                                                             >> 0x00000016U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_load_counter_f) 
                                                 == 
                                                 (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_header0_f 
                                                             >> 0x00000016U))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__is_two_or_more_f) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__mem_buf_noc2_ready) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_buf_noc2_ready) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__bridge_splitter_rdy) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__bridge_splitter_rdy) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__bridge_splitter_rdy) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__bridge_splitter_rdy) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__bridge_splitter_rdy) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__is_two_or_more_f) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__iob_filter_noc3_ready) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__uart_filter_noc3_ready) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_mux_sel 
        = ((~ ((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f)))) 
           & (((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status))) 
              | (((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status)) 
                  & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41) 
                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_arb_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_mux_sel 
        = ((~ ((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_status)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_status_f)))) 
           & (((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_status_f)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_status))) 
              | (((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_status)) 
                  & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_status_f))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52) 
                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_arb_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_mux_sel 
        = ((~ ((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f)))) 
           & (((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status))) 
              | (((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status)) 
                  & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_arb_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_mux_sel 
        = ((~ ((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_status)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_status_f)))) 
           & (((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_status_f)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_status))) 
              | (((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_status)) 
                  & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_status_f))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_arb_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_mux_sel 
        = ((~ ((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_status)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_status_f)))) 
           & (((3U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_status_f)) 
               & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_status))) 
              | (((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_status)) 
                  & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_status_f))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_arb_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__elements_in_array_f;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_c2v__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__elements_in_array_f;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_c2v__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_load_go 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_mux_sel)) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_store_go 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__io_splitter_ack_mux_sel) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_load_go 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_mux_sel)) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__r_resp_buf_status_f)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_store_go 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__io_splitter_ack_mux_sel) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic_axilite_bridge__DOT__w_resp_buf_status)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_load_go 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_mux_sel)) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_store_go 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__io_splitter_ack_mux_sel) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_load_go 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_mux_sel)) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_status_f)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_store_go 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__io_splitter_ack_mux_sel) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_status)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_load_go 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_mux_sel)) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__r_resp_buf_status_f)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__is_two_or_more_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_store_go 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__io_splitter_ack_mux_sel) 
           & ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__fake_uart__DOT__noc_axilite_bridge__DOT__w_resp_buf_status)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__is_two_or_more_f)));
}

void Vcmp_top___024root___nba_sequent__TOP__2(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__rtc_div 
        = vlSelfRef.cmp_top__DOT__system__DOT__rtc_div;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__rtc_div 
        = ((IData)(vlSelfRef.sys_rst_n) ? (0x0000007fU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__rtc_div)))
            : 0U);
}

extern const VlWide<8>/*255:0*/ Vcmp_top__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcmp_top__ConstPool__TABLE_h0686e554_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcmp_top__ConstPool__TABLE_hcf7017cc_0;
extern const VlWide<16>/*511:0*/ Vcmp_top__ConstPool__CONST_h7c8123e3_0;

void Vcmp_top___024root___nba_sequent__TOP__3(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q;
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q = 0;
    IData/*23:0*/ __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q;
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q = 0;
    CData/*5:0*/ __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q;
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q = 0;
    SData/*15:0*/ __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q;
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q = 0;
    // Body
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q;
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q;
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q;
    __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__i_rv_plic_gateway__DOT__ia 
            = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__i_rv_plic_gateway__DOT__ia) 
               & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__complete)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q 
            = ((2U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__rtc_div) 
                                       >> 6U)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip 
            = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
               & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__claim)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o
                      : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x00fffff8U & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o 
                         >> 3U) : (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                   >> 3U)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x00ffffc7U & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0) 
                  << 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o 
                         >> 6U) : (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                   >> 6U)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x00fffe3fU & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0) 
                  << 6U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((8U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o 
                         >> 9U) : (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                   >> 9U)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x00fff1ffU & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0) 
                  << 9U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((0x00000010U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o 
                         >> 0x0cU) : (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                      >> 0x0cU)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x00ff8fffU & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0) 
                  << 0x0000000cU));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((0x00000020U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o 
                         >> 0x0fU) : (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                      >> 0x0fU)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x00fc7fffU & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0) 
                  << 0x0000000fU));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((0x00000040U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o 
                         >> 0x12U) : (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                      >> 0x12U)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x00e3ffffU & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0) 
                  << 0x00000012U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0 
            = (7U & ((0x00000080U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_we_o))
                      ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_o 
                         >> 0x15U) : (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                      >> 0x15U)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
            = ((0x001fffffU & __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h06267ab3__0) 
                  << 0x00000015U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h1e893075__0 
            = (7U & ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_we_o))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__i_plic_regs__prio_o) 
                         >> 3U) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q 
            = ((0x38U & (IData)(__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
               | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h1e893075__0));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h1e893075__0 
            = (7U & ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_we_o))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__i_plic_regs__prio_o) 
                         >> 6U) : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                   >> 3U)));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q 
            = ((7U & (IData)(__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
               | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vlvbound_h1e893075__0) 
                  << 3U));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q 
            = ((0xfff0U & (IData)(__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q)) 
               | ((0x0000000cU & (((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                                    ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                       >> 4U) : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                                 >> 2U)) 
                                  << 2U)) | (3U & (
                                                   (1U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                                                    ? 
                                                   (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                                    >> 1U)
                                                    : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q)))));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q 
            = ((0xff0fU & (IData)(__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q)) 
               | (((0x0000000cU & (((8U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                                     ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                        >> 0x0aU) : 
                                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                     >> 6U)) << 2U)) 
                   | (3U & ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                             ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                >> 7U) : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                          >> 4U)))) 
                  << 4U));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q 
            = ((0xf0ffU & (IData)(__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q)) 
               | (((0x0000000cU & (((0x00000020U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                                     ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                        >> 0x10U) : 
                                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                     >> 0x0aU)) << 2U)) 
                   | (3U & ((0x00000010U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                             ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                >> 0x0dU) : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                             >> 8U)))) 
                  << 8U));
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q 
            = ((0x0fffU & (IData)(__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q)) 
               | (((0x0000000cU & (((0x00000080U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                                     ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                        >> 0x16U) : 
                                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                     >> 0x0eU)) << 2U)) 
                   | (3U & ((0x00000040U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_we_o))
                             ? (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_o 
                                >> 0x13U) : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                             >> 0x0cU)))) 
                  << 0x0000000cU));
        if (((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
             & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__debug_resp_ready))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
                = (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q)));
        }
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__debug_req_valid) 
             & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
                = (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q)));
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rword_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rword_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_n;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__0__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__1__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__2__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__3__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__4__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__5__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__6__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__7__KET____DOT__i_target__irq_id 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__state_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__state_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d;
        if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q0) 
              != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q1)) 
             & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__debug_req_valid)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[3U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[4U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[4U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[5U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[5U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[6U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[6U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[7U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[7U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_n;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_n;
        if ((1U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (1U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                = Vcmp_top__ConstPool__CONST_h9e67c271_0[7U];
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__i_rv_plic_gateway__DOT__ia = 0U;
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip = 0U;
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q = 0U;
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q = 0U;
        __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rword_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__0__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__1__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__2__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__3__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__4__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__5__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__6__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__7__KET____DOT__i_target__irq_id = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q = 0x0fU;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__state_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[0U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[1U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[2U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[3U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[4U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[5U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[6U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[7U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
            = Vcmp_top__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__serial_q 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q) 
                     >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_q 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_n));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (0x0800U <= (0x00000fffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__6__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__7__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_q 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_src_q));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__4__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__5__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__2__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__3__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__0__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__1__KET____DOT__i_target__irq 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
        = __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q 
        = __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q 
        = __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q 
        = __Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 1U)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                       >> 3U)) >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q)) 
         & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
            >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__0__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                >> 3U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 3U)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                       >> 3U)) >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
             >> 2U)) & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
                        >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__1__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                >> 6U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 5U)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                       >> 3U)) >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
             >> 4U)) & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
                        >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__2__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                >> 9U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 7U)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                       >> 3U)) >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
             >> 6U)) & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
                        >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__3__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                >> 0x0000000cU)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 9U)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                       >> 3U)) >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
             >> 8U)) & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
                        >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__4__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                >> 0x0000000fU)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 0x0000000bU)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                                >> 3U)) 
                                         >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
             >> 0x0000000aU)) & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
                                 >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__5__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                >> 0x00000012U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 0x0000000dU)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                                >> 3U)) 
                                         >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
             >> 0x0000000cU)) & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
                                 >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__6__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
        = (7U & ((IData)(1U) + (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__threshold_q 
                                >> 0x00000015U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 0U;
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
           >> 1U) & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                     >> 0x0000000fU)) & ((7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                                                >> 3U)) 
                                         >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q) 
                     >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 2U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ip) 
          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
             >> 0x0000000eU)) & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q)) 
                                 >= (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__max_prio 
            = (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__prio_q));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_id_next = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__gen_target__BRA__7__KET____DOT__i_target__DOT__gen_sequential__DOT__irq_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_i 
        = ((0x00c00000U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                           << 8U)) | ((0x00180000U 
                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                          << 7U)) | 
                                      ((0x00030000U 
                                        & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                           << 6U)) 
                                       | ((0x00006000U 
                                           & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                              << 5U)) 
                                          | ((0x00000c00U 
                                              & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                                 << 4U)) 
                                             | ((0x00000180U 
                                                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                                    << 3U)) 
                                                | ((0x00000030U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                                       << 2U)) 
                                                   | (6U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__ie_q) 
                                                         << 1U)))))))));
    vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.b_valid = 0U;
    vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.r_valid = 0U;
    if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
        if ((4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
            if ((1U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
                if ((2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
                    if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
                        vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.b_valid = 1U;
                    }
                }
            }
            if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
                vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.r_valid = 1U;
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT__claim_id 
        = ((((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__7__KET____DOT__i_target__irq_id) 
               << 6U) | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__6__KET____DOT__i_target__irq_id) 
                         << 4U)) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__5__KET____DOT__i_target__irq_id) 
                                     << 2U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__4__KET____DOT__i_target__irq_id))) 
            << 8U) | ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__3__KET____DOT__i_target__irq_id) 
                        << 6U) | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__2__KET____DOT__i_target__irq_id) 
                                  << 4U)) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__1__KET____DOT__i_target__irq_id) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__0__KET____DOT__i_target__irq_id))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__debug_resp_ready 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_q) 
           == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_src_q 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
        }
        if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__cmdbusy 
        = ((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)) || (1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)));
    vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.b_valid = 0U;
    vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.r_valid = 0U;
    if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
        if ((4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
            if ((1U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
                if ((2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
                    if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
                        vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.b_valid = 1U;
                    }
                }
            }
            if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
                vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.r_valid = 1U;
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_ha61a4776_0_0 
        = ((0x20U <= (0x0000007fU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                             >> 0x00000022U)))) 
           & (0x27U >= (0x0000007fU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x00000022U)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgRegularize_ha61a4776_0_1 
        = ((((0x16U == (0x0000007fU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                               >> 0x00000022U)))) 
             << 4U) | (((0x12U == (0x0000007fU & (IData)(
                                                         (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x00000022U)))) 
                        << 3U) | ((0x11U == (0x0000007fU 
                                             & (IData)(
                                                       (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                        >> 0x00000022U)))) 
                                  << 2U))) | (((0x10U 
                                                == 
                                                (0x0000007fU 
                                                 & (IData)(
                                                           (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                            >> 0x00000022U)))) 
                                               << 1U) 
                                              | ((4U 
                                                  <= 
                                                  (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                              >> 0x00000022U)))) 
                                                 & (5U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (IData)(
                                                               (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                                >> 0x00000022U)))))));
    vlSelfRef.__Vtableidx3 = (0x0000007fU & (IData)(
                                                    (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x00000022U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_hfde5d630__0 
        = Vcmp_top__ConstPool__TABLE_h0686e554_0[vlSelfRef.__Vtableidx3];
    vlSelfRef.__Vtableidx4 = (0x0000007fU & (IData)(
                                                    (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                     >> 0x00000022U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT____VdfgExtracted_hfdf34820__0 
        = Vcmp_top__ConstPool__TABLE_hcf7017cc_0[vlSelfRef.__Vtableidx4];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q1 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q0));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT____Vcellinp__tile0__irq_i 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__1__KET____DOT__i_target__irq) 
            << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__0__KET____DOT__i_target__irq));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__sberror_valid 
        = ((3U < (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                        >> 0x00000011U))) & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)));
    if ((0U != (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x00000018U))) {
        if ((0U == (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x00000018U))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:351: Assertion failed in %Ncmp_top.system.chipset.chipset_impl.i_riscv_peripherals.i_dm_top.i_dm_mem.p_abstract_cmd_rom: unique case, but multiple matches found for '8'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),8,(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                   >> 0x00000018U));
                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/corev_apu/riscv-dbg/src/dm_mem.sv", 351, "");
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h1fb64ed9__0 
        = (IData)((0x0000100aU == (0x0000103fU & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h5f1fd491_0_0 
        = ((4U > (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        >> 0x00000014U))) & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x00000011U));
    vlSelfRef.__Vfunc_load__94__size = (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x00000014U));
    vlSelfRef.__Vfunc_load__94__Vfuncout = (0x38050403U 
                                            | ((IData)(vlSelfRef.__Vfunc_load__94__size) 
                                               << 0x0000000cU));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h18a4e27e__0 
        = vlSelfRef.__Vfunc_load__94__Vfuncout;
    vlSelfRef.__Vfunc_load__97__size = (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x00000014U));
    vlSelfRef.__Vfunc_load__97__Vfuncout = (0x38050403U 
                                            | ((IData)(vlSelfRef.__Vfunc_load__97__size) 
                                               << 0x0000000cU));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h18a4e27e__1 
        = vlSelfRef.__Vfunc_load__97__Vfuncout;
    vlSelfRef.__Vfunc_csrw__98__csr = (0x00000fffU 
                                       & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    vlSelfRef.__Vfunc_csrw__98__Vfuncout = (0x00041073U 
                                            | ((IData)(vlSelfRef.__Vfunc_csrw__98__csr) 
                                               << 0x00000014U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h1be9df32__0 
        = vlSelfRef.__Vfunc_csrw__98__Vfuncout;
    vlSelfRef.__Vfunc_store__99__size = (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                               >> 0x00000014U));
    vlSelfRef.__Vfunc_store__99__Vfuncout = (0x38850023U 
                                             | ((IData)(vlSelfRef.__Vfunc_store__99__size) 
                                                << 0x0000000cU));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3af312b1__0 
        = vlSelfRef.__Vfunc_store__99__Vfuncout;
    vlSelfRef.__Vfunc_csrr__102__csr = (0x00000fffU 
                                        & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    vlSelfRef.__Vfunc_csrr__102__Vfuncout = (0x00002473U 
                                             | ((IData)(vlSelfRef.__Vfunc_csrr__102__csr) 
                                                << 0x00000014U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_ha50ec5ba__0 
        = vlSelfRef.__Vfunc_csrr__102__Vfuncout;
    vlSelfRef.__Vfunc_store__103__size = (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                >> 0x00000014U));
    vlSelfRef.__Vfunc_store__103__Vfuncout = (0x38850023U 
                                              | ((IData)(vlSelfRef.__Vfunc_store__103__size) 
                                                 << 0x0000000cU));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3af312b1__1 
        = vlSelfRef.__Vfunc_store__103__Vfuncout;
    vlSelfRef.__Vfunc_float_load__95__dest = (0x0000001fU 
                                              & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    vlSelfRef.__Vfunc_float_load__95__size = (7U & 
                                              (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                               >> 0x00000014U));
    vlSelfRef.__Vfunc_float_load__95__Vfuncout = (0x38050007U 
                                                  | (((IData)(vlSelfRef.__Vfunc_float_load__95__size) 
                                                      << 0x0000000cU) 
                                                     | ((IData)(vlSelfRef.__Vfunc_float_load__95__dest) 
                                                        << 7U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h46303dd6__0 
        = vlSelfRef.__Vfunc_float_load__95__Vfuncout;
    vlSelfRef.__Vfunc_load__96__dest = (0x0000001fU 
                                        & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    vlSelfRef.__Vfunc_load__96__size = (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x00000014U));
    vlSelfRef.__Vfunc_load__96__Vfuncout = (0x38050003U 
                                            | (((IData)(vlSelfRef.__Vfunc_load__96__size) 
                                                << 0x0000000cU) 
                                               | ((IData)(vlSelfRef.__Vfunc_load__96__dest) 
                                                  << 7U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3e667053__0 
        = vlSelfRef.__Vfunc_load__96__Vfuncout;
    vlSelfRef.__Vfunc_float_store__100__src = (0x0000001fU 
                                               & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    vlSelfRef.__Vfunc_float_store__100__size = (7U 
                                                & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                   >> 0x00000014U));
    vlSelfRef.__Vfunc_float_store__100__Vfuncout = 
        (0x38050027U | (((IData)(vlSelfRef.__Vfunc_float_store__100__src) 
                         << 0x00000014U) | ((IData)(vlSelfRef.__Vfunc_float_store__100__size) 
                                            << 0x0000000cU)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9db63694__0 
        = vlSelfRef.__Vfunc_float_store__100__Vfuncout;
    vlSelfRef.__Vfunc_store__101__src = (0x0000001fU 
                                         & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
    vlSelfRef.__Vfunc_store__101__size = (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                >> 0x00000014U));
    vlSelfRef.__Vfunc_store__101__Vfuncout = (0x38050023U 
                                              | (((IData)(vlSelfRef.__Vfunc_store__101__src) 
                                                  << 0x00000014U) 
                                                 | ((IData)(vlSelfRef.__Vfunc_store__101__size) 
                                                    << 0x0000000cU)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hdf1dc385__0 
        = vlSelfRef.__Vfunc_store__101__Vfuncout;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hf292079f__0 
        = (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                 >> (3U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           >> 0x00000010U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (1U 
                                                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                                    >> 
                                                    (3U 
                                                     & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                        >> 0x00000010U))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
        = ((0x000ffc00U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           << 4U)) | (0x000003ffU & 
                                      (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                       >> 0x00000010U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (3U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                 >> 0x00000010U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__haltreq = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__resumereq = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__haltreq 
        = (((~ ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__haltreq)) 
           | (0x0fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                        >> 0x0000001fU) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__resumereq 
        = (((~ ((IData)(1U) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__resumereq)) 
           | (0x0fU & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                              >> 0x0000001eU)) << (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_3 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__3__KET____DOT__i_target__irq) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__2__KET____DOT__i_target__irq) 
                                                    << 2U) 
                                                   | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT____Vcellinp__tile0__irq_i)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[3U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[4U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[5U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[6U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[7U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[8U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[9U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0x0000000aU] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[0x0000000aU];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0x0000000bU] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[0x0000000bU];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0x0000000cU] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[0x0000000cU];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0x0000000dU] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[0x0000000dU];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0x0000000eU] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[0x0000000eU];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0x0000000fU] 
        = Vcmp_top__ConstPool__CONST_h7c8123e3_0[0x0000000fU];
    if ((0U == (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x00000018U))) {
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h5f1fd491_0_0) 
             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x00000010U))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0x0000000eU)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h1fb64ed9__0) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h18a4e27e__0;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            } else if ((0x00001000U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x00000020U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h46303dd6__0
                        : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3e667053__0);
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h18a4e27e__1;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h1be9df32__0))));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h1be9df32__0))) 
                               >> 0x00000020U));
            }
        } else if (((~ (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        >> 0x00000010U)) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgRegularize_h5f1fd491_0_0))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0x0000000eU)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h1fb64ed9__0) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3af312b1__0))));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3af312b1__0))) 
                               >> 0x00000020U));
            } else if ((0x00001000U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                    = ((0x00000020U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)
                        ? vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h9db63694__0
                        : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hdf1dc385__0);
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_ha50ec5ba__0;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3af312b1__1))));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3af312b1__1))) 
                               >> 0x00000020U));
            }
        } else if ((1U & ((4U <= (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                        >> 0x00000014U))) 
                          | (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                             >> 0x00000013U)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
        }
        if ((1U & ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x00000012U) & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x00000013U;
        }
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x00007fffU & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 5U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffff0U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop 
        = ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__debug_resp_ready));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__debug_req_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q) 
           != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q1));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q0 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_dst_q));
    vlSelfRef.__VdfgRegularize_he50b618e_0_4 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__5__KET____DOT__i_target__irq) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_plic__DOT____Vcellout__gen_target__BRA__4__KET____DOT__i_target__irq) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                                                 & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                                                 & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x000003ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                          >> 6U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
        = ((0xfffffffeU & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
           | (0U != vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push 
        = ((2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__debug_req_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                          >> 0x0000000bU));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
        = ((0xfffffffeU & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
           | (0U != vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
         & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop)) 
          & (2U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_dst_q 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) 
           && (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 
        = ((0xfffffffeU & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3) 
           | (0U != vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2));
}

void Vcmp_top___024root___nba_sequent__TOP__4(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__5(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__6(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__6\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__7(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__7\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__8(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__8\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__9(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__9\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__10(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__10\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__11(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__11\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__12(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__12\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__13(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__13\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__14(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__14\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__15(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__15\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__16(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__16\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__17(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__17\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__18(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__18\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__19(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__19\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__20(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__20\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__21(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__21\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__22(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__22\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__23(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__23\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__24(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__24\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__25(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__25\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__26(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__26\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__27(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__27\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__28(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__28\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp;
    vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp 
        = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__up)
                      ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                  : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__down)
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f) 
                             - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                      : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__up) 
                                  << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__down)))
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                          : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__down)))
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))))));
}

void Vcmp_top___024root___nba_sequent__TOP__29(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__29\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__ok_iob = 1U;
}

void Vcmp_top___024root___nba_sequent__TOP__30(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__30\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_instructions0__q 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l)) 
                 | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_instructions__q 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l)
            ? (0x0001ffffU & ((- (IData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l))) 
                              & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions 
                                 >> 1U))) : 0U);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions 
        = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_instructions__q 
            << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_instructions0__q));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_scratch_sel 
        = ((8U == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions)) 
           | ((9U == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions)) 
              | (0x0aU == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions))));
}

void Vcmp_top___024root___nba_sequent__TOP__31(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__31\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_new_instructions0__q 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync)) 
                 | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_new_instructions));
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q 
            = (0x0001ffffU & ((- (IData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync))) 
                              & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_new_instructions 
                                 >> 1U)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q 
            = (0x00007fffU & ((- (IData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync))) 
                              & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_tap_state) 
                                 >> 1U)));
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__new_instructions 
        = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q 
            << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_new_instructions0__q));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_new_instructions 
        = ((0x00000200U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q))
            ? 1U : ((0x00000400U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q))
                     ? (((IData)(vlSelfRef.cmp_top__DOT__jtag_datain) 
                         << 0x00000011U) | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q)
                     : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__new_instructions));
}

void Vcmp_top___024root___nba_sequent__TOP__32(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__32\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state_reset_negedge 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_tap_state0__q;
}

void Vcmp_top___024root___nba_sequent__TOP__33(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__33\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel_next;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel = 0U;
    }
}

void Vcmp_top___024unit____Vdpiimwrap_report_pc_TOP____024unit(QData/*63:0*/ thread_pc);
void Vcmp_top___024unit____Vdpiimwrap_drive_iob_TOP____024unit(IData/*31:0*/ &drive_iob__Vfuncrtn);
void Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit(IData/*31:0*/ index, IData/*31:0*/ &get_cpx_word__Vfuncrtn);

void Vcmp_top___024root___nba_sequent__TOP__34(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__34\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_drive_iob__58__Vfuncout;
    __Vfunc_drive_iob__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_cpx_word__59__Vfuncout;
    __Vfunc_get_cpx_word__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_cpx_word__60__Vfuncout;
    __Vfunc_get_cpx_word__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_cpx_word__61__Vfuncout;
    __Vfunc_get_cpx_word__61__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_cpx_word__62__Vfuncout;
    __Vfunc_get_cpx_word__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_cpx_word__63__Vfuncout;
    __Vfunc_get_cpx_word__63__Vfuncout = 0;
    // Body
    if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__ok_iob) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__spc0_inst_done) {
            Vcmp_top___024unit____Vdpiimwrap_report_pc_TOP____024unit(
                                                                      (((QData)((IData)(
                                                                                (0x00007fffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w0 
                                                                                >> 0x27U)))))))) 
                                                                        << 0x00000031U) 
                                                                       | vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w0));
        }
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__spc1_inst_done) {
            Vcmp_top___024unit____Vdpiimwrap_report_pc_TOP____024unit(
                                                                      (((QData)((IData)(
                                                                                (0x00007fffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w1 
                                                                                >> 0x27U)))))))) 
                                                                        << 0x00000031U) 
                                                                       | vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w1));
        }
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__spc2_inst_done) {
            Vcmp_top___024unit____Vdpiimwrap_report_pc_TOP____024unit(
                                                                      (((QData)((IData)(
                                                                                (0x00007fffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w2 
                                                                                >> 0x27U)))))))) 
                                                                        << 0x00000031U) 
                                                                       | vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w2));
        }
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__spc3_inst_done) {
            Vcmp_top___024unit____Vdpiimwrap_report_pc_TOP____024unit(
                                                                      (((QData)((IData)(
                                                                                (0x00007fffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w3 
                                                                                >> 0x27U)))))))) 
                                                                        << 0x00000031U) 
                                                                       | vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__pc_w3));
        }
        Vcmp_top___024unit____Vdpiimwrap_drive_iob_TOP____024unit(__Vfunc_drive_iob__58__Vfuncout);
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__cpx_driven 
            = __Vfunc_drive_iob__58__Vfuncout;
        if (VL_UNLIKELY(((0U != vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__cpx_driven)))) {
            Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit(0U, __Vfunc_get_cpx_word__59__Vfuncout);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[4U] 
                = (0x0001ffffU & __Vfunc_get_cpx_word__59__Vfuncout);
            Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit(1U, __Vfunc_get_cpx_word__60__Vfuncout);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[3U] 
                = __Vfunc_get_cpx_word__60__Vfuncout;
            Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit(2U, __Vfunc_get_cpx_word__61__Vfuncout);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[2U] 
                = __Vfunc_get_cpx_word__61__Vfuncout;
            Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit(3U, __Vfunc_get_cpx_word__62__Vfuncout);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U] 
                = __Vfunc_get_cpx_word__62__Vfuncout;
            Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit(4U, __Vfunc_get_cpx_word__63__Vfuncout);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U] 
                = __Vfunc_get_cpx_word__63__Vfuncout;
            VL_WRITEF_NX("Doing IOB stuff - got values: %x %x %x %x %x\n",0,
                         32,vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[4U],
                         32,vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[3U],
                         32,vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[2U],
                         32,vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U],
                         32,vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U]);
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[2U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[3U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[4U] = 0U;
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_val) 
                          & ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_buffer_val[
                              ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index) 
                               >> 5U)] >> (0x0000001fU 
                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index))) 
                             | (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_buffer_val[
                                (7U & (((IData)(1U) 
                                        + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index)) 
                                       >> 5U))] >> 
                                (0x0000001fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index))))))))) {
            VL_WRITEF_NX("%20# : Simulation -> FAIL(ciop_iob.v: IOB out buffer overflowed)\n",0,
                         64,VL_TIME_UNITED_Q(1));
        }
    }
    if ((0U == ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U] 
                 << 0x0000000eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U] 
                                    >> 0x00000012U)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_x = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_y = 0U;
    } else if ((1U == ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U] 
                        << 0x0000000eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U] 
                                           >> 0x00000012U)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_x = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_y = 0U;
    } else if ((2U == ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U] 
                        << 0x0000000eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U] 
                                           >> 0x00000012U)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_x = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_y = 1U;
    } else if ((3U == ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U] 
                        << 0x0000000eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U] 
                                           >> 0x00000012U)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_x = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_y = 1U;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_x = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_y = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_val 
        = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[4U] 
                 >> 0x00000010U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit1 = 0x0000000000484000ULL;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit2 
        = ((0xffffffffffff0000ULL & (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U])) 
                                      << 0x00000020U) 
                                     | (0xffffffffffff0000ULL 
                                        & (QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U]))))) 
           | (QData)((IData)((0x000001ffU & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U]))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit1 
        = ((0xfffc0003ffffffffULL & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit1) 
           | ((QData)((IData)((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_x) 
                                << 8U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__dest_y)))) 
              << 0x00000022U));
    if (VL_UNLIKELY((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_val))) {
        VL_WRITEF_NX("IOB sending to tile X:%3# Y:%3#\n   raw tileid %x\n",0,
                     8,(0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit1 
                                               >> 0x2aU))),
                     8,(0x000000ffU & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit1 
                                               >> 0x22U))),
                     32,((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[1U] 
                          << 0x0000000eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__fake_iob_out_data[0U] 
                                             >> 0x00000012U)));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_data[0U] 
        = (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit2);
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_data[1U] 
        = (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit2 
                   >> 0x00000020U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_data[2U] 
        = (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit1);
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_data[3U] 
        = (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_flit1 
                   >> 0x00000020U));
}

void Vcmp_top___024root___nba_sequent__TOP__35(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__35\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__rtc_div = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__rtc_div;
}

extern const VlWide<38>/*1215:0*/ Vcmp_top__ConstPool__CONST_h07b47c6c_0;

void Vcmp_top___024root___nba_comb__TOP__0(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__aligned_address;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__aligned_address = 0;
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__wrap_boundary;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__wrap_boundary = 0;
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__upper_wrap_boundary;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__upper_wrap_boundary = 0;
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr = 0;
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__aligned_address;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__aligned_address = 0;
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__wrap_boundary;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__wrap_boundary = 0;
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__upper_wrap_boundary;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__upper_wrap_boundary = 0;
    QData/*63:0*/ cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr = 0;
    QData/*63:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__Vfuncout;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__unaligned_address;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__unaligned_address = 0;
    CData/*7:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__len;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__len = 0;
    QData/*63:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address = 0;
    QData/*63:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__Vfuncout;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__unaligned_address;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__unaligned_address = 0;
    CData/*7:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__len;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__len = 0;
    QData/*63:0*/ __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address;
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__aw_ready;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__aw_ready = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__w_ready;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__w_ready = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__ar_ready;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__ar_ready = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__r_last;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__r_last = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__aw_ready;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__aw_ready = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__w_ready;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__w_ready = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__ar_ready;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__ar_ready = 0;
    CData/*0:0*/ TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__r_last;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__r_last = 0;
    // Body
    vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.r_data 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_rdata;
    if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
        if ((4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
            if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
                vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.r_data 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_rdata;
            }
        }
    }
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__ar_ready = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[0U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[1U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[2U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__w_ready = 0U;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__aw_ready = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_req = 0U;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__r_last = 0U;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__aligned_address 
        = (0xfffffffffffffff8ULL & (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U])) 
                                     << 0x00000033U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U])) 
                                        << 0x00000013U) 
                                       | (0x0007fffffffffff8ULL 
                                          & ((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])) 
                                             >> 0x0000000dU)))));
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__len 
        = (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U] 
                          >> 5U));
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__unaligned_address 
        = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U])) 
            << 0x00000033U) | (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U])) 
                                << 0x00000013U) | ((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])) 
                                                   >> 0x0000000dU)));
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address = 0ULL;
    if ((1U == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address 
            = ((0x000000000000000fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address) 
               | (0xfffffffffffffff0ULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__unaligned_address));
    } else if ((3U == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address 
            = ((0x000000000000001fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address) 
               | (0xffffffffffffffe0ULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__unaligned_address));
    } else if ((7U == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address 
            = ((0x000000000000003fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address) 
               | (0x7fffffffffffffc0ULL & (__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__unaligned_address 
                                           << 1U)));
    } else if ((0x0fU == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address 
            = ((0x000000000000007fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address) 
               | (0x3fffffffffffff80ULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__unaligned_address));
    }
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__Vfuncout 
        = __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__warp_address;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__wrap_boundary 
        = __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__get_wrap_boundary__105__Vfuncout;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__upper_wrap_boundary 
        = (cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__wrap_boundary 
           + VL_SHIFTL_QQI(64,64,32, (1ULL + (QData)((IData)(
                                                             (0x000000ffU 
                                                              & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U] 
                                                                 >> 5U))))), 3U));
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr 
        = (cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__aligned_address 
           + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q)), 3U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr = 0ULL;
    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.ar_valid) {
            TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__ar_ready = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[0U] 
                = (0x000cU | ((IData)((0x000000ffffffffffULL 
                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_req_buf_header1_f 
                                          >> 0x00000010U))) 
                              << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[1U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_req_buf_header1_f 
                                >> 0x00000010U))) >> 0x00000013U) 
                   | ((IData)(((0x000000ffffffffffULL 
                                & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_req_buf_header1_f 
                                   >> 0x00000010U)) 
                               >> 0x00000020U)) << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[2U] 
                = ((IData)(((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_req_buf_header1_f 
                                >> 0x00000010U)) >> 0x00000020U)) 
                   >> 0x00000013U);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_d = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_req = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
                = (0x000000ffffffffffULL & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_req_buf_header1_f 
                                            >> 0x00000010U));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_d 
                = (0x000000ffffffffffULL & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_req_buf_header1_f 
                                            >> 0x00000010U));
        } else if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.aw_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[0U] 
                = (0x000cU | ((IData)((0x000000ffffffffffULL 
                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_req_buf_header1_f 
                                          >> 0x00000010U))) 
                              << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[1U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_req_buf_header1_f 
                                >> 0x00000010U))) >> 0x00000013U) 
                   | ((IData)(((0x000000ffffffffffULL 
                                & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_req_buf_header1_f 
                                   >> 0x00000010U)) 
                               >> 0x00000020U)) << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_d[2U] 
                = ((IData)(((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_req_buf_header1_f 
                                >> 0x00000010U)) >> 0x00000020U)) 
                   >> 0x00000013U);
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.w_valid) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_d = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_req = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d = 3U;
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d = 4U;
            }
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
                = (0x000000ffffffffffULL & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_req_buf_header1_f 
                                            >> 0x00000010U));
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.ar_valid)))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.aw_valid) {
                TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__w_ready = 1U;
                TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__aw_ready = 1U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.w_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_d = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_req = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d = 3U;
        }
        TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__w_ready = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
            = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U])) 
                << 0x00000033U) | (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U])) 
                                    << 0x00000013U) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])) 
                                      >> 0x0000000dU)));
    } else {
        if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_req = 1U;
            TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__r_last 
                = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q) 
                   == ((IData)(1U) + (0x000000ffU & 
                                      (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U] 
                                       >> 5U))));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_q;
            if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_d 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q)));
                if (TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__r_last) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d = 0U;
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_req = 0U;
                }
                if (((0U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])) 
                     || (1U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
                        = cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr;
                } else if ((2U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U]))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
                        = ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr 
                            == cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__upper_wrap_boundary)
                            ? cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__wrap_boundary
                            : ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr 
                                > cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__upper_wrap_boundary)
                                ? ((((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U])) 
                                     << 0x00000033U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U])) 
                                        << 0x00000013U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])) 
                                          >> 0x0000000dU))) 
                                   + VL_SHIFTL_QQI(64,64,32, 
                                                   ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q)) 
                                                    - (QData)((IData)(
                                                                      (0x000000ffU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U] 
                                                                          >> 5U))))), 3U))
                                : cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr));
                }
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_d 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr;
            }
        } else if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.w_valid) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_d 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_req = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d = 3U;
                if (((0U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])) 
                     || (1U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
                        = cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr;
                } else if ((2U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U]))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr 
                        = ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr 
                            == cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__upper_wrap_boundary)
                            ? cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__wrap_boundary
                            : ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr 
                                > cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__upper_wrap_boundary)
                                ? ((((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[2U])) 
                                     << 0x00000033U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[1U])) 
                                        << 0x00000013U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U])) 
                                          >> 0x0000000dU))) 
                                   + VL_SHIFTL_QQI(64,64,32, 
                                                   ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cnt_q)) 
                                                    - (QData)((IData)(
                                                                      (0x000000ffU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__ax_req_q[0U] 
                                                                          >> 5U))))), 3U))
                                : cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__cons_addr));
                }
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__req_addr_d 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__rom_addr;
            }
        } else if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
            if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_d = 0U;
            }
        }
        if ((1U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
            if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_axi2rom__DOT__state_q))) {
                TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__w_ready = 1U;
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_q;
    if ((1U & (~ ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q)))) {
            if ((0x00040000U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[5U])) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_n 
                    = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[8U] 
                             >> 0x00000018U));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_n 
                    = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[8U])) 
                        << 0x00000028U) | (((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[7U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[6U])) 
                                              >> 0x00000018U)));
            } else if ((2U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[0U])) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_n 
                    = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U] 
                             >> 1U));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_n 
                    = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U])) 
                        << 0x0000003fU) | (((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[2U])) 
                                            << 0x0000001fU) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[1U])) 
                                              >> 1U)));
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
        = ((0x00000fffU & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U]) 
           | (0x003ff000U & ((((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q))
                                ? ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q))
                                    ? 1U : ((0x00000040U 
                                             & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U])
                                             ? 2U : 0U))
                                : ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q))
                                    ? 0U : ((0x00040000U 
                                             & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[5U])
                                             ? 8U : 
                                            ((2U & 
                                              vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[0U])
                                              ? 4U : 0U)))) 
                              << 0x00000012U) | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_q) 
                                                 << 0x0000000eU))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__we = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__en = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address = 0ULL;
    if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q))) {
            if ((0x00000020U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U])) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_d = 0U;
            }
        } else if ((0x00000040U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U])) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_d = 3U;
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q)))) {
            if ((0x00000040U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U])) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__we = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__en = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_q;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q))) {
        if ((1U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[0U])) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_d = 0U;
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__en = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__address_q;
    } else if ((0x00040000U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[5U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_d = 2U;
    } else if ((2U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_d = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_rdata 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? ((0x13U > (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q))
                ? ((0x04bfU >= (0x000007ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U)))
                    ? (((QData)((IData)(Vcmp_top__ConstPool__CONST_h07b47c6c_0[
                                        (((IData)(0x0000003fU) 
                                          + (0x000007ffU 
                                             & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U)))
                             ? 0x00000020U : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U))))) 
                       | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      Vcmp_top__ConstPool__CONST_h07b47c6c_0[
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x000007ffU 
                                                         & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U))))) 
                          | ((QData)((IData)(Vcmp_top__ConstPool__CONST_h07b47c6c_0[
                                             (0x0000003fU 
                                              & (VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U) 
                                                 >> 5U))])) 
                             >> (0x0000001fU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q), 6U)))))
                    : 0ULL) : 0ULL) : vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q);
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__ar_ready = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[0U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[1U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[2U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__w_ready = 0U;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__aw_ready = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_we = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_req = 0U;
    TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__r_last = 0U;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__aligned_address 
        = (0xfffffffffffffff8ULL & (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U])) 
                                     << 0x00000033U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U])) 
                                        << 0x00000013U) 
                                       | (0x0007fffffffffff8ULL 
                                          & ((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])) 
                                             >> 0x0000000dU)))));
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__len 
        = (0x000000ffU & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U] 
                          >> 5U));
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__unaligned_address 
        = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U])) 
            << 0x00000033U) | (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U])) 
                                << 0x00000013U) | ((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])) 
                                                   >> 0x0000000dU)));
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address = 0ULL;
    if ((1U == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address 
            = ((0x000000000000000fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address) 
               | (0xfffffffffffffff0ULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__unaligned_address));
    } else if ((3U == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address 
            = ((0x000000000000001fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address) 
               | (0xffffffffffffffe0ULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__unaligned_address));
    } else if ((7U == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address 
            = ((0x000000000000003fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address) 
               | (0x7fffffffffffffc0ULL & (__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__unaligned_address 
                                           << 1U)));
    } else if ((0x0fU == (IData)(__Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__len))) {
        __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address 
            = ((0x000000000000007fULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address) 
               | (0x3fffffffffffff80ULL & __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__unaligned_address));
    }
    __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__Vfuncout 
        = __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__warp_address;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__wrap_boundary 
        = __Vfunc_cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__get_wrap_boundary__104__Vfuncout;
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__upper_wrap_boundary 
        = (cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__wrap_boundary 
           + VL_SHIFTL_QQI(64,64,32, (1ULL + (QData)((IData)(
                                                             (0x000000ffU 
                                                              & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U] 
                                                                 >> 5U))))), 3U));
    cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr 
        = (cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__aligned_address 
           + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q)), 3U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr = 0ULL;
    if ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.ar_valid) {
            TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__ar_ready = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[0U] 
                = (0x000cU | ((IData)((0x000000ffffffffffULL 
                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_req_buf_header1_f 
                                          >> 0x00000010U))) 
                              << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[1U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_req_buf_header1_f 
                                >> 0x00000010U))) >> 0x00000013U) 
                   | ((IData)(((0x000000ffffffffffULL 
                                & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_req_buf_header1_f 
                                   >> 0x00000010U)) 
                               >> 0x00000020U)) << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[2U] 
                = ((IData)(((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_req_buf_header1_f 
                                >> 0x00000010U)) >> 0x00000020U)) 
                   >> 0x00000013U);
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_d = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_req = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
                = (0x000000ffffffffffULL & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_req_buf_header1_f 
                                            >> 0x00000010U));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_d 
                = (0x000000ffffffffffULL & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_req_buf_header1_f 
                                            >> 0x00000010U));
        } else if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.aw_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[0U] 
                = (0x000cU | ((IData)((0x000000ffffffffffULL 
                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_req_buf_header1_f 
                                          >> 0x00000010U))) 
                              << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[1U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_req_buf_header1_f 
                                >> 0x00000010U))) >> 0x00000013U) 
                   | ((IData)(((0x000000ffffffffffULL 
                                & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_req_buf_header1_f 
                                   >> 0x00000010U)) 
                               >> 0x00000020U)) << 0x0000000dU));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_d[2U] 
                = ((IData)(((0x000000ffffffffffULL 
                             & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_req_buf_header1_f 
                                >> 0x00000010U)) >> 0x00000020U)) 
                   >> 0x00000013U);
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.w_valid) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_d = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_req = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d = 3U;
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d = 4U;
            }
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
                = (0x000000ffffffffffULL & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_req_buf_header1_f 
                                            >> 0x00000010U));
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.ar_valid)))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.aw_valid) {
                TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__w_ready = 1U;
                TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__aw_ready = 1U;
                if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.w_valid) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_we = 1U;
                }
            }
        }
    } else if ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.w_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_d = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_we = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_req = 1U;
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d = 3U;
        }
        TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__w_ready = 1U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
            = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U])) 
                << 0x00000033U) | (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U])) 
                                    << 0x00000013U) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])) 
                                      >> 0x0000000dU)));
    } else {
        if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_req = 1U;
            TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__r_last 
                = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q) 
                   == ((IData)(1U) + (0x000000ffU & 
                                      (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U] 
                                       >> 5U))));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_q;
            if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_d 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q)));
                if (TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__r_last) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d = 0U;
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_req = 0U;
                }
                if (((0U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])) 
                     || (1U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
                        = cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr;
                } else if ((2U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U]))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
                        = ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr 
                            == cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__upper_wrap_boundary)
                            ? cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__wrap_boundary
                            : ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr 
                                > cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__upper_wrap_boundary)
                                ? ((((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U])) 
                                     << 0x00000033U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U])) 
                                        << 0x00000013U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])) 
                                          >> 0x0000000dU))) 
                                   + VL_SHIFTL_QQI(64,64,32, 
                                                   ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q)) 
                                                    - (QData)((IData)(
                                                                      (0x000000ffU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U] 
                                                                          >> 5U))))), 3U))
                                : cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr));
                }
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_d 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr;
            }
        } else if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
            if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.w_valid) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_d 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_req = 1U;
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d = 3U;
                if (((0U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])) 
                     || (1U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
                        = cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr;
                } else if ((2U == (3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U]))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr 
                        = ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr 
                            == cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__upper_wrap_boundary)
                            ? cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__wrap_boundary
                            : ((cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr 
                                > cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__upper_wrap_boundary)
                                ? ((((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[2U])) 
                                     << 0x00000033U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[1U])) 
                                        << 0x00000013U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U])) 
                                          >> 0x0000000dU))) 
                                   + VL_SHIFTL_QQI(64,64,32, 
                                                   ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cnt_q)) 
                                                    - (QData)((IData)(
                                                                      (0x000000ffU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__ax_req_q[0U] 
                                                                          >> 5U))))), 3U))
                                : cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__cons_addr));
                }
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__req_addr_d 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_addr;
            }
        } else if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
            if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_d = 0U;
            }
        }
        if ((1U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
            if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
                TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__w_ready = 1U;
                if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.w_valid) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_we = 1U;
                }
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__m_axi_b_go 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.b_valid) 
           & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__w_resp_buf_status)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__m_axi_r_go 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.r_valid) 
           & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__r_resp_buf_status_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__m_axi_b_go 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.b_valid) 
           & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__w_resp_buf_status)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__m_axi_r_go 
        = ((IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.r_valid) 
           & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__r_resp_buf_status_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__m_axi_ar_go 
        = ((IData)(TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__ar_ready) 
           & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.ar_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__m_axi_w_go 
        = ((IData)(TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__w_ready) 
           & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.w_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_bootrom_axilite_bridge__DOT__m_axi_aw_go 
        = ((IData)(TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__DOT__aw_ready) 
           & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master.aw_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[0U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[0U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[1U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[1U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[2U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[2U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[3U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[3U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[4U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[4U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[5U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[5U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[6U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[6U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n[7U] 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[7U];
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_q;
    if (((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__serial_q)) 
         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__i_sync_edge__DOT__i_sync__DOT__reg_q) 
            >> 1U))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_n 
            = (1ULL + vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_q);
    }
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__en) 
         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__we))) {
        if ((0x0010U < (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address)))) {
            if (((0x4000U <= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))) 
                 && (0x4020U >= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))))) {
                VL_ASSIGNSEL_WQ(256, 64, (0x000000ffU 
                                          & VL_SHIFTL_III(8,32,32, 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                      >> 3U))), 6U)), vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_n, 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[5U])) 
                                  << 0x0000002eU) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[4U])) 
                                   << 0x0000000eU) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U])) 
                                     >> 0x00000012U))));
            }
            if ((1U & (~ ((0x4000U <= (0x0000ffffU 
                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))) 
                          && (0x4020U >= (0x0000ffffU 
                                          & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))))))) {
                if (((0xbff8U <= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))) 
                     && (0xbffcU >= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))))) {
                    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_n 
                        = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[5U])) 
                            << 0x0000002eU) | (((QData)((IData)(
                                                                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[4U])) 
                                                << 0x0000000eU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[3U])) 
                                                  >> 0x00000012U)));
                }
            }
        }
        if ((0x0010U >= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_n 
                = (((~ ((IData)(1U) << (3U & (IData)(
                                                     (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                      >> 2U))))) 
                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_n)) 
                   | (0x0fU & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_req[
                                      (((IData)(0x00000072U) 
                                        + (0x0000003fU 
                                           & VL_SHIFTL_III(6,32,32, 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                       >> 2U))), 5U))) 
                                       >> 5U)] >> (0x0000001fU 
                                                   & ((IData)(0x00000072U) 
                                                      + 
                                                      (0x0000003fU 
                                                       & VL_SHIFTL_III(6,32,32, 
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                                >> 2U))), 5U)))))) 
                               << (3U & (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                 >> 2U))))));
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata = 0ULL;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__en) 
         & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__we)))) {
        if ((0x0010U >= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata 
                = (QData)((IData)((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__msip_q) 
                                         >> (3U & (IData)(
                                                          (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                           >> 2U)))))));
        } else if (((0x4000U <= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))) 
                    && (0x4020U >= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata 
                = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[
                                    (((IData)(0x0000003fU) 
                                      + (0x000000ffU 
                                         & VL_SHIFTL_III(8,32,32, 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                     >> 3U))), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                                >> 3U))), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                                >> 3U))), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                       >> 3U))), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000000ffU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                                >> 3U))), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(8,32,32, 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                     >> 3U))), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtimecmp_q[
                                         (7U & (VL_SHIFTL_III(8,32,32, 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                          >> 3U))), 6U) 
                                                >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address 
                                                                     >> 3U))), 6U)))));
        } else if (((0xbff8U <= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))) 
                    && (0xbffcU >= (0x0000ffffU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__address))))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata 
                = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__mtime_q;
        }
    }
    vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.r_data 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_rdata;
    if ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
        if ((4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
            if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_dm_axi2mem__DOT__state_q))) {
                vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.r_data 
                    = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_slave_rdata;
            }
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__m_axi_ar_go 
        = ((IData)(TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__ar_ready) 
           & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.ar_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__m_axi_w_go 
        = ((IData)(TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__w_ready) 
           & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.w_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_debug_axilite_bridge__DOT__m_axi_aw_go 
        = ((IData)(TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__DOT__aw_ready) 
           & (IData)(vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master.aw_valid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[0U] 
        = (4U | ((3U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[0U]) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata) 
                    << 5U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[1U] 
        = ((3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata) 
                  >> 0x0000001bU)) | ((0x0000001cU 
                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata) 
                                          >> 0x0000001bU)) 
                                      | ((IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata 
                                                  >> 0x00000020U)) 
                                         << 5U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
        = ((0x003fffe0U & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U]) 
           | (0x003fffffU & ((3U & ((IData)((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata 
                                             >> 0x00000020U)) 
                                    >> 0x0000001bU)) 
                             | (0x0000001cU & ((IData)(
                                                       (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__rdata 
                                                        >> 0x00000020U)) 
                                               >> 0x0000001bU)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
        = ((0x003ffc1fU & vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U]) 
           | (0x003fffe0U & (((IData)((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__state_q))) 
                              << 9U) | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint__DOT__axi_lite_interface_i__DOT__trans_id_q) 
                                        << 5U))));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__m_axi_aw_go 
        = ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
            >> 0x00000015U) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT____Vcellout__i_clint_axilite_bridge__m_axi_awvalid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__m_axi_w_go 
        = ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
            >> 0x00000013U) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT____Vcellout__i_clint_axilite_bridge__m_axi_wvalid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__m_axi_ar_go 
        = ((vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
            >> 0x00000014U) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT____Vcellout__i_clint_axilite_bridge__m_axi_arvalid));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__m_axi_r_go 
        = ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__r_resp_buf_status_f)) 
           & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
              >> 9U));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__m_axi_b_go 
        = ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__i_clint_axilite_bridge__DOT__w_resp_buf_status)) 
           & (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__clint_axi_resp[2U] 
              >> 0x00000012U));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vcmp_top__ConstPool__TABLE_he5f5e051_0;

void Vcmp_top___024root___nba_sequent__TOP__36(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__36\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_mem__DOT__data__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__valid_temp_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__up 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__valid_temp_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__yummy_out_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__down 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__yummy_out_f)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__valid_temp_f));
    if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f = 4U;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f = 4U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp)
            : 4U);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp)
            : 4U);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp)
            : 4U);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_plus_1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_minus_1 
        = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f) 
                 - (IData)(1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_sync__DOT__presyncdata_tmp;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo1_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo2_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo3_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wsync2))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)));
    vlSelfRef.__Vtableidx5 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_rsync2) 
                               << 5U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_wptr) 
                                          << 1U) | 
                                         (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo1_full 
        = Vcmp_top__ConstPool__TABLE_he5f5e051_0[vlSelfRef.__Vtableidx5];
    vlSelfRef.__Vtableidx6 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_rsync2) 
                               << 5U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_wptr) 
                                          << 1U) | 
                                         (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo2_full 
        = Vcmp_top__ConstPool__TABLE_he5f5e051_0[vlSelfRef.__Vtableidx6];
    vlSelfRef.__Vtableidx7 = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_rsync2) 
                               << 5U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_wptr) 
                                          << 1U) | 
                                         (1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo3_full 
        = Vcmp_top__ConstPool__TABLE_he5f5e051_0[vlSelfRef.__Vtableidx7];
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_3 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_1 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_2 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo1_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_1__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo2_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_2__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo3_empty 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_rptr) 
                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo_3__DOT__g_wsync2))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo_full 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f)) 
                 | (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wptr) 
                            >> 4U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rsync2) 
                                              >> 4U))) 
                    & (((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wptr) 
                               >> 3U)) != (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rsync2) 
                                                 >> 3U))) 
                       & ((7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_wptr)) 
                          == (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo__DOT__g_rsync2)))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT____Vcellinp__data__thanks_in 
        = ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo1_full)
                : (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f)))) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc1_c2v__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT____Vcellinp__data__thanks_in 
        = ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo2_full)
                : (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f)))) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc2_c2v__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT____Vcellinp__data__thanks_in 
        = ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo3_full)
                : (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f)))) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_to_intf_noc3_c2v__DOT__data__DOT__elements_in_array_f)));
    if (vlSelfRef.async_mux) {
        vlSelfRef.__VdfgRegularize_he50b618e_0_0 = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_3;
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_1;
        vlSelfRef.__VdfgRegularize_he50b618e_0_1 = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_network_val_2;
    } else {
        vlSelfRef.__VdfgRegularize_he50b618e_0_0 = 
            (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f));
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = 
            (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f));
        vlSelfRef.__VdfgRegularize_he50b618e_0_1 = 
            (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0 
        = (1U & (~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_credit_fifo_full)
                     : (0x10U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_sync__DOT__presyncdata_tmp 
        = vlSelfRef.sys_rst_n;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2 
        = ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0) 
           | (0x00ffU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__credit_3)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4 
        = ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_2) 
           | (0x00ffU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__credit_1)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3 
        = ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1) 
           | (0x00ffU == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__credit_2)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_6 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__is_two_or_more_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_5 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__is_two_or_more_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_4 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__is_two_or_more_f));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc1_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__is_two_or_more_f) 
           & ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo1_empty)
                   : (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f)))) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc2_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__is_two_or_more_f) 
           & ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo2_empty)
                   : (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f)))) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc3_valid 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__is_two_or_more_f) 
           & ((~ ((IData)(vlSelfRef.async_mux) ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__async_fifo3_empty)
                   : (0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f)))) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_0)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_1 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_5)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_4)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__credit_gather 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc3_valid) 
            << 2U) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc2_valid) 
                       << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__offchip_processor_noc1_valid)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_reg)
            : (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_1) 
                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2))
                ? 0U : (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3) 
                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2))
                         ? 1U : (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4) 
                                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2))
                                  ? 2U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_1)
                                           ? 3U : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_4)
                                                    ? 
                                                   ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_23)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_3)
                                                     ? 
                                                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_13)
                                                      ? 3U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT____VdfgRegularize_he42bacbf_0_2)
                                                      ? 
                                                     ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_12)
                                                       ? 2U
                                                       : 1U)
                                                      : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__sel_123)))))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_3 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f) 
           & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__credit_gather)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_1 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)) 
           & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_2 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)) 
           & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_3 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__separator__DOT__select_counter)) 
           & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__channel_to_serial_buffer)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____Vcellinp__async_credit_fifo__wval 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_3) 
           & (IData)(vlSelfRef.async_mux));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____Vcellinp__sync_credit_fifo__wval 
        = ((~ (IData)(vlSelfRef.async_mux)) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____VdfgRegularize_h02abded3_0_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((0U 
                                                  != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f)) 
                                                 & ((~ (IData)(vlSelfRef.async_mux)) 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_1)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((0U 
                                                  != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f)) 
                                                 & ((~ (IData)(vlSelfRef.async_mux)) 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((0U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f)) 
                                                & ((~ (IData)(vlSelfRef.async_mux)) 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_3)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__data_to_serial_buffer 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_1)
            ? ((IData)(vlSelfRef.async_mux) ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__fifo
               [(7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_1__DOT__b_rptr))]
                : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_mem_f
               [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_f])
            : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_2)
                ? ((IData)(vlSelfRef.async_mux) ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__fifo
                   [(7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_2__DOT__b_rptr))]
                    : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_mem_f
                   [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_f])
                : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__network_rdy_3)
                    ? ((IData)(vlSelfRef.async_mux)
                        ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__fifo
                       [(7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__async_fifo_3__DOT__b_rptr))]
                        : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_mem_f
                       [vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_f])
                    : 0ULL)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((0x10U 
                                                 != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f)) 
                                                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT____Vcellinp__sync_credit_fifo__wval));
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__rst_n_inter_sync_f) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_wr_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_wr_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_wr_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_wr_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_next 
            = (0x0000003fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_next 
            = (0x0000003fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_rd_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_rd_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_next 
            = (0x0000003fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_next 
            = (0x0000001fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_next 
            = (0x0000001fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_f) 
                     + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_next 
            = (0x0000001fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_wr_ptr_next 
            = (0x0000000fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_wr_ptr_f) 
                              + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_next 
            = (0x0000003fU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                               ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f)
                               : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                   ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f))
                                   : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_f) 
                                      - (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))));
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_1__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_2__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_fifo_3__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_1__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_2__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_rd_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_out__DOT__sync_fifo_3__DOT__sync_buf_counter_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_wr_ptr_next = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_intf__DOT__chip_fpga_in__DOT__sync_credit_fifo__DOT__sync_buf_counter_next = 0U;
    }
}

void Vcmp_top___024root___nba_comb__TOP__2(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__2\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions 
        = ((0x00004000U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q))
            ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__new_instructions
            : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_ctap_data0_sel 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q) 
            >> 0x0000000eU) & (9U == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_ctap_data0_sel)
            ? 1U : ((8U == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions))
                     ? 2U : ((0x0aU == (0x0000003fU 
                                        & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions))
                              ? 3U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel))));
}

void Vcmp_top___024root___nba_sequent__TOP__37(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__37\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_tap_state0__q 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync)) 
                 | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_tap_state)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q) 
            << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_tap_state0__q));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_tap_state 
        = ((((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
             | (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))) 
            | (((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                | (8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))) 
               | ((0x0010U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                  | ((0x0020U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                     | ((0x0040U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                        | (0x0080U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)))))))
            ? ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                    ? 1U : 2U) : ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                   ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                       ? 4U : 2U) : 
                                  ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                    ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                        ? 0x0200U : 8U)
                                    : ((8U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                        ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                            ? 0x0020U
                                            : 0x0010U)
                                        : ((0x0010U 
                                            == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                            ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                ? 0x0020U
                                                : 0x0010U)
                                            : ((0x0020U 
                                                == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                                ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                    ? 0x0100U
                                                    : 0x0040U)
                                                : (
                                                   (0x0040U 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                                    ? 
                                                   ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                     ? 0x0080U
                                                     : 0x0040U)
                                                    : 
                                                   ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                     ? 0x0100U
                                                     : 0x0010U))))))))
            : ((((0x0100U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                 | (0x0200U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))) 
                | (((0x0400U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                    | (0x0800U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))) 
                   | ((0x1000U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                      | ((0x2000U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                         | ((0x4000U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)) 
                            | (0x8000U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state)))))))
                ? ((0x0100U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                    ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                        ? 4U : 2U) : ((0x0200U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                       ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                           ? 1U : 0x0400U)
                                       : ((0x0400U 
                                           == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                           ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                               ? 0x1000U
                                               : 0x0800U)
                                           : ((0x0800U 
                                               == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                               ? ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                   ? 0x1000U
                                                   : 0x0800U)
                                               : ((0x1000U 
                                                   == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                                   ? 
                                                  ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                    ? 0x8000U
                                                    : 0x2000U)
                                                   : 
                                                  ((0x2000U 
                                                    == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                                    ? 
                                                   ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                     ? 0x4000U
                                                     : 0x2000U)
                                                    : 
                                                   ((0x4000U 
                                                     == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                      ? 0x8000U
                                                      : 0x0800U)
                                                     : 
                                                    ((IData)(vlSelfRef.cmp_top__DOT__jtag_modesel)
                                                      ? 4U
                                                      : 2U))))))))
                : 0U));
}

void Vcmp_top___024root___nba_comb__TOP__3(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__3\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_shift 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_scratch_sel) 
           & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q) 
              >> 3U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_load 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_scratch_sel) 
           & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q) 
              >> 2U));
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_shift) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U] 
            = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] 
                << 1U) | (IData)(vlSelfRef.cmp_top__DOT__jtag_datain));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U] 
            = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] 
                >> 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] 
                                   << 1U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U] 
            = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] 
                >> 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] 
                                   << 1U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U] 
            = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] 
                >> 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U] 
                                   << 1U));
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_load) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[3U];
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U];
    }
}

void Vcmp_top___024root___nba_comb__TOP__4(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__4\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_req_val_next = 0U;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_req_val) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_req_val_next = 0U;
    } else if ((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_ctap_reg_wr_en_d1) 
                 & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_ctap_reg_wr_en_sync))) 
                & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_req_val_next = 1U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__inst_wr_en = 0U;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_ctap_reg_wr_en_sync) {
        if ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__inst_wr_en = 1U;
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_req_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__inst_wr_en)
            ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U]
            : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_req);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__addr_wr_en = 0U;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_ctap_reg_wr_en_sync) {
        if ((3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__addr_wr_en = 1U;
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_address_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__addr_wr_en)
            ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U]
            : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__jtag_address);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_wr_en = 0U;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_ctap_reg_wr_en_sync) {
        if ((1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_wr_en = 1U;
        }
    }
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_wr_en) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[0U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[1U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[3U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U]))));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U]))) 
                       >> 0x00000020U));
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__capture_ucb_data_en) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__rtap_val) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ucb_rx__DOT__tiles_data[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ucb_rx__DOT__tiles_data[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ucb_rx__DOT__tiles_data[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ucb_rx__DOT__tiles_data[3U];
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[0U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[1U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[2U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[3U] = 0U;
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__capture_oram_response) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[0U] 
            = (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__oram_ctap_res_data);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[1U] 
            = (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__oram_ctap_res_data 
                       >> 0x00000020U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[2U] = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[3U] = 0U;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[0U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[1U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[2U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg_next[3U] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[3U];
    }
}

void Vcmp_top___024root___nba_comb__TOP__5(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__5\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index_next 
        = (0x000000ffU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_val)
                           ? ((IData)(2U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index))
                           : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index)));
}

void Vcmp_top___024root___nba_sequent__TOP__38(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__38\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__39(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__39\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__40(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__40\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__41(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__41\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__42(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__42\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__43(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__43\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__44(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__44\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__45(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__45\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__46(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__46\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__47(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__47\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__48(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__48\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__49(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__49\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__50(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__50\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__51(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__51\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__52(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__52\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__53(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__53\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__54(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__54\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__55(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__55\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__56(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__56\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__57(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__57\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__58(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__58\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__59(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__59\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__60(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__60\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__61(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__61\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__62(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__62\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp 
        = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp;
}

void Vcmp_top___024root___nba_sequent__TOP__63(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__63\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_sync__DOT__presyncdata_tmp;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_sync__DOT__presyncdata_tmp 
        = vlSelfRef.cmp_top__DOT__jtag_rst_l;
}

void Vcmp_top___024root___nba_sequent__TOP__64(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__64\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_f 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n;
}

void Vcmp_top___024root___nba_comb__TOP__10(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__10\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__valid_out) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__11(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__11\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__valid_out) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__12(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__12\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__valid_out) {
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__13(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__13\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__14(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__14\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__15(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__15\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__16(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__16\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__17(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__17\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__18(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__18\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__19(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__19\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f;
    vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
        = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f;
    if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__valid_out) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f)));
        }
    } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f)));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f) 
                     - (IData)(1U)));
    }
}

void Vcmp_top___024root___nba_comb__TOP__20(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_comb__TOP__20\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l 
        = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state_reset_negedge)) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync));
}

void Vcmp_top___024root___nba_sequent__TOP__0(Vcmp_top___024root* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__0(Vcmp_top_io_xbar_top_wrap* vlSelf);
void Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__0(Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1* vlSelf);
void Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__plic_master__0(Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1* vlSelf);
void Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__0(Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top___024root___act_sequent__TOP__0(Vcmp_top___024root* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__3(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top___024root___act_sequent__TOP__1(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___ico_comb__TOP__0(Vcmp_top___024root* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__1(Vcmp_top_io_xbar_top_wrap* vlSelf);
void Vcmp_top___024root___ico_comb__TOP__1(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___ico_comb__TOP__2(Vcmp_top___024root* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1(Vcmp_top_io_xbar_input_top_4* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top___024root___act_comb__TOP__2(Vcmp_top___024root* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10(Vcmp_top_io_xbar_output_top* vlSelf);
void Vcmp_top___024root___act_comb__TOP__3(Vcmp_top___024root* vlSelf);

void Vcmp_top___024root___eval_nba(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_nba\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcmp_top___024root___nba_sequent__TOP__0(vlSelf);
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3));
        Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2));
        Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__br_master));
        Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__plic_master__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__plic_master));
        Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__i_riscv_peripherals__DOT__dm_master));
        Vcmp_top___024root___nba_sequent__TOP__1(vlSelf);
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
    }
    if ((0x0000018000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__rtc_div 
            = vlSelfRef.cmp_top__DOT__system__DOT__rtc_div;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__rtc_div 
            = ((IData)(vlSelfRef.sys_rst_n) ? (0x0000007fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__rtc_div)))
                : 0U);
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x000000000000f800ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_f))))));
    }
    if ((0x0000000f80000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_f))))));
    }
    if ((0x000001f000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_f))))));
    }
    if ((0x000000000000007cULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_f))))));
    }
    if ((0x000000000001f000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_f))))));
    }
    if ((0x0000000007c00000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_f))))));
    }
    if ((0x0000001f00000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_f))))));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf000000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered
                                                   [0U]))) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_f))))));
    }
    if ((0x000000000000003eULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_f))))));
    }
    if ((0x00000000000007c0ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_f))))));
    }
    if ((0x00000000001f0000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_f))))));
    }
    if ((0x0000000003e00000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_f))))));
    }
    if ((0x000000007c000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_f))))));
    }
    if ((0x00003e0000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_f))))));
    }
    if ((0x0007c00000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_f))))));
    }
    if ((0x00f8000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_f))))));
    }
    if ((0x1f00000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_f))))));
    }
    if (((0xe000000000000000ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (3ULL & vlSelfRef.__VnbaTriggered
                   [2U]))) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_f))))));
    }
    if ((0x0000000000000f80ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_f))))));
    }
    if ((0x00000000003e0000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_f))))));
    }
    if ((0x00000000f8000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_f))))));
    }
    if ((0x000003e000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_f))))));
    }
    if ((0x0000000f80000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
    }
    if ((0x000007c000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
    }
    if ((0x0003e00000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
    }
    if ((0x01f0000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
    }
    if ((0x000000000000007cULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
    }
    if ((0x000000000f800000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
    }
    if ((0x00000000003e0000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
    }
    if ((0x0000000000003e00ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
    }
    if ((0x00000000001f0000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
    }
    if ((0x03e0000000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
    }
    if ((0x0000000000007c00ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
    }
    if ((0x000000001f000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
    }
    if ((0x0007c00000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[3U]) | (0xf000000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered
                                                   [2U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
    }
    if ((0xf800000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
    }
    if ((0x00000000000000f8ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
    }
    if ((0x00000000e0000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
    }
    if ((0x0000000000038000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
    }
    if ((0x0000007000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
    }
    if ((0x0000380000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
    }
    if ((0x001c000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
    }
    if ((0x0000000000e00000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
    }
    if ((0x0038000000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
    }
    if ((0x0000000000000700ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
    }
    if ((0x0000000001c00000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
    }
    if ((0x0000000000000380ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
    }
    if ((0x000000000001c000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
    }
    if ((0x0000700000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
    }
    if ((0x1c00000000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
    }
    if ((0x0e00000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
    }
    if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
    }
    if ((0x000003e001000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((0x00000007c0020000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((0x003e001000000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x00000000000001f0ULL & vlSelfRef.__VnbaTriggered
          [9U]) | (0x0080000000000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((0x000000000f800400ULL & vlSelfRef.__VnbaTriggered
         [9U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x000000001f000800ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x1f00080000000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x000000000000f800ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if (((0x00000000000003e0ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0100000000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000f80040000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if (((0xc002000000000000ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (7ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((0x00000000003e0010ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((0x000001f000800000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0f80040000000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if ((0x007c000020000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x00000000007c0000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x2000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((0x00003e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_f))))));
    }
    if ((0x0007c00000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_f))))));
    }
    if ((0x00f8000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp;
        vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp 
            = (7U & ((0U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                      ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__up)
                          ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                          : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                      : ((4U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                          ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__down)
                              ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f) 
                                 - (IData)(1U)) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                          : ((2U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__up) 
                                      << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__down)))
                              ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))
                              : ((1U == (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__up) 
                                          << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__down)))
                                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f) 
                                     - (IData)(1U))
                                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_f))))));
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__ok_iob = 1U;
    }
    if ((0x0a00000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_instructions0__q 
            = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l)) 
                     | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_instructions__q 
            = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l)
                ? (0x0001ffffU & ((- (IData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l))) 
                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions 
                                     >> 1U))) : 0U);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions 
            = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_instructions__q 
                << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_instructions0__q));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_scratch_sel 
            = ((8U == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions)) 
               | ((9U == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions)) 
                  | (0x0aU == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions))));
    }
    if ((0x0500000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_new_instructions0__q 
            = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync)) 
                     | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_new_instructions));
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q 
                = (0x0001ffffU & ((- (IData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync))) 
                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_new_instructions 
                                     >> 1U)));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q 
                = (0x00007fffU & ((- (IData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync))) 
                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_tap_state) 
                                     >> 1U)));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q = 0U;
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__new_instructions 
            = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q 
                << 1U) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_new_instructions0__q));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__next_new_instructions 
            = ((0x00000200U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q))
                ? 1U : ((0x00000400U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q))
                         ? (((IData)(vlSelfRef.cmp_top__DOT__jtag_datain) 
                             << 0x00000011U) | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_new_instructions__q)
                         : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__new_instructions));
    }
    if ((0x0200000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state_reset_negedge 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffsl_tap_state0__q;
    }
    if ((0x0100000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel_next;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U] = 0U;
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel = 0U;
        }
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x00000000ff800000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000000001ff0000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((0x00000ff800000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if ((0x7fc0000000000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((0x000000000003fe00ULL & vlSelfRef.__VnbaTriggered
         [9U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x000000000007fc00ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x0007fc0000000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((0xe000000000000000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x000000000000003fULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if ((0xff80000000000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000003fe0000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if ((0x01ff000000000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((0x0000000000000ff8ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((0x000000007fc00000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0003fe0000000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0000001ff0000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x000000000000001fULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0xf000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((0x0000000001000400ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x0000002000800000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000000040010000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((0x0002000800000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
          [9U]) | (0x0040000000000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0000000000800200ULL & vlSelfRef.__VnbaTriggered
         [9U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0100040000000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if ((0x0004000010000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0080000000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000080020000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if ((0x4001000000000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((0x0000000000020008ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((0x0000001000400000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0080020000000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if (((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x1000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((0x000000e001000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((0x00000001c0020000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((0x000e001000000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x0000000000000070ULL & vlSelfRef.__VnbaTriggered
          [9U]) | (0x0080000000000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0000000003800400ULL & vlSelfRef.__VnbaTriggered
         [9U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0000000007000800ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x0700080000000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000000000003800ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if (((0x00000000000000e0ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0100000000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000380040000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if (((0xc002000000000000ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (1ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((0x00000000000e0010ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((0x0000007000800000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0380040000000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if ((0x001c000020000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x00000000001c0000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x2000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((0x000003e000000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if ((0x000000000000001fULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000000000f80000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x000007c000000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if ((0x3e00000000000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((0x000000000001f000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((0x0000000f80000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if ((0x007c000000000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if ((0x00000000000003e0ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((0x0000001f00000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((0x00f8000000000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if ((0x00000000000007c0ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if ((0x000000003e000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((0x0001f00000000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x000000000000000fULL & vlSelfRef.__VnbaTriggered
          [9U]) | (0x8000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((0x00000000007c0000ULL & vlSelfRef.__VnbaTriggered
         [9U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0000018000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__rtc_div 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__rtc_div;
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000009000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcmp_top___024root___nba_sequent__TOP__36(vlSelf);
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0000004000800000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000000080010000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((0x0004000800000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
          [9U]) | (0x0040000000000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0000000001000200ULL & vlSelfRef.__VnbaTriggered
         [9U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0000000002000400ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x0200040000000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if (((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0080000000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000100020000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if ((0x8001000000000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((0x0000000000040008ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((0x0000002000400000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0100020000000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0008000010000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x1000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((0x0f00000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions 
            = ((0x00004000U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q))
                ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__new_instructions
                : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_instructions);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_ctap_data0_sel 
            = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q) 
                >> 0x0000000eU) & (9U == (0x0000003fU 
                                          & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel_next 
            = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_ctap_data0_sel)
                ? 1U : ((8U == (0x0000003fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions))
                         ? 2U : ((0x0aU == (0x0000003fU 
                                            & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__next_tap_instructions))
                                  ? 3U : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__ctap_reg_sel))));
    }
    if ((0x0500000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcmp_top___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((0x0f00008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_shift 
            = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_scratch_sel) 
               & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q) 
                  >> 3U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_load 
            = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__tap_scratch_sel) 
               & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT____Vcellout__u_dffrl_async_tap_state__q) 
                  >> 2U));
        if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_shift) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U] 
                = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] 
                    << 1U) | (IData)(vlSelfRef.cmp_top__DOT__jtag_datain));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U] 
                = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U] 
                    >> 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] 
                                       << 1U));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U] 
                = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U] 
                    >> 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] 
                                       << 1U));
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U] 
                = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U] 
                    >> 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U] 
                                       << 1U));
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_load) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__ctap__DOT__data_reg[3U];
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[0U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[0U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[1U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[1U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[2U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[2U];
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg_next[3U] 
                = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__scratch_reg[3U];
        }
    }
    if ((0x0100008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcmp_top___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index_next 
            = (0x000000ffU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__iob_buffer_val)
                               ? ((IData)(2U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index))
                               : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__ciop_fake_iob__DOT__out_write_index)));
    }
    if ((0x000000000083fc00ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if (((0x000000000003fc00ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if (((0x000000000003fc00ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000000800000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x000000000003fc00ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0040000000000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if (((0x000000000003fc00ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
                   [9U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if (((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0003fc0000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x000004000003fc00ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if ((0x200000000003fc00ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if ((0x0083fc0000000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if (((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0003fc0000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if (((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0003fc0000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if (((8ULL & vlSelfRef.__VnbaTriggered[6U]) | (0x0003fc0000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered
                                                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if (((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered
          [6U]) | (0x0003fc0000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if (((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered
          [6U]) | (0x0003fc0000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if ((0x0003fc0010000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x000000000003fc00ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x1000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x000000a000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000f800ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc1_v2c__DOT__count_temp;
    }
    if ((0x0000000f80000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_chip_to_xbar__DOT__count_temp;
    }
    if ((0x000001f000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_mem_to_xbar__DOT__count_temp;
    }
    if ((0x000000000000007cULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_debug_to_xbar__DOT__count_temp;
    }
    if ((0x000000000001f000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_bootrom_to_xbar__DOT__count_temp;
    }
    if ((0x0000000007c00000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_clint_to_xbar__DOT__count_temp;
    }
    if ((0x0000001f00000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_ariane_plic_to_xbar__DOT__count_temp;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf000000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered
                                                   [0U]))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc1_v2c__DOT__count_temp;
    }
    if ((0x000000000000003eULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc2_v2c__DOT__count_temp;
    }
    if ((0x00000000000007c0ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__processor_offchip_noc3_v2c__DOT__count_temp;
    }
    if ((0x00000000001f0000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_v2c__DOT__count_temp;
    }
    if ((0x0000000003e00000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_v2c__DOT__count_temp;
    }
    if ((0x000000007c000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_chip_to_xbar__DOT__count_temp;
    }
    if ((0x00003e0000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_mem_to_xbar__DOT__count_temp;
    }
    if ((0x0007c00000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_iob_to_xbar__DOT__count_temp;
    }
    if ((0x00f8000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_iob_to_xbar__DOT__count_temp;
    }
    if ((0x1f00000000000000ULL & vlSelfRef.__VnbaTriggered
         [1U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_uart_to_xbar__DOT__count_temp;
    }
    if (((0xe000000000000000ULL & vlSelfRef.__VnbaTriggered
          [1U]) | (3ULL & vlSelfRef.__VnbaTriggered
                   [2U]))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_uart_to_xbar__DOT__count_temp;
    }
    if ((0x0000000000000f80ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_debug_to_xbar__DOT__count_temp;
    }
    if ((0x00000000003e0000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_bootrom_to_xbar__DOT__count_temp;
    }
    if ((0x00000000f8000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_clint_to_xbar__DOT__count_temp;
    }
    if ((0x000003e000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_ariane_plic_to_xbar__DOT__count_temp;
    }
    if ((0x00003e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc1_v2c__DOT__count_temp;
    }
    if ((0x0007c00000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc2_v2c__DOT__count_temp;
    }
    if ((0x00f8000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp 
            = vlSelfRef.__Vdly__cmp_top__DOT__system__DOT__chip__DOT__chip_from_intf_noc3_v2c__DOT__count_temp;
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x000000800003ffffULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x0000000f80000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
    }
    if ((((0x4001080021000420ULL & vlSelfRef.__VnbaTriggered
           [5U]) | (0x0080021000420008ULL & vlSelfRef.__VnbaTriggered
                    [6U])) | (0x0084000010000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [4U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
    }
    if ((0x00000000e0000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
    }
    if ((0x000007c000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
    }
    if (((((0x2100042000840000ULL & vlSelfRef.__VnbaTriggered
            [7U]) | (0x0000000000800210ULL & vlSelfRef.__VnbaTriggered
                     [9U])) | (0x1000000000000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [6U])) | (0x0042000840010800ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [8U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
    }
    if ((0x0000007000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
    }
    if ((0x0003e00000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
    }
    if ((0x0000380000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
    }
    if ((0x01f0000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
    }
    if ((0x001c000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
    }
    if ((0x000000000000007cULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
    }
    if ((0x000000000f800000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
    }
    if ((0x0000000000e00000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
    }
    if ((0x00000000003e0000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
    }
    if ((0x0000000000038000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
    }
    if ((0x0000000000003e00ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
    }
    if ((0x0000000000000380ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
    }
    if ((0x00000000001f0000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
    }
    if ((0x000000000001c000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
    }
    if ((0x03e0000000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
    }
    if ((0x0038000000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
    }
    if ((0x0000000000007c00ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
    }
    if ((0x0000000000000700ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
    }
    if ((0x000000001f000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
    }
    if ((0x0000000001c00000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
    }
    if ((0x0007c00000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
    }
    if ((0x0000700000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[3U]) | (0xf000000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered
                                                   [2U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
    }
    if ((0x1c00000000000000ULL & vlSelfRef.__VnbaTriggered
         [2U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
    }
    if ((0xf800000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
    }
    if ((0x0e00000000000000ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
    }
    if ((0x00000000000000f8ULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
    }
    if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered
         [3U])) {
        Vcmp_top_io_xbar_input_top_4___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_sync__DOT__presyncdata_tmp;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_sync__DOT__presyncdata_tmp 
            = vlSelfRef.cmp_top__DOT__jtag_rst_l;
        Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2));
        Vcmp_top_io_xbar_top_wrap___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_ff 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n_f 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_rst_n;
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008ff803ffffULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008007ffffffULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if (((((0x4001080021000420ULL & vlSelfRef.__VnbaTriggered
            [5U]) | (0x0080021000420008ULL & vlSelfRef.__VnbaTriggered
                     [6U])) | (0x0084000010000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [4U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
    }
    if (((0x00000000e0000000ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if ((((((0x2100042000840000ULL & vlSelfRef.__VnbaTriggered
             [7U]) | (0x0000000000800210ULL & vlSelfRef.__VnbaTriggered
                      [9U])) | (0x1000000000000000ULL 
                                & vlSelfRef.__VnbaTriggered
                                [6U])) | (0x0042000840010800ULL 
                                          & vlSelfRef.__VnbaTriggered
                                          [8U])) | 
         (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
          [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
    }
    if (((0x0000007000000000ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__0((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if (((0x0000380000000000ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if (((0x001c000000000000ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if (((7ULL & vlSelfRef.__VnbaTriggered[4U]) | (0x0000008000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered
                                                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if (((0x0000000000e00000ULL & vlSelfRef.__VnbaTriggered
          [4U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if (((0x0000000000038000ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__1((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output.__PVT__valid_out) {
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_iob__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x0000000000000380ULL & vlSelfRef.__VnbaTriggered
          [4U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output.__PVT__valid_out) {
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_iob__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x000000000001c000ULL & vlSelfRef.__VnbaTriggered
          [4U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output.__PVT__valid_out) {
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_uart__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x0038000000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_bootrom__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x0000000000000700ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__3((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_mem__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x0000000001c00000ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__4((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_uart__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x0000700000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__5((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_debug__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x1c00000000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__6((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_clint__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x0e00000000000000ULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc3_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc3_xbar_to_chip__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if (((0x000000000000000eULL & vlSelfRef.__VnbaTriggered
          [3U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_input_top_4___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_input__2((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_input));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output__7((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__offchip_processor_noc2_valid) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_chip__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f;
        vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
            = vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f;
        if (vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output.__PVT__valid_out) {
            if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f)));
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f)));
            } else {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__tail_ptr_f)));
            }
            if ((1U & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in)))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f)));
            }
        } else if (vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT____Vcellinp__data__thanks_in) {
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_next 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__head_ptr_f)));
            vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_next 
                = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__noc2_xbar_to_ariane_plic__DOT__data__DOT__elements_in_array_f) 
                         - (IData)(1U)));
        }
    }
    if ((0x000003e001000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if (((0x000000e0ff800000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((0x00000007c0020000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if (((0x00000001c1ff0000ULL & vlSelfRef.__VnbaTriggered
          [8U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((0x003e001000000000ULL & vlSelfRef.__VnbaTriggered
         [8U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x000e0ff800000000ULL & vlSelfRef.__VnbaTriggered
          [8U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((0x00000000000001f0ULL & vlSelfRef.__VnbaTriggered
          [9U]) | (0x0080000000000000ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((((0x0000000000000070ULL & vlSelfRef.__VnbaTriggered
           [9U]) | (0x7fc0000000000000ULL & vlSelfRef.__VnbaTriggered
                    [8U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((0x000000000f800400ULL & vlSelfRef.__VnbaTriggered
         [9U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if (((0x000000000383fe00ULL & vlSelfRef.__VnbaTriggered
          [9U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if ((0x000000001f000800ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if (((0x000000000707fc00ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((0x1f00080000000000ULL & vlSelfRef.__VnbaTriggered
         [7U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((0x0707fc0000000000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x000000000000f800ULL & vlSelfRef.__VnbaTriggered
                   [8U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if ((((0xe000000000000000ULL & vlSelfRef.__VnbaTriggered
           [7U]) | (0x000000000000383fULL & vlSelfRef.__VnbaTriggered
                    [8U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if (((0x00000000000003e0ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0100000000000000ULL & vlSelfRef.__VnbaTriggered
                   [4U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((((0x00000000000000e0ULL & vlSelfRef.__VnbaTriggered
           [5U]) | (0xff80000000000000ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((0x0000f80040000000ULL & vlSelfRef.__VnbaTriggered
         [5U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if (((0x0000383fe0000000ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if (((0xc002000000000000ULL & vlSelfRef.__VnbaTriggered
          [5U]) | (7ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((((0xc1ff000000000000ULL & vlSelfRef.__VnbaTriggered
           [5U]) | (1ULL & vlSelfRef.__VnbaTriggered
                    [6U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((0x00000000003e0010ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if (((0x00000000000e0ff8ULL & vlSelfRef.__VnbaTriggered
          [6U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((0x000001f000800000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if (((0x000000707fc00000ULL & vlSelfRef.__VnbaTriggered
          [6U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if ((0x0f80040000000000ULL & vlSelfRef.__VnbaTriggered
         [6U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if (((0x0383fe0000000000ULL & vlSelfRef.__VnbaTriggered
          [6U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if ((0x007c000020000000ULL & vlSelfRef.__VnbaTriggered
         [4U])) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x001c001ff0000000ULL & vlSelfRef.__VnbaTriggered
          [4U]) | (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if (((0x00000000007c0000ULL & vlSelfRef.__VnbaTriggered
          [7U]) | (0x2000000000000000ULL & vlSelfRef.__VnbaTriggered
                   [6U]))) {
        Vcmp_top_io_xbar_output_top___nba_sequent__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((((0x00000000001c001fULL & vlSelfRef.__VnbaTriggered
           [7U]) | (0xf000000000000000ULL & vlSelfRef.__VnbaTriggered
                    [6U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__8((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((0x0200008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__instructions_rst_l 
            = ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_port__DOT__jtag_interface__DOT__u_tap_controller__DOT__tap_state_reset_negedge)) 
               & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__jtag_rst_l_inter_sync));
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x0000008fffffffffULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___act_comb__TOP__2(vlSelf);
    }
    if ((((0x001c387000000000ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0000000000e1c387ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((((0x00000000e1c38700ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x1c38700000000000ULL & vlSelfRef.__VnbaTriggered
                    [2U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if ((((((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
             [7U]) | (0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
                      [3U])) | (0x1000000000000000ULL 
                                & vlSelfRef.__VnbaTriggered
                                [6U])) | (0x0000000000e1c387ULL 
                                          & vlSelfRef.__VnbaTriggered
                                          [4U])) | 
         (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
          [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_0_output));
    }
    if ((((0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0000000000e1c380ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if (((((0x0000004000800000ULL & vlSelfRef.__VnbaTriggered
            [7U]) | (0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
                     [3U])) | (0x0000000000e1c387ULL 
                               & vlSelfRef.__VnbaTriggered
                               [4U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_1_output));
    }
    if ((((0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0000000000e1c007ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if (((((0x0200040000000000ULL & vlSelfRef.__VnbaTriggered
            [7U]) | (0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
                     [3U])) | (0x0000000000e1c387ULL 
                               & vlSelfRef.__VnbaTriggered
                               [4U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_2_output));
    }
    if ((((0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0000000000e00387ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if ((((((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered
             [7U]) | (0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
                      [3U])) | (0x0000000000e1c387ULL 
                                & vlSelfRef.__VnbaTriggered
                                [4U])) | (0x0000000000001000ULL 
                                          & vlSelfRef.__VnbaTriggered
                                          [8U])) | 
         (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
          [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_3_output));
    }
    if ((((0x0e1c380000000000ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0000000000e1c387ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if (((((0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0000000000e1c387ULL & vlSelfRef.__VnbaTriggered
                     [4U])) | (0x0000000080010000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [8U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_4_output));
    }
    if ((((0x0e1c007000000000ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0000000000e1c387ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if (((((0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0000000000e1c387ULL & vlSelfRef.__VnbaTriggered
                     [4U])) | (0x0004000800000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [8U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_5_output));
    }
    if ((((0x0e00387000000000ULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0000000000e1c387ULL & vlSelfRef.__VnbaTriggered
                    [4U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if ((((((0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
             [3U]) | (0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
                      [9U])) | (0x0000000000e1c387ULL 
                                & vlSelfRef.__VnbaTriggered
                                [4U])) | (0x0040000000000000ULL 
                                          & vlSelfRef.__VnbaTriggered
                                          [8U])) | 
         (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
          [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_6_output));
    }
    if (((((0x0e1c387000000000ULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0000000001000200ULL & vlSelfRef.__VnbaTriggered
                     [9U])) | (0x0000000000e1c387ULL 
                               & vlSelfRef.__VnbaTriggered
                               [4U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc3__io_xbar_top__DOT__node_7_output));
    }
    if (((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x1c38700000000000ULL & vlSelfRef.__VnbaTriggered
                     [2U])) | (0x0008000010000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [4U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output));
    }
    if ((((0x00000000e1c3800eULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x1c38700000000000ULL & vlSelfRef.__VnbaTriggered
                    [2U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
             [3U]) | (0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
                      [5U])) | (0x1c38700000000000ULL 
                                & vlSelfRef.__VnbaTriggered
                                [2U])) | (0x0080000000000000ULL 
                                          & vlSelfRef.__VnbaTriggered
                                          [4U])) | 
         (0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
          [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_1_output));
    }
    if ((((0x00000000e1c0070eULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x1c38700000000000ULL & vlSelfRef.__VnbaTriggered
                    [2U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if (((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0000000002000400ULL & vlSelfRef.__VnbaTriggered
                     [5U])) | (0x1c38700000000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [2U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_2_output));
    }
    if ((((0x00000000e003870eULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x1c38700000000000ULL & vlSelfRef.__VnbaTriggered
                    [2U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if (((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0000100020000000ULL & vlSelfRef.__VnbaTriggered
                     [5U])) | (0x1c38700000000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [2U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_3_output));
    }
    if ((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x1c38000000000000ULL & vlSelfRef.__VnbaTriggered
                    [2U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if (((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x8001000000000000ULL & vlSelfRef.__VnbaTriggered
                     [5U])) | (0x1c38700000000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [2U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_4_output));
    }
    if ((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x1c00700000000000ULL & vlSelfRef.__VnbaTriggered
                    [2U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if (((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0000000000040008ULL & vlSelfRef.__VnbaTriggered
                     [6U])) | (0x1c38700000000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [2U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_5_output));
    }
    if ((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
           [3U]) | (0x0038700000000000ULL & vlSelfRef.__VnbaTriggered
                    [2U])) | (0x0000008000000000ULL 
                              & vlSelfRef.__VnbaTriggered
                              [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__9((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if (((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0000002000400000ULL & vlSelfRef.__VnbaTriggered
                     [6U])) | (0x1c38700000000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [2U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_6_output));
    }
    if (((((0x00000000e1c3870eULL & vlSelfRef.__VnbaTriggered
            [3U]) | (0x0100020000000000ULL & vlSelfRef.__VnbaTriggered
                     [6U])) | (0x1c38700000000000ULL 
                               & vlSelfRef.__VnbaTriggered
                               [2U])) | (0x0000008000000000ULL 
                                         & vlSelfRef.__VnbaTriggered
                                         [0U]))) {
        Vcmp_top_io_xbar_output_top___nba_comb__TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_0_output__10((&vlSymsp->TOP__cmp_top__DOT__system__DOT__chipset__DOT__chipset_impl__DOT__io_xbar_noc2__io_xbar_top__DOT__node_7_output));
    }
    if (((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
          [2U]) | (0x000000afffffffffULL & vlSelfRef.__VnbaTriggered
                   [0U]))) {
        Vcmp_top___024root___act_comb__TOP__3(vlSelf);
    }
}

void Vcmp_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 10> &out, const VlUnpacked<QData/*63:0*/, 10> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0x0000000aU > n));
}

void Vcmp_top___024root___eval_triggers__act(Vcmp_top___024root* vlSelf);
bool Vcmp_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 10> &in);
void Vcmp_top___024root___eval_act(Vcmp_top___024root* vlSelf);

bool Vcmp_top___024root___eval_phase__act(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__act\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcmp_top___024root___eval_triggers__act(vlSelf);
    Vcmp_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcmp_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcmp_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vcmp_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 10> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((0x0000000aU > n));
}

bool Vcmp_top___024root___eval_phase__nba(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__nba\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcmp_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcmp_top___024root___eval_nba(vlSelf);
        Vcmp_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcmp_top___024root___eval_phase__ico(Vcmp_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 10> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcmp_top___024root___eval(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcmp_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v", 46, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vcmp_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcmp_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v", 46, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcmp_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v", 46, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcmp_top___024root___eval_phase__act(vlSelf));
    } while (Vcmp_top___024root___eval_phase__nba(vlSelf));
}
