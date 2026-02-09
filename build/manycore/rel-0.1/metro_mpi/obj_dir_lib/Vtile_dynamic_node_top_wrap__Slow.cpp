// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtile.h for the primary calling header

#include "Vtile__pch.h"

void Vtile_dynamic_node_top_wrap___ctor_var_reset(Vtile_dynamic_node_top_wrap* vlSelf);

void Vtile_dynamic_node_top_wrap::ctor(Vtile__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtile_dynamic_node_top_wrap___ctor_var_reset(this);
}

void Vtile_dynamic_node_top_wrap::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtile_dynamic_node_top_wrap::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
