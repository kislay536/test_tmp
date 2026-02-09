// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_DYNAMIC_OUTPUT_TOP_H_
#define VERILATED_VCMP_TOP_DYNAMIC_OUTPUT_TOP_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_dynamic_output_top final {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__thanks_a_out,0,0);
    VL_OUT8(__PVT__thanks_b_out,0,0);
    VL_OUT8(__PVT__thanks_c_out,0,0);
    VL_OUT8(__PVT__thanks_d_out,0,0);
    VL_OUT8(__PVT__thanks_x_out,0,0);
    VL_OUT8(__PVT__valid_out,0,0);
    VL_OUT8(__PVT__popped_interrupt_mesg_out,0,0);
    VL_OUT8(__PVT__popped_memory_ack_mesg_out,0,0);
    VL_OUT8(__PVT__ec_wants_to_send_but_cannot,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__route_req_a_in,0,0);
    VL_IN8(__PVT__route_req_b_in,0,0);
    VL_IN8(__PVT__route_req_c_in,0,0);
    VL_IN8(__PVT__route_req_d_in,0,0);
    VL_IN8(__PVT__route_req_x_in,0,0);
    VL_IN8(__PVT__tail_a_in,0,0);
    VL_IN8(__PVT__tail_b_in,0,0);
    VL_IN8(__PVT__tail_c_in,0,0);
    VL_IN8(__PVT__tail_d_in,0,0);
    VL_IN8(__PVT__tail_x_in,0,0);
    VL_IN8(__PVT__valid_a_in,0,0);
    VL_IN8(__PVT__valid_b_in,0,0);
    VL_IN8(__PVT__valid_c_in,0,0);
    VL_IN8(__PVT__valid_d_in,0,0);
    VL_IN8(__PVT__valid_x_in,0,0);
    VL_IN8(__PVT__default_ready_in,0,0);
    VL_IN8(__PVT__yummy_in,0,0);
    CData/*0:0*/ __PVT__valid_out_temp_connection;
    CData/*0:0*/ __PVT__space_avail_connection;
    CData/*0:0*/ __PVT__space__DOT__yummy_f;
    CData/*0:0*/ __PVT__space__DOT__valid_f;
    CData/*2:0*/ __PVT__space__DOT__count_f;
    CData/*0:0*/ __PVT__space__DOT__is_one_f;
    CData/*0:0*/ __PVT__space__DOT__is_two_or_more_f;
    CData/*2:0*/ __PVT__space__DOT__count_plus_1;
    CData/*2:0*/ __PVT__space__DOT__count_minus_1;
    CData/*0:0*/ __PVT__space__DOT__up;
    CData/*0:0*/ __PVT__space__DOT__down;
    CData/*2:0*/ __PVT__space__DOT__count_temp;
    CData/*2:0*/ __PVT__control__DOT__current_route_f;
    CData/*0:0*/ __PVT__control__DOT__planned_f;
    CData/*2:0*/ __PVT__control__DOT__current_route_temp;
    CData/*0:0*/ __PVT__control__DOT__route_req_all_or_with_planned;
    CData/*0:0*/ __PVT__control__DOT__route_req_all_but_default;
    CData/*0:0*/ __PVT__control__DOT__new_route_needed;
    CData/*0:0*/ __PVT__control__DOT__planned_temp;
    CData/*2:0*/ __PVT__control__DOT__new_route;
    CData/*0:0*/ __PVT__control__DOT__tail_current_route;
    CData/*0:0*/ __PVT__control__DOT__route_req_a_mask;
    CData/*0:0*/ __PVT__control__DOT__route_req_b_mask;
    CData/*0:0*/ __PVT__control__DOT__route_req_c_mask;
    CData/*0:0*/ __PVT__control__DOT__route_req_d_mask;
    CData/*0:0*/ __PVT__control__DOT__route_req_x_mask;
    CData/*2:0*/ __Vdly__space__DOT__count_f;
    CData/*0:0*/ __Vdly__control__DOT__planned_temp;
    VL_OUT16(__PVT__popped_memory_ack_mesg_out_sender,9,0);
    VL_OUT64(__PVT__data_out,63,0);
    VL_IN64(__PVT__data_a_in,63,0);
    VL_IN64(__PVT__data_b_in,63,0);
    VL_IN64(__PVT__data_c_in,63,0);
    VL_IN64(__PVT__data_d_in,63,0);
    VL_IN64(__PVT__data_x_in,63,0);
    QData/*63:0*/ __PVT__data_out_internal;

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_dynamic_output_top() = default;
    ~Vcmp_top_dynamic_output_top() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_dynamic_output_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
