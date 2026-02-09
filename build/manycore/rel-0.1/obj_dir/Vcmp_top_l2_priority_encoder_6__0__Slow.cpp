// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_l2_priority_encoder_6___ctor_var_reset(Vcmp_top_l2_priority_encoder_6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vcmp_top_l2_priority_encoder_6___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10574596302020702150ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11675680895196038875ull);
    vlSelf->data_out_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11871555312161919397ull);
    vlSelf->nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 800249094692172758ull);
    vlSelf->__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2697479615970730725ull);
    vlSelf->__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8926801973131585383ull);
    vlSelf->__PVT__encoder_high_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8546181915585454073ull);
    vlSelf->__PVT__encoder_high_5__DOT__encoder_low_4__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10581647368784471194ull);
    vlSelf->__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11430577653255453970ull);
    vlSelf->__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9761275253309107879ull);
    vlSelf->__PVT__encoder_high_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9887462409932197407ull);
    vlSelf->__PVT__encoder_low_5__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9731003020469714277ull);
    vlSelf->__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17803128186906770846ull);
    vlSelf->__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6531349974403150272ull);
    vlSelf->__PVT__encoder_low_5__DOT__encoder_high_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3815809246294278844ull);
    vlSelf->__PVT__encoder_low_5__DOT__encoder_low_4__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14134812559639442709ull);
    vlSelf->__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_high_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15478971087033952997ull);
    vlSelf->__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10419929250746355607ull);
    vlSelf->__PVT__encoder_low_5__DOT__encoder_low_4__DOT__encoder_low_3__DOT__encoder_low_2__DOT__nonzero_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17385994289679749290ull);
}
