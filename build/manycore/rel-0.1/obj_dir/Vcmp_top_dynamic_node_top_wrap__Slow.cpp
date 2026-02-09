// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_dynamic_node_top_wrap___ctor_var_reset(Vcmp_top_dynamic_node_top_wrap* vlSelf);

void Vcmp_top_dynamic_node_top_wrap::ctor(Vcmp_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcmp_top_dynamic_node_top_wrap___ctor_var_reset(this);
}

void Vcmp_top_dynamic_node_top_wrap::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcmp_top_dynamic_node_top_wrap::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
