// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_RR_ARB_TREE__N9_TZ18_EZ3_AZ3_H_
#define VERILATED_VCMP_TOP_RR_ARB_TREE__N9_TZ18_EZ3_AZ3_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_rr_arb_tree__N9_Tz18_Ez3_Az3 final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(flush_i,0,0);
    VL_IN8(rr_i,3,0);
    VL_IN64(data_i,35,0);
    VL_OUT8(__PVT__req_o,0,0);
    VL_IN8(gnt_i,0,0);
    VL_OUT8(data_o,3,0);
    VL_OUT8(__PVT__idx_o,3,0);
    CData/*0:0*/ __PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__;
    VL_IN16(req_i,8,0);
    VL_OUT16(__PVT__gnt_o,8,0);

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_rr_arb_tree__N9_Tz18_Ez3_Az3() = default;
    ~Vcmp_top_rr_arb_tree__N9_Tz18_Ez3_Az3() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_rr_arb_tree__N9_Tz18_Ez3_Az3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
