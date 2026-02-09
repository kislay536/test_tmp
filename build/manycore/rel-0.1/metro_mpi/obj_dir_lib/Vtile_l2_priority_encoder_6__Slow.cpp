// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

void Vtile_l2_priority_encoder_6___ctor_var_reset(Vtile_l2_priority_encoder_6* vlSelf);

void Vtile_l2_priority_encoder_6::ctor(Vtile__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtile_l2_priority_encoder_6___ctor_var_reset(this);
}

void Vtile_l2_priority_encoder_6::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtile_l2_priority_encoder_6::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
