// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top___024root___stl_comb__TOP__13(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_comb__TOP__13\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_141;
    __VdfgRegularize_h6e95ff9d_0_141 = 0;
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__is_message_new_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2_data_ack) 
           | ((~ ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s1)) 
                  & ((2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_409)))) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__is_message_new)));
    __VdfgRegularize_h6e95ff9d_0_141 = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lruarray_read_val_s1) 
                                        & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s2_next 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__stall_s2)
            ? (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s2)
            : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lruarray_read_val_s1));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__en_i 
        = (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__l15_lruarray_read_val_s1) 
            & (1U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1))) 
           | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_408) 
               & (2U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__pcx_ack_stage_s2))) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_407) 
                 & (3U == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__pcx_ack_stage_s3)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve_next 
        = (0x0000000fU & (((~ (IData)(__VdfgRegularize_h6e95ff9d_0_141)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_421))
                           ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve))
                           : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve) 
                              - ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_421)) 
                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_141)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__en_i) 
           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__req));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__req))
                  ? ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)) 
                     | ((1U > (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)) 
                        & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
                           >> 1U))) : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_icache_data_fifo__pop_i 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i) 
           & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__arb_idx)) 
              & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i 
        = ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT____Vcellinp__i_rr_arb_tree__gnt_i) 
           & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rrarbiter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_d) 
               >> 1U) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__arb_idx)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = (1U & (((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_icache_data_fifo__pop_i))
                  ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))
                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = (1U & (((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i))
                  ? ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q))
                  : (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
}

extern const VlWide<12>/*383:0*/ Vcmp_top__ConstPool__CONST_h1ba4b964_0;
extern const VlWide<10>/*319:0*/ Vcmp_top__ConstPool__CONST_h3c9d8e9d_0;

