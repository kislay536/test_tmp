// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

void Vtile_dynamic_output_top___ctor_var_reset(Vtile_dynamic_output_top* vlSelf);

void Vtile_dynamic_output_top::ctor(Vtile__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtile_dynamic_output_top___ctor_var_reset(this);
}

void Vtile_dynamic_output_top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtile_dynamic_output_top::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
