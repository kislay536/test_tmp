// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

void Vtile___024root___ctor_var_reset(Vtile___024root* vlSelf);

Vtile___024root::Vtile___024root(Vtile__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtile___024root___ctor_var_reset(this);
}

void Vtile___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtile___024root::~Vtile___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
