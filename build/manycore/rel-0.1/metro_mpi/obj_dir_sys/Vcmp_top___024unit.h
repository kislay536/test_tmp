// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP___024UNIT_H_
#define VERILATED_VCMP_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top___024unit() = default;
    ~Vcmp_top___024unit() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