VL_ATTR_COLD void Vcmp_top___024root___stl_comb__TOP__15(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_comb__TOP__15\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rd;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rd = 0;
    VlWide<4>/*127:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o;
    VL_ZERO_W(128, cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o);
    VlWide<6>/*191:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o;
    VL_ZERO_W(192, cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o);
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[0U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[1U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[1U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[1U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[2U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[1U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[2U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[2U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[3U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[2U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[3U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[3U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[4U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[3U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[4U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[4U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[5U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[4U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[5U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[5U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[5U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[6U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[7U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[7U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[7U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[7U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[8U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[9U] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000aU] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[0x0000000aU] 
           & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000bU] 
               << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000aU] 
                                  >> 1U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU] 
        = (Vcmp_top__ConstPool__CONST_h1ba4b964_0[0x0000000bU] 
           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000bU] 
              >> 1U));
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_instr_issue_id) 
         & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flush_unissued_instr_ctrl_id)))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_is_rd_fpr__4__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if ((((((((((0x51U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                    && (0x54U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                   || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                       && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                                  || (0x64U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                 || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                               || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                              || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                  && (0x6fU >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                             || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))))) {
                            vlSelfRef.__Vfunc_is_rd_fpr__4__Vfuncout = 1U;
                            goto __Vlabel0;
                        } else {
                            vlSelfRef.__Vfunc_is_rd_fpr__4__Vfuncout = 0U;
                            goto __Vlabel0;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x76U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                                   << 3U) 
                                                                  | (((0x6bU 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                      & (0x6fU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                                     << 2U)) 
                                                                 | (((0x68U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                     << 1U) 
                                                                    | (0x66U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                                                                << 4U) 
                                                               | ((((0x65U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                    << 3U) 
                                                                   | ((0x64U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                      << 2U)) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                                      << 1U) 
                                                                     | ((0x51U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                                        & (0x54U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))))))))))) {
                            if ((0U != (((((((0x76U 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                            << 3U) 
                                           | (((0x6bU 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                               & (0x6fU 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                              << 2U)) 
                                          | (((0x68U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                              << 1U) 
                                             | (0x66U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))) 
                                         << 4U) | (
                                                   (((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op)))))))) {
                                if (vlSymsp->_vm_contextp__->assertOn()) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                }
                            }
                        }
                        __Vlabel0: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__4__Vfuncout))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000000aU)))) 
                    & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n) 
                   | (0x00000000ffffffffULL & ((1U 
                                                & (~ 
                                                   (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                                                    >> 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                        >> 0x0000000aU))))) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                      >> 0x0000000aU)))));
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000000aU)))) 
                    & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n) 
                   | (0x00000000ffffffffULL & ((1U 
                                                & (~ 
                                                   (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                                                    >> 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                        >> 0x0000000aU))))) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                      >> 0x0000000aU)))));
        }
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs1 
        = (1U & (([&]() {
                    vlSelfRef.__Vfunc_is_rs1_fpr__5__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                    && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                   || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                  || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                 || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                               || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                              || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))))) {
                            vlSelfRef.__Vfunc_is_rs1_fpr__5__Vfuncout = 1U;
                            goto __Vlabel1;
                        } else {
                            vlSelfRef.__Vfunc_is_rs1_fpr__5__Vfuncout = 0U;
                            goto __Vlabel1;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                                                   << 3U) 
                                                                  | ((0x6aU 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                     << 2U)) 
                                                                 | (((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                     << 1U) 
                                                                    | (0x67U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))) 
                                                                << 4U) 
                                                               | ((((0x66U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                    << 3U) 
                                                                   | ((0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                      << 2U)) 
                                                                  | (((0x63U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                      << 1U) 
                                                                     | ((0x5bU 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                                        & (0x62U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op))) 
                                            << 3U) 
                                           | ((0x6aU 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                              << 2U)) 
                                          | (((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                              << 1U) 
                                             | (0x67U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))) 
                                         << 4U) | (
                                                   (((0x66U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                     << 3U) 
                                                    | ((0x65U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                       << 2U)) 
                                                   | (((0x63U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                       << 1U) 
                                                      | ((0x5bU 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)) 
                                                         & (0x62U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                }
                            }
                        }
                        __Vlabel1: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__5__Vfuncout))
                  ? (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000016U)))
                  : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000016U)))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rs2 
        = (1U & (([&]() {
                    vlSelfRef.__Vfunc_is_rs2_fpr__6__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                   && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                  || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                      && (0x5dU >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                 || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                     && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                               || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                   && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                              || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))))) {
                            vlSelfRef.__Vfunc_is_rs2_fpr__6__Vfuncout = 1U;
                            goto __Vlabel2;
                        } else {
                            vlSelfRef.__Vfunc_is_rs2_fpr__6__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                   << 3U) 
                                                                  | ((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                     << 2U)) 
                                                                 | ((((0x66U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                      & (0x67U 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                     << 1U) 
                                                                    | (0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                                                << 3U) 
                                                               | ((((0x5fU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                   << 2U) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                       & (0x5dU 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                                      << 1U) 
                                                                     | ((0x55U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                                        & (0x58U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                            << 3U) 
                                           | ((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                              << 2U)) 
                                          | ((((0x66U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                               & (0x67U 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                              << 1U) 
                                             | (0x65U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))) 
                                         << 3U) | (
                                                   (((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                    << 2U) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                        & (0x5dU 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op))) 
                                                       << 1U) 
                                                      | ((0x55U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)) 
                                                         & (0x58U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                }
                            }
                        }
                        __Vlabel2: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__6__Vfuncout))
                  ? (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000010U)))
                  : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                     >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                        >> 0x00000010U)))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__unnamedblk1__DOT__name_bit_rd 
        = (1U & (([&]() {
                    vlSelfRef.__Vfunc_is_rd_fpr__7__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                           << 4U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000001cU)));
                    {
                        if ((((((((((0x51U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                    && (0x54U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                   || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                       && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                                  || (0x64U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                 || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                               || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                              || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                  && (0x6fU >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                             || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))))) {
                            vlSelfRef.__Vfunc_is_rd_fpr__7__Vfuncout = 1U;
                            goto __Vlabel3;
                        } else {
                            vlSelfRef.__Vfunc_is_rd_fpr__7__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x76U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                                   << 3U) 
                                                                  | (((0x6bU 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                      & (0x6fU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                                     << 2U)) 
                                                                 | (((0x68U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                     << 1U) 
                                                                    | (0x66U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                                                                << 4U) 
                                                               | ((((0x65U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                    << 3U) 
                                                                   | ((0x64U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                      << 2U)) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                                      << 1U) 
                                                                     | ((0x51U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                                        & (0x54U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))))))))))) {
                            if ((0U != (((((((0x76U 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                            << 3U) 
                                           | (((0x6bU 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                               & (0x6fU 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                              << 2U)) 
                                          | (((0x68U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                              << 1U) 
                                             | (0x66U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))) 
                                         << 4U) | (
                                                   (((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                }
                            }
                        }
                        __Vlabel3: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__7__Vfuncout))
                  ? (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_q 
                        >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                           >> 0x0000000aU))))
                  : ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_q 
                      >> (0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                         >> 0x0000000aU))) 
                     ^ (0U != (0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                              >> 0x0000000aU))))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = ((0xf81fffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
           | (0x07e00000U & ((IData)((QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                         >> 0x00000016U))))) 
                             << 0x00000015U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = ((0xffe07fffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
           | (0x001f8000U & ((IData)((QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                         >> 0x00000010U))))) 
                             << 0x0000000fU)));
    if (([&]() {
                vlSelfRef.__Vfunc_is_imm_fpr__8__op 
                    = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[9U] 
                                       << 4U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                 >> 0x0000001cU)));
                {
                    if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                           && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                          || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                              && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)))) 
                         || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                             && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))))) {
                        vlSelfRef.__Vfunc_is_imm_fpr__8__Vfuncout = 1U;
                        goto __Vlabel4;
                    } else {
                        vlSelfRef.__Vfunc_is_imm_fpr__8__Vfuncout = 0U;
                        goto __Vlabel4;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          ((((0x76U 
                                                              <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                             & (0x79U 
                                                                >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                                            << 2U) 
                                                           | ((((0x5fU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                                & (0x62U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                                               << 1U) 
                                                              | ((0x59U 
                                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                                 & (0x5aU 
                                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))))))))))) {
                        if ((0U != ((((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                      & (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                     << 2U) | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op))))))) {
                            if (vlSymsp->_vm_contextp__->assertOn()) {
                                VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             8,(IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__op));
                                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                            }
                        }
                    }
                    __Vlabel4: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__8__Vfuncout))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
            = ((0x000001ffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U]) 
               | ((IData)((QData)((IData)((0x0000001fU 
                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                              >> 0x0000000aU))))) 
                  << 9U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[7U] 
            = (((IData)((QData)((IData)((0x0000001fU 
                                         & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                            >> 0x0000000aU))))) 
                >> 0x00000017U) | ((IData)(((QData)((IData)(
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                                                >> 0x0000000aU)))) 
                                            >> 0x00000020U)) 
                                   << 9U));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
            = ((0xfffffe00U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
               | ((IData)(((QData)((IData)((0x0000001fU 
                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[6U] 
                                               >> 0x0000000aU)))) 
                           >> 0x00000020U)) >> 0x00000017U));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
        = ((0xffff81ffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]) 
           | (0x00007e00U & ((IData)((QData)((IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[8U] 
                                                         >> 0x0000000aU))))) 
                             << 9U)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n 
        = (0xfffffffeU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n);
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flush_ctrl_id) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_gpr_n = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_re_name__DOT__re_name_table_fpr_n = 0U;
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x00000015U)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                   >> 0x00000020U));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x0000000fU)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__i_ariane_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                   >> 0x00000020U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile 
        = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                            (((IData)(0x0000003fU) 
                              + (0x000007ffU & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                 >> 9U)), 6U))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                       >> 9U)), 6U)))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                      >> 9U)), 6U))))) 
           | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                       >> 9U)), 6U)))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                          (((IData)(0x0000001fU) 
                                            + (0x000007ffU 
                                               & VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                   >> 9U)), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                 >> 9U)), 6U))))) 
              | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                 (0x0000003fU & (VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                                   >> 9U)), 6U) 
                                                 >> 5U))])) 
                 >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U] 
                                                     >> 9U)), 6U)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[0U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[1U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[1U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[1U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[2U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[2U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[2U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[3U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[3U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[3U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[4U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[4U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[4U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[5U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[5U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[5U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[6U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[7U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[7U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[7U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
        = (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[8U] 
           & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U]);
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
        = (((IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                      << 0x00000036U) | (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                          << 0x00000016U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                            >> 0x0000000aU)))) 
            << 0x0000000aU) | (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q) 
                                << 7U) | (Vcmp_top__ConstPool__CONST_h3c9d8e9d_0[9U] 
                                          & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x0000000aU] 
        = (((IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                      << 0x00000036U) | (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                          << 0x00000016U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                            >> 0x0000000aU)))) 
            >> 0x00000016U) | ((IData)(((((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                                          << 0x00000036U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                             << 0x00000016U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                               >> 0x0000000aU))) 
                                        >> 0x00000020U)) 
                               << 0x0000000aU));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x0000000bU] 
        = ((IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000bU])) 
                      << 0x00000036U) | (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x0000000aU])) 
                                          << 0x00000016U) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                            >> 0x0000000aU))) 
                    >> 0x00000020U)) >> 0x00000016U);
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x00000015U)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x00000015U)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x00000015U)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x00000015U)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x00000015U)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x00000015U)), 6U))))) 
                   >> 0x00000020U));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                    (((IData)(0x0000003fU) 
                                      + (0x000007ffU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                         >> 0x0000000fU)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                         (0x0000003fU 
                                          & (VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U) 
                                             >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                             >> 0x0000000fU)), 6U))))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                     (((IData)(0x0000003fU) 
                                       + (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                               >> 0x0000000fU)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x000007ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                          >> 0x0000000fU)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__float_regfile_gen__DOT__i_ariane_fp_regfile__DOT__mem[
                                          (0x0000003fU 
                                           & (VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                                >> 0x0000000fU)), 6U) 
                                              >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                                              >> 0x0000000fU)), 6U))))) 
                   >> 0x00000020U));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[4U] 
        = (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile);
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[5U] 
        = (IData)((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile 
                   >> 0x00000020U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile 
        = (([&]() {
                vlSelfRef.__Vfunc_is_rs1_fpr__57__op 
                    = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                       << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                {
                    if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                               || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                              || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                             || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                            || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                           || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                          || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                         || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                             && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))))) {
                        vlSelfRef.__Vfunc_is_rs1_fpr__57__Vfuncout = 1U;
                        goto __Vlabel5;
                    } else {
                        vlSelfRef.__Vfunc_is_rs1_fpr__57__Vfuncout = 0U;
                        goto __Vlabel5;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((((((0x6bU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                                                               << 3U) 
                                                              | ((0x6aU 
                                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                 << 2U)) 
                                                             | (((0x69U 
                                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                 << 1U) 
                                                                | (0x67U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))) 
                                                            << 4U) 
                                                           | ((((0x66U 
                                                                 == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                << 3U) 
                                                               | ((0x65U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                  << 2U)) 
                                                              | (((0x63U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                  << 1U) 
                                                                 | ((0x5bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))))))))))) {
                        if ((0U != (((((((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                         & (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op))) 
                                        << 3U) | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                  << 2U)) 
                                      | (((0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                          << 1U) | 
                                         (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))) 
                                     << 4U) | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op)))))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             8,(IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__op));
                                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                            }
                        }
                    }
                    __Vlabel5: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__57__Vfuncout))
            ? (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[1U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[0U])))
            : (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[1U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[0U]))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile 
        = (([&]() {
                vlSelfRef.__Vfunc_is_rs2_fpr__58__op 
                    = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                       << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                {
                    if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                               && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                              || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                  && (0x5dU >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                             || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                 && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                            || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                           || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                               && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                          || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                         || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                             && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))))) {
                        vlSelfRef.__Vfunc_is_rs2_fpr__58__Vfuncout = 1U;
                        goto __Vlabel6;
                    } else {
                        vlSelfRef.__Vfunc_is_rs2_fpr__58__Vfuncout = 0U;
                        goto __Vlabel6;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((((((0x6bU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                               << 3U) 
                                                              | ((0x69U 
                                                                  == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                 << 2U)) 
                                                             | ((((0x66U 
                                                                   <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                  & (0x67U 
                                                                     >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                                 << 1U) 
                                                                | (0x65U 
                                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                                                            << 3U) 
                                                           | ((((0x5fU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                & (0x62U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                               << 2U) 
                                                              | ((((0x59U 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                   & (0x5dU 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                                  << 1U) 
                                                                 | ((0x55U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                                    & (0x58U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))))))))))) {
                        if ((0U != (((((((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                         & (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                        << 3U) | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                  << 2U)) 
                                      | ((((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                           & (0x67U 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                          << 1U) | 
                                         (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))) 
                                     << 3U) | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op)))))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             8,(IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__op));
                                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                            }
                        }
                    }
                    __Vlabel6: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__58__Vfuncout))
            ? (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[3U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__float_regfile_gen__DOT__i_ariane_fp_regfile__rdata_o[2U])))
            : (((QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[3U])) 
                << 0x00000020U) | (QData)((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellout__i_ariane_regfile__rdata_o[2U]))));
}

VL_ATTR_COLD void Vcmp_top___024root___stl_comb__TOP__21(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_comb__TOP__21\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(4U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U] 
                                        >> 9U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                          >> 0x0000000bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U] 
                                              >> 8U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                               >> 0x0000000aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__22__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__22__Vfuncout = 1U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__22__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel0: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__22__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U] 
                                        >> 0x00000015U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                          >> 0x00000017U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U] 
                                              >> 0x00000014U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                               >> 0x00000016U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__25__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__25__Vfuncout = 1U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__25__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel1: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__25__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU] 
                                        >> 1U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                          >> 3U)) & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU]) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                               >> 2U)) == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__28__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__28__Vfuncout = 1U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__28__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel2: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__28__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU] 
                                        >> 0x0000000dU)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                          >> 0x0000000fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U] 
                                              >> 0x0000000cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                               >> 0x0000000eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__31__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__31__Vfuncout = 1U;
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__31__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel3: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__31__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U] 
                                        >> 0x00000019U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                          >> 0x0000001bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U] 
                                              >> 0x00000018U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                               >> 0x0000001aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__34__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__34__Vfuncout = 1U;
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__34__Vfuncout = 0U;
                                goto __Vlabel4;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel4: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__34__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U] 
                                        >> 5U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                          >> 7U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU] 
                                     >> 4U)) & ((1U 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                                                    >> 6U)) 
                                                == 
                                                ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__37__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__37__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__37__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel5: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__37__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU] 
                                        >> 0x00000011U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                          >> 0x00000013U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU] 
                                              >> 0x00000010U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                               >> 0x00000012U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__40__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__40__Vfuncout = 1U;
                                goto __Vlabel6;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__40__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel6: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__40__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0bU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000058U] 
                                         << 3U) | (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U] 
                                                   >> 0x0000001dU))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                          >> 0x0000001fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U] 
                                              >> 0x0000001cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                               >> 0x0000001eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__43__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__43__Vfuncout = 1U;
                                goto __Vlabel7;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__43__Vfuncout = 0U;
                                goto __Vlabel7;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel7: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__43__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id)) 
                      & (~ vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U])) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                               (((IData)(0x0000016aU) 
                                 + (0x00000fffU & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x0000016aU) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) 
                        == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__10__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__10__Vfuncout = 1U;
                                goto __Vlabel8;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__10__Vfuncout = 0U;
                                goto __Vlabel8;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel8: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__10__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 3U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 1U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U] 
                                        >> 1U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__13__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__13__Vfuncout = 1U;
                                goto __Vlabel9;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__13__Vfuncout = 0U;
                                goto __Vlabel9;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel9: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__13__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 6U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 2U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                        >> 2U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__16__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__16__Vfuncout = 1U;
                                goto __Vlabel10;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__16__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel10: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__16__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 9U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 3U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU] 
                                        >> 3U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__19__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__19__Vfuncout = 1U;
                                goto __Vlabel11;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__19__Vfuncout = 0U;
                                goto __Vlabel11;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel11: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__19__Vfuncout)))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_valid_sb_iro 
        = ((IData)((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))) 
           & ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb)) 
              | ([&]() {
                    vlSelfRef.__Vfunc_is_rs1_fpr__46__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                           << 5U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 0x0000001bU)));
                    {
                        if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                    && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                   || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                  || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                 || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                               || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                              || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))))) {
                            vlSelfRef.__Vfunc_is_rs1_fpr__46__Vfuncout = 1U;
                            goto __Vlabel12;
                        } else {
                            vlSelfRef.__Vfunc_is_rs1_fpr__46__Vfuncout = 0U;
                            goto __Vlabel12;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                                                   << 3U) 
                                                                  | ((0x6aU 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                     << 2U)) 
                                                                 | (((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                     << 1U) 
                                                                    | (0x67U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))) 
                                                                << 4U) 
                                                               | ((((0x66U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                    << 3U) 
                                                                   | ((0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                      << 2U)) 
                                                                  | (((0x63U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                      << 1U) 
                                                                     | ((0x5bU 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                                        & (0x62U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op))) 
                                            << 3U) 
                                           | ((0x6aU 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                              << 2U)) 
                                          | (((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                              << 1U) 
                                             | (0x67U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))) 
                                         << 4U) | (
                                                   (((0x66U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                     << 3U) 
                                                    | ((0x65U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                       << 2U)) 
                                                   | (((0x63U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                       << 1U) 
                                                      | ((0x5bU 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)) 
                                                         & (0x62U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                }
                            }
                        }
                        __Vlabel12: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__46__Vfuncout))));
}

VL_ATTR_COLD void Vcmp_top___024root___stl_comb__TOP__22(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_comb__TOP__22\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(4U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U] 
                                        >> 9U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                          >> 0x0000000bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U] 
                                              >> 8U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                               >> 0x0000000aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__24__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__24__Vfuncout = 1U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__24__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel0: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__24__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U] 
                                        >> 0x00000015U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                          >> 0x00000017U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U] 
                                              >> 0x00000014U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                               >> 0x00000016U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__27__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__27__Vfuncout = 1U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__27__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel1: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__27__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU] 
                                        >> 1U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                          >> 3U)) & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU]) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                               >> 2U)) == ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__30__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__30__Vfuncout = 1U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__30__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel2: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__30__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU] 
                                        >> 0x0000000dU)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                          >> 0x0000000fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U] 
                                              >> 0x0000000cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                               >> 0x0000000eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__33__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__33__Vfuncout = 1U;
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__33__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel3: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__33__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U] 
                                        >> 0x00000019U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                          >> 0x0000001bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U] 
                                              >> 0x00000018U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                               >> 0x0000001aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__36__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__36__Vfuncout = 1U;
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__36__Vfuncout = 0U;
                                goto __Vlabel4;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel4: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__36__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U] 
                                        >> 5U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                          >> 7U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU] 
                                     >> 4U)) & ((1U 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                                                    >> 6U)) 
                                                == 
                                                ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__39__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__39__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__39__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel5: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__39__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU] 
                                        >> 0x00000011U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                          >> 0x00000013U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU] 
                                              >> 0x00000010U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                               >> 0x00000012U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__42__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__42__Vfuncout = 1U;
                                goto __Vlabel6;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__42__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel6: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__42__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0bU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000058U] 
                                         << 3U) | (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U] 
                                                   >> 0x0000001dU))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                          >> 0x0000001fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U] 
                                              >> 0x0000001cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                               >> 0x0000001eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__45__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__45__Vfuncout = 1U;
                                goto __Vlabel7;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__45__Vfuncout = 0U;
                                goto __Vlabel7;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel7: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__45__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id)) 
                      & (~ vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U])) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                               (((IData)(0x0000016aU) 
                                 + (0x00000fffU & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x0000016aU) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) 
                        == ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__12__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__12__Vfuncout = 1U;
                                goto __Vlabel8;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__12__Vfuncout = 0U;
                                goto __Vlabel8;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel8: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__12__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 3U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 1U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U] 
                                        >> 1U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__15__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__15__Vfuncout = 1U;
                                goto __Vlabel9;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__15__Vfuncout = 0U;
                                goto __Vlabel9;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel9: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__15__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 6U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 2U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                        >> 2U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__18__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__18__Vfuncout = 1U;
                                goto __Vlabel10;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__18__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel10: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__18__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 9U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 3U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU] 
                                        >> 3U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_imm_fpr__21__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                   && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                  || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                      && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)))) 
                                 || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))))) {
                                vlSelfRef.__Vfunc_is_imm_fpr__21__Vfuncout = 1U;
                                goto __Vlabel11;
                            } else {
                                vlSelfRef.__Vfunc_is_imm_fpr__21__Vfuncout = 0U;
                                goto __Vlabel11;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             ((((0x76U 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                                & (0x79U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                                               << 2U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                                                  << 1U) 
                                                                 | ((0x59U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                                    & (0x5aU 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))))))))))) {
                                if ((0U != ((((0x76U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                              & (0x79U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                             << 2U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                    }
                                }
                            }
                            __Vlabel11: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__21__Vfuncout)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_344 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x00e0U 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x000eU 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))));
}

VL_ATTR_COLD void Vcmp_top___024root___stl_comb__TOP__23(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_comb__TOP__23\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(4U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U] 
                                        >> 9U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                          >> 0x0000000bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U] 
                                              >> 8U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                               >> 0x0000000aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__23__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__23__Vfuncout = 1U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__23__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel0: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__23__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U] 
                                        >> 0x00000015U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                          >> 0x00000017U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U] 
                                              >> 0x00000014U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                               >> 0x00000016U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__26__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__26__Vfuncout = 1U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__26__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel1: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__26__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU] 
                                        >> 1U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                          >> 3U)) & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU]) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                               >> 2U)) == ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__29__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__29__Vfuncout = 1U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__29__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel2: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__29__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU] 
                                        >> 0x0000000dU)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                          >> 0x0000000fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U] 
                                              >> 0x0000000cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                               >> 0x0000000eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__32__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__32__Vfuncout = 1U;
                                goto __Vlabel3;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__32__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel3: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__32__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U] 
                                        >> 0x00000019U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                          >> 0x0000001bU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U] 
                                              >> 0x00000018U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                               >> 0x0000001aU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__35__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__35__Vfuncout = 1U;
                                goto __Vlabel4;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__35__Vfuncout = 0U;
                                goto __Vlabel4;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel4: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__35__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U] 
                                        >> 5U)) == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                          >> 7U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU] 
                                     >> 4U)) & ((1U 
                                                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
                                                    >> 6U)) 
                                                == 
                                                ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__38__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__38__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__38__Vfuncout = 0U;
                                goto __Vlabel5;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel5: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__38__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0aU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU] 
                                        >> 0x00000011U)) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                          >> 0x00000013U)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU] 
                                              >> 0x00000010U)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                               >> 0x00000012U)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__41__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__41__Vfuncout = 1U;
                                goto __Vlabel6;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__41__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel6: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__41__Vfuncout)))));
    VL_ASSIGNBIT_II(0x0bU, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000058U] 
                                         << 3U) | (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U] 
                                                   >> 0x0000001dU))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                          >> 0x0000001fU)) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U] 
                                              >> 0x0000001cU)) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                               >> 0x0000001eU)) == 
                        ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__44__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__44__Vfuncout = 1U;
                                goto __Vlabel7;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__44__Vfuncout = 0U;
                                goto __Vlabel7;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel7: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__44__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id)) 
                      & (~ vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U])) 
                     & ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                               (((IData)(0x0000016aU) 
                                 + (0x00000fffU & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                >> 5U)] >> (0x0000001fU 
                                            & ((IData)(0x0000016aU) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) 
                        == ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__11__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__11__Vfuncout = 1U;
                                goto __Vlabel8;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__11__Vfuncout = 0U;
                                goto __Vlabel8;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel8: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__11__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 3U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 1U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U] 
                                        >> 1U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__14__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__14__Vfuncout = 1U;
                                goto __Vlabel9;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__14__Vfuncout = 0U;
                                goto __Vlabel9;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel9: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__14__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 6U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 2U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                        >> 2U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__17__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__17__Vfuncout = 1U;
                                goto __Vlabel10;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__17__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel10: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__17__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req, 
                    (((((0x0000003fU & (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000109U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U)))))))
                                          ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x0000010eU) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000109U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 9U))))))))) 
                                        | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x00000109U) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))) 
                                            >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000109U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U))))))))) 
                        == (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                          >> 3U)) & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU] 
                                        >> 3U))) & 
                     ((1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                             (((IData)(0x0000016aU) 
                               + (0x00000fffU & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000016aU) 
                                             + (0x00000fffU 
                                                & ((IData)(0x0000016cU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U)))))))) 
                      == ([&]() {
                        vlSelfRef.__Vfunc_is_rs2_fpr__20__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                       && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                      || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                          && (0x5dU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                     || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                         && (0x62U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                    || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                   || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                       && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                  || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))))) {
                                vlSelfRef.__Vfunc_is_rs2_fpr__20__Vfuncout = 1U;
                                goto __Vlabel11;
                            } else {
                                vlSelfRef.__Vfunc_is_rs2_fpr__20__Vfuncout = 0U;
                                goto __Vlabel11;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                  << 3U) 
                                                                 | ((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                    << 2U)) 
                                                                | ((((0x66U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                     & (0x67U 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                    << 1U) 
                                                                   | (0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                                               << 3U) 
                                                              | ((((0x5fU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                   & (0x62U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                  << 2U) 
                                                                 | ((((0x59U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                      & (0x5dU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                                     << 1U) 
                                                                    | ((0x55U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                                       & (0x58U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                << 3U) 
                                               | ((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                  << 2U)) 
                                              | ((((0x66U 
                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                   & (0x67U 
                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                  << 1U) 
                                                 | (0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))) 
                                             << 3U) 
                                            | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                << 2U) 
                                               | ((((0x59U 
                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                    & (0x5dU 
                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op))) 
                                                   << 1U) 
                                                  | ((0x55U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)) 
                                                     & (0x58U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op)))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                    }
                                }
                            }
                            __Vlabel11: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__20__Vfuncout)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x00e0U 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_347 = (IData)(
                                                         (0U 
                                                          != 
                                                          (0x000eU 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_valid_iro_sb 
        = ((IData)((((0U != (0x0f11U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_347)) 
                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346))) 
           & ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb)) 
              | ([&]() {
                    vlSelfRef.__Vfunc_is_rs2_fpr__47__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                           << 5U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 0x0000001bU)));
                    {
                        if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                   && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                  || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                      && (0x5dU >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                 || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                     && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                               || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                   && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                              || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))))) {
                            vlSelfRef.__Vfunc_is_rs2_fpr__47__Vfuncout = 1U;
                            goto __Vlabel12;
                        } else {
                            vlSelfRef.__Vfunc_is_rs2_fpr__47__Vfuncout = 0U;
                            goto __Vlabel12;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                   << 3U) 
                                                                  | ((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                     << 2U)) 
                                                                 | ((((0x66U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                      & (0x67U 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                     << 1U) 
                                                                    | (0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                                                << 3U) 
                                                               | ((((0x5fU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                   << 2U) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                       & (0x5dU 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                                      << 1U) 
                                                                     | ((0x55U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                                        & (0x58U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                            << 3U) 
                                           | ((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                              << 2U)) 
                                          | ((((0x66U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                               & (0x67U 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                              << 1U) 
                                             | (0x65U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))) 
                                         << 3U) | (
                                                   (((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                    << 2U) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                        & (0x5dU 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op))) 
                                                       << 1U) 
                                                      | ((0x55U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)) 
                                                         & (0x58U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                }
                            }
                        }
                        __Vlabel12: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__47__Vfuncout))));
}

VL_ATTR_COLD void Vcmp_top___024root___stl_comb__TOP__25(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_comb__TOP__25\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2 = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3 = 0;
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2 = 0U;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3 = 0U;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_iro_sb 
        = (0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                          >> 0x00000015U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_iro_sb 
        = (0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                          >> 0x0000000fU));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs3_iro_sb 
        = (0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
                          >> 9U));
    if (((1U & (~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
                   >> 6U))) && (([&]() {
                        vlSelfRef.__Vfunc_is_rs1_fpr__48__op 
                            = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                               << 5U) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                        {
                            if ((((((((((0x5bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                        && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                       || (0x63U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                      || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                     || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                    || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                   || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                  || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                 || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                     && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))))) {
                                vlSelfRef.__Vfunc_is_rs1_fpr__48__Vfuncout = 1U;
                                goto __Vlabel0;
                            } else {
                                vlSelfRef.__Vfunc_is_rs1_fpr__48__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            if (VL_UNLIKELY(((1U & 
                                              (~ VL_ONEHOT_I(
                                                             (((((((0x6bU 
                                                                    <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                                   & (0x79U 
                                                                      >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                                                  << 3U) 
                                                                 | ((0x6aU 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                                    << 2U)) 
                                                                | (((0x69U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                                    << 1U) 
                                                                   | (0x67U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)))) 
                                                               << 4U) 
                                                              | ((((0x66U 
                                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                                   << 3U) 
                                                                  | ((0x65U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                                     << 2U)) 
                                                                 | (((0x63U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                                     << 1U) 
                                                                    | ((0x5bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)))))))))))) {
                                if ((0U != (((((((0x6bU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                 & (0x79U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op))) 
                                                << 3U) 
                                               | ((0x6aU 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                  << 2U)) 
                                              | (((0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                  << 1U) 
                                                 | (0x67U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)))) 
                                             << 4U) 
                                            | ((((0x66U 
                                                  == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                 << 3U) 
                                                | ((0x65U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                   << 2U)) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                   << 1U) 
                                                  | ((0x5bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op)))))))) {
                                    if (vlSymsp->_vm_contextp__->assertOn()) {
                                        VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                     64,
                                                     VL_TIME_UNITED_Q(1000),
                                                     -9,
                                                     vlSymsp->name(),
                                                     8,
                                                     (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__op));
                                        VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                    }
                                }
                            }
                            __Vlabel0: ;
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__48__Vfuncout))
                                 ? (0U != (0x0000000fU 
                                           & (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                     >> 0x00000015U)), 2U)))
                                                ? 0U
                                                : (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0x000000ffU 
                                                      & VL_SHIFTL_III(8,32,32, 
                                                                      (0x0000003fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                          >> 0x00000015U)), 2U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (0x0000003fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                         >> 0x00000015U)), 2U))))) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x00000015U)), 2U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 0x00000015U)), 2U))))))
                                 : (0U != (0x0000000fU 
                                           & (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                     >> 0x00000015U)), 2U)))
                                                ? 0U
                                                : (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0x000000ffU 
                                                      & VL_SHIFTL_III(8,32,32, 
                                                                      (0x0000003fU 
                                                                       & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                          >> 0x00000015U)), 2U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (0x0000003fU 
                                                                      & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                         >> 0x00000015U)), 2U))))) 
                                              | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x00000015U)), 2U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 0x00000015U)), 2U))))))))) {
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs1_valid_sb_iro) 
             && (([&]() {
                            vlSelfRef.__Vfunc_is_rs1_fpr__49__op 
                                = (0x000000ffU & ((
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                   << 5U) 
                                                  | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                     >> 0x0000001bU)));
                            {
                                if ((((((((((0x5bU 
                                             <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                            && (0x62U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                           || (0x63U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                          || (0x65U 
                                              == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                         || (0x66U 
                                             == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                        || (0x67U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                       || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                      || (0x6aU == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                     || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                         && (0x79U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))))) {
                                    vlSelfRef.__Vfunc_is_rs1_fpr__49__Vfuncout = 1U;
                                    goto __Vlabel1;
                                } else {
                                    vlSelfRef.__Vfunc_is_rs1_fpr__49__Vfuncout = 0U;
                                    goto __Vlabel1;
                                }
                                if (VL_UNLIKELY(((1U 
                                                  & (~ 
                                                     VL_ONEHOT_I(
                                                                 (((((((0x6bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                                       & (0x79U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                                                      << 3U) 
                                                                     | ((0x6aU 
                                                                         == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                                        << 2U)) 
                                                                    | (((0x69U 
                                                                         == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                                        << 1U) 
                                                                       | (0x67U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)))) 
                                                                   << 4U) 
                                                                  | ((((0x66U 
                                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                                       << 3U) 
                                                                      | ((0x65U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                                         << 2U)) 
                                                                     | (((0x63U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                                         << 1U) 
                                                                        | ((0x5bU 
                                                                            <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                                           & (0x62U 
                                                                              >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)))))))))))) {
                                    if ((0U != ((((
                                                   (((0x6bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                     & (0x79U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op))) 
                                                    << 3U) 
                                                   | ((0x6aU 
                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                      << 2U)) 
                                                  | (((0x69U 
                                                       == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                      << 1U) 
                                                     | (0x67U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)))) 
                                                 << 4U) 
                                                | ((((0x66U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                     << 3U) 
                                                    | ((0x65U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                       << 2U)) 
                                                   | (((0x63U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                       << 1U) 
                                                      | ((0x5bU 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)) 
                                                         & (0x62U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op)))))))) {
                                        if (vlSymsp->_vm_contextp__->assertOn()) {
                                            VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:555: Assertion failed in %Nariane_pkg.is_rs1_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1000),
                                                         -9,
                                                         vlSymsp->name(),
                                                         8,
                                                         (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__op));
                                            VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 555, "");
                                        }
                                    }
                                }
                                __Vlabel1: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_is_rs1_fpr__49__Vfuncout)) 
                 || ((6U != (0x0000000fU & (((0U == 
                                              (0x0000001fU 
                                               & VL_SHIFTL_III(8,32,32, 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                   >> 0x00000015U)), 2U)))
                                              ? 0U : 
                                             (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                              (((IData)(3U) 
                                                + (0x000000ffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x00000015U)), 2U))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x00000015U)), 2U))))) 
                                            | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                               (7U 
                                                & (VL_SHIFTL_III(8,32,32, 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                     >> 0x00000015U)), 2U) 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x00000015U)), 2U)))))) 
                     | (0x1eU == (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                  << 5U) 
                                                 | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                    >> 0x0000001bU)))))))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1 = 1U;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall = 1U;
        }
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_is_rs2_fpr__50__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                           << 5U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 0x0000001bU)));
                    {
                        if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                   && (0x58U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                  || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                      && (0x5dU >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)))) 
                                 || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                     && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)))) 
                                || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                               || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                   && (0x67U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)))) 
                              || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                             || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))))) {
                            vlSelfRef.__Vfunc_is_rs2_fpr__50__Vfuncout = 1U;
                            goto __Vlabel2;
                        } else {
                            vlSelfRef.__Vfunc_is_rs2_fpr__50__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x6bU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                                                   << 3U) 
                                                                  | ((0x69U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                                     << 2U)) 
                                                                 | ((((0x66U 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                                      & (0x67U 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                                                     << 1U) 
                                                                    | (0x65U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)))) 
                                                                << 3U) 
                                                               | ((((0x5fU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                                                   << 2U) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                                       & (0x5dU 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                                                      << 1U) 
                                                                     | ((0x55U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                                        & (0x58U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)))))))))))) {
                            if ((0U != (((((((0x6bU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                            << 3U) 
                                           | ((0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                              << 2U)) 
                                          | ((((0x66U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                               & (0x67U 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                              << 1U) 
                                             | (0x65U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)))) 
                                         << 3U) | (
                                                   (((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                                    << 2U) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                        & (0x5dU 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op))) 
                                                       << 1U) 
                                                      | ((0x55U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)) 
                                                         & (0x58U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op)))))))) {
                                if (vlSymsp->_vm_contextp__->assertOn()) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                }
                            }
                        }
                        __Vlabel2: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__50__Vfuncout))
          ? (0U != (0x0000000fU & (((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,32,32, 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                >> 0x0000000fU)), 2U)))
                                     ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                             (((IData)(3U) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 0x0000000fU)), 2U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 0x0000000fU)), 2U))))) 
                                   | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                      (7U & (VL_SHIFTL_III(8,32,32, 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                               >> 0x0000000fU)), 2U) 
                                             >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, 
                                                          (0x0000003fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                              >> 0x0000000fU)), 2U))))))
          : (0U != (0x0000000fU & (((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,32,32, 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                >> 0x0000000fU)), 2U)))
                                     ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                             (((IData)(3U) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 0x0000000fU)), 2U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 0x0000000fU)), 2U))))) 
                                   | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                      (7U & (VL_SHIFTL_III(8,32,32, 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                               >> 0x0000000fU)), 2U) 
                                             >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, 
                                                          (0x0000003fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                              >> 0x0000000fU)), 2U)))))))) {
        if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__rs2_valid_iro_sb) 
             && (([&]() {
                            vlSelfRef.__Vfunc_is_rs2_fpr__51__op 
                                = (0x000000ffU & ((
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                   << 5U) 
                                                  | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                     >> 0x0000001bU)));
                            {
                                if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                           && (0x58U 
                                               >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                          || ((0x59U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                              && (0x5dU 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)))) 
                                         || ((0x5fU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                             && (0x62U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)))) 
                                        || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                       || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                           && (0x67U 
                                               >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)))) 
                                      || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                     || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                         && (0x79U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))))) {
                                    vlSelfRef.__Vfunc_is_rs2_fpr__51__Vfuncout = 1U;
                                    goto __Vlabel3;
                                } else {
                                    vlSelfRef.__Vfunc_is_rs2_fpr__51__Vfuncout = 0U;
                                    goto __Vlabel3;
                                }
                                if (VL_UNLIKELY(((1U 
                                                  & (~ 
                                                     VL_ONEHOT_I(
                                                                 (((((((0x6bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                                       & (0x79U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                                      << 3U) 
                                                                     | ((0x69U 
                                                                         == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                                        << 2U)) 
                                                                    | ((((0x66U 
                                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                                         & (0x67U 
                                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                                        << 1U) 
                                                                       | (0x65U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)))) 
                                                                   << 3U) 
                                                                  | ((((0x5fU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                                      << 2U) 
                                                                     | ((((0x59U 
                                                                           <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                                          & (0x5dU 
                                                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                                         << 1U) 
                                                                        | ((0x55U 
                                                                            <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                                           & (0x58U 
                                                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)))))))))))) {
                                    if ((0U != ((((
                                                   (((0x6bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                     & (0x79U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                    << 3U) 
                                                   | ((0x69U 
                                                       == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                      << 2U)) 
                                                  | ((((0x66U 
                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                       & (0x67U 
                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                      << 1U) 
                                                     | (0x65U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)))) 
                                                 << 3U) 
                                                | ((((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                    << 2U) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                        & (0x5dU 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op))) 
                                                       << 1U) 
                                                      | ((0x55U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)) 
                                                         & (0x58U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op)))))))) {
                                        if (vlSymsp->_vm_contextp__->assertOn()) {
                                            VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1000),
                                                         -9,
                                                         vlSymsp->name(),
                                                         8,
                                                         (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__op));
                                            VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                        }
                                    }
                                }
                                __Vlabel3: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__51__Vfuncout)) 
                 || ((6U != (0x0000000fU & (((0U == 
                                              (0x0000001fU 
                                               & VL_SHIFTL_III(8,32,32, 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                   >> 0x0000000fU)), 2U)))
                                              ? 0U : 
                                             (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                              (((IData)(3U) 
                                                + (0x000000ffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x0000000fU)), 2U))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x0000000fU)), 2U))))) 
                                            | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                               (7U 
                                                & (VL_SHIFTL_III(8,32,32, 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                     >> 0x0000000fU)), 2U) 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                       >> 0x0000000fU)), 2U)))))) 
                     | (0x1eU == (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                  << 5U) 
                                                 | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                    >> 0x0000001bU)))))))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2 = 1U;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall = 1U;
        }
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_is_imm_fpr__52__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                           << 5U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 0x0000001bU)));
                    {
                        if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                               && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))) 
                              || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                  && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)))) 
                             || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))))) {
                            vlSelfRef.__Vfunc_is_imm_fpr__52__Vfuncout = 1U;
                            goto __Vlabel4;
                        } else {
                            vlSelfRef.__Vfunc_is_imm_fpr__52__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              ((((0x76U 
                                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                                                 & (0x79U 
                                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))) 
                                                                << 2U) 
                                                               | ((((0x5fU 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                                                    & (0x62U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))) 
                                                                   << 1U) 
                                                                  | ((0x59U 
                                                                      <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                                                     & (0x5aU 
                                                                        >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))))))))))) {
                            if ((0U != ((((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                          & (0x79U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))) 
                                         << 2U) | (
                                                   (((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))) 
                                                    << 1U) 
                                                   | ((0x59U 
                                                       <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op)) 
                                                      & (0x5aU 
                                                         >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op))))))) {
                                if (vlSymsp->_vm_contextp__->assertOn()) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                                }
                            }
                        }
                        __Vlabel4: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__52__Vfuncout))
          ? (0U != (0x0000000fU & (((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(8,32,32, 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
                                                                >> 9U)), 2U)))
                                     ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                             (((IData)(3U) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
                                                                      >> 9U)), 2U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
                                                                      >> 9U)), 2U))))) 
                                   | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                      (7U & (VL_SHIFTL_III(8,32,32, 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
                                                               >> 9U)), 2U) 
                                             >> 5U))] 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, 
                                                          (0x0000003fU 
                                                           & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
                                                              >> 9U)), 2U))))))
          : 0U)) {
        if ((1U & (IData)((((0U != (0x0f11U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))) 
                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345)) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_344))))) {
            cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3 = 1U;
        } else {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall = 1U;
        }
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile;
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__imm_n 
        = (([&]() {
                vlSelfRef.__Vfunc_is_imm_fpr__53__op 
                    = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                       << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                 >> 0x0000001bU)));
                {
                    if (((((0x59U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                           && (0x5aU >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))) 
                          || ((0x5fU <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                              && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)))) 
                         || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                             && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))))) {
                        vlSelfRef.__Vfunc_is_imm_fpr__53__Vfuncout = 1U;
                        goto __Vlabel5;
                    } else {
                        vlSelfRef.__Vfunc_is_imm_fpr__53__Vfuncout = 0U;
                        goto __Vlabel5;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          ((((0x76U 
                                                              <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                                                             & (0x79U 
                                                                >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))) 
                                                            << 2U) 
                                                           | ((((0x5fU 
                                                                 <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                                                                & (0x62U 
                                                                   >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))) 
                                                               << 1U) 
                                                              | ((0x59U 
                                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                                                                 & (0x5aU 
                                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))))))))))) {
                        if ((0U != ((((0x76U <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                                      & (0x79U >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))) 
                                     << 2U) | ((((0x5fU 
                                                  <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                                                 & (0x62U 
                                                    >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))) 
                                                << 1U) 
                                               | ((0x59U 
                                                   <= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op)) 
                                                  & (0x5aU 
                                                     >= (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op))))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:589: Assertion failed in %Nariane_pkg.is_imm_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,vlSymsp->name(),
                                             8,(IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__op));
                                VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 589, "");
                            }
                        }
                    }
                    __Vlabel5: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_is_imm_fpr__53__Vfuncout))
            ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile
            : (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U])) 
                << 0x00000037U) | (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[7U])) 
                                    << 0x00000017U) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U])) 
                                      >> 9U))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__trans_id_n 
        = (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                 >> 7U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_n 
        = (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                          >> 3U));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operator_n 
        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                           << 5U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                     >> 0x0000001bU)));
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
            = ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[2U])) 
                    << 0x00000038U) | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[1U])) 
                                        << 0x00000018U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[0U])) 
                                          >> 8U))) : 
               ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                 ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[2U])) 
                     << 0x00000029U) | (((QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[1U])) 
                                         << 9U) | ((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) 
                                                   >> 0x00000017U)))
                 : ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                     ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[6U])) 
                         << 0x0000003fU) | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[5U])) 
                                             << 0x0000001fU) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[4U])) 
                                               >> 1U)))
                     : ((8U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                         ? vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flu_result_ex_id
                         : ((0x00000010U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                             ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U])) 
                                 << 0x00000037U) | 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[7U])) 
                                  << 0x00000017U) | 
                                 ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U])) 
                                  >> 9U))) : ((0x00000020U 
                                               & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                                               ? (((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U])) 
                                                   << 0x0000002bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000012U])) 
                                                      << 0x0000000bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U])) 
                                                        >> 0x00000015U)))
                                               : ((0x00000040U 
                                                   & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU])) 
                                                    << 0x0000003fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001eU])) 
                                                       << 0x0000001fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU])) 
                                                         >> 1U)))
                                                   : 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU])) 
                                                     << 0x00000033U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000029U])) 
                                                        << 0x00000013U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U])) 
                                                          >> 0x0000000dU)))
                                                    : 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U])) 
                                                      << 0x00000027U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000034U])) 
                                                         << 7U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U])) 
                                                           >> 0x00000019U)))
                                                     : 
                                                    ((0x00000200U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U])) 
                                                       << 0x0000003bU) 
                                                      | (((QData)((IData)(
                                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000040U])) 
                                                          << 0x0000001bU) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU])) 
                                                            >> 5U)))
                                                      : 
                                                     ((0x00000400U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU])) 
                                                        << 0x0000002fU) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004bU])) 
                                                           << 0x0000000fU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU])) 
                                                             >> 0x00000011U)))
                                                       : 
                                                      ((0x00000800U 
                                                        & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs1_fwd_req))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U])) 
                                                         << 0x00000023U) 
                                                        | (((QData)((IData)(
                                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000056U])) 
                                                            << 3U) 
                                                           | ((QData)((IData)(
                                                                              vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U])) 
                                                              >> 0x0000001dU)))
                                                        : 0ULL))))))))))));
    }
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
            = ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[2U])) 
                    << 0x00000038U) | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[1U])) 
                                        << 0x00000018U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[0U])) 
                                          >> 8U))) : 
               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_347)
                 ? ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[2U])) 
                         << 0x00000029U) | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[1U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) 
                                               >> 0x00000017U)))
                     : ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                         ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[6U])) 
                             << 0x0000003fU) | (((QData)((IData)(
                                                                 vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[5U])) 
                                                 << 0x0000001fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[4U])) 
                                                   >> 1U)))
                         : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flu_result_ex_id))
                 : ((0x00000010U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U])) 
                         << 0x00000037U) | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[7U])) 
                                             << 0x00000017U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U])) 
                                               >> 9U)))
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_346)
                         ? ((0x00000020U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                             ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U])) 
                                 << 0x0000002bU) | 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000012U])) 
                                  << 0x0000000bU) | 
                                 ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U])) 
                                  >> 0x00000015U)))
                             : ((0x00000040U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                                 ? (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU])) 
                                     << 0x0000003fU) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001eU])) 
                                        << 0x0000001fU) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU])) 
                                          >> 1U))) : 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU])) 
                                  << 0x00000033U) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000029U])) 
                                   << 0x00000013U) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U])) 
                                     >> 0x0000000dU)))))
                         : ((0x00000100U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                             ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U])) 
                                 << 0x00000027U) | 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000034U])) 
                                  << 7U) | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U])) 
                                            >> 0x00000019U)))
                             : ((0x00000200U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                                 ? (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U])) 
                                     << 0x0000003bU) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000040U])) 
                                        << 0x0000001bU) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU])) 
                                          >> 5U))) : 
                                ((0x00000400U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                                  ? (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU])) 
                                      << 0x0000002fU) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004bU])) 
                                         << 0x0000000fU) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU])) 
                                           >> 0x00000011U)))
                                  : ((0x00000800U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs2_fwd_req))
                                      ? (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U])) 
                                          << 0x00000023U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000056U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U])) 
                                               >> 0x0000001dU)))
                                      : 0ULL))))))));
    }
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__imm_n 
            = ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[2U])) 
                    << 0x00000038U) | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[1U])) 
                                        << 0x00000018U) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__data_o[0U])) 
                                          >> 8U))) : 
               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345)
                 ? ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[2U])) 
                         << 0x00000029U) | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[1U])) 
                                             << 9U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) 
                                               >> 0x00000017U)))
                     : ((4U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                         ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[6U])) 
                             << 0x0000003fU) | (((QData)((IData)(
                                                                 vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[5U])) 
                                                 << 0x0000001fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_pipe_reg_load__d_o[4U])) 
                                                   >> 1U)))
                         : vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flu_result_ex_id))
                 : ((0x00000010U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[8U])) 
                         << 0x00000037U) | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[7U])) 
                                             << 0x00000017U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[6U])) 
                                               >> 9U)))
                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_344)
                         ? ((0x00000020U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                             ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000013U])) 
                                 << 0x0000002bU) | 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000012U])) 
                                  << 0x0000000bU) | 
                                 ((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000011U])) 
                                  >> 0x00000015U)))
                             : ((0x00000040U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                                 ? (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU])) 
                                     << 0x0000003fU) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001eU])) 
                                        << 0x0000001fU) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001dU])) 
                                          >> 1U))) : 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002aU])) 
                                  << 0x00000033U) | 
                                 (((QData)((IData)(
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000029U])) 
                                   << 0x00000013U) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000028U])) 
                                     >> 0x0000000dU)))))
                         : ((0x00000100U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                             ? (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000035U])) 
                                 << 0x00000027U) | 
                                (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000034U])) 
                                  << 7U) | ((QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000033U])) 
                                            >> 0x00000019U)))
                             : ((0x00000200U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                                 ? (((QData)((IData)(
                                                     vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U])) 
                                     << 0x0000003bU) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000040U])) 
                                        << 0x0000001bU) 
                                       | ((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000003fU])) 
                                          >> 5U))) : 
                                ((0x00000400U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                                  ? (((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004cU])) 
                                      << 0x0000002fU) 
                                     | (((QData)((IData)(
                                                         vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004bU])) 
                                         << 0x0000000fU) 
                                        | ((QData)((IData)(
                                                           vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004aU])) 
                                           >> 0x00000011U)))
                                  : ((0x00000800U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req))
                                      ? (((QData)((IData)(
                                                          vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000057U])) 
                                          << 0x00000023U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000056U])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000055U])) 
                                               >> 0x0000001dU)))
                                      : 0ULL))))))));
    }
    if ((0x00000020U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
            = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x0000000bU])) 
                << 0x00000036U) | (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x0000000aU])) 
                                    << 0x00000016U) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U])) 
                                      >> 0x0000000aU)));
    }
    if ((0x00000040U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U])) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
            = (QData)((IData)((0x0000001fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                              >> 0x00000015U))));
    }
    if (((((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U] 
            >> 7U) & (2U != (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                            >> 3U)))) 
          & (4U != (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                   >> 3U)))) && (1U 
                                                 & (~ 
                                                    ([&]() {
                            vlSelfRef.__Vfunc_is_rs2_fpr__54__op 
                                = (0x000000ffU & ((
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                   << 5U) 
                                                  | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                     >> 0x0000001bU)));
                            {
                                if (((((((((0x55U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                           && (0x58U 
                                               >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                          || ((0x59U 
                                               <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                              && (0x5dU 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)))) 
                                         || ((0x5fU 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                             && (0x62U 
                                                 >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)))) 
                                        || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                       || ((0x66U <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                           && (0x67U 
                                               >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)))) 
                                      || (0x69U == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                     || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                         && (0x79U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))))) {
                                    vlSelfRef.__Vfunc_is_rs2_fpr__54__Vfuncout = 1U;
                                    goto __Vlabel6;
                                } else {
                                    vlSelfRef.__Vfunc_is_rs2_fpr__54__Vfuncout = 0U;
                                    goto __Vlabel6;
                                }
                                if (VL_UNLIKELY(((1U 
                                                  & (~ 
                                                     VL_ONEHOT_I(
                                                                 (((((((0x6bU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                                       & (0x79U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                                      << 3U) 
                                                                     | ((0x69U 
                                                                         == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                                        << 2U)) 
                                                                    | ((((0x66U 
                                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                                         & (0x67U 
                                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                                        << 1U) 
                                                                       | (0x65U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)))) 
                                                                   << 3U) 
                                                                  | ((((0x5fU 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                                      << 2U) 
                                                                     | ((((0x59U 
                                                                           <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                                          & (0x5dU 
                                                                             >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                                         << 1U) 
                                                                        | ((0x55U 
                                                                            <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                                           & (0x58U 
                                                                              >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)))))))))))) {
                                    if ((0U != ((((
                                                   (((0x6bU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                     & (0x79U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                    << 3U) 
                                                   | ((0x69U 
                                                       == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                      << 2U)) 
                                                  | ((((0x66U 
                                                        <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                       & (0x67U 
                                                          >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                      << 1U) 
                                                     | (0x65U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)))) 
                                                 << 3U) 
                                                | ((((0x5fU 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                     & (0x62U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                    << 2U) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                        & (0x5dU 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op))) 
                                                       << 1U) 
                                                      | ((0x55U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)) 
                                                         & (0x58U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op)))))))) {
                                        if (vlSymsp->_vm_contextp__->assertOn()) {
                                            VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:572: Assertion failed in %Nariane_pkg.is_rs2_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1000),
                                                         -9,
                                                         vlSymsp->name(),
                                                         8,
                                                         (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__op));
                                            VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 572, "");
                                        }
                                    }
                                }
                                __Vlabel6: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_is_rs2_fpr__54__Vfuncout)))))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
            = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U])) 
                << 0x00000037U) | (((QData)((IData)(
                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[7U])) 
                                    << 0x00000017U) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[6U])) 
                                      >> 9U)));
    }
}

VL_ATTR_COLD void Vcmp_top___024root___stl_comb__TOP__26(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_comb__TOP__26\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_ready_id_if;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_ready_id_if = 0;
    CData/*1:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address = 0;
    CData/*0:0*/ cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en;
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en = 0;
    VlWide<12>/*383:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 0U;
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro) {
        if ((1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall)) 
                   & (~ ((0x00000040U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])
                          ? (IData)(((0U == (0x00000030U 
                                             & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])) 
                                     & ((8U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])
                                         ? (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__x_issue_ready_ex_id))
                                         : (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fpu_ready_ex_id)))))
                          : ((0x00000020U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])
                              ? ((0x00000010U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])
                                  ? ((8U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])
                                      ? (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fpu_ready_ex_id))
                                      : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185))
                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185))
                              : ((0x00000010U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])
                                  ? ((8U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U])
                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)
                                      : (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_bypass_i__DOT__status_cnt_q)))
                                  : ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_bypass_i__DOT__status_cnt_q)) 
                                     & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U] 
                                        >> 3U))))))))) {
            if ((([&]() {
                            vlSelfRef.__Vfunc_is_rd_fpr__55__op 
                                = (0x000000ffU & ((
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                   << 5U) 
                                                  | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                     >> 0x0000001bU)));
                            {
                                if ((((((((((0x51U 
                                             <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                            && (0x54U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                           || ((0x59U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                               && (0x62U 
                                                   >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)))) 
                                          || (0x64U 
                                              == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                         || (0x65U 
                                             == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                        || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                       || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                      || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                          && (0x6fU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)))) 
                                     || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                         && (0x79U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))))) {
                                    vlSelfRef.__Vfunc_is_rd_fpr__55__Vfuncout = 1U;
                                    goto __Vlabel0;
                                } else {
                                    vlSelfRef.__Vfunc_is_rd_fpr__55__Vfuncout = 0U;
                                    goto __Vlabel0;
                                }
                                if (VL_UNLIKELY(((1U 
                                                  & (~ 
                                                     VL_ONEHOT_I(
                                                                 (((((((0x76U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                                       & (0x79U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                                                      << 3U) 
                                                                     | (((0x6bU 
                                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                                         & (0x6fU 
                                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                                                        << 2U)) 
                                                                    | (((0x68U 
                                                                         == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                                        << 1U) 
                                                                       | (0x66U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)))) 
                                                                   << 4U) 
                                                                  | ((((0x65U 
                                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                                       << 3U) 
                                                                      | ((0x64U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                                         << 2U)) 
                                                                     | ((((0x59U 
                                                                           <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                                          & (0x62U 
                                                                             >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                                                         << 1U) 
                                                                        | ((0x51U 
                                                                            <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                                           & (0x54U 
                                                                              >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)))))))))))) {
                                    if ((0U != ((((
                                                   (((0x76U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                     & (0x79U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                                    << 3U) 
                                                   | (((0x6bU 
                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                       & (0x6fU 
                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                                      << 2U)) 
                                                  | (((0x68U 
                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                      << 1U) 
                                                     | (0x66U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)))) 
                                                 << 4U) 
                                                | ((((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op)))))))) {
                                        if (vlSymsp->_vm_contextp__->assertOn()) {
                                            VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1000),
                                                         -9,
                                                         vlSymsp->name(),
                                                         8,
                                                         (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__op));
                                            VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                        }
                                    }
                                }
                                __Vlabel0: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__55__Vfuncout))
                  ? (0U == (0x0000000fU & (((0U == 
                                             (0x0000001fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                  >> 9U)), 2U)))
                                             ? 0U : 
                                            (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                             (((IData)(3U) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 9U)), 2U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 9U)), 2U))))) 
                                           | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                  >> 9U)), 2U) 
                                                >> 5U))] 
                                              >> (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 9U)), 2U))))))
                  : (0U == (0x0000000fU & (((0U == 
                                             (0x0000001fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                  >> 9U)), 2U)))
                                             ? 0U : 
                                            (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                             (((IData)(3U) 
                                               + (0x000000ffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 9U)), 2U))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 9U)), 2U))))) 
                                           | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                  >> 9U)), 2U) 
                                                >> 5U))] 
                                              >> (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (0x0000003fU 
                                                                   & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                                      >> 9U)), 2U)))))))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
            }
            if ((([&]() {
                            vlSelfRef.__Vfunc_is_rd_fpr__56__op 
                                = (0x000000ffU & ((
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                   << 5U) 
                                                  | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                     >> 0x0000001bU)));
                            {
                                if ((((((((((0x51U 
                                             <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                            && (0x54U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                           || ((0x59U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                               && (0x62U 
                                                   >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                          || (0x64U 
                                              == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                         || (0x65U 
                                             == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                        || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                       || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                      || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                          && (0x6fU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                     || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                         && (0x79U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))))) {
                                    vlSelfRef.__Vfunc_is_rd_fpr__56__Vfuncout = 1U;
                                    goto __Vlabel1;
                                } else {
                                    vlSelfRef.__Vfunc_is_rd_fpr__56__Vfuncout = 0U;
                                    goto __Vlabel1;
                                }
                                if (VL_UNLIKELY(((1U 
                                                  & (~ 
                                                     VL_ONEHOT_I(
                                                                 (((((((0x76U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                       & (0x79U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                                      << 3U) 
                                                                     | (((0x6bU 
                                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                         & (0x6fU 
                                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                                        << 2U)) 
                                                                    | (((0x68U 
                                                                         == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                        << 1U) 
                                                                       | (0x66U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                                                   << 4U) 
                                                                  | ((((0x65U 
                                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                       << 3U) 
                                                                      | ((0x64U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                         << 2U)) 
                                                                     | ((((0x59U 
                                                                           <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                          & (0x62U 
                                                                             >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                                         << 1U) 
                                                                        | ((0x51U 
                                                                            <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                           & (0x54U 
                                                                              >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))))))))))) {
                                    if ((0U != ((((
                                                   (((0x76U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                     & (0x79U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                    << 3U) 
                                                   | (((0x6bU 
                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                       & (0x6fU 
                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                      << 2U)) 
                                                  | (((0x68U 
                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                      << 1U) 
                                                     | (0x66U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                                 << 4U) 
                                                | ((((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))))))) {
                                        if (vlSymsp->_vm_contextp__->assertOn()) {
                                            VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1000),
                                                         -9,
                                                         vlSymsp->name(),
                                                         8,
                                                         (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op));
                                            VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                        }
                                    }
                                }
                                __Vlabel1: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__Vfuncout))
                  ? ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__we_fpr_commit_id) 
                     & ((0x0000001fU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellout__commit_stage_i__waddr_o)) 
                        == (0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 9U))))
                  : ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__we_gpr_commit_id) 
                     & ((0x0000001fU & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellout__commit_stage_i__waddr_o)) 
                        == (0x0000003fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                           >> 9U)))))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
            }
            if ((([&]() {
                            vlSelfRef.__Vfunc_is_rd_fpr__56__op 
                                = (0x000000ffU & ((
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                                   << 5U) 
                                                  | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                     >> 0x0000001bU)));
                            {
                                if ((((((((((0x51U 
                                             <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                            && (0x54U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                           || ((0x59U 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                               && (0x62U 
                                                   >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                          || (0x64U 
                                              == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                         || (0x65U 
                                             == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                        || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                       || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                      || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                          && (0x6fU 
                                              >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                     || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                         && (0x79U 
                                             >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))))) {
                                    vlSelfRef.__Vfunc_is_rd_fpr__56__Vfuncout = 1U;
                                    goto __Vlabel2;
                                } else {
                                    vlSelfRef.__Vfunc_is_rd_fpr__56__Vfuncout = 0U;
                                    goto __Vlabel2;
                                }
                                if (VL_UNLIKELY(((1U 
                                                  & (~ 
                                                     VL_ONEHOT_I(
                                                                 (((((((0x76U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                       & (0x79U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                                      << 3U) 
                                                                     | (((0x6bU 
                                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                         & (0x6fU 
                                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                                        << 2U)) 
                                                                    | (((0x68U 
                                                                         == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                        << 1U) 
                                                                       | (0x66U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                                                   << 4U) 
                                                                  | ((((0x65U 
                                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                       << 3U) 
                                                                      | ((0x64U 
                                                                          == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                         << 2U)) 
                                                                     | ((((0x59U 
                                                                           <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                          & (0x62U 
                                                                             >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                                         << 1U) 
                                                                        | ((0x51U 
                                                                            <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                                           & (0x54U 
                                                                              >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))))))))))) {
                                    if ((0U != ((((
                                                   (((0x76U 
                                                      <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                     & (0x79U 
                                                        >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                    << 3U) 
                                                   | (((0x6bU 
                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                       & (0x6fU 
                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                      << 2U)) 
                                                  | (((0x68U 
                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                      << 1U) 
                                                     | (0x66U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))) 
                                                 << 4U) 
                                                | ((((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op)))))))) {
                                        if (vlSymsp->_vm_contextp__->assertOn()) {
                                            VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1000),
                                                         -9,
                                                         vlSymsp->name(),
                                                         8,
                                                         (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__op));
                                            VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                        }
                                    }
                                }
                                __Vlabel2: ;
                            }
                        }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__56__Vfuncout))
                  ? (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__we_fpr_commit_id) 
                      >> 1U) & ((0x0000001fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellout__commit_stage_i__waddr_o) 
                                                >> 5U)) 
                                == (0x0000003fU & (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                   >> 9U))))
                  : (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__we_gpr_commit_id) 
                      >> 1U) & ((0x0000001fU & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellout__commit_stage_i__waddr_o) 
                                                >> 5U)) 
                                == (0x0000003fU & (
                                                   vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[8U] 
                                                   >> 9U)))))) {
                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
            }
        }
        if ((0x00000010U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[2U])) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
        }
        if ((0U == (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                   >> 3U)))) {
            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
        }
    }
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__mult_valid_q) 
         & (5U != (0x0000000fU & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_sb_iro[9U] 
                                  >> 3U))))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 0U;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_instr_issue_id 
        = ((~ ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_q) 
               >> 3U)) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_ack_iro_sb));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000005aU)) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[__Vilp1] 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en = 0U;
    if ((((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000bU] 
           >> 0x0000000bU) & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_instr_issue_id)) 
         & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flush_unissued_instr_ctrl_id)))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en = 1U;
        VL_CONCAT_WIW(363,1,362, __Vtemp_1, ([&]() {
                    vlSelfRef.__Vfunc_is_rd_fpr__9__op 
                        = (0x000000ffU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U] 
                                           << 5U) | 
                                          (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U] 
                                           >> 0x0000001bU)));
                    {
                        if ((((((((((0x51U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                    && (0x54U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                   || ((0x59U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                       && (0x62U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)))) 
                                  || (0x64U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                 || (0x65U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                || (0x66U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                               || (0x68U == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                              || ((0x6bU <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                  && (0x6fU >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)))) 
                             || ((0x76U <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                 && (0x79U >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))))) {
                            vlSelfRef.__Vfunc_is_rd_fpr__9__Vfuncout = 1U;
                            goto __Vlabel3;
                        } else {
                            vlSelfRef.__Vfunc_is_rd_fpr__9__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((((((0x76U 
                                                                     <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                                    & (0x79U 
                                                                       >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                                                   << 3U) 
                                                                  | (((0x6bU 
                                                                       <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                                      & (0x6fU 
                                                                         >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                                                     << 2U)) 
                                                                 | (((0x68U 
                                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                                     << 1U) 
                                                                    | (0x66U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)))) 
                                                                << 4U) 
                                                               | ((((0x65U 
                                                                     == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                                    << 3U) 
                                                                   | ((0x64U 
                                                                       == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                                      << 2U)) 
                                                                  | ((((0x59U 
                                                                        <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                                       & (0x62U 
                                                                          >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                                                      << 1U) 
                                                                     | ((0x51U 
                                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                                        & (0x54U 
                                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)))))))))))) {
                            if ((0U != (((((((0x76U 
                                              <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                             & (0x79U 
                                                >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                            << 3U) 
                                           | (((0x6bU 
                                                <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                               & (0x6fU 
                                                  >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                              << 2U)) 
                                          | (((0x68U 
                                               == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                              << 1U) 
                                             | (0x66U 
                                                == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)))) 
                                         << 4U) | (
                                                   (((0x65U 
                                                      == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                     << 3U) 
                                                    | ((0x64U 
                                                        == (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                       << 2U)) 
                                                   | ((((0x59U 
                                                         <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                        & (0x62U 
                                                           >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op))) 
                                                       << 1U) 
                                                      | ((0x51U 
                                                          <= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)) 
                                                         & (0x54U 
                                                            >= (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op)))))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: ariane_pkg.sv:601: Assertion failed in %Nariane_pkg.is_rd_fpr: unique case, but multiple matches found for '8'h%x'\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1000),
                                                 -9,
                                                 vlSymsp->name(),
                                                 8,
                                                 (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__op));
                                    VL_STOP_MT("/home/kislay/Documents/gsoc/mmpi-orig/piton/design/chip/tile/ariane/core/include/ariane_pkg.sv", 601, "");
                                }
                            }
                        }
                        __Vlabel3: ;
                    }
                }(), (IData)(vlSelfRef.__Vfunc_is_rd_fpr__9__Vfuncout)), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__issue_instr_rename_sb);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[0U] 
            = __Vtemp_1[0U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[1U] 
            = __Vtemp_1[1U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[2U] 
            = __Vtemp_1[2U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[3U] 
            = __Vtemp_1[3U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[4U] 
            = __Vtemp_1[4U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[5U] 
            = __Vtemp_1[5U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[6U] 
            = __Vtemp_1[6U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[7U] 
            = __Vtemp_1[7U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[8U] 
            = __Vtemp_1[8U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[9U] 
            = __Vtemp_1[9U];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[0x0000000aU] 
            = __Vtemp_1[0x0000000aU];
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0[0x0000000bU] 
            = (0x00000800U | __Vtemp_1[0x0000000bU]);
        if (VL_LIKELY(((0x0b5fU >= (0x00000fffU & ((IData)(0x0000016cU) 
                                                   * (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q))))))) {
            VL_ASSIGNSEL_WW(2912, 364, (0x00000fffU 
                                        & ((IData)(0x0000016cU) 
                                           * (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9037359c__0);
        }
    }
    if ((IData)(((0U == (0x00000078U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[9U])) 
                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000000bU] 
                    >> 0x0000000bU)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[6U] 
            = (0x00000100U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[6U]);
    }
    if ((IData)(((0U == (0x00078000U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000014U])) 
                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000016U] 
                    >> 0x00000017U)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000011U] 
            = (0x00100000U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000011U]);
    }
    if ((IData)(((0U == (0x78000000U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000001fU])) 
                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000022U] 
                    >> 3U)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000001dU] 
            = (1U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000001dU]);
    }
    if ((IData)(((0U == (0x00000780U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002bU])) 
                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000002dU] 
                    >> 0x0000000fU)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000028U] 
            = (0x00001000U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000028U]);
    }
    if ((IData)(((0U == (0x00780000U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000036U])) 
                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000038U] 
                    >> 0x0000001bU)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000033U] 
            = (0x01000000U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000033U]);
    }
    if (((0U == (0x0000000fU & ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000042U] 
                                 << 1U) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000041U] 
                                           >> 0x0000001fU)))) 
         & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000044U] 
            >> 7U))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000003fU] 
            = (0x00000010U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000003fU]);
    }
    if ((IData)(((0U == (0x00007800U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004dU])) 
                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000004fU] 
                    >> 0x00000013U)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000004aU] 
            = (0x00010000U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000004aU]);
    }
    if ((IData)(((0U == (0x07800000U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x00000058U])) 
                 & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x0000005aU] 
                    >> 0x0000001fU)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000055U] 
            = (0x10000000U | vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000055U]);
    }
    if ((1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
               & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                  (((IData)(0x0000016bU) + (0x00000fffU 
                                            & ((IData)(0x0000016cU) 
                                               * (7U 
                                                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                   >> 5U)] >> (0x0000001fU & ((IData)(0x0000016bU) 
                                              + (0x00000fffU 
                                                 & ((IData)(0x0000016cU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x000000c8U) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                                                >> 5U)] 
            = (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x000000c8U) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                >> 5U)] | ((IData)(1U) << (0x0000001fU 
                                           & ((IData)(0x000000c8U) 
                                              + (0x00000fffU 
                                                 & ((IData)(0x0000016cU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x000000c9U) 
                                   + (0x00000fffU & 
                                      ((IData)(0x0000016cU) 
                                       * (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[1U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[0U]))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(1U) + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[2U])) 
                          << 0x0000003bU) | (((QData)((IData)(
                                                              vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[1U])) 
                                              << 0x0000001bU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[0U])) 
                                                >> 5U))));
        if (((9U == (0x0000000fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                      ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                              (((IData)(0x00000126U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000123U) 
                                                      + 
                                                      (0x00000fffU 
                                                       & ((IData)(0x0000016cU) 
                                                          * 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                    | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                       (((IData)(0x00000123U) 
                                         + (0x00000fffU 
                                            & ((IData)(0x0000016cU) 
                                               * (7U 
                                                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                        >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x00000123U) 
                                           + (0x00000fffU 
                                              & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))) 
             & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__x_we_ex_id)))) {
            VL_ASSIGNSEL_WI(2912, 6, ((IData)(0x00000109U) 
                                      + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 0U);
        }
        if ((1U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U])) {
            __Vtemp_4[0U] = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U];
            __Vtemp_4[1U] = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[1U];
            __Vtemp_4[2U] = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[2U];
            __Vtemp_4[3U] = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[3U];
            __Vtemp_4[4U] = (1U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U]);
            VL_ASSIGNSEL_WW(2912, 129, ((IData)(0x00000044U) 
                                        + (0x00000fffU 
                                           & ((IData)(0x0000016cU) 
                                              * (7U 
                                                 & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, __Vtemp_4);
        } else if (((7U == (0x0000000fU & (((0U == 
                                             (0x0000001fU 
                                              & ((IData)(0x00000123U) 
                                                 + 
                                                 (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                             ? 0U : 
                                            (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                             (((IData)(0x00000126U) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                           | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                              (((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                               >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))) 
                    | (8U == (0x0000000fU & (((0U == 
                                               (0x0000001fU 
                                                & ((IData)(0x00000123U) 
                                                   + 
                                                   (0x00000fffU 
                                                    & ((IData)(0x0000016cU) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                               ? 0U
                                               : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x00000126U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000123U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                             | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                (((IData)(0x00000123U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                 >> 5U)] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(0x00000123U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))))) {
            VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x00000085U) 
                                       + (0x00000fffU 
                                          & ((IData)(0x0000016cU) 
                                             * (7U 
                                                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                            (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U])) 
                              << 0x0000003fU) | (((QData)((IData)(
                                                                  vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[3U])) 
                                                  << 0x0000001fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[2U])) 
                                                    >> 1U))));
        }
    }
    if ((1U & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                >> 1U) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                          (((IData)(0x0000016bU) + 
                            (0x00000fffU & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 3U))))) 
                           >> 5U)] >> (0x0000001fU 
                                       & ((IData)(0x0000016bU) 
                                          + (0x00000fffU 
                                             & ((IData)(0x0000016cU) 
                                                * (7U 
                                                   & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 3U)))))))))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x000000c8U) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
            = (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x000000c8U) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 3U))))) 
                >> 5U)] | ((IData)(1U) << (0x0000001fU 
                                           & ((IData)(0x000000c8U) 
                                              + (0x00000fffU 
                                                 & ((IData)(0x0000016cU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                        >> 3U))))))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x000000c9U) 
                                   + (0x00000fffU & 
                                      ((IData)(0x0000016cU) 
                                       * (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 3U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[3U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[2U]))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(1U) + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 3U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[2U])) 
                          << 0x0000003bU) | (((QData)((IData)(
                                                              vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[1U])) 
                                              << 0x0000001bU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[0U])) 
                                                >> 5U))));
        if (((9U == (0x0000000fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U)))))))
                                      ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                              (((IData)(0x00000126U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000123U) 
                                                      + 
                                                      (0x00000fffU 
                                                       & ((IData)(0x0000016cU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 3U))))))))) 
                                    | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                       (((IData)(0x00000123U) 
                                         + (0x00000fffU 
                                            & ((IData)(0x0000016cU) 
                                               * (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))) 
                                        >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x00000123U) 
                                           + (0x00000fffU 
                                              & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U)))))))))) 
             & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__x_we_ex_id)))) {
            VL_ASSIGNSEL_WI(2912, 6, ((IData)(0x00000109U) 
                                      + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 3U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 0U);
        }
        if ((2U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U])) {
            __Vtemp_7[0U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[5U] 
                              << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U] 
                                                 >> 1U));
            __Vtemp_7[1U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[6U] 
                              << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[5U] 
                                                 >> 1U));
            __Vtemp_7[2U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[7U] 
                              << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[6U] 
                                                 >> 1U));
            __Vtemp_7[3U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                              << 0x0000001fU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[7U] 
                                                 >> 1U));
            __Vtemp_7[4U] = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                   >> 1U));
            VL_ASSIGNSEL_WW(2912, 129, ((IData)(0x00000044U) 
                                        + (0x00000fffU 
                                           & ((IData)(0x0000016cU) 
                                              * (7U 
                                                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 3U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, __Vtemp_7);
        } else if (((7U == (0x0000000fU & (((0U == 
                                             (0x0000001fU 
                                              & ((IData)(0x00000123U) 
                                                 + 
                                                 (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 3U)))))))
                                             ? 0U : 
                                            (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                             (((IData)(0x00000126U) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 3U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 3U))))))))) 
                                           | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                              (((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U))))) 
                                               >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 3U)))))))))) 
                    | (8U == (0x0000000fU & (((0U == 
                                               (0x0000001fU 
                                                & ((IData)(0x00000123U) 
                                                   + 
                                                   (0x00000fffU 
                                                    & ((IData)(0x0000016cU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 3U)))))))
                                               ? 0U
                                               : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x00000126U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000123U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 3U))))))))) 
                                             | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                (((IData)(0x00000123U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U))))) 
                                                 >> 5U)] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(0x00000123U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U)))))))))))) {
            VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x00000085U) 
                                       + (0x00000fffU 
                                          & ((IData)(0x0000016cU) 
                                             * (7U 
                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 3U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                            (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U])) 
                              << 0x0000003eU) | (((QData)((IData)(
                                                                  vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[7U])) 
                                                  << 0x0000001eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[6U])) 
                                                    >> 2U))));
        }
    }
    if ((1U & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                >> 2U) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                          (((IData)(0x0000016bU) + 
                            (0x00000fffU & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 6U))))) 
                           >> 5U)] >> (0x0000001fU 
                                       & ((IData)(0x0000016bU) 
                                          + (0x00000fffU 
                                             & ((IData)(0x0000016cU) 
                                                * (7U 
                                                   & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 6U)))))))))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x000000c8U) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                                >> 6U))))) 
                                                                                >> 5U)] 
            = (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x000000c8U) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 6U))))) 
                >> 5U)] | ((IData)(1U) << (0x0000001fU 
                                           & ((IData)(0x000000c8U) 
                                              + (0x00000fffU 
                                                 & ((IData)(0x0000016cU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                        >> 6U))))))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x000000c9U) 
                                   + (0x00000fffU & 
                                      ((IData)(0x0000016cU) 
                                       * (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 6U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[5U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[4U]))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(1U) + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 6U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[2U])) 
                          << 0x0000003bU) | (((QData)((IData)(
                                                              vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[1U])) 
                                              << 0x0000001bU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[0U])) 
                                                >> 5U))));
        if (((9U == (0x0000000fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U)))))))
                                      ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                              (((IData)(0x00000126U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000123U) 
                                                      + 
                                                      (0x00000fffU 
                                                       & ((IData)(0x0000016cU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 6U))))))))) 
                                    | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                       (((IData)(0x00000123U) 
                                         + (0x00000fffU 
                                            & ((IData)(0x0000016cU) 
                                               * (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))) 
                                        >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x00000123U) 
                                           + (0x00000fffU 
                                              & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U)))))))))) 
             & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__x_we_ex_id)))) {
            VL_ASSIGNSEL_WI(2912, 6, ((IData)(0x00000109U) 
                                      + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 6U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 0U);
        }
        if ((4U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U])) {
            __Vtemp_10[0U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[9U] 
                               << 0x0000001eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                                  >> 2U));
            __Vtemp_10[1U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000aU] 
                               << 0x0000001eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[9U] 
                                                  >> 2U));
            __Vtemp_10[2U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000bU] 
                               << 0x0000001eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000aU] 
                                                  >> 2U));
            __Vtemp_10[3U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU] 
                               << 0x0000001eU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000bU] 
                                                  >> 2U));
            __Vtemp_10[4U] = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU] 
                                    >> 2U));
            VL_ASSIGNSEL_WW(2912, 129, ((IData)(0x00000044U) 
                                        + (0x00000fffU 
                                           & ((IData)(0x0000016cU) 
                                              * (7U 
                                                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 6U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, __Vtemp_10);
        } else if (((7U == (0x0000000fU & (((0U == 
                                             (0x0000001fU 
                                              & ((IData)(0x00000123U) 
                                                 + 
                                                 (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 6U)))))))
                                             ? 0U : 
                                            (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                             (((IData)(0x00000126U) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 6U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 6U))))))))) 
                                           | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                              (((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U))))) 
                                               >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 6U)))))))))) 
                    | (8U == (0x0000000fU & (((0U == 
                                               (0x0000001fU 
                                                & ((IData)(0x00000123U) 
                                                   + 
                                                   (0x00000fffU 
                                                    & ((IData)(0x0000016cU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 6U)))))))
                                               ? 0U
                                               : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x00000126U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000123U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 6U))))))))) 
                                             | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                (((IData)(0x00000123U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U))))) 
                                                 >> 5U)] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(0x00000123U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U)))))))))))) {
            VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x00000085U) 
                                       + (0x00000fffU 
                                          & ((IData)(0x0000016cU) 
                                             * (7U 
                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 6U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                            (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU])) 
                              << 0x0000003dU) | (((QData)((IData)(
                                                                  vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000bU])) 
                                                  << 0x0000001dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000aU])) 
                                                    >> 3U))));
        }
    }
    if ((IData)((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__wt_valid_ex_id) 
                  >> 3U) & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                            (((IData)(0x0000016bU) 
                              + (0x00000fffU & ((IData)(0x0000016cU) 
                                                * (7U 
                                                   & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 9U))))) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x0000016bU) 
                                            + (0x00000fffU 
                                               & ((IData)(0x0000016cU) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 9U)))))))))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x000000c8U) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                                >> 9U))))) 
                                                                                >> 5U)] 
            = (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x000000c8U) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 9U))))) 
                >> 5U)] | ((IData)(1U) << (0x0000001fU 
                                           & ((IData)(0x000000c8U) 
                                              + (0x00000fffU 
                                                 & ((IData)(0x0000016cU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                        >> 9U))))))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x000000c9U) 
                                   + (0x00000fffU & 
                                      ((IData)(0x0000016cU) 
                                       * (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 9U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[7U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__wbdata_i[6U]))));
        VL_ASSIGNSEL_WQ(2912, 64, ((IData)(1U) + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 9U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                        (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[2U])) 
                          << 0x0000003bU) | (((QData)((IData)(
                                                              vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[1U])) 
                                              << 0x0000001bU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__resolved_branch[0U])) 
                                                >> 5U))));
        if (((9U == (0x0000000fU & (((0U == (0x0000001fU 
                                             & ((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U)))))))
                                      ? 0U : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                              (((IData)(0x00000126U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000123U) 
                                                      + 
                                                      (0x00000fffU 
                                                       & ((IData)(0x0000016cU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 9U))))))))) 
                                    | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                       (((IData)(0x00000123U) 
                                         + (0x00000fffU 
                                            & ((IData)(0x0000016cU) 
                                               * (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))) 
                                        >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((IData)(0x00000123U) 
                                           + (0x00000fffU 
                                              & ((IData)(0x0000016cU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U)))))))))) 
             & (~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__x_we_ex_id)))) {
            VL_ASSIGNSEL_WI(2912, 6, ((IData)(0x00000109U) 
                                      + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                >> 9U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 0U);
        }
        if ((8U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU])) {
            __Vtemp_13[0U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000dU] 
                               << 0x0000001dU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000cU] 
                                                  >> 3U));
            __Vtemp_13[1U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000eU] 
                               << 0x0000001dU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000dU] 
                                                  >> 3U));
            __Vtemp_13[2U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000fU] 
                               << 0x0000001dU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000eU] 
                                                  >> 3U));
            __Vtemp_13[3U] = ((vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x00000010U] 
                               << 0x0000001dU) | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000fU] 
                                                  >> 3U));
            __Vtemp_13[4U] = (1U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x00000010U] 
                                    >> 3U));
            VL_ASSIGNSEL_WW(2912, 129, ((IData)(0x00000044U) 
                                        + (0x00000fffU 
                                           & ((IData)(0x0000016cU) 
                                              * (7U 
                                                 & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 9U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, __Vtemp_13);
        } else if (((7U == (0x0000000fU & (((0U == 
                                             (0x0000001fU 
                                              & ((IData)(0x00000123U) 
                                                 + 
                                                 (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 9U)))))))
                                             ? 0U : 
                                            (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                             (((IData)(0x00000126U) 
                                               + (0x00000fffU 
                                                  & ((IData)(0x0000016cU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 9U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 9U))))))))) 
                                           | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                              (((IData)(0x00000123U) 
                                                + (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U))))) 
                                               >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000123U) 
                                                     + 
                                                     (0x00000fffU 
                                                      & ((IData)(0x0000016cU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 9U)))))))))) 
                    | (8U == (0x0000000fU & (((0U == 
                                               (0x0000001fU 
                                                & ((IData)(0x00000123U) 
                                                   + 
                                                   (0x00000fffU 
                                                    & ((IData)(0x0000016cU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 9U)))))))
                                               ? 0U
                                               : (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x00000126U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000123U) 
                                                       + 
                                                       (0x00000fffU 
                                                        & ((IData)(0x0000016cU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 9U))))))))) 
                                             | (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                (((IData)(0x00000123U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U))))) 
                                                 >> 5U)] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(0x00000123U) 
                                                    + 
                                                    (0x00000fffU 
                                                     & ((IData)(0x0000016cU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U)))))))))))) {
            VL_ASSIGNSEL_WQ(2912, 64, ((IData)(0x00000085U) 
                                       + (0x00000fffU 
                                          & ((IData)(0x0000016cU) 
                                             * (7U 
                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 9U))))), vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, 
                            (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x00000010U])) 
                              << 0x0000003cU) | (((QData)((IData)(
                                                                  vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000fU])) 
                                                  << 0x0000001cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x0000000eU])) 
                                                    >> 4U))));
        }
    }
    if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__commit_ack))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x0000016bU) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0000016bU) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) 
               & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x0000016bU) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                >> 5U)]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x000000c8U) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x000000c8U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) 
               & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x000000c8U) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                >> 5U)]);
    }
    if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__commit_ack))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x0000016bU) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x0000016bU) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                          >> 3U)))))))) 
               & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x0000016bU) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                >> 3U))))) 
                >> 5U)]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x000000c8U) 
                                                                                + 
                                                                                (0x00000fffU 
                                                                                & ((IData)(0x0000016cU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x0000001fU & ((IData)(0x000000c8U) 
                                                  + 
                                                  (0x00000fffU 
                                                   & ((IData)(0x0000016cU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                          >> 3U)))))))) 
               & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
               (((IData)(0x000000c8U) + (0x00000fffU 
                                         & ((IData)(0x0000016cU) 
                                            * (7U & 
                                               ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                >> 3U))))) 
                >> 5U)]);
    }
    if (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__flush_ctrl_id) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000000bU] 
            = (0xfffff7ffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000000bU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[6U] 
            = (0xfffffeffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[6U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[2U] 
            = (0xffffffefU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[2U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000016U] 
            = (0xff7fffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000016U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000011U] 
            = (0xffefffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000011U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000000dU] 
            = (0xfffeffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000000dU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000022U] 
            = (0xfffffff7U & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000022U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000001dU] 
            = (0xfffffffeU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000001dU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000018U] 
            = (0xefffffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000018U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000002dU] 
            = (0xffff7fffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000002dU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000028U] 
            = (0xffffefffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000028U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000024U] 
            = (0xfffffeffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000024U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000038U] 
            = (0xf7ffffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000038U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000033U] 
            = (0xfeffffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000033U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000002fU] 
            = (0xffefffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000002fU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000044U] 
            = (0xffffff7fU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000044U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000003fU] 
            = (0xffffffefU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000003fU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000003bU] 
            = (0xfffffffeU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000003bU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000004fU] 
            = (0xfff7ffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000004fU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000004aU] 
            = (0xfffeffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000004aU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000046U] 
            = (0xffffefffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000046U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000005aU] 
            = (0x7fffffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x0000005aU]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000055U] 
            = (0xefffffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000055U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000051U] 
            = (0xfeffffffU & vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x00000051U]);
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_n = 0U;
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_n = 0U;
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_n 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q) 
                     + (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_n 
            = (0x0000000fU & (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_q) 
                               - (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_popcount__DOT__popcount_o)) 
                              + (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en)));
    }
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_ready_id_if 
        = (1U & ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__i_perf_counters__if_empty_i)) 
                 & ((~ (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__id_stage_i__DOT__issue_q[0x0000000bU] 
                        >> 0x0000000bU)) | (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__issue_instr_issue_id))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr = 0U;
    if ((1U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr 
            = ((2U & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)) 
               | ((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__i_perf_counters__if_empty_i)) 
                  & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_ready_id_if)));
    }
    if ((2U & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q))) {
        cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr 
            = ((1U & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)) 
               | (((~ (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT____Vcellinp__i_perf_counters__if_empty_i)) 
                   & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_ready_id_if)) 
                  << 1U));
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__push_i) 
         & (4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)));
    }
    if (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__push_i) 
           & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)) 
          & (4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__push_i) 
         & (4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)));
    }
    if ((((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr) 
          >> 1U) & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__push_i) 
           & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr) 
              >> 1U)) & (4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__read_pointer_n 
        = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__read_pointer_q) 
                 + ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)) 
                    & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__read_pointer_n 
        = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__read_pointer_q) 
                 + ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)) 
                    & ((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr) 
                       >> 1U))));
    cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address 
        = ((0U != (7U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_entry_if_id[6U] 
                         >> 1U))) & (0U != (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__i_fifo_address__push_i) 
         & (4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)));
    }
    if (((IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__i_fifo_address__push_i) 
           & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address)) 
          & (4U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q;
    }
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__read_pointer_n 
        = (3U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__read_pointer_q) 
                 + ((0U != (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)) 
                    & (IData)(cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address))));
    vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
        = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_q;
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_ready_id_if) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_d 
            = ((2U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q) 
                                       >> 1U)));
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
            = (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_q 
               + ((3U != (3U & (vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__fetch_entry_if_id[6U] 
                                >> 4U))) ? 2ULL : 4ULL));
    } else {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_d 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q;
    }
    if (cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
            = vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__address_out;
    }
    if (((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__instruction_valid) 
         & (IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__reset_address_q))) {
        vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
            = (((QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__addr[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cmp_top__DOT__system__DOT__chip__DOT__tile0__DOT__g_ariane_core__DOT__core__DOT__ariane__DOT__i_cva6__DOT__i_frontend__DOT__addr[0U])));
    }
}
