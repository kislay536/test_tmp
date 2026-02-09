// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_pmp__P38_PB36___ctor_var_reset(Vcmp_top_pmp__P38_PB36* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_pmp__P38_PB36___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 5910257723895866083ull);
    vlSelf->access_type_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11757003485010870619ull);
    vlSelf->priv_lvl_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18244785984943860963ull);
    VL_SCOPED_RAND_RESET_W(864, vlSelf->conf_addr_i, __VscopeHash, 10692266313599355621ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->conf_i, __VscopeHash, 4046249112541871722ull);
    vlSelf->allow_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1707744014348776060ull);
    vlSelf->__Vcellout__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__match_o = 0;
    vlSelf->__Vcellout__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__match_o = 0;
    vlSelf->__Vcellout__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__match_o = 0;
    vlSelf->__Vcellout__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__match_o = 0;
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__trail_ones = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5628081733891239991ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 4566560093562668903ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 5089719584648020158ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size = 0;
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__0__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 7368365206190506145ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__trail_ones = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8861196533680362795ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 10027142891604202038ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 12805256436068822008ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size = 0;
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__1__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 3117916903409583366ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__trail_ones = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 922260096984701819ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 3274832333258595558ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 13572151409705342736ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size = 0;
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__2__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 4857079353587343964ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__trail_ones = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11399709661258567913ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__base = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 4304690962355446480ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__mask = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 8559939040321361724ull);
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__unnamedblk1__DOT__size = 0;
    vlSelf->__PVT__gen_pmp__DOT__genblk1__BRA__3__KET____DOT__i_pmp_entry__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 1065240965802624254ull);
}
