// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_TC_SRAM_WRAPPER__N80_D40_NB1_H_
#define VERILATED_VCMP_TOP_TC_SRAM_WRAPPER__N80_D40_NB1_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_tc_sram_wrapper__N80_D40_NB1 final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(req_i,0,0);
    VL_IN8(we_i,0,0);
    VL_IN8(addr_i,6,0);
    VL_IN8(be_i,7,0);
    CData/*6:0*/ i_tc_sram__DOT____Vlvbound_ha66a6d2f__0;
    CData/*6:0*/ __PVT__i_tc_sram__DOT__r_addr_q;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_293;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_296;
    VL_IN64(wdata_i,63,0);
    VL_OUT64(rdata_o,63,0);
    QData/*63:0*/ __PVT__i_tc_sram__DOT__rdata_q;
    QData/*32:0*/ __VdfgRegularize_h6e95ff9d_0_287;
    VlUnpacked<QData/*63:0*/, 128> __PVT__i_tc_sram__DOT__sram;

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_tc_sram_wrapper__N80_D40_NB1() = default;
    ~Vcmp_top_tc_sram_wrapper__N80_D40_NB1() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_tc_sram_wrapper__N80_D40_NB1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
