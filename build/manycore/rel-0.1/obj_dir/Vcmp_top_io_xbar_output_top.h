// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_IO_XBAR_OUTPUT_TOP_H_
#define VERILATED_VCMP_TOP_IO_XBAR_OUTPUT_TOP_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_io_xbar_output_top final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__thanks_0_out,0,0);
        VL_OUT8(__PVT__thanks_1_out,0,0);
        VL_OUT8(__PVT__thanks_2_out,0,0);
        VL_OUT8(__PVT__thanks_3_out,0,0);
        VL_OUT8(__PVT__thanks_4_out,0,0);
        VL_OUT8(__PVT__thanks_5_out,0,0);
        VL_OUT8(__PVT__thanks_6_out,0,0);
        VL_OUT8(__PVT__thanks_7_out,0,0);
        VL_OUT8(__PVT__valid_out,0,0);
        VL_OUT8(__PVT__popped_interrupt_mesg_out,0,0);
        VL_OUT8(__PVT__popped_memory_ack_mesg_out,0,0);
        VL_OUT8(__PVT__ec_wants_to_send_but_cannot,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__route_req_0_in,0,0);
        VL_IN8(__PVT__route_req_1_in,0,0);
        VL_IN8(__PVT__route_req_2_in,0,0);
        VL_IN8(__PVT__route_req_3_in,0,0);
        VL_IN8(__PVT__route_req_4_in,0,0);
        VL_IN8(__PVT__route_req_5_in,0,0);
        VL_IN8(__PVT__route_req_6_in,0,0);
        VL_IN8(__PVT__route_req_7_in,0,0);
        VL_IN8(__PVT__tail_0_in,0,0);
        VL_IN8(__PVT__tail_1_in,0,0);
        VL_IN8(__PVT__tail_2_in,0,0);
        VL_IN8(__PVT__tail_3_in,0,0);
        VL_IN8(__PVT__tail_4_in,0,0);
        VL_IN8(__PVT__tail_5_in,0,0);
        VL_IN8(__PVT__tail_6_in,0,0);
        VL_IN8(__PVT__tail_7_in,0,0);
        VL_IN8(__PVT__valid_0_in,0,0);
        VL_IN8(__PVT__valid_1_in,0,0);
        VL_IN8(__PVT__valid_2_in,0,0);
        VL_IN8(__PVT__valid_3_in,0,0);
        VL_IN8(__PVT__valid_4_in,0,0);
        VL_IN8(__PVT__valid_5_in,0,0);
        VL_IN8(__PVT__valid_6_in,0,0);
        VL_IN8(__PVT__valid_7_in,0,0);
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
        CData/*0:0*/ __PVT__control__DOT__route_req_0_mask;
        CData/*0:0*/ __PVT__control__DOT__route_req_1_mask;
        CData/*0:0*/ __PVT__control__DOT__route_req_2_mask;
    };
    struct {
        CData/*0:0*/ __PVT__control__DOT__route_req_3_mask;
        CData/*0:0*/ __PVT__control__DOT__route_req_4_mask;
        CData/*0:0*/ __PVT__control__DOT__route_req_5_mask;
        CData/*0:0*/ __PVT__control__DOT__route_req_6_mask;
        CData/*0:0*/ __PVT__control__DOT__route_req_7_mask;
        CData/*2:0*/ __Vdly__space__DOT__count_f;
        CData/*0:0*/ __Vdly__control__DOT__planned_temp;
        VL_OUT16(__PVT__popped_memory_ack_mesg_out_sender,9,0);
        VL_OUT64(__PVT__data_out,63,0);
        VL_IN64(__PVT__data_0_in,63,0);
        VL_IN64(__PVT__data_1_in,63,0);
        VL_IN64(__PVT__data_2_in,63,0);
        VL_IN64(__PVT__data_3_in,63,0);
        VL_IN64(__PVT__data_4_in,63,0);
        VL_IN64(__PVT__data_5_in,63,0);
        VL_IN64(__PVT__data_6_in,63,0);
        VL_IN64(__PVT__data_7_in,63,0);
        QData/*63:0*/ __PVT__datapath__DOT__data_mux__DOT__in0;
        QData/*63:0*/ __PVT__datapath__DOT__data_mux__DOT__in1;
    };

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_io_xbar_output_top() = default;
    ~Vcmp_top_io_xbar_output_top() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_io_xbar_output_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
