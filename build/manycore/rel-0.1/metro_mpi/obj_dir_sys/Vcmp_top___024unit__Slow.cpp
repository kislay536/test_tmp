// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top___024unit___ctor_var_reset(Vcmp_top___024unit* vlSelf);

void Vcmp_top___024unit::ctor(Vcmp_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcmp_top___024unit___ctor_var_reset(this);
}

void Vcmp_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcmp_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
