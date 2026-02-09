// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

void Vtile___024unit___ctor_var_reset(Vtile___024unit* vlSelf);

void Vtile___024unit::ctor(Vtile__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtile___024unit___ctor_var_reset(this);
}

void Vtile___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtile___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
