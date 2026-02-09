// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_h2b9774e3_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_h707f789e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_h648143b1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_hfdaee8b0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_hdd3b4dfb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_h059e2295_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_hecd19090_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_hd4cf2b9d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_hfae8cab7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtile__ConstPool__TABLE_h857d3f10_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtile__ConstPool__TABLE_h2835dccb_0;
extern const VlUnpacked<SData/*9:0*/, 1024> Vtile__ConstPool__TABLE_h5d3b2005_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtile__ConstPool__TABLE_h7abd4790_0;

void Vtile___024root___nba_sequent__TOP__1(Vtile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtile___024root___nba_sequent__TOP__1\n"); );
    Vtile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tile__DOT__rtap_config_req_rw;
    tile__DOT__rtap_config_req_rw = 0;
    QData/*63:0*/ tile__DOT__rtap_config_write_req_data;
    tile__DOT__rtap_config_write_req_data = 0;
    CData/*7:0*/ tile__DOT__rtap_config_req_address;
    tile__DOT__rtap_config_req_address = 0;
    CData/*2:0*/ tile__DOT__l15__DOT__l15__DOT__l15_csm_read_ticket;
    tile__DOT__l15__DOT__l15__DOT__l15_csm_read_ticket = 0;
    QData/*63:0*/ tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1;
    tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1 = 0;
    CData/*2:0*/ tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_csm_mshrid;
    tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_csm_mshrid = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_hmc_fill;
    tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_hmc_fill = 0;
    SData/*12:0*/ tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1;
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1 = 0;
    VlWide<4>/*127:0*/ tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2;
    VL_ZERO_W(128, tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2);
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2;
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2 = 0;
    CData/*7:0*/ tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__noc2_mshrid;
    tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__noc2_mshrid = 0;
    CData/*7:0*/ tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__msg_len;
    tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__msg_len = 0;
    QData/*39:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1 = 0;
    QData/*39:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1 = 0;
    QData/*39:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1 = 0;
    QData/*39:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_val_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_val_s1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0ld_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0ld_s1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0st_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0st_s1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1ld_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1ld_s1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1st_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1st_s1 = 0;
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_partial_tag_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_partial_tag_s1 = 0;
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__unshifted_write_mask_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__unshifted_write_mask_s1 = 0;
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_s1 = 0;
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_1B_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_1B_s1 = 0;
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_2B_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_2B_s1 = 0;
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_4B_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_4B_s1 = 0;
    SData/*15:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_8B_s1;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_8B_s1 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__way_mshr_st_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__way_mshr_st_s2 = 0;
    QData/*32:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way0_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way0_s2 = 0;
    QData/*32:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way1_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way1_s2 = 0;
    QData/*32:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way2_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way2_s2 = 0;
    QData/*32:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way3_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way3_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way0_equals;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way0_equals = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way1_equals;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way1_equals = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way2_equals;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way2_equals = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way3_equals;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way3_equals = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_val_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_val_s2 = 0;
    CData/*3:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_round_robin_turn_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_round_robin_turn_s2 = 0;
    CData/*6:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 = 0;
    VlWide<4>/*127:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2;
    VL_ZERO_W(128, tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2);
    VlWide<4>/*127:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2;
    VL_ZERO_W(128, tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2);
    CData/*2:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2 = 0;
    VlWide<4>/*127:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2;
    VL_ZERO_W(128, tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2);
    VlWide<4>/*127:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2;
    VL_ZERO_W(128, tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2);
    CData/*6:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_index_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_index_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_way_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_way_s2 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_offset_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_offset_s2 = 0;
    CData/*6:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 = 0;
    CData/*6:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2 = 0;
    VlWide<4>/*127:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data;
    VL_ZERO_W(128, tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data);
    QData/*39:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__1__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__1__KET__ = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__0__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__0__KET__ = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__1__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__1__KET__ = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__0__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__0__KET__ = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__1__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__1__KET__ = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__0__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__0__KET__ = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_threadid_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_threadid_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_threadid_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_threadid_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_val_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_val_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_val_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_val_s3 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_way_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_way_s3 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_data_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_data_s3 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3 = 0;
    CData/*6:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_index_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_index_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3 = 0;
    CData/*6:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 = 0;
    CData/*2:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_mshrid_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_mshrid_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_threadid_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_threadid_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 = 0;
    QData/*39:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_address_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_address_s3 = 0;
    CData/*1:0*/ tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_homeid_source_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_homeid_source_s3 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_1;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_2;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_2 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex_plus1;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex_plus1 = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__homeid_val;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__homeid_val = 0;
    IData/*29:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid_val;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid_val = 0;
    IData/*29:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid_val;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid_val = 0;
    CData/*0:0*/ tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__dmbr_stall;
    tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__dmbr_stall = 0;
    CData/*5:0*/ tile__DOT__dmbr_ins__DOT__input2;
    tile__DOT__dmbr_ins__DOT__input2 = 0;
    SData/*9:0*/ tile__DOT__l2__DOT__mshr_inv_counter_out;
    tile__DOT__l2__DOT__mshr_inv_counter_out = 0;
    VlWide<4>/*103:0*/ tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data;
    VL_ZERO_W(104, tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data);
    VlWide<4>/*103:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2;
    VL_ZERO_W(104, tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2);
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_70;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_70 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_71;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_71 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_73;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_73 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_74;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_74 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_75;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_75 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_81;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_81 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_83;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_83 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_70;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_70 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_71;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_71 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_73;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_73 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_74;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_74 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_75;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_75 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_81;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_81 = 0;
    CData/*0:0*/ tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_83;
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_83 = 0;
    VlWide<4>/*103:0*/ tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2;
    VL_ZERO_W(104, tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2);
    CData/*0:0*/ tile__DOT__rtap__DOT__req_val;
    tile__DOT__rtap__DOT__req_val = 0;
    IData/*31:0*/ tile__DOT__rtap__DOT__req_header;
    tile__DOT__rtap__DOT__req_header = 0;
    CData/*7:0*/ tile__DOT__rtap__DOT__req_op;
    tile__DOT__rtap__DOT__req_op = 0;
    SData/*15:0*/ tile__DOT__rtap__DOT__req_misc;
    tile__DOT__rtap__DOT__req_misc = 0;
    CData/*5:0*/ tile__DOT__rtap__DOT__req_tileid;
    tile__DOT__rtap__DOT__req_tileid = 0;
    IData/*31:0*/ tile__DOT__rtap__DOT__req_address;
    tile__DOT__rtap__DOT__req_address = 0;
    IData/*16:0*/ tile__DOT__rtap__DOT__req_address_index;
    tile__DOT__rtap__DOT__req_address_index = 0;
    SData/*8:0*/ tile__DOT__rtap__DOT__req_address_sramid;
    tile__DOT__rtap__DOT__req_address_sramid = 0;
    SData/*8:0*/ tile__DOT__rtap__DOT__req_address_bsel;
    tile__DOT__rtap__DOT__req_address_bsel = 0;
    QData/*63:0*/ tile__DOT__rtap__DOT__req_data;
    tile__DOT__rtap__DOT__req_data = 0;
    VlWide<3>/*93:0*/ tile__DOT__rtap__DOT__judi_op_data;
    VL_ZERO_W(94, tile__DOT__rtap__DOT__judi_op_data);
    CData/*3:0*/ tile__DOT__rtap__DOT__state_counter_minus_1;
    tile__DOT__rtap__DOT__state_counter_minus_1 = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<32>/*1023:0*/ __Vtemp_18;
    VlWide<32>/*1023:0*/ __Vtemp_19;
    // Body
    vlSelfRef.tile__DOT__l2__DOT__broadcast_counter_max2 
        = (((IData)(vlSelfRef.tile__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__x_f) 
            == (0x000000ffU & (IData)((vlSelfRef.tile__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                       >> 0x00000022U)))) 
           & (((IData)(vlSelfRef.tile__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__y_f) 
               == (0x000000ffU & (IData)((vlSelfRef.tile__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                          >> 0x0000002aU)))) 
              & ((IData)(vlSelfRef.tile__DOT__l2__DOT__l2_broadcast_counter_wrap__DOT__l2_broadcast_counter2__DOT__chipid_f) 
                 == (0x00003fffU & (IData)((vlSelfRef.tile__DOT__l2__DOT__config_regs__DOT__coreid_reg_f 
                                            >> 0x00000032U))))));
    vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S3 = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_S3_f;
    vlSelfRef.tile__DOT__l2__DOT__state_wr_en_p2 = 
        ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S3) 
         & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__state_wr_en_S3_f));
    vlSelfRef.tile__DOT__l2__DOT__mshr_wr_state_en_p2 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S3) 
           & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__mshr_wr_state_en_S3_f));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60 = (1U 
                                                 & ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S4_f)) 
                                                    | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__recycled_S4_f)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_threadid 
        = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                 [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][0U] 
                 >> 7U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_mshrid 
        = (3U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                 [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][0U] 
                 >> 5U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_address 
        = (0x000000ffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                                                     [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][1U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                                                       [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][0U])) 
                                       >> 8U)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_type 
        = (0x0000001fU & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
           [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][0U]);
    tile__DOT__l15__DOT__l15__DOT__l15_csm_read_ticket 
        = (7U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                 [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][1U] 
                 >> 0x00000016U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_clear_ticket 
        = tile__DOT__l15__DOT__l15__DOT__l15_csm_read_ticket;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex 
        = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                 [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][1U] 
                 >> 0x00000015U));
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex_plus1 
        = (1U & ((IData)(1U) + (IData)(tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_data_0 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer
        [tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_data_1 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer
        [tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_rdindex_plus1];
    if (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_en_S3) {
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_en_S3_f = 1U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_S3_f[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_data_out[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_S3_f[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_data_out[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_S3_f[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_data_out[2U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_S3_f[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_data_out[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_S3_f[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_data_out[4U];
    }
    if (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__valid_S3_next) {
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_stalled_skid_buffer_en_S3_f = 0U;
    }
    if (vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__rw_conflict_r) {
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in_r[0U];
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in_r[1U];
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in_r[2U];
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in_r[3U];
    } else {
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_out[0U];
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_out[1U];
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_out[2U];
        tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_out[3U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S4_f) 
                                                 == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_cache_type_S4_f));
    if (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__read_enable_in_reg) {
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_read_out_reg[0U];
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_read_out_reg[1U];
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_read_out_reg[2U];
        if (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__rw_conflict_r) {
            vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in_r[0U];
            vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in_r[1U];
            vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[2U] 
                = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in_r[2U];
        }
    }
    if ((2U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S4_f))) {
        if ((1U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S4_f))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 0x0006241eU;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = 0x0006241eU;
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 0x0006221eU;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = 0x0006221eU;
        }
    } else if ((1U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S4_f))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 0x0006241eU;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = 0x0006241eU;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 0x00003c1eU;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = 0x00023a1eU;
    }
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_flits 
        = ((0x0cU == (0x000000ffU & (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                                             [vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f] 
                                             >> 0x0eU))))
            ? 3U : 1U);
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_18, vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f, (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S4_f));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_19, __Vtemp_18, (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S4_f));
    if (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_smc_miss_S4_f) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0U] 
            = __Vtemp_19[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[1U] 
            = __Vtemp_19[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[2U] 
            = __Vtemp_19[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[3U] 
            = __Vtemp_19[3U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[4U] 
            = __Vtemp_19[4U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[5U] 
            = __Vtemp_19[5U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[6U] 
            = __Vtemp_19[6U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[7U] 
            = __Vtemp_19[7U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[8U] 
            = __Vtemp_19[8U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[9U] 
            = __Vtemp_19[9U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000aU] 
            = __Vtemp_19[0x0000000aU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000bU] 
            = __Vtemp_19[0x0000000bU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000cU] 
            = __Vtemp_19[0x0000000cU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000dU] 
            = __Vtemp_19[0x0000000dU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000eU] 
            = __Vtemp_19[0x0000000eU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000fU] 
            = __Vtemp_19[0x0000000fU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000010U] 
            = __Vtemp_19[0x00000010U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000011U] 
            = __Vtemp_19[0x00000011U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000012U] 
            = __Vtemp_19[0x00000012U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000013U] 
            = __Vtemp_19[0x00000013U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000014U] 
            = __Vtemp_19[0x00000014U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000015U] 
            = __Vtemp_19[0x00000015U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000016U] 
            = __Vtemp_19[0x00000016U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000017U] 
            = __Vtemp_19[0x00000017U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000018U] 
            = __Vtemp_19[0x00000018U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000019U] 
            = __Vtemp_19[0x00000019U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001aU] 
            = __Vtemp_19[0x0000001aU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001bU] 
            = __Vtemp_19[0x0000001bU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001cU] 
            = __Vtemp_19[0x0000001cU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001dU] 
            = __Vtemp_19[0x0000001dU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001eU] 
            = __Vtemp_19[0x0000001eU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001fU] 
            = __Vtemp_19[0x0000001fU];
        vlSelfRef.tile__DOT__l2__DOT__mshr_inv_counter_rd_index_in_p1 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_pending_index_S4_f;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[3U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[4U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[5U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[5U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[6U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[6U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[7U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[7U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[8U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[8U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[9U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[9U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000aU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000000aU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000bU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000000bU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000cU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000000cU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000dU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000000dU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000eU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000000eU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000fU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000000fU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000010U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000010U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000011U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000011U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000012U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000012U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000013U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000013U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000014U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000014U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000015U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000015U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000016U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000016U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000017U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000017U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000018U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000018U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000019U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x00000019U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001aU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000001aU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001bU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000001bU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001cU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000001cU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001dU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000001dU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001eU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000001eU];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001fU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0x0000001fU];
        vlSelfRef.tile__DOT__l2__DOT__mshr_inv_counter_rd_index_in_p1 
            = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__stall_before_S4_f)
                ? (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_empty_index_buf_S4_f)
                : (IData)(vlSelfRef.tile__DOT__l2__DOT__mshr_empty_index));
    }
    if (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__stall_before_S4_f) {
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[2U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_buf_S4_f[4U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[2U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[4U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[5U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[6U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[7U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[8U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[9U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000aU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000bU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000cU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000dU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000eU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000000fU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000010U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000011U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000012U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000013U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000014U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000015U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000016U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000017U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000018U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x00000019U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001aU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001bU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001cU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001dU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001eU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_buf_S4_f[0x0000001fU];
    } else {
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[2U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_S4_f[4U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[1U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[2U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[2U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[3U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[4U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[4U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[5U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[5U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[6U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[6U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[7U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[7U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[8U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[8U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[9U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[9U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000aU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000aU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000bU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000bU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000cU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000cU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000dU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000dU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000eU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000eU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000000fU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000000fU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000010U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000010U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000011U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000011U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000012U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000012U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000013U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000013U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000014U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000014U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000015U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000015U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000016U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000016U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000017U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000017U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000018U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000018U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x00000019U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x00000019U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001aU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001aU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001bU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001bU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001cU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001cU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001dU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001dU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001eU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001eU];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dir_data_sel_S4[0x0000001fU] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49[0x0000001fU];
    }
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3 
                                      >> 4U)));
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3 
                                      >> 4U)));
    } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3 
                                      >> 4U)));
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3 
                                      >> 4U)));
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3 
                                      >> 4U)));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_wmt_write_index_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_index_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2 = 1U;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2 = 0U;
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2 = 0U;
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2 = 0U;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_lrsc_flag_write_data_s2 
        = (0x0000000fU & (- (IData)((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_state_s2))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_lrsc_flag_write_index_s2 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_index_s2;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 = 0U;
    if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 = 0U;
    } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 = 0U;
    } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 = 1U;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 = 3U;
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_state_s2;
    } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_ack_state_s2;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_mesi_write_data_s2 
        = (0x000000ffU & (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2) 
                           << 6U) | (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2) 
                                      << 4U) | (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2) 
                                                 << 2U) 
                                                | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_state_s2)))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 = 0U;
    if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_mesi_write_index_s2 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_index_s2;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_way_array[0U] 
        = (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_way_s1));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_way_array[1U] 
        = (3U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_way_s1) 
                 >> 2U));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2 
        = (0x0000000fU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__lruarray_l15_dout_s2));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_round_robin_turn_s2 
        = (3U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__lruarray_l15_dout_s2) 
                 >> 4U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2 
        = ((0x0000000fU == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
            ? (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_round_robin_turn_s2)
            : ((2U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_round_robin_turn_s2))
                ? ((1U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_round_robin_turn_s2))
                    ? ((8U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                        ? ((1U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                            ? ((2U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                                ? 2U : 1U) : 0U) : 3U)
                    : ((4U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                        ? ((8U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                            ? ((1U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                                ? 1U : 0U) : 3U) : 2U))
                : ((1U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_round_robin_turn_s2))
                    ? ((2U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                        ? ((4U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                            ? ((8U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                                ? 0U : 3U) : 2U) : 1U)
                    : ((1U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                        ? ((2U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                            ? ((4U & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_used_bits_s2))
                                ? 3U : 2U) : 1U) : 0U))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array[0U] 
        = (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_state_s1));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array[1U] 
        = (3U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_state_s1) 
                 >> 2U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_ld_address_array[0U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_ld_address[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_ld_address[0U]))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_ld_address_array[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_ld_address[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_ld_address[1U])) 
                                       >> 8U)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array[0U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_address[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_address[0U]))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_address[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_st_address[1U])) 
                                       >> 8U)));
    if (vlSelfRef.__VdlySet__tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr__v0) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[vlSelfRef.__VdlyDim0__tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr__v0] 
            = vlSelfRef.__VdlyVal__tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr__v0;
    }
    if (vlSelfRef.__VdlySet__tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr__v1) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[0U] = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[1U] = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[2U] = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[3U] = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[4U] = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[5U] = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[6U] = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr[7U] = 0U;
    }
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 = 0ULL;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2;
    } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2;
    } else if ((3U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
        if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2;
        } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2;
        } else if ((7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2;
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_address_s2 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_address_s2;
    tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__msg_len 
        = (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                          >> 0x00000016U));
    tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1 
        = ((1U == (IData)(tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__msg_len))
            ? (((QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U])))
            : (((QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[5U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[4U]))));
    tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__noc2_mshrid 
        = (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                          >> 6U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid 
        = (3U & (IData)(tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__noc2_mshrid));
    tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_csm_mshrid 
        = (7U & (IData)(tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__noc2_mshrid));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid 
        = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__noc2_mshrid) 
                 >> 2U));
    tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_hmc_fill 
        = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__noc2_mshrid) 
                 >> 7U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xfffeU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | ((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
               [0U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                       >> 2U))) & (
                                                   vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                                                   [0U] 
                                                   >> 
                                                   (3U 
                                                    & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xfffdU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [1U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [1U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 1U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xfffbU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [2U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [2U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 2U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xfff7U & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [3U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [3U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 3U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xffefU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [4U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [4U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 4U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xffdfU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [5U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [5U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 5U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xffbfU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [6U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [6U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 6U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xff7fU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [7U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [7U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 7U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xfeffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [8U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [8U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 8U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xfdffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [9U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                [9U] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 9U));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xfbffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [0x0aU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                  [0x0aU] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 0x0000000aU));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xf7ffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [0x0bU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                  [0x0bU] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 0x0000000bU));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xefffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [0x0cU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                  [0x0cU] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 0x0000000cU));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xdfffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [0x0dU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                  [0x0dU] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 0x0000000dU));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0xbfffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [0x0eU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                  [0x0eU] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 0x0000000eU));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp 
        = ((0x7fffU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag
                [0x0fU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_valid
                  [0x0fU] >> (3U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__smc_rd_addr_in_buf_S4_f)))) 
              << 0x0000000fU));
    if (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__ww_conflict_r) {
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in[0U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5[0U] 
               | ((~ vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__WRITE_BIT_MASK_REG[0U]) 
                  & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in_r[0U]));
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in[1U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5[1U] 
               | ((~ vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__WRITE_BIT_MASK_REG[1U]) 
                  & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in_r[1U]));
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in[2U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5[2U] 
               | ((~ vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__WRITE_BIT_MASK_REG[2U]) 
                  & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in_r[2U]));
    } else {
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in[0U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5[0U] 
               | ((~ vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__WRITE_BIT_MASK_REG[0U]) 
                  & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_write_read_out_reg[0U]));
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in[1U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5[1U] 
               | ((~ vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__WRITE_BIT_MASK_REG[1U]) 
                  & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_write_read_out_reg[1U]));
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_in[2U] 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5[2U] 
               | ((~ vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__WRITE_BIT_MASK_REG[2U]) 
                  & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bram_data_write_read_out_reg[2U]));
    }
    if (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__ren_r) {
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[1U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[2U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[3U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[4U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[5U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[5U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[6U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[6U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[7U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[7U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[8U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[8U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[9U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[9U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000aU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000aU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000bU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000bU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000cU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000cU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000dU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000dU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000eU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000eU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000fU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000fU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000010U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000010U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000011U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000011U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000012U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000012U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000013U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000013U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000014U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000014U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000015U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000015U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000016U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000016U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000017U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000017U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000018U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000018U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000019U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000019U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001aU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001aU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001bU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001bU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001cU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001cU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001dU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001dU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001eU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001eU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001fU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001fU];
    } else {
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[1U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[2U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[3U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[4U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[5U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[5U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[6U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[6U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[7U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[7U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[8U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[8U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[9U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[9U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000aU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000000aU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000bU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000000bU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000cU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000000cU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000dU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000000dU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000eU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000000eU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000000fU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000000fU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000010U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000010U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000011U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000011U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000012U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000012U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000013U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000013U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000014U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000014U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000015U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000015U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000016U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000016U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000017U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000017U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000018U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000018U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x00000019U] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x00000019U];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001aU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000001aU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001bU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000001bU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001cU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000001cU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001dU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000001dU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001eU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000001eU];
        vlSelfRef.tile__DOT__l2__DOT__dir_data_out[0x0000001fU] 
            = vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DOUT_r[0x0000001fU];
    }
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[1U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[1U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[1U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[1U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[1U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[2U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[2U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[2U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[2U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[2U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[3U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[3U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[3U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[3U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[3U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[4U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[4U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[4U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[4U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[4U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[5U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[5U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[5U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[5U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[5U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[6U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[6U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[6U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[6U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[6U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[7U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[7U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[7U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[7U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[7U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[8U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[8U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[8U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[8U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[8U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[9U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[9U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[9U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[9U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[9U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000000aU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000aU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000aU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000aU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000000aU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000000bU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000bU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000bU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000bU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000000bU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000000cU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000cU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000cU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000cU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000000cU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000000dU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000dU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000dU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000dU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000000dU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000000eU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000eU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000eU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000eU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000000eU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000000fU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000fU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000000fU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000000fU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000000fU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000010U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000010U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000010U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000010U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000010U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000011U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000011U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000011U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000011U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000011U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000012U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000012U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000012U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000012U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000012U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000013U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000013U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000013U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000013U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000013U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000014U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000014U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000014U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000014U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000014U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000015U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000015U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000015U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000015U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000015U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000016U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000016U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000016U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000016U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000016U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000017U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000017U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000017U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000017U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000017U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000018U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000018U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000018U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000018U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000018U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x00000019U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000019U]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x00000019U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x00000019U] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x00000019U]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000001aU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001aU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001aU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001aU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000001aU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000001bU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001bU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001bU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001bU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000001bU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000001cU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001cU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001cU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001cU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000001cU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000001dU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001dU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001dU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001dU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000001dU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000001eU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001eU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001eU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001eU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000001eU]));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bram_data_in[0x0000001fU] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001fU]) 
            & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__up_to_date_data[0x0000001fU]) 
           | (vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__BW_r[0x0000001fU] 
              & vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__DIN_r[0x0000001fU]));
    vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bram_data_in[0U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[0U]) 
            & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[0U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[0U] 
              & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DIN_r[0U]));
    vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bram_data_in[1U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[1U]) 
            & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[1U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[1U] 
              & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DIN_r[1U]));
    vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bram_data_in[2U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[2U]) 
            & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[2U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[2U] 
              & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DIN_r[2U]));
    vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bram_data_in[3U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[3U]) 
            & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[3U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[3U] 
              & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DIN_r[3U]));
    vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bram_data_in[4U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[4U]) 
            & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[4U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__BW_r[4U] 
              & vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DIN_r[4U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bram_data_in[0U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[0U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[0U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[0U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DIN_r[0U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bram_data_in[1U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[1U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[1U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[1U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DIN_r[1U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bram_data_in[2U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[2U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[2U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[2U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DIN_r[2U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bram_data_in[3U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[3U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[3U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__BW_r[3U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DIN_r[3U]));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_data_valid_in 
        = ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT____VdfgRegularize_h906021df_0_0)) 
           & (0U != (IData)(vlSelfRef.tile__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_valid_in 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT____VdfgRegularize_h906021df_0_0) 
           & (0U != (IData)(vlSelfRef.tile__DOT__cgni_blk3__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__bram_data_in 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__BW_r) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__up_to_date_data) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__BW_r 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__DIN_r));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt_l15_dout_s3_extended 
        = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__ren_r)
            ? vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__up_to_date_data
            : vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__DOUT_r);
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_header_valid_in 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT____VdfgRegularize_hc0af6d4c_0_1) 
           & (0U != (IData)(vlSelfRef.tile__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_data_valid_in 
        = ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT____VdfgRegularize_hc0af6d4c_0_1)) 
           & (0U != (IData)(vlSelfRef.tile__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f)));
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[0U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[1U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[2U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[3U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2 = 0U;
    if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipe_mshr_write_buffer_rd_en_s2) {
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[0U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__st_write_buffer
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2][0U];
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[1U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__st_write_buffer
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2][1U];
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[2U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__st_write_buffer
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2][2U];
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[3U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__st_write_buffer
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2][3U];
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__st_write_buffer_byte_mask
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2];
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f00U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__replace_cmp))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000fU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__replace_cmp))));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f00U & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__replace_cmp))));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000fU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__replace_cmp))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bram_data_in[0U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[0U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[0U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[0U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DIN_r[0U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bram_data_in[1U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[1U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[1U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[1U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DIN_r[1U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bram_data_in[2U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[2U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[2U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[2U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DIN_r[2U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bram_data_in[3U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[3U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[3U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[3U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DIN_r[3U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bram_data_in[4U] 
        = (((~ vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[4U]) 
            & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[4U]) 
           | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__BW_r[4U] 
              & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DIN_r[4U]));
    if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__ren_r) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[0U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[0U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[1U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[1U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[2U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[2U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[3U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[3U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[4U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__up_to_date_data[4U];
    } else {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[0U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DOUT_r[0U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[1U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DOUT_r[1U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[2U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DOUT_r[2U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[3U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DOUT_r[3U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[4U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__DOUT_r[4U];
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[0U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [0U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[1U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [1U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[2U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [2U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[3U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [3U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[4U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [4U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[5U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [5U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[6U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [6U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[7U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer
        [7U];
    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state))) {
        if ((0U != (IData)(vlSelfRef.tile__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_f))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[0U] 
                = vlSelfRef.tile__DOT__buffer_processor_data_noc2;
        }
    } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__state))) {
        if ((0U != (IData)(vlSelfRef.tile__DOT__cgni_blk2__DOT__data__DOT__elements_in_array_f))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__buffer_next[vlSelfRef.tile__DOT__l15__DOT__l15__DOT__simplenocbuffer__DOT__index] 
                = vlSelfRef.tile__DOT__buffer_processor_data_noc2;
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_89 = (IData)(
                                                        ((0x0000000000080000ULL 
                                                          == 
                                                          (0x00000000003fc000ULL 
                                                           & vlSelfRef.tile__DOT__l2__DOT__noc1_data_in)) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_state_f))));
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_interval2 
        = (0x000001ffU & (((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_interval) 
                           > (0x000001ffU & ((IData)(1U) 
                                             + VL_SHIFTL_III(9,9,10, (IData)(0x000aU), (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__binScale)))))
                           ? ((IData)(1U) + VL_SHIFTL_III(9,9,10, (IData)(0x000aU), (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__binScale)))
                           : (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_interval)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_address_s3 = 0ULL;
    if (((((((((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3)) 
               | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
              | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
             | (1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
            | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
           | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
          | (4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
         | (7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3)))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_address_s3 
            = ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))
                ? vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3
                : ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))
                    ? vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_address_s3
                    : ((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))
                        ? vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_address_s3
                        : vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3)));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc3encoder_req_address 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_address_s3;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address = 0ULL;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_index_s3 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__cache_index_s3;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_lruarray_write_index_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_index_s3;
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_0 
        = (1U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U] 
                 ^ (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U] 
                    >> 1U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_1 
        = (1U & VL_REDXOR_8((0x00000030U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_2 
        = (1U & VL_REDXOR_16((0x00001800U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_3 
        = (1U & VL_REDXOR_32((0x0c000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_4 
        = (1U & VL_REDXOR_32((0x06000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[3U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_9 
        = (1U & VL_REDXOR_32((0x60000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_10 
        = (1U & VL_REDXOR_16((0x0000c000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_11 
        = (1U & VL_REDXOR_16((0x00000180U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_13 
        = (1U & VL_REDXOR_4((0x0000000cU & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_0 
        = (1U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U] 
                 ^ (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U] 
                    >> 1U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_1 
        = (1U & VL_REDXOR_8((0x00000030U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_2 
        = (1U & VL_REDXOR_16((0x00001800U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_3 
        = (1U & VL_REDXOR_32((0x0c000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_4 
        = (1U & VL_REDXOR_32((0x06000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[1U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_9 
        = (1U & VL_REDXOR_32((0x60000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_10 
        = (1U & VL_REDXOR_16((0x0000c000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_11 
        = (1U & VL_REDXOR_16((0x00000180U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_13 
        = (1U & VL_REDXOR_4((0x0000000cU & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_5 
        = (1U & VL_REDXOR_32((0xc0000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[3U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_5 
        = (1U & VL_REDXOR_32((0xc0000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[1U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_6 
        = (1U & VL_REDXOR_32((0x01800000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[3U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_6 
        = (1U & VL_REDXOR_32((0x01800000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[1U])));
    __Vtableidx3 = (((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_bin) 
                     << 2U) | (((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_l2_miss) 
                                << 1U) | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__dmbr_response_val)));
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_0 = 
        Vtile__ConstPool__TABLE_h2b9774e3_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_1 = 
        Vtile__ConstPool__TABLE_h707f789e_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_2 = 
        Vtile__ConstPool__TABLE_h648143b1_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_3 = 
        Vtile__ConstPool__TABLE_hfdaee8b0_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_4 = 
        Vtile__ConstPool__TABLE_hdd3b4dfb_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_5 = 
        Vtile__ConstPool__TABLE_h059e2295_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_6 = 
        Vtile__ConstPool__TABLE_hecd19090_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_7 = 
        Vtile__ConstPool__TABLE_hd4cf2b9d_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_8 = 
        Vtile__ConstPool__TABLE_hfae8cab7_0[__Vtableidx3];
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_9 = 
        Vtile__ConstPool__TABLE_h857d3f10_0[__Vtableidx3];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array[0U] 
        = (0x0000000fU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_vals_s1));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array[1U] 
        = (0x0000000fU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_vals_s1) 
                          >> 4U));
    if (vlSelfRef.tile__DOT__dmbr_ins__DOT__rep_en) {
        vlSelfRef.tile__DOT__dmbr_ins__DOT__next_repInterval = 0U;
        tile__DOT__dmbr_ins__DOT__input2 = ((((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_0))) 
                                              & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_0)) 
                                             | ((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_1))) 
                                                & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_1))) 
                                            | ((((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_2))) 
                                                 & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_2)) 
                                                | ((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_3))) 
                                                   & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_3))) 
                                               | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_4))) 
                                                   & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_4)) 
                                                  | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_5))) 
                                                      & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_5)) 
                                                     | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_6))) 
                                                         & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_6)) 
                                                        | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_7))) 
                                                            & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_7)) 
                                                           | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_8))) 
                                                               & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_8)) 
                                                              | ((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_9))) 
                                                                 & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repCredit_9)))))))));
    } else {
        vlSelfRef.tile__DOT__dmbr_ins__DOT__next_repInterval 
            = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__repInterval)));
        tile__DOT__dmbr_ins__DOT__input2 = ((((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_0))) 
                                              & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_0)) 
                                             | ((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_1))) 
                                                & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_1))) 
                                            | ((((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_2))) 
                                                 & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_2)) 
                                                | ((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_3))) 
                                                   & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_3))) 
                                               | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_4))) 
                                                   & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_4)) 
                                                  | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_5))) 
                                                      & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_5)) 
                                                     | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_6))) 
                                                         & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_6)) 
                                                        | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_7))) 
                                                            & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_7)) 
                                                           | (((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_8))) 
                                                               & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_8)) 
                                                              | ((- (IData)((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_en_9))) 
                                                                 & (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__curCredit_9)))))))));
    }
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 = 2U;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 = 2U;
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 
            = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_me_s3)
                ? 2U : 3U);
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 = 3U;
    } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 = 3U;
    } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3 = 3U;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipe_mshr_op_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_type_s3;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3 
        = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_me_s3) 
           | (1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s3)));
    __Vtableidx2 = (((IData)(vlSelfRef.tile__DOT__transducer_l15_val) 
                     << 4U) | ((((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data_val) 
                                 & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder__DOT__is_message_new)) 
                                << 3U) | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1 
        = Vtile__ConstPool__TABLE_h2835dccb_0[__Vtableidx2];
    if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__ren_r) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[0U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[0U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[1U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[1U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[2U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[2U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[3U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__up_to_date_data[3U];
    } else {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[0U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DOUT_r[0U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[1U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DOUT_r[1U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[2U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DOUT_r[2U];
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache_l15_dout_s3[3U] 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__DOUT_r[3U];
    }
    vlSelfRef.tile__DOT__l2__DOT__mshr_inc_counter_en_p2 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S3) 
           & (0x17U == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__msg_type_S3_f)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT____VdfgRegularize_he225fdf4_0_14 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S3) 
           & (0x0cU == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__msg_type_S3_f)));
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid_val 
        = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                 [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][2U] 
                 >> 0x00000017U));
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid 
        = (0x3fffffffU & ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                           [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][2U] 
                           << 7U) | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer
                                     [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex][1U] 
                                     >> 0x00000019U)));
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid_val 
        = (1U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_val) 
                 >> (IData)(tile__DOT__l15__DOT__l15__DOT__l15_csm_read_ticket)));
    if (vlSelfRef.tile__DOT__rst_n_f) {
        if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__stall_S3)))) {
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_vd_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_vd_S2;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_evict_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_evict_S2;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__state_wr_en_S3_f 
                = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT____VdfgRegularize_he225fdf4_0_29) 
                   & (IData)(((0U != (0x00009192U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2)) 
                              | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_rb_en_S2))));
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_state_in_S3_f 
                = (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_tag_hit_S2) 
                    & (((0x0eU == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f)) 
                        | (0x0fU == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f))) 
                       & ((0U == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_mesi_S2)) 
                          & (3U == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_vd_S2)))))
                    ? 2U : 1U);
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__req_from_owner_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__req_from_owner_S2;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_subline_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_chipid_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_chipid_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_y_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_y_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_x_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_x_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S2_f;
            __Vtemp_4[0U] = ((((0x00018000U & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                               << 0x0000000aU)) 
                               | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f) 
                                   << 0x0000000eU) 
                                  | ((0x00003c00U & 
                                      (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_load_sdid_S2)
                                         ? ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f) 
                                            >> 0x0000000aU)
                                         : ((2U == 
                                             (3U & 
                                              (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                               >> 9U)))
                                             ? ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2) 
                                                | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2))
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                     >> 9U)))
                                                 ? 
                                                ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2)) 
                                                 & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2))
                                                 : 0U))) 
                                       << 0x0000000aU)) 
                                     | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_owner_S2)))) 
                              << 0x00000013U) | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_mesi_S2) 
                                                  << 0x00000011U) 
                                                 | ((0x00018000U 
                                                     & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                        << 0x0000000aU)) 
                                                    | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f) 
                                                        << 0x0000000eU) 
                                                       | ((0x00003c00U 
                                                           & (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_load_sdid_S2)
                                                                ? 
                                                               ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f) 
                                                                >> 0x0000000aU)
                                                                : 
                                                               ((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                     >> 9U)))
                                                                 ? 
                                                                ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2) 
                                                                 | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2))
                                                                 : 
                                                                ((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                      >> 9U)))
                                                                  ? 
                                                                 ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2)) 
                                                                  & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2))
                                                                  : 0U))) 
                                                              << 0x0000000aU)) 
                                                          | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_owner_S2))))));
            __Vtemp_4[1U] = ((((0x00018000U & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                               << 0x0000000aU)) 
                               | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f) 
                                   << 0x0000000eU) 
                                  | ((0x00003c00U & 
                                      (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_load_sdid_S2)
                                         ? ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f) 
                                            >> 0x0000000aU)
                                         : ((2U == 
                                             (3U & 
                                              (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                               >> 9U)))
                                             ? ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2) 
                                                | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2))
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                     >> 9U)))
                                                 ? 
                                                ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2)) 
                                                 & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2))
                                                 : 0U))) 
                                       << 0x0000000aU)) 
                                     | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_owner_S2)))) 
                              << 0x00000019U) | ((0xffffffc0U 
                                                  & (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_mesi_S2) 
                                                      << 0x00000017U) 
                                                     | (((0x00018000U 
                                                          & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                             << 0x0000000aU)) 
                                                         | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f) 
                                                             << 0x0000000eU) 
                                                            | ((0x00003c00U 
                                                                & (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_load_sdid_S2)
                                                                     ? 
                                                                    ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f) 
                                                                     >> 0x0000000aU)
                                                                     : 
                                                                    ((2U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                          >> 9U)))
                                                                      ? 
                                                                     ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2) 
                                                                      | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2))
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                           >> 9U)))
                                                                       ? 
                                                                      ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2)) 
                                                                       & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2))
                                                                       : 0U))) 
                                                                   << 0x0000000aU)) 
                                                               | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_owner_S2)))) 
                                                        << 6U))) 
                                                 | (0x0007ffffU 
                                                    & ((0x0007fff0U 
                                                        & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_mesi_S2) 
                                                           << 4U)) 
                                                       | (((0x00018000U 
                                                            & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                               << 0x0000000aU)) 
                                                           | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f) 
                                                               << 0x0000000eU) 
                                                              | ((0x00003c00U 
                                                                  & (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_load_sdid_S2)
                                                                       ? 
                                                                      ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f) 
                                                                       >> 0x0000000aU)
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (3U 
                                                                         & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                            >> 9U)))
                                                                        ? 
                                                                       ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2) 
                                                                        | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2))
                                                                        : 
                                                                       ((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                             >> 9U)))
                                                                         ? 
                                                                        ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2)) 
                                                                         & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2))
                                                                         : 0U))) 
                                                                     << 0x0000000aU)) 
                                                                 | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_owner_S2)))) 
                                                          >> 0x0000000dU)))));
            __Vtemp_4[2U] = ((0x01ffffffU & ((0x01fffc00U 
                                              & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_mesi_S2) 
                                                 << 0x0000000aU)) 
                                             | (((0x00018000U 
                                                  & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                     << 0x0000000aU)) 
                                                 | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f) 
                                                     << 0x0000000eU) 
                                                    | ((0x00003c00U 
                                                        & (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_load_sdid_S2)
                                                             ? 
                                                            ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f) 
                                                             >> 0x0000000aU)
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (3U 
                                                               & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                  >> 9U)))
                                                              ? 
                                                             ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2) 
                                                              | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2))
                                                              : 
                                                             ((3U 
                                                               == 
                                                               (3U 
                                                                & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                   >> 9U)))
                                                               ? 
                                                              ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2)) 
                                                               & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2))
                                                               : 0U))) 
                                                           << 0x0000000aU)) 
                                                       | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_owner_S2)))) 
                                                >> 7U))) 
                             | (0x0000003fU & ((0x0000003fU 
                                                & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_mesi_S2) 
                                                   >> 9U)) 
                                               | (((0x00018000U 
                                                    & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                       << 0x0000000aU)) 
                                                   | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f) 
                                                       << 0x0000000eU) 
                                                      | ((0x00003c00U 
                                                          & (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_load_sdid_S2)
                                                               ? 
                                                              ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f) 
                                                               >> 0x0000000aU)
                                                               : 
                                                              ((2U 
                                                                == 
                                                                (3U 
                                                                 & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                    >> 9U)))
                                                                ? 
                                                               ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2) 
                                                                | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2))
                                                                : 
                                                               ((3U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                     >> 9U)))
                                                                 ? 
                                                                ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_subline_S2)) 
                                                                 & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_subline_S2))
                                                                 : 0U))) 
                                                             << 0x0000000aU)) 
                                                         | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_owner_S2)))) 
                                                  >> 0x0000001aU))));
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_cache_type_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_cache_type_S2;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_tag_hit_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_tag_hit_S2;
            __Vtemp_13[0U] = ((0x00060000U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                             >> 4U)))) 
                                              << 0x00000011U)) 
                              | ((0x00018000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                >> 7U)))) 
                                                 << 0x0000000fU)) 
                                 | ((0x00004000U & 
                                     (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                      << 6U)) | ((0x00003c00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                    >> 0x0000000cU)))) 
                                                     << 0x0000000aU)) 
                                                 | (0x000003ffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                                     >> 0x0000000fU)))))))));
            __Vtemp_13[1U] = 0U;
            __Vtemp_13[2U] = 0U;
            VL_SHIFTL_WWI(76,76,32, __Vtemp_14, __Vtemp_13, 
                          ((IData)(0x00000013U) * (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_sel_S2)));
            if (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S2_f) {
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[0U] 
                    = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data);
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[1U] 
                    = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data 
                               >> 0x00000020U));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[2U] 
                    = (0x0003f000U & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data) 
                                      << 0x0000000cU));
                if ((0U == (3U & (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S2_f 
                                          >> 0x0000001eU))))) {
                    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[0U] = 0xffffffffU;
                    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[1U] = 0xffffffffU;
                    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[2U] = 0x00000fffU;
                } else {
                    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[0U] = 0U;
                    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[1U] = 0U;
                    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[2U] = 0x0003f000U;
                }
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__msg_data_S3_f 
                    = ((0xa4U == (0x000000ffU & (IData)(
                                                        (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S2_f 
                                                         >> 0x20U))))
                        ? (QData)((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_way_S2
                                          [vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_sel_S2]))
                        : ((0xa6U == (0x000000ffU & (IData)(
                                                            (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S2_f 
                                                             >> 0x20U))))
                            ? ((0U == (3U & (IData)(
                                                    (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S2_f 
                                                     >> 0x1eU))))
                                ? (((QData)((IData)(
                                                    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[1U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[0U])))
                                : (((QData)((IData)(
                                                    (3U 
                                                     & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[2U] 
                                                        >> 0x00000010U)))) 
                                    << 4U) | (QData)((IData)(
                                                             (0x0000000fU 
                                                              & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[2U] 
                                                                 >> 0x0000000cU))))))
                            : 0ULL));
            } else {
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[0U] 
                    = __Vtemp_4[0U];
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[1U] 
                    = __Vtemp_4[1U];
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[2U] 
                    = ((0x00030000U & (((IData)(1U) 
                                        + ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[2U] 
                                            << 0x00000010U) 
                                           | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[2U] 
                                              >> 0x00000010U))) 
                                       << 0x00000010U)) 
                       | (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_lru_S2) 
                           << 0x0000000cU) | (0x00000fffU 
                                              & __Vtemp_4[2U])));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[0U] 
                    = __Vtemp_14[0U];
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[1U] 
                    = __Vtemp_14[1U];
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[2U] 
                    = ((0x00030000U & ((- (IData)((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__state_rb_en_S2))) 
                                       << 0x00000010U)) 
                       | ((0x0000f000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cs_S2 
                                                         >> 1U)))) 
                                          << 0x0000000cU)) 
                          | (0x00000fffU & __Vtemp_14[2U])));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__msg_data_S3_f 
                    = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data;
            }
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__evict_addr_S3_f 
                = (((QData)((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_way_S2
                                    [vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_sel_S2])) 
                    << 0x0000000eU) | (QData)((IData)(
                                                      (0x00003fc0U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S2_f 
                                                                   >> 6U)) 
                                                          << 6U)))));
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_way_state_mesi_S2;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_smc_miss_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_smc_miss_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_miss_S4_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_miss_S3_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_addr_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__data_addr_p1;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S3_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S2_f;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_miss_S3_f 
                = (1U & ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__l2_tag_hit_S2)) 
                         | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_miss_S2_f)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__stall_S2)))) {
            vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__mshrid_S2_f 
                = (0x000000ffU & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                                  >> 6U));
            vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__addr_S2_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe2_addr_S1;
            vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__msg_type_S2_f 
                = (0x000000ffU & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                                  >> 0x0000000eU));
            if (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_from_mshr_S1) {
                vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__cache_type_S2_f 
                    = (1U & (vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[1U] 
                             >> 0x00000012U));
                vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__sdid_S2_f 
                    = (0x00003fffU & ((vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[3U] 
                                       << 0x0000001fU) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[3U] 
                                         >> 1U)));
            } else {
                vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__cache_type_S2_f 
                    = (1U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[2U] 
                             >> 0x0000000bU));
                vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__sdid_S2_f 
                    = (0x00003fffU & (0x000003ffU & 
                                      (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[4U] 
                                       >> 0x00000014U)));
            }
            vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_S2_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_next_S1;
        }
        if (((IData)(vlSelfRef.tile__DOT__l2__DOT__reg_wr_en) 
             & (0x000000a900000000ULL == (0x000000ff00000000ULL 
                                          & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__addr_S1)))) {
            vlSelfRef.tile__DOT__l2__DOT__config_regs__DOT__ctrl_reg_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data;
        }
        if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__stall_S2)))) {
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_pending_index_S2_f 
                = vlSelfRef.tile__DOT__l2__DOT__mshr_pending_index;
            if (vlSelfRef.tile__DOT__l2__DOT__mshr_pending) {
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__recycled_S2_f 
                    = (1U & (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[4U] 
                             >> 4U));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_fbits_S2_f 
                    = (0x0000000fU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[3U] 
                                       << 3U) | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[2U] 
                                                 >> 0x0000001dU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshrid_S2_f 
                    = (0x000000ffU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[1U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[1U] 
                                         >> 0x0000000aU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__lsid_S2_f 
                    = (0x000003ffU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[3U] 
                                       << 0x00000011U) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[3U] 
                                         >> 0x0000000fU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_chipid_S2_f 
                    = (0x00003fffU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[2U] 
                                       << 1U) | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[1U] 
                                                 >> 0x0000001fU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_y_S2_f 
                    = (0x000000ffU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[2U] 
                                       << 0x0000000bU) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[2U] 
                                         >> 0x00000015U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_x_S2_f 
                    = (0x000000ffU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[2U] 
                                       << 0x00000013U) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[2U] 
                                         >> 0x0000000dU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f 
                    = (0x00003fffU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[3U] 
                                       << 0x0000001fU) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[3U] 
                                         >> 1U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f 
                    = (1U & (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[1U] 
                             >> 0x00000012U));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S2_f 
                    = (0x000003ffU & ((vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[4U] 
                                       << 7U) | (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[3U] 
                                                 >> 0x00000019U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_smc_miss_S2_f 
                    = (1U & (vlSelfRef.tile__DOT__l2__DOT__pending_mshr_data_out[4U] 
                             >> 3U));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__data_size_S2_f 
                    = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__data_size_S1;
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S2_f = 1U;
            } else {
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__recycled_S2_f = 0U;
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_fbits_S2_f 
                    = (0x0000000fU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
                                       << 2U) | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[4U] 
                                                 >> 0x0000001eU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshrid_S2_f 
                    = (0x000000ffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[0U] 
                                       << 0x0000001aU) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[0U] 
                                         >> 6U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__lsid_S2_f 
                    = (0x000003ffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[4U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[4U] 
                                         >> 0x0000000aU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_chipid_S2_f 
                    = (0x00003fffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
                                       << 0x0000000eU) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
                                         >> 0x00000012U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_y_S2_f 
                    = (0x000000ffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
                                         >> 2U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_x_S2_f 
                    = (0x000000ffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
                                         >> 0x0000000aU)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f 
                    = (0x00003fffU & (0x000003ffU & 
                                      (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[4U] 
                                       >> 0x00000014U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f 
                    = (1U & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[2U] 
                             >> 0x0000000bU));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S2_f 
                    = (0x000003ffU & ((vlSelfRef.tile__DOT__l2__DOT__cam_mshr_data_out[4U] 
                                       << 7U) | (vlSelfRef.tile__DOT__l2__DOT__cam_mshr_data_out[3U] 
                                                 >> 0x00000019U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_smc_miss_S2_f 
                    = (1U & ((IData)(vlSelfRef.tile__DOT__l2__DOT__mshr_hit) 
                             & (vlSelfRef.tile__DOT__l2__DOT__cam_mshr_data_out[4U] 
                                >> 3U)));
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__data_size_S2_f 
                    = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__data_size_S1;
                vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S2_f = 0U;
            }
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_trans_S1;
            vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S2_f 
                = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S1;
        }
    } else {
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_vd_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_evict_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__state_wr_en_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_state_in_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__req_from_owner_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_subline_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_chipid_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_y_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_x_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__mshrid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[0U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[1U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_in_S3_f[2U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_cache_type_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_tag_hit_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__addr_S2_f = 0ULL;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__msg_type_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[0U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[1U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_mask_in_S3_f[2U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__evict_addr_S3_f = 0ULL;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__cache_type_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__sdid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__msg_data_S3_f = 0ULL;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_smc_miss_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_miss_S4_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__config_regs__DOT__ctrl_reg_f = 0ULL;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_addr_S3_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S3_f = 0ULL;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_pending_index_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__recycled_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_fbits_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshrid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__lsid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__data_size_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_from_mshr_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_chipid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_y_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__src_x_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__cache_type_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__mshr_miss_lsid_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__mshr_smc_miss_S2_f = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_miss_S3_f = 0U;
    }
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache
        [tile__DOT__l15__DOT__l15__DOT__l15_csm_read_ticket];
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__homeid_val 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid_val) 
           | (IData)(tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid_val));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__homeid 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid_val)
            ? tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__cached_homeid
            : tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__fetch_homeid);
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_mshr_homeid_write_data_s4 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__homeid;
    if (vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__ren_r) {
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[0U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[1U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[2U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[3U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__up_to_date_data[4U];
    } else {
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DOUT_r[0U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DOUT_r[1U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DOUT_r[2U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DOUT_r[3U];
        vlSelfRef.tile__DOT__l2__DOT__data_data_out[4U] 
            = vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__DOUT_r[4U];
    }
    vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in[0U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[0U]) 
            & tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[0U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[0U] 
              & vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DIN_r[0U]));
    vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in[1U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[1U]) 
            & tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[1U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[1U] 
              & vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DIN_r[1U]));
    vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in[2U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[2U]) 
            & tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[2U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[2U] 
              & vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DIN_r[2U]));
    vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bram_data_in[3U] 
        = (((~ vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[3U]) 
            & tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[3U]) 
           | (vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__BW_r[3U] 
              & vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DIN_r[3U]));
    if (vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__ren_r) {
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[0U] 
            = tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[0U];
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[1U] 
            = tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[1U];
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[2U] 
            = tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[2U];
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[3U] 
            = tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__up_to_date_data[3U];
    } else {
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DOUT_r[0U];
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DOUT_r[1U];
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DOUT_r[2U];
        vlSelfRef.tile__DOT__l2__DOT__tag_data_out[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__DOUT_r[3U];
    }
    if (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__bypass_f) {
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xfffffffcU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | ((2U & (((2U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                           ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                              >> 1U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                        >> 1U)) << 1U)) 
                  | (1U & ((1U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U]
                            : vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U]))));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xfffffff3U & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((8U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 3U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                         >> 3U)) << 1U)) 
                   | (1U & ((4U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                >> 2U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                          >> 2U)))) 
                  << 2U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xffffffcfU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00000020U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 5U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                         >> 5U)) << 1U)) 
                   | (1U & ((0x00000010U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                >> 4U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                          >> 4U)))) 
                  << 4U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xffffff3fU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00000080U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 7U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                         >> 7U)) << 1U)) 
                   | (1U & ((0x00000040U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                >> 6U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                          >> 6U)))) 
                  << 6U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xfffffcffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00000200U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 9U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                         >> 9U)) << 1U)) 
                   | (1U & ((0x00000100U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                >> 8U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                          >> 8U)))) 
                  << 8U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xfffff3ffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00000800U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x0000000bU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x0000000bU)) 
                          << 1U)) | (1U & ((0x00000400U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x0000000aU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x0000000aU)))) 
                  << 0x0000000aU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xffffcfffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00002000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x0000000dU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x0000000dU)) 
                          << 1U)) | (1U & ((0x00001000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x0000000cU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xffff3fffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00008000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x0000000fU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x0000000fU)) 
                          << 1U)) | (1U & ((0x00004000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x0000000eU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x0000000eU)))) 
                  << 0x0000000eU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xfffcffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00020000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x00000011U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x00000011U)) 
                          << 1U)) | (1U & ((0x00010000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x00000010U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x00000010U)))) 
                  << 0x00000010U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xfff3ffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00080000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x00000013U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x00000013U)) 
                          << 1U)) | (1U & ((0x00040000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x00000012U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x00000012U)))) 
                  << 0x00000012U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xffcfffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00200000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x00000015U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x00000015U)) 
                          << 1U)) | (1U & ((0x00100000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x00000014U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x00000014U)))) 
                  << 0x00000014U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xff3fffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x00800000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x00000017U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x00000017U)) 
                          << 1U)) | (1U & ((0x00400000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x00000016U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x00000016U)))) 
                  << 0x00000016U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xfcffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x02000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x00000019U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x00000019U)) 
                          << 1U)) | (1U & ((0x01000000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x00000018U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x00000018U)))) 
                  << 0x00000018U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xf3ffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x08000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x0000001bU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x0000001bU)) 
                          << 1U)) | (1U & ((0x04000000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x0000001aU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x0000001aU)))) 
                  << 0x0000001aU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0xcfffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((0x20000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                               >> 0x0000001dU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                  >> 0x0000001dU)) 
                          << 1U)) | (1U & ((0x10000000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x0000001cU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                               >> 0x0000001cU)))) 
                  << 0x0000001cU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = ((0x3fffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U]) 
               | (((2U & (((vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U] 
                            >> 0x0000001fU) ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                               >> 0x0000001fU)
                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                               >> 0x0000001fU)) << 1U)) 
                   | (1U & ((0x40000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[0U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[0U] 
                                >> 0x0000001eU) : (
                                                   vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U] 
                                                   >> 0x0000001eU)))) 
                  << 0x0000001eU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xfffffffcU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | ((2U & (((2U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                           ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                              >> 1U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                        >> 1U)) << 1U)) 
                  | (1U & ((1U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U]
                            : vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U]))));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xfffffff3U & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((8U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 3U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                         >> 3U)) << 1U)) 
                   | (1U & ((4U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                >> 2U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                          >> 2U)))) 
                  << 2U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xffffffcfU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00000020U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 5U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                         >> 5U)) << 1U)) 
                   | (1U & ((0x00000010U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                >> 4U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                          >> 4U)))) 
                  << 4U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xffffff3fU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00000080U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 7U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                         >> 7U)) << 1U)) 
                   | (1U & ((0x00000040U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                >> 6U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                          >> 6U)))) 
                  << 6U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xfffffcffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00000200U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 9U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                         >> 9U)) << 1U)) 
                   | (1U & ((0x00000100U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                >> 8U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                          >> 8U)))) 
                  << 8U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xfffff3ffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00000800U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x0000000bU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x0000000bU)) 
                          << 1U)) | (1U & ((0x00000400U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x0000000aU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x0000000aU)))) 
                  << 0x0000000aU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xffffcfffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00002000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x0000000dU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x0000000dU)) 
                          << 1U)) | (1U & ((0x00001000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x0000000cU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x0000000cU)))) 
                  << 0x0000000cU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xffff3fffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00008000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x0000000fU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x0000000fU)) 
                          << 1U)) | (1U & ((0x00004000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x0000000eU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x0000000eU)))) 
                  << 0x0000000eU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xfffcffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00020000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x00000011U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x00000011U)) 
                          << 1U)) | (1U & ((0x00010000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x00000010U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x00000010U)))) 
                  << 0x00000010U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xfff3ffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00080000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x00000013U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x00000013U)) 
                          << 1U)) | (1U & ((0x00040000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x00000012U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x00000012U)))) 
                  << 0x00000012U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xffcfffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00200000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x00000015U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x00000015U)) 
                          << 1U)) | (1U & ((0x00100000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x00000014U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x00000014U)))) 
                  << 0x00000014U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xff3fffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x00800000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x00000017U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x00000017U)) 
                          << 1U)) | (1U & ((0x00400000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x00000016U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x00000016U)))) 
                  << 0x00000016U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xfcffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x02000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x00000019U) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x00000019U)) 
                          << 1U)) | (1U & ((0x01000000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x00000018U)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x00000018U)))) 
                  << 0x00000018U));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xf3ffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x08000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x0000001bU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x0000001bU)) 
                          << 1U)) | (1U & ((0x04000000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x0000001aU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x0000001aU)))) 
                  << 0x0000001aU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0xcfffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((0x20000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                               >> 0x0000001dU) : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                  >> 0x0000001dU)) 
                          << 1U)) | (1U & ((0x10000000U 
                                            & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                                            ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x0000001cU)
                                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                               >> 0x0000001cU)))) 
                  << 0x0000001cU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = ((0x3fffffffU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U]) 
               | (((2U & (((vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U] 
                            >> 0x0000001fU) ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                               >> 0x0000001fU)
                            : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                               >> 0x0000001fU)) << 1U)) 
                   | (1U & ((0x40000000U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[1U])
                             ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[1U] 
                                >> 0x0000001eU) : (
                                                   vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U] 
                                                   >> 0x0000001eU)))) 
                  << 0x0000001eU));
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[2U] 
            = ((0x0003fffcU & vlSelfRef.tile__DOT__l2__DOT__state_data_out[2U]) 
               | (0x0003ffffU & ((2U & (((2U & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[2U])
                                          ? (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[2U] 
                                             >> 1U)
                                          : (vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[2U] 
                                             >> 1U)) 
                                        << 1U)) | (1U 
                                                   & ((1U 
                                                       & vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_mask_in_buf[2U])
                                                       ? 
                                                      vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__data_in_buf[2U]
                                                       : 
                                                      vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[2U])))));
    } else {
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[0U];
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[1U];
        vlSelfRef.tile__DOT__l2__DOT__state_data_out[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__DOUTA_bram[2U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = ((2U 
                                                  & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32
                                                   : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                  : 0U);
    if ((3U == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_flits))) {
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                      [vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f]);
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[1U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                       [vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f] 
                       >> 0x00000020U));
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[2U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                      [(3U & ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f)))]);
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[3U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                       [(3U & ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f)))] 
                       >> 0x00000020U));
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[4U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                      [(3U & ((IData)(2U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f)))]);
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[5U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                       [(3U & ((IData)(2U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f)))] 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                      [vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f]);
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[1U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_mem_f
                       [vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_rd_ptr_f] 
                       >> 0x00000020U));
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[2U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[3U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[4U] = 0U;
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[5U] = 0U;
    }
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_86 
        = (1U & ((VL_REDXOR_32((0x56aaad5bU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])) 
                  ^ VL_REDXOR_32((0xab555555U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U]))) 
                 ^ vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U]));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_86 
        = (1U & ((VL_REDXOR_32((0xaaad5b00U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U])) 
                  ^ VL_REDXOR_32((0x55555556U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U]))) 
                 ^ VL_REDXOR_16((0x01abU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U]))));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_71 
        = (1U & VL_REDXOR_32((0x0c000000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_71 
        = (1U & VL_REDXOR_4((0x000cU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_77 
        = (1U & VL_REDXOR_32((0x18000000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_77 
        = (1U & VL_REDXOR_8((0x00000018U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_79 
        = (1U & VL_REDXOR_16((0x00003000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_79 
        = (1U & VL_REDXOR_32((0x00300000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_81 
        = (1U & VL_REDXOR_8((0x00000060U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_81 
        = (1U & VL_REDXOR_16((0x00006000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_83 
        = (1U & VL_REDXOR_4((0x0000000cU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_83 
        = (1U & VL_REDXOR_16((0x00000c00U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_70 
        = (1U & VL_REDXOR_32((0xc0000000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_70 
        = (1U & VL_REDXOR_8((0x00c0U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_74 
        = (1U & VL_REDXOR_32((0x01800000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U])));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_74 
        = (1U & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U] 
                  >> 0x0000001fU) ^ vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U]));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bist_index_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__init_done)
                           ? (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bist_index)
                           : ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bist_index))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__init_done_next 
        = (1U & ((~ (0U != (0x0000007fU & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__bist_index))))) 
                 | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag__DOT__sram_l15_tag__DOT__init_done)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bist_index_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__init_done)
                           ? (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bist_index)
                           : ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bist_index))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__init_done_next 
        = (1U & ((~ (0U != (0x000001ffU & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__bist_index))))) 
                 | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dcache__DOT__sram_l15_data__DOT__init_done)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__bist_index_next 
        = (0x000001ffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__init_done)
                           ? (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__bist_index)
                           : ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__bist_index))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__init_done_next 
        = (1U & ((~ (0U != (0x000001ffU & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__bist_index))))) 
                 | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt__DOT__sram_l15_hmt__DOT__init_done)));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bist_index_next 
        = (0x000003ffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__init_done)
                           ? (IData)(vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bist_index)
                           : ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bist_index))));
    vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__init_done_next 
        = (1U & ((~ (0U != (0x000003ffU & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__bist_index))))) 
                 | (IData)(vlSelfRef.tile__DOT__l2__DOT__dir_wrap__DOT__l2_dir__DOT__l2_dir_array__DOT__sram_l2_dir__DOT__init_done)));
    vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bist_index_next 
        = (0x00000fffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__init_done)
                           ? (IData)(vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bist_index)
                           : ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bist_index))));
    vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__init_done_next 
        = (1U & ((~ (0U != (0x00000fffU & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__bist_index))))) 
                 | (IData)(vlSelfRef.tile__DOT__l2__DOT__data_wrap__DOT__l2_data__DOT__l2_data_array__DOT__sram_l2_data__DOT__init_done)));
    vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bist_index_next 
        = (0x000000ffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__init_done)
                           ? (IData)(vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bist_index)
                           : ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bist_index))));
    vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__init_done_next 
        = (1U & ((~ (0U != (0x000000ffU & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__bist_index))))) 
                 | (IData)(vlSelfRef.tile__DOT__l2__DOT__tag_wrap__DOT__l2_tag__DOT__l2_tag_array__DOT__sram_l2_tag__DOT__init_done)));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_tx__DOT__ucb_out__DOT__stall_d1 = 0U;
    vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bist_index_next 
        = (0x000000ffU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__init_done)
                           ? (IData)(vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bist_index)
                           : ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bist_index))));
    vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__init_done_next 
        = (1U & ((~ (0U != (0x000000ffU & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__bist_index))))) 
                 | (IData)(vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__l2_state__DOT__l2_state_array__DOT__sram_l2_state__DOT__init_done)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__way_mshr_st_s2 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_way_array
        [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2];
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__real_ready_in 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT____VdfgRegularize_hc0af6d4c_0_1)
            ? (8U != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_counter_f))
            : (4U != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_counter_f)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid_in 
        = ((((2U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__data_in_s3[3U] 
                    >> 0x0000001eU)) | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__data_in_s3[2U] 
                                        >> 0x0000001fU)) 
            << 2U) | ((2U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__data_in_s3[1U] 
                             >> 0x0000001eU)) | (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__data_in_s3[0U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107 = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__wr_en_s3) 
                                                  | ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__flush_en_s3) 
                                                     & (0x0000000040000000ULL 
                                                        == 
                                                        (0x00000000c0000000ULL 
                                                         & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_csm_req_address_s3))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xfffeU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
               [0U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                       >> 2U))) & (0U 
                                                   != 
                                                   vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                                                   [0U])));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xfffdU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [1U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [1U])) << 1U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xfffbU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [2U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [2U])) << 2U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xfff7U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [3U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [3U])) << 3U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xffefU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [4U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [4U])) << 4U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xffdfU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [5U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [5U])) << 5U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xffbfU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [6U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [6U])) << 6U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xff7fU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [7U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [7U])) << 7U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xfeffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [8U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [8U])) << 8U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xfdffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [9U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [9U])) << 9U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xfbffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0aU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0aU])) << 0x0000000aU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xf7ffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0bU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0bU])) << 0x0000000bU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xefffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0cU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0cU])) << 0x0000000cU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xdfffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0dU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0dU])) << 0x0000000dU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0xbfffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0eU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0eU])) << 0x0000000eU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp 
        = ((0x7fffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0fU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (0U != vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0fU])) << 0x0000000fU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xfffeU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
               [0U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                       >> 2U))) & (
                                                   vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                                                   [0U] 
                                                   >> 
                                                   (3U 
                                                    & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xfffdU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [1U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [1U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 1U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xfffbU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [2U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [2U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 2U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xfff7U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [3U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [3U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 3U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xffefU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [4U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [4U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 4U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xffdfU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [5U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [5U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 5U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xffbfU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [6U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [6U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 6U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xff7fU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [7U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [7U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 7U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xfeffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [8U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [8U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 8U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xfdffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [9U] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                        >> 2U))) & 
               (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                [9U] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 9U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xfbffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0aU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0aU] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 0x0000000aU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xf7ffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0bU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0bU] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 0x0000000bU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xefffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0cU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0cU] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 0x0000000cU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xdfffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0dU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0dU] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 0x0000000dU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0xbfffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0eU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0eU] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 0x0000000eU));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp 
        = ((0x7fffU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp)) 
           | (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag
                [0x0fU] == (0x00003fffU & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3) 
                                           >> 2U))) 
               & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_valid
                  [0x0fU] >> (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__addr_in_s3)))) 
              << 0x0000000fU));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[0U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[1U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[2U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[3U] = 0U;
    if ((1U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
            if ((6U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
                if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U]))));
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[1U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U]))) 
                                   >> 0x00000020U));
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[2U] 
                        = (IData)(tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1);
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[3U] 
                        = (IData)((tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1 
                                   >> 0x00000020U));
                } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[0U] 
                        = (IData)(vlSelfRef.tile__DOT__transducer_l15_data);
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[1U] 
                        = (IData)((vlSelfRef.tile__DOT__transducer_l15_data 
                                   >> 0x00000020U));
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[2U] 
                        = (IData)(vlSelfRef.tile__DOT__transducer_l15_data);
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[3U] 
                        = (IData)((vlSelfRef.tile__DOT__transducer_l15_data 
                                   >> 0x00000020U));
                }
            }
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[0U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[0U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[1U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[1U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[2U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[2U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[3U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_fill_data[3U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_ticket_s2 
        = (((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s2) 
            << 2U) | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshrid_s2));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_ticket_s2 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_ticket_s2;
    if ((1U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
            if ((6U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
                if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_op_s2))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_ticket_s2 
                        = tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_csm_mshrid;
                }
            }
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_homeid_s1 = 0U;
    if ((1U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
        if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_homeid_s1 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_homeid
                [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
        } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_homeid_s1 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__st_homeid
                [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
        }
    }
    tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__ifill_control
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__ld_control
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
        tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mshr__DOT__st_control
            [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
    }
    if (vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S3) {
        vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__wr_index_in 
            = (7U & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__mshrid_S3_f));
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__wr_addr 
            = (0x000000ffU & (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__addr_S3_f 
                                      >> 6U)));
    } else {
        vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__wr_index_in 
            = (7U & (IData)(vlSelfRef.tile__DOT__l2__DOT__mshr_inv_counter_rd_index_in_p1));
        vlSelfRef.tile__DOT__l2__DOT__state_wrap__DOT__wr_addr 
            = (0x000000ffU & (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S4_f 
                                      >> 6U)));
    }
    tile__DOT__l2__DOT__mshr_inv_counter_out = vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__counter_mem_f
        [vlSelfRef.tile__DOT__l2__DOT__mshr_inv_counter_rd_index_in_p1];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86 = ((0xaaU 
                                                  == 
                                                  (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S4_f 
                                                              >> 0x00000020U)))) 
                                                 | (0xabU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(
                                                               (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S4_f 
                                                                >> 0x00000020U)))));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__smc_rd_diag_en_S4 
        = (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__special_addr_type_S4_f) 
            & (0x000000a200000000ULL == (0x000000ff00000000ULL 
                                         & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__addr_S4_f))) 
           & (0x0eU == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__msg_type_S4_f)));
    vlSelfRef.tile__DOT__l2__DOT__noc3_ready_in = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT____VdfgRegularize_h906021df_0_0)
                                                    ? 
                                                   (4U 
                                                    != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f))
                                                    : 
                                                   (0x10U 
                                                    != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_buf_counter_f)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S1 = 
        ((0U != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f)) 
         & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f) 
            >= (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_flits)));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_cmp_4bits__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f00U & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp))));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000fU & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = ((0x10U 
                                                  != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__data_buf_counter_f)) 
                                                 & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_data_valid_in));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94 = ((4U 
                                                  != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__header_buf_counter_f)) 
                                                 & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__buf_in__DOT__msg_header_valid_in));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__expanded_hmt_homeid_s3 
        = ((0x3fff0000U & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt_l15_dout_s3_extended) 
           | ((0x0000ff00U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt_l15_dout_s3_extended 
                              << 8U)) | (0x000000ffU 
                                         & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__hmt_l15_dout_s3_extended 
                                            >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102 = ((8U 
                                                   != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_counter_f)) 
                                                  & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_header_valid_in));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_101 = ((4U 
                                                   != (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_counter_f)) 
                                                  & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__msg_data_valid_in));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2 = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[0U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[1U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[2U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[3U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[0U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[1U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[2U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[3U] = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_offset_s2 
        = (1U & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                         >> 3U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[0U] 
        = ((((0x0000ff00U & ((- (IData)((1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                               >> 3U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                         >> 2U)))))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                              >> 1U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2)))))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[1U] 
        = ((((0x0000ff00U & ((- (IData)((1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                               >> 7U)))) 
                             << 8U)) | (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                         >> 6U)))))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                              >> 5U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (- (IData)(
                                                           (1U 
                                                            & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                               >> 4U)))))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[2U] 
        = ((((0x0000ff00U & ((- (IData)((1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                               >> 0x0bU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                         >> 0x0aU)))))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                              >> 9U)))) 
                                               << 8U)) 
                               | (0x000000ffU & (- (IData)(
                                                           (1U 
                                                            & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                               >> 8U)))))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[3U] 
        = ((((0x0000ff00U & ((- (IData)((1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                               >> 0x0fU)))) 
                             << 8U)) | (0x000000ffU 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                         >> 0x0eU)))))) 
            << 0x00000010U) | ((0x0000ff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                              >> 0x0dU)))) 
                                               << 8U)) 
                               | (0x000000ffU & (- (IData)(
                                                           (1U 
                                                            & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_byte_mask_s2) 
                                                               >> 0x0cU)))))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[0U] 
        = ((IData)(((~ (((QData)((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[1U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[0U])))) 
                    & tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1)) 
           | (tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[0U] 
              & tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[0U]));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[1U] 
        = ((IData)((((~ (((QData)((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[1U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[0U])))) 
                     & tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1) 
                    >> 0x00000020U)) | (tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[1U] 
                                        & tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[1U]));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[2U] 
        = ((IData)(((~ (((QData)((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[3U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[2U])))) 
                    & (((QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U]))))) 
           | (tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[2U] 
              & tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[2U]));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[3U] 
        = ((IData)((((~ (((QData)((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[3U])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[2U])))) 
                     & (((QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U])))) 
                    >> 0x00000020U)) | (tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[3U] 
                                        & tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[3U]));
    if (((((((((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2)) 
               | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
              | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
             | (0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
            | (4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
           | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
          | (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
         | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2)))) {
        if ((1U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
                if ((3U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
                    if ((0x0aU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
                        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2 
                            = ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))
                                ? 1U : ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))
                                         ? 1U : ((5U 
                                                  == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))
                                                  ? 2U
                                                  : 3U)));
                    }
                }
            }
        }
    } else if ((7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2 = 1U;
    } else if ((8U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
        if ((9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2 = 4U;
        }
    }
    if ((1U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[0U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[0U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[1U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[1U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[2U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[2U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[3U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_mshr_write_mask_s2[3U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[0U] 
            = tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[0U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[1U] 
            = tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[1U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[2U] 
            = tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[2U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[3U] 
            = tile__DOT__l15__DOT__l15__DOT__mshr_pipe_write_buffer_s2[3U];
    } else if ((2U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[0U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[1U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[2U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[3U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[0U] 
            = (IData)(tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1);
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[1U] 
            = (IData)((tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_data_1 
                       >> 0x00000020U));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[2U] 
            = (IData)((((QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U]))));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[3U] 
            = (IData)(((((QData)((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U]))) 
                       >> 0x00000020U));
    } else if ((3U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[0U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[1U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[2U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[3U] = 0xffffffffU;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[0U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[0U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[1U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[1U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[2U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[2U];
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[3U] 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_merge_mshr_noc2_s2[3U];
    } else if ((4U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_source_s2))) {
        if (tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_offset_s2) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[0U] = 0xffffffffU;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[1U] = 0xffffffffU;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[2U] = 0U;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[3U] = 0U;
        } else {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[0U] = 0U;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[1U] = 0U;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[2U] = 0xffffffffU;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[3U] = 0xffffffffU;
        }
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[0U] 
            = (IData)(vlSelfRef.tile__DOT__transducer_l15_data);
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[1U] 
            = (IData)((vlSelfRef.tile__DOT__transducer_l15_data 
                       >> 0x00000020U));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[2U] 
            = (IData)(vlSelfRef.tile__DOT__transducer_l15_data);
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[3U] 
            = (IData)((vlSelfRef.tile__DOT__transducer_l15_data 
                       >> 0x00000020U));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_mask_s2[0U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[0U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_mask_s2[1U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[1U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_mask_s2[2U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[2U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_mask_s2[3U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_mask_s2[3U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_data_s2[0U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[0U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_data_s2[1U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[1U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_data_s2[2U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[2U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_write_data_s2[3U] 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_write_data_s2[3U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f0U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__replace_cmp))) 
                   | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f0U & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__replace_cmp))) 
                   | (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_replace_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way0_s2 
        = (0x00000001ffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[0U]))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way1_s2 
        = (0x00000001ffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[2U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[1U])) 
                                       >> 1U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way2_s2 
        = (0x00000001ffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[3U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[2U])) 
                                       >> 2U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way3_s2 
        = (0x00000001ffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[4U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.tile__DOT__l15__DOT__l15__DOT__dtag_l15_dout_s2[3U])) 
                                       >> 3U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2 
        = (3U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mesi_l15_dout_s2));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2 
        = (3U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mesi_l15_dout_s2) 
                 >> 2U));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2 
        = (3U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mesi_l15_dout_s2) 
                 >> 4U));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2 
        = (3U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__mesi_l15_dout_s2) 
                 >> 6U));
    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way0_s2));
    } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way1_s2));
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way2_s2));
    } else {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way3_s2));
    }
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way0_equals 
        = ((0x1fffffffU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                   >> 0x0000000bU))) 
           == (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way0_s2)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way1_equals 
        = ((0x1fffffffU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                   >> 0x0000000bU))) 
           == (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way1_s2)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way2_equals 
        = ((0x1fffffffU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                   >> 0x0000000bU))) 
           == (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way2_s2)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way3_equals 
        = ((0x1fffffffU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                   >> 0x0000000bU))) 
           == (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way3_s2)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_val_s2 
        = (1U & ((((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way0_equals) 
                   & (0U != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2)))
                   ? 4U : (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way1_equals) 
                            & (0U != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2)))
                            ? 5U : (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way2_equals) 
                                     & (0U != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2)))
                                     ? 6U : (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way3_equals) 
                                              & (0U 
                                                 != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2)))
                                              ? 7U : 0U)))) 
                 >> 2U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2 
        = (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way0_equals) 
            & (0U != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2)))
            ? 0U : (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way1_equals) 
                     & (0U != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2)))
                     ? 1U : (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way2_equals) 
                              & (0U != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2)))
                              ? 2U : (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way3_equals) 
                                       & (0U != (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2)))
                                       ? 3U : 0U))));
    if (tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_val_s2) {
        if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_lrsc_flag_s2 
                = (1U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__lrsc_flag_l15_dout_s2));
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2 
                = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2;
        } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_lrsc_flag_s2 
                = (1U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__lrsc_flag_l15_dout_s2) 
                         >> 1U));
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2 
                = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2;
        } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_lrsc_flag_s2 
                = (1U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__lrsc_flag_l15_dout_s2) 
                         >> 2U));
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2 
                = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2;
        } else {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_lrsc_flag_s2 
                = (1U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__lrsc_flag_l15_dout_s2) 
                         >> 3U));
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2 
                = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2;
        }
    } else {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_lrsc_flag_s2 = 0U;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2 = 0U;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s2 
        = (3U & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                         >> 0x18U)));
    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s2))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way0_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way0_s2));
    } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s2))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way1_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way1_s2));
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s2))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way2_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way2_s2));
    } else {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_state_way3_s2;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_tag_s2 
            = (0x1fffffffU & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dtag_tag_way3_s2));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_me_s2 
        = ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2)) 
           | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s2 
        = (((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2)) 
            | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2))) 
           | (1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_m_s2 
        = (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_e_s2 
        = (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s2));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_m_s2 
        = (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_s2));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_m_s2 
        = (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_mes_s2 
        = (((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2)) 
            | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2))) 
           | (1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s2)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_csm_req_clump_id_s2 
        = ((1U & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_pcx_data_s2 
                          >> 0x00000020U))) ? 0U : 
           (0x000003ffU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_pcx_data_s2 
                                   >> 0x00000016U))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__num_homes_s2 
        = (0x000003ffU & ((IData)(vlSelfRef.tile__DOT__uncore_config__DOT__csm_en)
                           ? ((1U & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_pcx_data_s2 
                                             >> 0x00000020U)))
                               ? 0U : (0x0000003fU 
                                       & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__csm_pcx_data_s2 
                                                  >> 0x00000010U))))
                           : vlSelfRef.tile__DOT__uncore_config__DOT__system_tile_count));
    vlSelfRef.tile__DOT__dmbr_ins__DOT____VdfgRegularize_hd63c5534_0_0 
        = (0x000001ffU & ((IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_counter) 
                          + (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__add_interval2)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_mshrid_s3 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_mshrid_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshrid_s3;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_mshrid_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshrid_s3;
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_mshrid_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshrid_s3;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipe_mshr_mshrid_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_mshrid_s3;
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_12 
        = (1U & (VL_REDXOR_32((0x30000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[3U])) 
                 ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_5)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_12 
        = (1U & (VL_REDXOR_32((0x30000000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[1U])) 
                 ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_5)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_7 
        = (1U & (VL_REDXOR_32((0x007e0000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[3U])) 
                 ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_6)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_7 
        = (1U & (VL_REDXOR_32((0x007e0000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[1U])) 
                 ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_6)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__0__KET__ 
        = ((0x0000000fffffffffULL & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                                     [0U] >> 4U)) == 
           (0x0000000fffffffffULL & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3 
                                     >> 4U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__0__KET__ 
        = (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
             [0U] >> 3U) & (1U == vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array
                            [0U])) & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__0__KET__));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__0__KET__ 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__0__KET__) 
           & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_way_array
              [0U] == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s3)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__1__KET__ 
        = ((0x0000000fffffffffULL & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                                     [1U] >> 4U)) == 
           (0x0000000fffffffffULL & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3 
                                     >> 4U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__1__KET__ 
        = (((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
             [1U] >> 3U) & (1U == vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array
                            [1U])) & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_address_match_s3__BRA__1__KET__));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__1__KET__ 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__1__KET__) 
           & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_way_array
              [1U] == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s3)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_threadid_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__1__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_threadid_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__1__KET__;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_val_s3 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__0__KET__) 
           | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_s3__BRA__1__KET__));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_val_s3 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__0__KET__) 
           | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_s3__BRA__1__KET__));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_way_s3 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_way_array
        [tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_threadid_s3];
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_partial_tag_s1 
        = (0x0000ffffU & (IData)((vlSelfRef.tile__DOT__transducer_l15_address 
                                  >> 4U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0ld_s1 
        = ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
            [0U] >> 2U) & ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_partial_tag_s1) 
                           == (0x0000ffffU & (IData)(
                                                     (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_ld_address_array
                                                      [0U] 
                                                      >> 4U)))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1ld_s1 
        = ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
            [1U] >> 2U) & ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_partial_tag_s1) 
                           == (0x0000ffffU & (IData)(
                                                     (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_ld_address_array
                                                      [1U] 
                                                      >> 4U)))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0st_s1 
        = ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
            [0U] >> 3U) & ((0x0000000fffffffffULL & 
                            (vlSelfRef.tile__DOT__transducer_l15_address 
                             >> 4U)) == (0x0000000fffffffffULL 
                                         & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                                            [0U] >> 4U))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1st_s1 
        = ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
            [1U] >> 3U) & ((0x0000000fffffffffULL & 
                            (vlSelfRef.tile__DOT__transducer_l15_address 
                             >> 4U)) == (0x0000000fffffffffULL 
                                         & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                                            [1U] >> 4U))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_s1 
        = ((((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0ld_s1) 
             | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1ld_s1)) 
            | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0st_s1)) 
           | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1st_s1));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t0st_s1) 
           | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1st_s1));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_threadid_s1 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_tagcheck_matched_t1st_s1;
    tile__DOT__rtap__DOT__req_data = (((QData)((IData)(
                                                       vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[3U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[2U])));
    tile__DOT__rtap__DOT__req_address = vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[1U];
    tile__DOT__rtap__DOT__req_header = vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[0U];
    tile__DOT__rtap__DOT__req_op = 0U;
    tile__DOT__rtap__DOT__req_tileid = (0x0000003fU 
                                        & (tile__DOT__rtap__DOT__req_header 
                                           >> 0x12U));
    tile__DOT__rtap__DOT__req_misc = (0x0000ffffU & tile__DOT__rtap__DOT__req_header);
    tile__DOT__rtap__DOT__req_address_index = (0x0000ffffU 
                                               & tile__DOT__rtap__DOT__req_address);
    tile__DOT__rtap__DOT__req_address_sramid = (tile__DOT__rtap__DOT__req_address 
                                                >> 0x18U);
    tile__DOT__rtap__DOT__req_address_bsel = (0x000000ffU 
                                              & (tile__DOT__rtap__DOT__req_address 
                                                 >> 0x10U));
    tile__DOT__rtap__DOT__req_val = (((~ (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_vec0_d1)) 
                                      & vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_vec) 
                                     & ((0x3fU == (IData)(tile__DOT__rtap__DOT__req_tileid)) 
                                        | ((IData)(tile__DOT__rtap__DOT__req_tileid) 
                                           == (IData)(vlSelfRef.flat_tileid))));
    if (tile__DOT__rtap__DOT__req_val) {
        tile__DOT__rtap__DOT__req_op = (tile__DOT__rtap__DOT__req_header 
                                        >> 0x18U);
    }
    vlSelfRef.tile__DOT__rtap__DOT__res_op_next = 0U;
    vlSelfRef.tile__DOT__rtap__DOT__sram_req_address_reg_next 
        = vlSelfRef.tile__DOT__rtap__DOT__sram_req_address_reg;
    vlSelfRef.tile__DOT__rtap__DOT__sram_req_sramid_reg_next 
        = vlSelfRef.tile__DOT__rtap__DOT__sram_req_sramid_reg;
    vlSelfRef.tile__DOT__rtap__DOT__sram_data_reg_next 
        = vlSelfRef.tile__DOT__rtap__DOT__sram_data_reg;
    vlSelfRef.tile__DOT__rtap__DOT__sram_req_bsel_reg_next 
        = vlSelfRef.tile__DOT__rtap__DOT__sram_req_bsel_reg;
    vlSelfRef.tile__DOT__rtap__DOT__sram_req_rw_next 
        = vlSelfRef.tile__DOT__rtap__DOT__sram_req_rw;
    tile__DOT__rtap__DOT__state_counter_minus_1 = (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tile__DOT__rtap__DOT__state_counter) 
                                                      - (IData)(1U)));
    vlSelfRef.tile__DOT__rtap__DOT__state_counter_next 
        = vlSelfRef.tile__DOT__rtap__DOT__state_counter;
    vlSelfRef.tile__DOT__rtap__DOT__state_next = 0U;
    if (((((((((0U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state)) 
               | (1U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) 
              | (2U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) 
             | (3U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) 
            | (4U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) 
           | (5U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) 
          | (9U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) 
         | (6U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state)))) {
        if ((0U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
            if (((4U == (IData)(tile__DOT__rtap__DOT__req_op)) 
                 | (5U == (IData)(tile__DOT__rtap__DOT__req_op)))) {
                vlSelfRef.tile__DOT__rtap__DOT__sram_req_address_reg_next 
                    = (0x0000ffffU & tile__DOT__rtap__DOT__req_address_index);
                vlSelfRef.tile__DOT__rtap__DOT__sram_req_sramid_reg_next 
                    = (0x0000000fU & (IData)(tile__DOT__rtap__DOT__req_address_sramid));
                vlSelfRef.tile__DOT__rtap__DOT__sram_req_bsel_reg_next 
                    = (0x000000ffU & (IData)(tile__DOT__rtap__DOT__req_address_bsel));
                vlSelfRef.tile__DOT__rtap__DOT__state_next = 1U;
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next = 0U;
                if ((4U == (IData)(tile__DOT__rtap__DOT__req_op))) {
                    vlSelfRef.tile__DOT__rtap__DOT__sram_req_rw_next = 0U;
                } else {
                    vlSelfRef.tile__DOT__rtap__DOT__sram_req_rw_next = 1U;
                    vlSelfRef.tile__DOT__rtap__DOT__sram_data_reg_next 
                        = tile__DOT__rtap__DOT__req_data;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state_counter))) {
                vlSelfRef.tile__DOT__rtap__DOT__state_next = 2U;
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next = 1U;
            } else {
                vlSelfRef.tile__DOT__rtap__DOT__state_next 
                    = vlSelfRef.tile__DOT__rtap__DOT__state;
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next 
                    = tile__DOT__rtap__DOT__state_counter_minus_1;
            }
        } else if ((2U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
            vlSelfRef.tile__DOT__rtap__DOT__sram_req_bsel_reg_next 
                = (0x000000f0U & ((IData)(vlSelfRef.tile__DOT__rtap__DOT__sram_req_bsel_reg) 
                                  << 4U));
            if ((0U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state_counter))) {
                vlSelfRef.tile__DOT__rtap__DOT__state_next = 3U;
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next = 3U;
            } else {
                vlSelfRef.tile__DOT__rtap__DOT__state_next 
                    = vlSelfRef.tile__DOT__rtap__DOT__state;
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next 
                    = tile__DOT__rtap__DOT__state_counter_minus_1;
            }
        } else if ((3U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
            vlSelfRef.tile__DOT__rtap__DOT__sram_req_address_reg_next 
                = (0x0000fff0U & ((IData)(vlSelfRef.tile__DOT__rtap__DOT__sram_req_address_reg) 
                                  << 4U));
            if ((0U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state_counter))) {
                vlSelfRef.tile__DOT__rtap__DOT__state_next 
                    = ((IData)(vlSelfRef.tile__DOT__rtap__DOT__sram_req_rw)
                        ? 7U : 4U);
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next = 0x0fU;
            } else {
                vlSelfRef.tile__DOT__rtap__DOT__state_next 
                    = vlSelfRef.tile__DOT__rtap__DOT__state;
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next 
                    = tile__DOT__rtap__DOT__state_counter_minus_1;
            }
        } else if ((4U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
            vlSelfRef.tile__DOT__rtap__DOT__state_next = 5U;
        } else if ((5U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
            vlSelfRef.tile__DOT__rtap__DOT__state_next = 9U;
        } else if ((9U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
            vlSelfRef.tile__DOT__rtap__DOT__state_next = 6U;
            vlSelfRef.tile__DOT__rtap__DOT__state_counter_next = 0x0fU;
        } else {
            vlSelfRef.tile__DOT__rtap__DOT__sram_data_reg_next 
                = ((vlSelfRef.tile__DOT__rtap__DOT__sram_data_reg 
                    << 4U) | (QData)((IData)(vlSelfRef.tile__DOT__srams_rtap_data)));
            if ((0U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state_counter))) {
                vlSelfRef.tile__DOT__rtap__DOT__state_next = 0U;
            } else {
                vlSelfRef.tile__DOT__rtap__DOT__state_next 
                    = vlSelfRef.tile__DOT__rtap__DOT__state;
                vlSelfRef.tile__DOT__rtap__DOT__state_counter_next 
                    = tile__DOT__rtap__DOT__state_counter_minus_1;
            }
        }
    } else if ((7U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
        vlSelfRef.tile__DOT__rtap__DOT__sram_data_reg_next 
            = ((vlSelfRef.tile__DOT__rtap__DOT__sram_data_reg 
                << 4U) | (QData)((IData)(vlSelfRef.tile__DOT__srams_rtap_data)));
        if ((0U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state_counter))) {
            vlSelfRef.tile__DOT__rtap__DOT__state_next = 8U;
        } else {
            vlSelfRef.tile__DOT__rtap__DOT__state_next 
                = vlSelfRef.tile__DOT__rtap__DOT__state;
            vlSelfRef.tile__DOT__rtap__DOT__state_counter_next 
                = tile__DOT__rtap__DOT__state_counter_minus_1;
        }
    } else if ((8U == (IData)(vlSelfRef.tile__DOT__rtap__DOT__state))) {
        vlSelfRef.tile__DOT__rtap__DOT__state_next = 0U;
    }
    vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 0U;
    tile__DOT__rtap__DOT__judi_op_data[0U] = 0U;
    tile__DOT__rtap__DOT__judi_op_data[1U] = 0U;
    tile__DOT__rtap__DOT__judi_op_data[2U] = 0U;
    vlSelfRef.tile__DOT__rtap_config_req_val = 0U;
    tile__DOT__rtap_config_req_rw = 0U;
    tile__DOT__rtap_config_req_address = 0U;
    tile__DOT__rtap_config_write_req_data = 0ULL;
    if ((0x0aU == (IData)(tile__DOT__rtap__DOT__req_op))) {
        if ((7U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
            vlSelfRef.tile__DOT__rtap__DOT__res_op_next = 4U;
            vlSelfRef.tile__DOT__rtap_config_req_val = 1U;
            tile__DOT__rtap_config_req_rw = 0U;
            tile__DOT__rtap_config_req_address = (0x000000ffU 
                                                  & tile__DOT__rtap__DOT__req_address);
        } else if ((8U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
            vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
        } else if ((9U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
            vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
            tile__DOT__rtap__DOT__judi_op_data[0U] 
                = tile__DOT__rtap__DOT__req_address;
            tile__DOT__rtap__DOT__judi_op_data[1U] = 0U;
            tile__DOT__rtap__DOT__judi_op_data[2U] = 0U;
        }
    } else if ((0x0bU == (IData)(tile__DOT__rtap__DOT__req_op))) {
        if (((((((((1U == (IData)(tile__DOT__rtap__DOT__req_misc)) 
                   | (5U == (IData)(tile__DOT__rtap__DOT__req_misc))) 
                  | (3U == (IData)(tile__DOT__rtap__DOT__req_misc))) 
                 | (6U == (IData)(tile__DOT__rtap__DOT__req_misc))) 
                | (4U == (IData)(tile__DOT__rtap__DOT__req_misc))) 
               | (7U == (IData)(tile__DOT__rtap__DOT__req_misc))) 
              | (0x000aU == (IData)(tile__DOT__rtap__DOT__req_misc))) 
             | (0x000bU == (IData)(tile__DOT__rtap__DOT__req_misc)))) {
            if ((1U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
                vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
                tile__DOT__rtap__DOT__judi_op_data[0U] 
                    = (IData)((0x0000ffffffffffffULL 
                               & tile__DOT__rtap__DOT__req_data));
                tile__DOT__rtap__DOT__judi_op_data[1U] 
                    = ((0xffff0000U & tile__DOT__rtap__DOT__judi_op_data[1U]) 
                       | (IData)(((0x0000ffffffffffffULL 
                                   & tile__DOT__rtap__DOT__req_data) 
                                  >> 0x00000020U)));
            } else if ((5U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
                tile__DOT__rtap__DOT__judi_op_data[0U] 
                    = (IData)((0x0000ffffffffffffULL 
                               & tile__DOT__rtap__DOT__req_data));
                tile__DOT__rtap__DOT__judi_op_data[1U] 
                    = ((0xffff0000U & tile__DOT__rtap__DOT__judi_op_data[1U]) 
                       | (IData)(((0x0000ffffffffffffULL 
                                   & tile__DOT__rtap__DOT__req_data) 
                                  >> 0x00000020U)));
                vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
            } else if ((3U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
                vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
                tile__DOT__rtap__DOT__judi_op_data[0U] 
                    = ((0xffffffe0U & tile__DOT__rtap__DOT__judi_op_data[0U]) 
                       | (0x0000001fU & (IData)(tile__DOT__rtap__DOT__req_data)));
            } else if ((6U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
                vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
                tile__DOT__rtap__DOT__judi_op_data[0U] 
                    = ((0xffffc000U & tile__DOT__rtap__DOT__judi_op_data[0U]) 
                       | (0x00003fffU & (IData)(tile__DOT__rtap__DOT__req_data)));
            } else if ((4U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
                vlSelfRef.tile__DOT__rtap__DOT__res_op_next = 1U;
            } else if ((7U == (IData)(tile__DOT__rtap__DOT__req_misc))) {
                vlSelfRef.tile__DOT__rtap__DOT__res_op_next = 1U;
                vlSelfRef.tile__DOT__rtap_config_req_val = 1U;
                tile__DOT__rtap_config_req_rw = 1U;
                tile__DOT__rtap_config_req_address 
                    = (0x000000ffU & tile__DOT__rtap__DOT__req_address);
                tile__DOT__rtap_config_write_req_data 
                    = tile__DOT__rtap__DOT__req_data;
            } else if ((0x000aU == (IData)(tile__DOT__rtap__DOT__req_misc))) {
                vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
                tile__DOT__rtap__DOT__judi_op_data[0U] 
                    = ((0xffffffe0U & tile__DOT__rtap__DOT__judi_op_data[0U]) 
                       | (0x0000001fU & (IData)(tile__DOT__rtap__DOT__req_data)));
            } else {
                vlSelfRef.tile__DOT__rtap__DOT__judi_op_val = 1U;
                tile__DOT__rtap__DOT__judi_op_data[0U] 
                    = (IData)((0x0000ffffffffffffULL 
                               & tile__DOT__rtap__DOT__req_data));
                tile__DOT__rtap__DOT__judi_op_data[1U] 
                    = ((0xffff0000U & tile__DOT__rtap__DOT__judi_op_data[1U]) 
                       | (IData)(((0x0000ffffffffffffULL 
                                   & tile__DOT__rtap__DOT__req_data) 
                                  >> 0x00000020U)));
            }
        }
    }
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_load_data_subline_S2_f 
        = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__l2_load_data_subline_S2_next;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3 = 0U;
    if ((1U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
            if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3 
                    = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3)
                        ? 1U : 2U);
            } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3 = 2U;
            } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3 = 2U;
            } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3 = 3U;
            }
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipe_mshr_write_update_state_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_update_state_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3;
    } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_lrsc_flag_s3;
    } else if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s3))) {
        if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s3))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3 = 1U;
        } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s3))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3;
        } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_op_s3))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_mes_s3;
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_lruarray_write_val_s3 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lruarray_write_val_s3) 
           & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_mes_s3;
    } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3 
            = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
               & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_mes_s3));
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3 = 1U;
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_wmt_write_val_s3 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_write_val_s3) 
           & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve_s3 = 0U;
    if (((((((((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3)) 
               | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
              | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
             | (1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
            | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
           | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
          | (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
         | (4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3)))) {
        if ((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_address_s3;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
                   & (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_state_s3)));
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3 
                = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3)
                    ? 0U : (1U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3)));
        } else if ((0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_address_s3;
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
                   & (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_state_s3)));
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3 
                = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3)
                    ? 0U : (1U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3)));
        } else {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3;
            if ((9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                    = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
                       & (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s3)));
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3 
                    = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3)
                        ? 0U : (1U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3)));
            } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                    = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
            } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                    = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
                       & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3)));
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3 
                    = ((~ (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3)) 
                       & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3));
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve_s3 
                    = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3;
            } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                    = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
            } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                    = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
            } else {
                tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                    = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
                       & ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s3)) 
                          | (0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_s3))));
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_mispredicted_s3 
                    = ((~ (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3)) 
                       & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3));
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve_s3 
                    = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3;
            }
        }
    } else if (((((((((0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3)) 
                      | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
                     | (7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
                    | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
                   | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
                  | (0x0fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
                 | (0x10U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) 
                | (0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3)))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3;
        if ((0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__creditman_noc1_reserve_s3 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
        } else {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
        }
    } else if ((0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
    } else if ((0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
    } else if ((0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_address 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s3;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
    } else if ((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_val 
        = ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1_req_val_s3) 
           & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc1encoder_req_staled_s3)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1 = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_val_s1 
        = (0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s1 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_val_s1;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_val 
        = (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_buffer_val
           [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_rdindex] 
           & (IData)(tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__homeid_val));
    if (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__stall_before_S2_f) {
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[0U];
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[1U];
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[2U];
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_buf_S2_f[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[2U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_buf_S2_f[3U];
    } else {
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[0U];
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[1U];
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[2U];
        tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_data_out[2U];
        vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[3U] = 0U;
    }
    if (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__stall_before_S2_f) {
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[0U];
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[1U];
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[2U];
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_buf_S2_f[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_f[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_f[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_buf_S2_f[2U];
    } else {
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[0U];
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[1U];
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[2U];
        tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__tag_data_out[3U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_data_out[0U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_data_out[1U];
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__state_data_out[2U];
    }
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__addr_subline_S2 
        = (0x0000000fU & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__cache_type_S2_f)
                           ? VL_SHIFTL_III(4,4,32, (IData)(3U), 
                                           VL_SHIFTL_III(32,32,32, 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__addr_S2_f 
                                                                     >> 5U))), 1U))
                           : ((IData)(1U) << (3U & (IData)(
                                                           (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__addr_S2_f 
                                                            >> 4U))))));
    vlSelfRef.tile__DOT__l2__DOT__smc_wr_en_p2 = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_S2_f) 
                                                  & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__smc_miss_S2_f) 
                                                     & (0x1aU 
                                                        == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__msg_type_S2_f))));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT____VdfgRegularize_he225fdf4_0_15 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_S2_f) 
           & (0x0cU == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__msg_type_S2_f)));
    vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[0U] 
        = vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__data_mem_f
        [(7U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                >> 6U))][0U];
    vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[1U] 
        = vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__data_mem_f
        [(7U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                >> 6U))][1U];
    vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[2U] 
        = vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__data_mem_f
        [(7U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                >> 6U))][2U];
    vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[3U] 
        = vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__data_mem_f
        [(7U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                >> 6U))][3U];
    vlSelfRef.tile__DOT__l2__DOT__rd_mshr_data_out[4U] 
        = vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__data_mem_f
        [(7U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                >> 6U))][4U];
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT__corr_error 
        = (1U & ((((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_86) 
                   ^ VL_REDXOR_32((0xa95552a4U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U]))) 
                  ^ VL_REDXOR_32((0x54aaaaaaU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U]))) 
                 ^ VL_REDXOR_8((0x0000007eU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U]))));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT__corr_error 
        = (1U & ((((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_86) 
                   ^ VL_REDXOR_32((0x5552a400U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U]))) 
                  ^ VL_REDXOR_32((0xaaaaaaa9U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U]))) 
                 ^ VL_REDXOR_16((0x7e54U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U]))));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_73 
        = (1U & (VL_REDXOR_32((0x30000000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U])) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_70)));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_73 
        = (1U & (VL_REDXOR_8((0x0030U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U])) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_70)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_85 
        = (1U & (((((((((VL_REDXOR_32((0x83330601U 
                                       & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])) 
                         ^ VL_REDXOR_32((0x00199999U 
                                         & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U]))) 
                        ^ (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U] 
                           >> 1U)) ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_83)) 
                      ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_81)) 
                     ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_79)) 
                    ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_77)) 
                   ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_74)) 
                  ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_71)) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_70)));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_75 
        = (1U & (VL_REDXOR_32((0x007e0000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U])) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_74)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_85 
        = (1U & (((((((((VL_REDXOR_32((0x33060100U 
                                       & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U])) 
                         ^ VL_REDXOR_32((0x19999983U 
                                         & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U]))) 
                        ^ (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U] 
                           >> 9U)) ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_83)) 
                      ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_81)) 
                     ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_79)) 
                    ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_77)) 
                   ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_74)) 
                  ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_71)) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_70)));
    tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_75 
        = (1U & (VL_REDXOR_32((0x7e000000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U])) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_74)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((0U 
                                                 != (IData)(vlSelfRef.tile__DOT__cgni_blk1__DOT__data__DOT__elements_in_array_f)) 
                                                & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__real_ready_in));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_wr_cmp_4bits__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f00U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_wr_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000fU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_cmp_4bits__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x0f00U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out 
        = (IData)((0U != (0x000fU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp))));
    if ((2U & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr
         [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_ticket_s2])) {
        if ((1U & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr
             [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_ticket_s2])) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_s2 
                = (0x3fffffffU & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[3U]);
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_val_s2 
                = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[3U] 
                         >> 0x0000001fU));
        } else {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_s2 
                = (0x3fffffffU & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[2U]);
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_val_s2 
                = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[2U] 
                         >> 0x0000001fU));
        }
    } else if ((1U & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_ticketed_cache_addr
                [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_ticket_s2])) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_s2 
            = (0x3fffffffU & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[1U]);
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_val_s2 
            = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[1U] 
                     >> 0x0000001fU));
    } else {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_s2 
            = (0x3fffffffU & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[0U]);
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__ghid_val_s2 
            = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm_req_data_s2[0U] 
                     >> 0x0000001fU));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_bit_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_init_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_l1_replacement_way_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 = 0ULL;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1 = 0ULL;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1 = 0ULL;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1 = 0ULL;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1 = 0ULL;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1 = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1 = 0U;
    if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1 
            = (0x0000000fU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                              >> 0x0000000cU));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1 
            = ((0x00000800U & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U])
                ? ((IData)(((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)) 
                            & (0x0cU == (0x0cU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1))))) 
                   | ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)) 
                      & (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1))))
                : (((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)) 
                      & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1) 
                         >> 3U)) | (IData)(((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)) 
                                            & (4U == 
                                               (0x0cU 
                                                & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1)))))) 
                    | (IData)(((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)) 
                               & (2U == (0x0eU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1)))))) 
                   | ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1)) 
                      & (1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_fwd_subcacheline_vector_s1)))));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_bit_s1 
            = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 0x0cU));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_init_s1 
            = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 1U));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_l1_replacement_way_s1 
            = (3U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 9U));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1 
            = (7U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 5U));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1 
            = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 0x0bU));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 
            = (1U & (IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 
            = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 3U));
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1 
            = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                     >> 2U));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1 
            = (2U == vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array
               [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1]);
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1 
            = (1U == vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_state_array
               [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1]);
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x0000000fU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                 >> 0x00000010U)))));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x00000010U | (0x0000000fU 
                                                 & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                    >> 0x00000010U))))));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x00000020U | (0x0000000fU 
                                                 & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                    >> 0x00000010U))))));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1 
            = ((0x000000ffffffffc0ULL & (((QData)((IData)(
                                                          vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[3U])) 
                                          << 0x00000010U) 
                                         | (0x0000ffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U])) 
                                               >> 0x00000010U)))) 
               | (QData)((IData)((0x00000030U | (0x0000000fU 
                                                 & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                                                    >> 0x00000010U))))));
        if ((0x11U == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                      >> 0x0000000eU)))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                         >> 0x0000000bU));
            if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x12U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                        : tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1);
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 6U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1
                        : ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                            ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                            : ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1
                                : tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1)));
            }
        } else if ((0x12U == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                             >> 0x0000000eU)))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                         >> 0x0000000bU));
            if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x12U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                        : tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1);
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 6U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_noc2_inval_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1
                        : ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                            ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                            : ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1
                                : tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1)));
            }
        } else if ((0x10U == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                             >> 0x0000000eU)))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[2U] 
                         >> 0x0000000bU));
            if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x12U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                        : tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1);
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 7U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                        ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus1_s1
                        : ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                            ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus2_s1
                            : ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                ? tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus3_s1
                                : tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_plus0_s1)));
            }
        } else if (((0x1dU == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                              >> 0x0000000eU))) 
                    || (0x1aU == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                                 >> 0x0000000eU))))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                         >> 4U));
            if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_ld_address_array
                    [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
            } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                    = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                    [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
            }
            if (tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_hmc_fill) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1cU;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 = 0ULL;
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 
                    = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1)
                        ? ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1)
                            ? 9U : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1)
                                     ? 8U : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1)
                                              ? 0x0eU
                                              : 1U)))
                        : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1)
                            ? 9U : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1)
                                     ? 0x2eU : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1)
                                                 ? 0x0aU
                                                 : 
                                                ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_im_s1)
                                                  ? 0x0bU
                                                  : 
                                                 ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_noc2_store_sm_s1)
                                                   ? 0x0cU
                                                   : 1U))))));
            }
        } else if (((0x1cU == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                              >> 0x0000000eU))) 
                    || (0x1bU == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                                 >> 0x0000000eU))))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 
                = (1U & ((IData)(tile__DOT__l15__DOT__l15__DOT__mshr_pipe_readres_control_s1) 
                         >> 4U));
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_st_address_array
                [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_threadid];
            if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x0dU;
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x20U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 = 0ULL;
            }
        } else if ((0x21U == (0x000000ffU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2_data[0U] 
                                             >> 0x0000000eU)))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x14U;
        }
    } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_bit_s1 
            = vlSelfRef.tile__DOT__transducer_l15_blockstore;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_blockstore_init_s1 
            = vlSelfRef.tile__DOT__transducer_l15_blockinitstore;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_l1_replacement_way_s1 
            = vlSelfRef.tile__DOT__transducer_l15_l1rplway;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1 
            = vlSelfRef.tile__DOT__transducer_l15_size;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1 
            = vlSelfRef.tile__DOT__transducer_l15_nc;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
            = vlSelfRef.tile__DOT__transducer_l15_address;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1 
            = vlSelfRef.tile__DOT__transducer_l15_threadid;
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 
            = vlSelfRef.tile__DOT__transducer_l15_prefetch;
        if (((((((((0U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype)) 
                   | (0x10U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) 
                  | (1U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) 
                 | (6U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) 
                | (9U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) 
               | (0x0aU == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) 
              | (0x0bU == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) 
             | (4U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype)))) {
            if ((0U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 
                    = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_config_asi_s1)
                        ? 0x18U : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_diag_data_access_s1)
                                    ? 0x19U : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_hmc_diag_access_s1)
                                                ? 0x1dU
                                                : ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1)
                                                    ? 0x10U
                                                    : 
                                                   ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1)
                                                     ? 0x0fU
                                                     : 
                                                    ((IData)(vlSelfRef.tile__DOT__transducer_l15_invalidate_cacheline)
                                                      ? 0x22U
                                                      : 0x15U))))));
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dcache_load_s1 = 1U;
            } else if ((0x10U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 
                    = ((IData)(vlSelfRef.tile__DOT__transducer_l15_invalidate_cacheline)
                        ? 0x21U : 2U);
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_icache_bit_s1 = 1U;
            } else if ((1U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
                if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_config_asi_s1) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x17U;
                } else if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_diag_data_access_s1) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1aU;
                } else if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_pcx_diag_line_flush_s1) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1bU;
                } else if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_hmc_diag_access_s1) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1eU;
                } else if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_hmc_flush_s1) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x1fU;
                } else if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x11U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_prefetch_bit_s1 = 0U;
                } else {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 3U;
                }
            } else if ((6U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
                if (((((((((0U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op)) 
                           | (1U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) 
                          | (2U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) 
                         | (3U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) 
                        | (4U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) 
                       | (5U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) 
                      | (6U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) 
                     | (7U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op)))) {
                    if ((0U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
                    } else if ((1U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x23U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((2U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x24U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 5U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((4U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x26U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((5U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x27U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else if ((6U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x28U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    } else {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x29U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                    }
                } else if ((8U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2aU;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((9U == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2bU;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0aU == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2cU;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0bU == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x2dU;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0cU == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 4U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_atomic_s1 = 1U;
                } else if ((0x0dU == (IData)(vlSelfRef.tile__DOT__transducer_l15_amo_op))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
                }
            } else if ((9U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 0x13U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1 
                    = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_non_cacheable_s1;
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
            }
        } else if ((5U == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
        } else if ((0x0dU == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
        } else if ((0x0eU == (IData)(vlSelfRef.tile__DOT__transducer_l15_rqtype))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1 = 1U;
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_cache_index_s1 
        = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                                  >> 4U)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_dtag_write_data_s1 
        = (0x1fffffffU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_address_s1 
                                  >> 0x0bU)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data 
        = vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_buf_mem_f
        [vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__data_rd_ptr_f];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61 = (0x000003ffU 
                                                 & ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_sharer_counter_S4_f) 
                                                    - (IData)(tile__DOT__l2__DOT__mshr_inv_counter_out)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (0x000003ffU 
                                                 & (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_sharer_counter_S4_f) 
                                                     + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_owner_S4_f)) 
                                                    - (IData)(tile__DOT__l2__DOT__mshr_inv_counter_out)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT____VdfgRegularize_he225fdf4_0_13 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S1) 
           & (0x00030000U == (0x003fc000U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U])));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_from_mshr_S1 
        = (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2_valid_S1) 
            & ((0x0cU != (0x000000ffU & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                                         >> 0x0000000eU))) 
               & (0x19U != (0x000000ffU & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                                           >> 0x0000000eU))))) 
           & (0U != vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
              [(7U & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_header[0U] 
                      >> 6U))]));
    vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_cmp_4bits__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f0U & (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__smc_tag_cmp))) 
                   | (IData)(vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__l2_smc__DOT__priority_encoder_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_homeid_source_s3 = 0U;
    if (((((((((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3)) 
               | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
              | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
             | (1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
            | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
           | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
          | (4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))) 
         | (7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3)))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_homeid_source_s3 
            = ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))
                ? 3U : ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))
                         ? 3U : ((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_operations_s3))
                                  ? 3U : 2U)));
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc3encoder_req_homeid = 0U;
    if ((2U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_homeid_source_s3))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc3encoder_req_homeid 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc2_src_homeid_s3;
    } else if ((3U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__noc3_homeid_source_s3))) {
        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc3encoder_req_homeid 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__expanded_hmt_homeid_s3;
    }
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2;
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s2;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_lrsc_flag_write_mask_s2 
        = ((0U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2))
            ? 1U : ((1U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2))
                     ? 2U : ((2U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lrsc_flag_write_way_s2))
                              ? 4U : 8U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 = 0U;
    if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
    } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s2;
    } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2;
    } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_op_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__way_mshr_st_s2;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_mesi_write_mask_s2 
        = ((0U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2))
            ? 3U : ((1U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2))
                     ? 0x0cU : ((2U == (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mesi_write_way_s2))
                                 ? 0x30U : 0xc0U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 = 0U;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_way_s2 
        = (3U & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                         >> 0x18U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_index_s2 
        = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                  >> 4U)));
    if (((((((((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2)) 
               | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
              | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
             | (0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
            | (4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
           | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
          | (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) 
         | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2)))) {
        if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
        } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
        } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s2;
        } else if ((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s2;
        } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
        } else if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s2;
        } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s3;
        } else {
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
                = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                          >> 4U)));
            tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s3;
        }
    } else if ((7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
            = (0x0000007fU & (IData)((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__address_s2 
                                      >> 4U)));
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__way_mshr_st_s2;
    } else if ((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_index_s2;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_way_s2;
    } else if ((9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_operation_s2))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_index_s2;
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_diag_way_s2;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_dcache_index_s2 
        = (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_index_s2) 
            << 2U) | (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__dcache_way_s2));
    __Vtableidx1 = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__num_homes_s2;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_home_encoder__DOT__home_low_mask 
        = Vtile__ConstPool__TABLE_h5d3b2005_0[__Vtableidx1];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_home_encoder__DOT__isPowerOf2 
        = Vtile__ConstPool__TABLE_h7abd4790_0[__Vtableidx1];
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_8 
        = (1U & (VL_REDXOR_32((0x0001fe00U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[3U])) 
                 ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen2__DOT____VdfgRegularize_h1c32e0e7_0_7)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_8 
        = (1U & (VL_REDXOR_32((0x0001fe00U & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[1U])) 
                 ^ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__data_pgen1__DOT____VdfgRegularize_h1c32e0e7_0_7)));
    vlSelfRef.tile__DOT__dmbr_ins__DOT__add_out = (0x0000003fU 
                                                   & ((IData)(tile__DOT__dmbr_ins__DOT__input2) 
                                                      + 
                                                      (0x3fU 
                                                       > (IData)(tile__DOT__dmbr_ins__DOT__input2))));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_threadid_s3 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__threadid_s3;
    if ((1U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
            if ((3U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
                if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_threadid_s3 
                        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_threadid_s3;
                } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
                    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_threadid_s3 
                        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_threadid_s3;
                }
            }
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipe_mshr_threadid_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_write_threadid_s3;
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 
            = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
               & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_state_mes_s3));
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 
            = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
               & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_match_val_s3));
    } else if ((5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 
            = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3) 
               & (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_compare_lru_match_val_s3));
    } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_operation_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__val_s3;
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipe_mshr_val_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__s3_mshr_val_s3;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3[0U] 
        = (7U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__wmc__DOT__data_out_f));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3[1U] 
        = (7U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__wmc__DOT__data_out_f) 
                 >> 3U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3[2U] 
        = (7U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__wmc__DOT__data_out_f) 
                 >> 6U));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3[3U] 
        = (7U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__wmc__DOT__data_out_f) 
                 >> 9U));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3 = 0U;
    if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__lru_way_s3;
    } else if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__tagcheck_way_s3;
    } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3 
            = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__flush_way_s3;
    } else if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_op_s3))) {
        tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3 
            = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__stbuf_way_s3;
    }
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_data_s3 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_way_s3;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3 
        = ((0x0eU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3)) 
           | ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
               [0U] >> 2U) & ((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_data_s3) 
                              == (3U & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
                                  [0U]))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3 
        = ((0x0dU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3)) 
           | (0x7ffffffeU & ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
                              [1U] >> 1U) & (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_data_s3) 
                                              == (3U 
                                                  & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
                                                  [1U])) 
                                             << 1U))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3 
        = ((0x0bU & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3)) 
           | (0xfffffffcU & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
                             [2U] & (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_data_s3) 
                                      == (3U & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
                                          [2U])) << 2U))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3 
        = ((7U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3)) 
           | (0xfffffff8U & ((vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
                              [3U] << 1U) & (((IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_data_s3) 
                                              == (3U 
                                                  & vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_data_s3
                                                  [3U])) 
                                             << 3U))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_match_s3 
        = (0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__wmt_compare_mask_s3));
    if (vlSelfRef.tile__DOT__rtap_config_req_val) {
        vlSelfRef.tile__DOT__uncore_config__DOT__req_data 
            = tile__DOT__rtap_config_write_req_data;
        vlSelfRef.tile__DOT__uncore_config__DOT__req_rw 
            = tile__DOT__rtap_config_req_rw;
        vlSelfRef.tile__DOT__uncore_config__DOT__req_address 
            = tile__DOT__rtap_config_req_address;
    } else {
        vlSelfRef.tile__DOT__uncore_config__DOT__req_data 
            = vlSelfRef.tile__DOT__l15_config_write_req_data_s2;
        vlSelfRef.tile__DOT__uncore_config__DOT__req_rw 
            = vlSelfRef.tile__DOT__l15_config_req_rw_s2;
        vlSelfRef.tile__DOT__uncore_config__DOT__req_address 
            = vlSelfRef.tile__DOT__l15_config_req_address_s2;
    }
    vlSelfRef.tile__DOT__l2__DOT__mshr_pending_index 
        = ((2U == vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
            [0U]) ? 0U : ((2U == vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
                           [1U]) ? 1U : ((2U == vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
                                          [2U]) ? 2U
                                          : ((2U == 
                                              vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
                                              [3U])
                                              ? 3U : 
                                             ((2U == 
                                               vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
                                               [4U])
                                               ? 4U
                                               : ((2U 
                                                   == 
                                                   vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
                                                   [5U])
                                                   ? 5U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
                                                    [6U])
                                                    ? 6U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     vlSelfRef.tile__DOT__l2__DOT__mshr_wrap__DOT__state_mem_f
                                                     [7U])
                                                     ? 7U
                                                     : 0U))))))));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_wrindex_next 
        = (7U & ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__command_wrindex) 
                 + (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_val)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer_next[0U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer
        [0U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer_next[1U] 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer
        [1U];
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_next 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex;
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_1 
        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex)));
    tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_2 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex;
    if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_val) {
        if ((7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer_next[vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex] 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_data_0;
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_next 
                = tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_2;
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer_next[tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_1] 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_data_1;
        } else if ((((((((((((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type)) 
                             | (0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                            | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                           | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                          | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                         | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                        | (0x0fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                       | (0x10U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                      | (0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                     | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type))) 
                    | (4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_type)))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_buffer_next[vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex] 
                = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_noc1buffer_req_data_0;
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_next 
                = tile__DOT__l15__DOT__l15__DOT__noc1buffer__DOT__data_wrindex_plus_1;
        }
    }
    tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__dmbr_stall 
        = (((IData)(vlSelfRef.tile__DOT__uncore_config__DOT__dmbr_stall_en) 
            & (0U < (IData)(vlSelfRef.tile__DOT__dmbr_ins__DOT__total_stall_cycles))) 
           & (0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__flit_state)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__sending 
        = (((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1buffer_noc1encoder_req_val) 
            | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__csm_noc1encoder_req_val)) 
           & (~ (IData)(tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__dmbr_stall)));
    vlSelfRef.tile__DOT__processor_router_valid_noc1 
        = vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc1encoder__DOT__sending;
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_way_S2[0U] 
        = (0x03ffffffU & tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[0U]);
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_way_S2[1U] 
        = (0x03ffffffU & ((tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[1U] 
                           << 6U) | (tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[0U] 
                                     >> 0x0000001aU)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_way_S2[2U] 
        = (0x03ffffffU & ((tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[2U] 
                           << 0x0000000cU) | (tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[1U] 
                                              >> 0x00000014U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_way_S2[3U] 
        = (0x03ffffffU & ((tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[3U] 
                           << 0x00000012U) | (tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__tag_data_trans_S2[2U] 
                                              >> 0x0000000eU)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_way_S2[0U] 
        = (0x03ffffffU & tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[0U]);
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_way_S2[1U] 
        = (0x03ffffffU & ((tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[1U] 
                           << 6U) | (tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[0U] 
                                     >> 0x0000001aU)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_way_S2[2U] 
        = (0x03ffffffU & ((tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[2U] 
                           << 0x0000000cU) | (tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[1U] 
                                              >> 0x00000014U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_way_S2[3U] 
        = (0x03ffffffU & ((tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[3U] 
                           << 0x00000012U) | (tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__tag_data_trans_S2[2U] 
                                              >> 0x0000000eU)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[0U] 
        = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_mem_f
                  [vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f]);
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[1U] 
        = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_mem_f
                   [vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f] 
                   >> 0x00000020U));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[2U] 
        = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_mem_f
                  [(7U & ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f)))]);
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[3U] 
        = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_mem_f
                   [(7U & ((IData)(1U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f)))] 
                   >> 0x00000020U));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[4U] 
        = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_mem_f
                  [(7U & ((IData)(2U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f)))]);
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_header[5U] 
        = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_buf_mem_f
                   [(7U & ((IData)(2U) + (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__buf_in__DOT__header_rd_ptr_f)))] 
                   >> 0x00000020U));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_way_S2[0U] 
        = (0x0007ffffU & vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[0U]);
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_way_S2[1U] 
        = (0x0007ffffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[1U] 
                           << 0x0000000dU) | (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[0U] 
                                              >> 0x00000013U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_way_S2[2U] 
        = (0x0007ffffU & (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[1U] 
                          >> 6U));
    vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_way_S2[3U] 
        = (0x0007ffffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[2U] 
                           << 7U) | (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__dpath__DOT__state_data_trans_S2[1U] 
                                     >> 0x00000019U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_way_S2[0U] 
        = (0x0007ffffU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[0U]);
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_way_S2[1U] 
        = (0x0007ffffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[1U] 
                           << 0x0000000dU) | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[0U] 
                                              >> 0x00000013U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_way_S2[2U] 
        = (0x0007ffffU & (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[1U] 
                          >> 6U));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_way_S2[3U] 
        = (0x0007ffffU & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[2U] 
                           << 7U) | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__state_data_trans_S2[1U] 
                                     >> 0x00000019U)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_72 
        = (1U & ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U] 
                  >> 6U) ^ ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U] 
                             >> 0x00000019U) ^ ((IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_71) 
                                                ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_73)))));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_84 
        = (1U & (((((VL_REDXOR_32((0xe3c3c782U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])) 
                     ^ VL_REDXOR_32((0x0061e1e1U & 
                                     vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U]))) 
                    ^ (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U] 
                       >> 2U)) ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_83)) 
                  ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_74)) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_73)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_72 
        = (1U & ((VL_REDXOR_16((0x4002U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U])) 
                  ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_71)) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_73)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_84 
        = (1U & (((((VL_REDXOR_32((0xc3c78200U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U])) 
                     ^ VL_REDXOR_32((0x61e1e1e3U & 
                                     vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U]))) 
                    ^ (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U] 
                       >> 0x0000000aU)) ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_83)) 
                  ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_74)) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_73)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_15 
        = (1U & ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_86)) 
                 & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_85))));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_65 
        = ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_85)) 
           & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_86));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_9 
        = ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_86)) 
           & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_85));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_0 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_86) 
           & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_85));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_82 
        = (1U & ((((VL_REDXOR_32((0x03fc0790U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[0U])) 
                    ^ VL_REDXOR_16((0x000001feU & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U]))) 
                   ^ (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U] 
                      >> 3U)) ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_81)) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_75)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_76 
        = (1U & (VL_REDXOR_32((0x0001fe00U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[1U])) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc1__DOT____VdfgRegularize_hda05f0be_0_75)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_15 
        = (1U & ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_86)) 
                 & (~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_85))));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_65 
        = ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_85)) 
           & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_86));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_9 
        = ((~ (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_86)) 
           & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_85));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_0 
        = ((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_86) 
           & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_85));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_82 
        = (1U & ((((VL_REDXOR_32((0xfc079000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[2U])) 
                    ^ VL_REDXOR_32((0x0001fe03U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U]))) 
                   ^ (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[4U] 
                      >> 0x0000000bU)) ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_81)) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_75)));
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_76 
        = (1U & (VL_REDXOR_32((0x01fe0000U & vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_data_trans_S4[3U])) 
                 ^ (IData)(tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__data_ecc2__DOT____VdfgRegularize_hda05f0be_0_75)));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_vec_next 
        = ((((IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_tx__DOT__ucb_out__DOT__stall_d1)
              ? (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__vld_buf0)
              : ((IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__skid_buf1_sel)
                  ? (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__vld_buf1)
                  : (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__vld_d1))) 
            << 0x0000001fU) | (vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_vec 
                               >> 1U));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_buf_next[0U] 
        = ((vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[1U] 
            << 0x0000001cU) | (vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[0U] 
                               >> 4U));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_buf_next[1U] 
        = ((vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[2U] 
            << 0x0000001cU) | (vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[1U] 
                               >> 4U));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_buf_next[2U] 
        = ((vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[3U] 
            << 0x0000001cU) | (vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[2U] 
                               >> 4U));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__indata_buf_next[3U] 
        = ((((IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_tx__DOT__ucb_out__DOT__stall_d1)
              ? (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__data_buf0)
              : ((IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__skid_buf1_sel)
                  ? (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__data_buf1)
                  : (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_rx__DOT__ucb_in_tile0__DOT__data_d1))) 
            << 0x0000001cU) | (vlSelfRef.tile__DOT__rtap__DOT__ucb_rx_data[3U] 
                               >> 4U));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_tx__DOT__ucb_out__DOT__shift_outdata 
        = ((~ (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_tx__DOT__ucb_out__DOT__stall_d1)) 
           & (IData)(vlSelfRef.tile_jtag_ucb_val));
    vlSelfRef.tile__DOT__rtap__DOT__ucb_tx__DOT__ucb_out__DOT__load_outdata 
        = ((~ ((IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_tx__DOT__ucb_out__DOT__stall_d1) 
               | (IData)(vlSelfRef.tile_jtag_ucb_val))) 
           & (IData)(vlSelfRef.tile__DOT__rtap__DOT__ucb_tx_val));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_wr_cmp_4bits__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f0U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_wr_cmp))) 
                   | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_wr_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_cmp_4bits__DOT__encoder_low_3__DOT__nonzero_out 
        = (IData)(((0U != (0x00f0U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__smc_tag_cmp))) 
                   | (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__l15_csm__DOT__l15_hmc__DOT__priority_encoder_cmp_4bits__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__unshifted_write_mask_s1 
        = ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
            ? 0x8000U : ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
                          ? 0xc000U : ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
                                        ? 0xf000U : 0xff00U)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_1B_s1 
        = (0x0000ffffU & VL_SHIFTR_IIQ(16,16,40, (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__unshifted_write_mask_s1), 
                                       (0x000000000000000fULL 
                                        & vlSelfRef.tile__DOT__transducer_l15_address)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_2B_s1 
        = (0x0000ffffU & VL_SHIFTR_IIQ(16,16,40, (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__unshifted_write_mask_s1), 
                                       (0x000000000000000eULL 
                                        & vlSelfRef.tile__DOT__transducer_l15_address)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_4B_s1 
        = (0x0000ffffU & VL_SHIFTR_IIQ(16,16,40, (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__unshifted_write_mask_s1), 
                                       (0x000000000000000cULL 
                                        & vlSelfRef.tile__DOT__transducer_l15_address)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_8B_s1 
        = (0x0000ffffU & VL_SHIFTR_IIQ(16,16,40, (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__unshifted_write_mask_s1), 
                                       (8ULL & vlSelfRef.tile__DOT__transducer_l15_address)));
    tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_s1 
        = ((4U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
            ? ((2U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
                ? 0xffffU : ((1U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
                              ? 0xffffU : (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_8B_s1)))
            : ((2U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
                ? ((1U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
                    ? (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_4B_s1)
                    : (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_2B_s1))
                : ((1U & (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_size_s1))
                    ? (IData)(tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_1B_s1)
                    : 0xffffU)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipe_mshr_writereq_write_buffer_byte_mask_s1 
        = tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__write_mask_s1;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_mshr_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 0U;
    if (((((((((0x0fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
               | (0x10U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (0x19U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
            | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
           | (0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
          | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
         | (0x1aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x0fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 5U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0x0aU;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 9U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_mshr_s1 = 1U;
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 1U;
            }
            if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
            }
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 2U;
        } else {
            if ((0x10U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 4U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 6U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_mshr_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 2U;
                } else {
                    if ((0x19U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_mshr_s1 = 1U;
                                    }
                                }
                            } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                                if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 1U;
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_mshr_s1 = 1U;
                                }
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 
                                    = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)
                                        ? 4U : 2U);
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                            }
                        }
                        if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 3U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 1U;
                        } else if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0x0aU;
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 1U;
                                } else {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 1U;
                                }
                                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                                }
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 3U;
                            }
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 
                                = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)
                                    ? 0x0aU : ((0U 
                                                == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                                ? 9U
                                                : 5U));
                        } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 2U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 4U;
                            }
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 
                                = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)
                                    ? 2U : 1U);
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 3U;
                        }
                    }
                    if ((0x19U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 8U;
                    } else if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 4U;
                            }
                        } else {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 9U;
                        }
                    }
                }
                if ((0x15U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x19U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 5U;
                                    }
                                }
                            } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 2U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 2U;
            } else if ((0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 4U;
            } else if ((0x19U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x10U;
            } else {
                if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                } else if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 3U;
                    } else if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 3U;
                    }
                } else {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 
                        = ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                            ? 1U : 2U);
                }
                if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
                        } else if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                        }
                    } else {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 
                            = ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                ? ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)
                                    ? 0x0bU : 7U) : 6U);
                    }
                }
            }
        }
        if ((0x0fU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0x10U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x15U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x19U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x11U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 2U;
                } else if ((0x19U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1)))) {
                                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 6U;
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else if (((((((((0x1bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                      | (0x24U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                 || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) 
                    | (0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x21U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x1bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 5U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 4U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 5U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 6U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 0x0aU;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 3U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 8U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 9U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x0cU;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
            }
            if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x11U;
            }
        } else {
            if ((0x24U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 5U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0x0aU;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 9U;
                    } else {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 1U;
                        if (((((((((0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                   | (4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  | (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 | (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                | (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               | (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              | (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             | (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 
                                = ((0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                    ? 0x15U : ((4U 
                                                == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                ? 6U
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                    ? 7U
                                                    : 
                                                   ((0x26U 
                                                     == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                     ? 0x0dU
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                      ? 0x0eU
                                                      : 
                                                     ((0x28U 
                                                       == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                       ? 0x0fU
                                                       : 
                                                      ((0x29U 
                                                        == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                        ? 0x10U
                                                        : 0x11U)))))));
                        } else if ((0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x12U;
                        } else if ((0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x13U;
                        } else if ((0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x14U;
                        }
                    }
                } else {
                    if ((0x12U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x21U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                            } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 1U;
                            }
                            if ((0x22U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 3U;
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 0x0aU;
                                } else {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 1U;
                                }
                            }
                        }
                    }
                    if ((0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 7U;
                        }
                    } else if ((0x21U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x22U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 
                                = ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                    ? ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1)
                                        ? 1U : 2U) : 
                                   ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1)
                                     ? 3U : 4U));
                        }
                    }
                }
            }
            if ((0x24U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 6U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 0x0bU;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x14U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
            } else if ((((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                 || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                }
                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 3U;
                }
            } else {
                if ((0x12U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x21U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                        } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 2U;
                        }
                        if ((0x22U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 2U;
                            if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 4U;
                            }
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                        }
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                    }
                    if ((0x21U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                    } else if ((0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                    }
                }
                if ((0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0eU;
                } else if ((0x21U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0eU;
                } else if ((0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x13U;
                } else if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 1U;
                }
            }
        }
        if ((0x1bU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0x24U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_mshr_s1 = 1U;
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 3U;
            } else {
                if ((1U & (~ (((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                       || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                      || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                     || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                    || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                   || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
                    if ((0x12U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x21U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x22U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 4U;
                                }
                            }
                        }
                    }
                }
                if ((((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                    if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s1_mshr_operation_s1 = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_mshr_allocation_s1 = 1U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_mshr_s1 = 1U;
                    }
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1 = 2U;
                }
            }
        }
    } else {
        if (((((((((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                   | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
               | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 3U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 5U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 3U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 6U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 8U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 8U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 8U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                } else {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 3U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 3U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 5U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 5U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 2U;
                }
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 4U;
                }
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 1U;
            } else {
                if ((8U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((9U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 2U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 3U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 2U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 3U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 1U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 6U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 8U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 8U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                            } else {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 3U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 6U;
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 2U;
                            }
                            if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 4U;
                            }
                        } else if ((0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 5U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 7U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 4U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 5U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                } else {
                    if ((9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 9U;
                    } else if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 5U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 8U;
                        } else {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
                        }
                    } else if ((0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0bU;
                    } else if ((0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
                    } else if ((0x20U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0aU;
                    }
                    if ((9U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                            }
                        } else if ((0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                        } else if ((0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                        } else if ((0x20U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                        }
                    }
                }
            }
            if ((0x0aU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((8U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((9U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                            }
                        } else if ((0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s2_mshr_operation_s1 = 1U;
                        }
                    }
                }
            }
        } else if (((((((((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          | (0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x1eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_write_op_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 2U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 5U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 3U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc3_operation_s1 = 6U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 8U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 8U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 8U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_read_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_stall_on_matched_bypassed_index_s1 = 1U;
                } else {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lruarray_write_op_s1 = 3U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_s3_mshr_operation_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dcache_operation_s1 = 5U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0aU;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_dtag_operation_s1 = 2U;
                }
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_read_op_s1 = 1U;
                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_write_op_s1 = 1U;
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mesi_write_op_s1 = 4U;
                }
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_wmt_compare_op_s1 = 1U;
            } else {
                if ((0x14U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x13U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x18U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x17U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 
                                    = ((0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                        ? 3U : ((0x1dU 
                                                 == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                                 ? 5U
                                                 : 4U));
                            }
                        }
                    }
                    if ((0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc1_operation_s1 = 0x0aU;
                        }
                    }
                }
                if ((0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0dU;
                } else if ((0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0cU;
                    }
                } else if ((0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 0x0fU;
                } else if ((0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
                } else if ((0x1cU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 
                        = ((0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                            ? 0x12U : 6U);
                }
            }
        } else if ((0x1fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_csm_op_s1 = 7U;
            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_cpx_operation_s1 = 6U;
        }
        if ((1U & (~ ((((((((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                            | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
            if (((((((((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                       | (0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x1eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0x2eU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x14U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 
                                = ((IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)
                                    ? 1U : 3U);
                        } else if ((0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
                        } else if ((0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 2U;
                        } else if ((0x1cU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 
                                = ((0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                    ? 1U : 2U);
                        }
                    }
                }
            } else if ((0x1fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
            } else if ((1U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_pcx_ack_stage_s1 = 1U;
            }
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshrid_s1 
        = ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_source_s1))
            ? (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__noc2decoder_l15_mshrid)
            : (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_no_free_mshr_s1 
        = (1U & (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__mshr_val_array
                 [vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_threadid_s1] 
                 >> (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_mshr_allocation_type_s1)));
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1 = 0U;
    if ((1U & (~ ((((((((0x0fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                        | (0x10U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x19U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x1aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
        if ((1U & (~ ((((((((0x1bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                            | (0x24U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                       || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                      || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                     || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                    || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                   || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) 
                          | (0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x21U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
            if ((1U & (~ ((((((((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
                if (((((((((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                           | (0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x1eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                    if ((0x2eU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x14U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x13U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if ((0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1 = 1U;
                                } else if ((0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_config_op_s1 = 2U;
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                       | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                    }
                } else if ((8U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((9U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 1U;
                            }
                            if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                            }
                        } else if ((0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                        }
                    }
                }
            } else if (((((((((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              | (0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             | (0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            | (0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x1eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_hmt_op_s1 = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_unreserve_s1 = 1U;
                    }
                }
            }
        }
        if (((((((((0x1bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                   | (0x24U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) 
                 | (0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (0x21U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
               | (0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x1bU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x24U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_lrsc_flag_read_op_s1 = 1U;
                }
                if ((0x24U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((1U & (~ (((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                           || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                          || (0x23U 
                                              == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                         || (0x26U 
                                             == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                        || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                       || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                      || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                     || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                    || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                   || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                  || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
                        if ((0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_is_last_inval_s1) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 1U;
                            }
                        } else if ((0x21U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x22U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 
                                    = ((6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                        ? ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                            ? 0U : 
                                           ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                             ? 1U : 0U))
                                        : ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                            ? 0U : 
                                           ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))
                                             ? 1U : 0U)));
                            }
                        }
                    }
                    if ((((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                  || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                 || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                        if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            if ((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_16B_s1 = 1U;
                            }
                        }
                    }
                }
            }
        } else if (((((((((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
                }
            } else if ((8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
            } else if ((9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
            } else if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
                }
            } else {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 
                    = ((0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                        ? 1U : ((0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                 ? 1U : ((0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))
                                          ? 1U : 3U)));
            }
        } else if (((((((((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          | (0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x1eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
                }
            } else if ((0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 3U;
            } else if ((0x13U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x18U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x17U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_noc2_ack_stage_s1 = 2U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 = 0U;
    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 0U;
    if (((((((((0x0fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
               | (0x10U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (0x19U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
            | (2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
           | (0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
          | (3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
         | (0x1aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x0fU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0x10U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x15U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x19U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((2U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 = 1U;
                                } else if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x0fU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 2U;
            }
        } else if ((0x10U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0x15U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
            } else if ((0x19U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((2U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
                } else if ((0x11U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if (vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_int_vec_dis_s1) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
                    } else if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 2U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_hit_stbuf_s1)))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
                    }
                }
            }
        }
    } else if (((((((((0x1bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                      | (0x24U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                                 || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                                || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                               || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                              || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) 
                    | (0x12U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x21U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x22U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (6U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (7U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
        if ((0x1bU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0x24U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                              || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                             || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                            || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                    if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                        if ((4U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((0x23U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x1bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((0U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
            }
        } else if ((0x24U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
            if ((((((((((((4U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          || (5U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         || (0x23U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        || (0x26U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       || (0x27U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      || (0x28U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     || (0x29U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    || (0x2aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   || (0x2bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  || (0x2cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 || (0x2dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 2U;
                }
            }
        }
    } else {
        if ((1U & (~ ((((((((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                            | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                           | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                          | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))))) {
            if (((((((((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                       | (0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                   | (0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x1eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
                if ((0x2eU != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x14U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                            if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)))) {
                                vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_req_8B_s1 = 1U;
                            }
                        }
                    }
                }
            }
        }
        if (((((((((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                   | (8U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                  | (9U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                 | (0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                | (0x0cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
               | (0x0dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
              | (0x20U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
             | (0x0eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x0aU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
                }
            } else if ((8U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((9U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((0x0bU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                        if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                            vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
                        }
                    }
                }
            }
        } else if (((((((((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)) 
                          | (0x14U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                         | (0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                        | (0x18U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                       | (0x17U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                      | (0x1cU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                     | (0x1dU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) 
                    | (0x1eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1)))) {
            if ((0x2eU == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__fetch_state_s1))) {
                    vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
                }
            } else if ((0x14U != (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                if ((0x13U == (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_reqtype_s1))) {
                    if ((1U & (~ (IData)(vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__predecode_interrupt_broadcast_s1)))) {
                        vlSelfRef.tile__DOT__l15__DOT__l15__DOT__pipeline__DOT__decoder_creditman_noc1_needed = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__ctrl__DOT__valid_S2_f) {
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[0U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[0U];
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[1U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[1U];
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[2U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[2U];
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[3U] 
            = vlSelfRef.tile__DOT__l2__DOT__pipe2__DOT__msg_data[3U];
    } else {
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[0U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data);
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[1U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data 
                       >> 0x00000020U));
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[2U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data);
        vlSelfRef.tile__DOT__l2__DOT__smc_wrap__DOT__data_in[3U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data 
                       >> 0x00000020U));
    }
    if (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data_16B_amo_S2) {
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[0U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__amo_msg_data_S2_buf);
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[1U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__amo_msg_data_S2_buf 
                       >> 0x00000020U));
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[2U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data);
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[3U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[0U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data);
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[1U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data 
                       >> 0x00000020U));
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[2U] 
            = (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data);
        vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_amo_alu__DOT__cpu_operand[3U] 
            = (IData)((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__msg_data 
                       >> 0x00000020U));
    }
    vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S4 
        = (0x00003fffU & (((IData)(vlSelfRef.tile__DOT__l2__DOT__config_regs__DOT__ctrl_reg_f) 
                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60) 
                              & (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_evict_S4_f)))
                           ? ((2U == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S4_f))
                               ? ((vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[1U] 
                                   << 2U) | (vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__dir_data_S4_f[0U] 
                                             >> 0x0000001eU))
                               : (((1U == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S4_f)) 
                                   | (3U == (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_mesi_S4_f)))
                                   ? (((IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_subline_S4_f) 
                                       << 0x0000000aU) 
                                      | (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__l2_way_state_owner_S4_f))
                                   : (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S4_f)))
                           : (IData)(vlSelfRef.tile__DOT__l2__DOT__pipe1__DOT__dpath__DOT__sdid_S4_f)));
}
