// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_AXI_BUS__AC1_A40_AB40_AD1_H_
#define VERILATED_VCMP_TOP_AXI_BUS__AC1_A40_AB40_AD1_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ aw_valid;
    CData/*0:0*/ w_valid;
    CData/*0:0*/ b_valid;
    CData/*0:0*/ ar_valid;
    CData/*0:0*/ r_valid;
    QData/*63:0*/ r_data;

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1() = default;
    ~Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1* obj);

#endif  // guard
