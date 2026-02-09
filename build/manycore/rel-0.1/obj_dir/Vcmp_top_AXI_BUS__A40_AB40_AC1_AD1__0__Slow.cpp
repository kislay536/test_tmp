// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1___ctor_var_reset(Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1754404075958931966ull);
    vlSelf->w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1598689714110194787ull);
    vlSelf->b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040118903267060698ull);
    vlSelf->ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3917887198715823980ull);
    vlSelf->r_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9282394983452304596ull);
    vlSelf->r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716220725288817265ull);
}
