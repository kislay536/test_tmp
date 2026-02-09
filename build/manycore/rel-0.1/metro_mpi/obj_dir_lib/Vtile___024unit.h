// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtile.h for the primary calling header

#ifndef VERILATED_VTILE___024UNIT_H_
#define VERILATED_VTILE___024UNIT_H_  // guard

#include "verilated.h"


class Vtile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtile___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtile__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtile___024unit() = default;
    ~Vtile___024unit() = default;
    void ctor(Vtile__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtile___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
