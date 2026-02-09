// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top_io_xbar_top_wrap___ctor_var_reset(Vcmp_top_io_xbar_top_wrap* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcmp_top_io_xbar_top_wrap___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13674424877890067050ull);
    vlSelf->dataIn_0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2292992641665130718ull);
    vlSelf->dataIn_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15661117297846782001ull);
    vlSelf->dataIn_2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5762892741448833064ull);
    vlSelf->dataIn_3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15483725134077650947ull);
    vlSelf->dataIn_4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 658223120935445040ull);
    vlSelf->dataIn_5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1056544113381508465ull);
    vlSelf->dataIn_6 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6413229273850988024ull);
    vlSelf->dataIn_7 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7158847607852399425ull);
    vlSelf->validIn_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2494313367946837085ull);
    vlSelf->validIn_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4236090882011062337ull);
    vlSelf->validIn_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11251632051181885910ull);
    vlSelf->validIn_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16170292769671782635ull);
    vlSelf->validIn_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10860074553432746600ull);
    vlSelf->validIn_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18372303952082409000ull);
    vlSelf->validIn_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4918195137446166873ull);
    vlSelf->validIn_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11132473925223958376ull);
    vlSelf->yummyIn_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5261719053135038108ull);
    vlSelf->yummyIn_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16507999163276576850ull);
    vlSelf->yummyIn_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4488944883281980282ull);
    vlSelf->yummyIn_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15169403678296729407ull);
    vlSelf->yummyIn_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8110624871593647822ull);
    vlSelf->yummyIn_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4052234634434604496ull);
    vlSelf->yummyIn_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14698051670443654500ull);
    vlSelf->yummyIn_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16091173886268852219ull);
    vlSelf->myLocX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7790989163723288770ull);
    vlSelf->myLocY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4151810988513214364ull);
    vlSelf->myChipID = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14347425411887281440ull);
    vlSelf->dataOut_0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11984300932645703405ull);
    vlSelf->dataOut_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11488308227032294085ull);
    vlSelf->dataOut_2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3697810778787575110ull);
    vlSelf->dataOut_3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 39601013161851658ull);
    vlSelf->dataOut_4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7559834956853968092ull);
    vlSelf->dataOut_5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11996464369027800021ull);
    vlSelf->dataOut_6 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14745984209095704771ull);
    vlSelf->dataOut_7 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10771167553452905136ull);
    vlSelf->validOut_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16984162075474272830ull);
    vlSelf->validOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214730756179537179ull);
    vlSelf->validOut_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8966977776571596944ull);
    vlSelf->validOut_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10623988649224374877ull);
    vlSelf->validOut_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7831002305697750834ull);
    vlSelf->validOut_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17042935123030551102ull);
    vlSelf->validOut_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17317173053766309795ull);
    vlSelf->validOut_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1485742285432004625ull);
    vlSelf->yummyOut_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 372558006198161173ull);
    vlSelf->yummyOut_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15754611344910633614ull);
    vlSelf->yummyOut_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16814087388692053143ull);
    vlSelf->yummyOut_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6467896977296420322ull);
    vlSelf->yummyOut_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2874852076455347229ull);
    vlSelf->yummyOut_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7063460123414570321ull);
    vlSelf->yummyOut_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10312962732428037813ull);
    vlSelf->yummyOut_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13356357669955975120ull);
    vlSelf->__PVT__thanksIn_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5462711051207166608ull);
    vlSelf->__PVT__io_xbar_top__DOT__myChipID_f = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16623853525920953442ull);
    vlSelf->__PVT__io_xbar_top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9776347236923980430ull);
}
