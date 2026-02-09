// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_PMP__P38_PB36_H_
#define VERILATED_VCMP_TOP_PMP__P38_PB36_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_pmp__P38_PB36 final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(access_type_i,2,0);
    VL_IN8(priv_lvl_i,1,0);
    VL_INW(conf_i,127,0,4);
    VL_OUT8(allow_o,0,0);
    CData/*0:0*/ __Vcellout__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__match_o;
    CData/*0:0*/ __Vcellout__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__match_o;
    CData/*0:0*/ __Vcellout__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__match_o;
    CData/*0:0*/ __Vcellout__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__match_o;
    CData/*5:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__trail_ones;
    CData/*5:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__trail_ones;
    CData/*5:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__trail_ones;
    CData/*5:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__trail_ones;
    IData/*31:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size;
    IData/*31:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size;
    IData/*31:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size;
    IData/*31:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size;
    VL_IN64(addr_i,55,0);
    VL_INW(conf_addr_i,863,0,27);
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask;
    QData/*55:0*/ __PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp;

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_pmp__P38_PB36() = default;
    ~Vcmp_top_pmp__P38_PB36() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_pmp__P38_PB36);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
