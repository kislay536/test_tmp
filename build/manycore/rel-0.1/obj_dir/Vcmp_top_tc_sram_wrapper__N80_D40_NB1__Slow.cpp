// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1___ctor_var_reset(Vcmp_top_tc_sram_wrapper__N80_D40_NB1* vlSelf);

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1::ctor(Vcmp_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcmp_top_tc_sram_wrapper__N80_D40_NB1___ctor_var_reset(this);
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcmp_top_tc_sram_wrapper__N80_D40_NB1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
