// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_IO_XBAR_INPUT_TOP_4_H_
#define VERILATED_VCMP_TOP_IO_XBAR_INPUT_TOP_4_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_io_xbar_input_top_4 final {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__route_req_0_out,0,0);
    VL_OUT8(__PVT__route_req_1_out,0,0);
    VL_OUT8(__PVT__route_req_2_out,0,0);
    VL_OUT8(__PVT__route_req_3_out,0,0);
    VL_OUT8(__PVT__route_req_4_out,0,0);
    VL_OUT8(__PVT__route_req_5_out,0,0);
    VL_OUT8(__PVT__route_req_6_out,0,0);
    VL_OUT8(__PVT__route_req_7_out,0,0);
    VL_OUT8(__PVT__default_ready_0_out,0,0);
    VL_OUT8(__PVT__default_ready_1_out,0,0);
    VL_OUT8(__PVT__default_ready_2_out,0,0);
    VL_OUT8(__PVT__default_ready_3_out,0,0);
    VL_OUT8(__PVT__default_ready_4_out,0,0);
    VL_OUT8(__PVT__default_ready_5_out,0,0);
    VL_OUT8(__PVT__default_ready_6_out,0,0);
    VL_OUT8(__PVT__default_ready_7_out,0,0);
    VL_OUT8(__PVT__tail_out,0,0);
    VL_OUT8(__PVT__yummy_out,0,0);
    VL_OUT8(__PVT__valid_out,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__my_loc_x_in,7,0);
    VL_IN8(__PVT__my_loc_y_in,7,0);
    VL_IN8(__PVT__valid_in,0,0);
    VL_IN8(__PVT__thanks_0,0,0);
    VL_IN8(__PVT__thanks_1,0,0);
    VL_IN8(__PVT__thanks_2,0,0);
    VL_IN8(__PVT__thanks_3,0,0);
    VL_IN8(__PVT__thanks_4,0,0);
    VL_IN8(__PVT__thanks_5,0,0);
    VL_IN8(__PVT__thanks_6,0,0);
    VL_IN8(__PVT__thanks_7,0,0);
    CData/*0:0*/ __PVT__thanks_all_temp;
    CData/*7:0*/ __Vcellinp__control__length;
    CData/*1:0*/ __PVT__NIB__DOT__head_ptr_f;
    CData/*1:0*/ __PVT__NIB__DOT__tail_ptr_f;
    CData/*2:0*/ __PVT__NIB__DOT__elements_in_array_f;
    CData/*1:0*/ __PVT__NIB__DOT__head_ptr_next;
    CData/*1:0*/ __PVT__NIB__DOT__tail_ptr_next;
    CData/*2:0*/ __PVT__NIB__DOT__elements_in_array_next;
    CData/*0:0*/ __PVT__NIB__DOT__yummy_out_f;
    CData/*7:0*/ __PVT__control__DOT__count_f;
    CData/*0:0*/ __PVT__control__DOT__header_last_f;
    CData/*0:0*/ __PVT__control__DOT__thanks_all_f;
    CData/*0:0*/ __PVT__control__DOT__count_zero_f;
    CData/*0:0*/ __PVT__control__DOT__count_one_f;
    CData/*0:0*/ __PVT__control__DOT__tail_last_f;
    CData/*7:0*/ __PVT__control__DOT__count_temp;
    CData/*0:0*/ __PVT__control__DOT__header;
    CData/*7:0*/ __PVT__control__DOT__count_minus_one;
    CData/*0:0*/ __PVT__control__DOT__header_temp;
    CData/*0:0*/ __PVT__control__DOT__tail_calc__DOT__off_chip;
    CData/*0:0*/ control__DOT__tail_calc__DOT____VdfgRegularize_h096609f0_0_0;
    CData/*0:0*/ __Vdly__control__DOT__header_temp;
    CData/*7:0*/ __Vdly__control__DOT__count_temp;
    VL_IN16(__PVT__my_chip_id_in,13,0);
    VL_OUT64(__PVT__data_out,63,0);
    VL_IN64(__PVT__data_in,63,0);
    VlUnpacked<QData/*63:0*/, 4> __PVT__NIB__DOT__storage_data_f;

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_io_xbar_input_top_4() = default;
    ~Vcmp_top_io_xbar_input_top_4() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_io_xbar_input_top_4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
