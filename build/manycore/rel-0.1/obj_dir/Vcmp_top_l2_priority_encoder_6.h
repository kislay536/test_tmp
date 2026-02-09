// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_L2_PRIORITY_ENCODER_6_H_
#define VERILATED_VCMP_TOP_L2_PRIORITY_ENCODER_6_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_l2_priority_encoder_6 final {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(data_out,5,0);
    VL_OUT8(nonzero_out,0,0);
    CData/*0:0*/ __PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out;
    CData/*0:0*/ __PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out;
    VL_IN64(data_in,63,0);
    VL_OUT64(data_out_mask,63,0);

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_l2_priority_encoder_6() = default;
    ~Vcmp_top_l2_priority_encoder_6() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_l2_priority_encoder_6);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
