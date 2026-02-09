// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_IO_XBAR_TOP_WRAP_H_
#define VERILATED_VCMP_TOP_IO_XBAR_TOP_WRAP_H_  // guard

#include "verilated.h"
class Vcmp_top_io_xbar_input_top_4;
class Vcmp_top_io_xbar_output_top;


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_io_xbar_top_wrap final {
  public:
    // CELLS
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_0_input;
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_1_input;
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_2_input;
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_3_input;
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_4_input;
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_5_input;
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_6_input;
    Vcmp_top_io_xbar_input_top_4* __PVT__io_xbar_top__DOT__node_7_input;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_0_output;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_1_output;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_2_output;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_3_output;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_4_output;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_5_output;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_6_output;
    Vcmp_top_io_xbar_output_top* __PVT__io_xbar_top__DOT__node_7_output;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_in,0,0);
    VL_IN8(validIn_0,0,0);
    VL_IN8(validIn_1,0,0);
    VL_IN8(validIn_2,0,0);
    VL_IN8(validIn_3,0,0);
    VL_IN8(validIn_4,0,0);
    VL_IN8(validIn_5,0,0);
    VL_IN8(validIn_6,0,0);
    VL_IN8(validIn_7,0,0);
    VL_IN8(yummyIn_0,0,0);
    VL_IN8(yummyIn_1,0,0);
    VL_IN8(yummyIn_2,0,0);
    VL_IN8(yummyIn_3,0,0);
    VL_IN8(yummyIn_4,0,0);
    VL_IN8(yummyIn_5,0,0);
    VL_IN8(yummyIn_6,0,0);
    VL_IN8(yummyIn_7,0,0);
    VL_IN8(myLocX,7,0);
    VL_IN8(myLocY,7,0);
    VL_OUT8(validOut_0,0,0);
    VL_OUT8(validOut_1,0,0);
    VL_OUT8(validOut_2,0,0);
    VL_OUT8(validOut_3,0,0);
    VL_OUT8(validOut_4,0,0);
    VL_OUT8(validOut_5,0,0);
    VL_OUT8(validOut_6,0,0);
    VL_OUT8(validOut_7,0,0);
    VL_OUT8(yummyOut_0,0,0);
    VL_OUT8(yummyOut_1,0,0);
    VL_OUT8(yummyOut_2,0,0);
    VL_OUT8(yummyOut_3,0,0);
    VL_OUT8(yummyOut_4,0,0);
    VL_OUT8(yummyOut_5,0,0);
    VL_OUT8(yummyOut_6,0,0);
    VL_OUT8(yummyOut_7,0,0);
    VL_OUT8(__PVT__thanksIn_7,0,0);
    CData/*0:0*/ __PVT__io_xbar_top__DOT__reset;
    VL_IN16(myChipID,13,0);
    SData/*13:0*/ __PVT__io_xbar_top__DOT__myChipID_f;
    VL_IN64(dataIn_0,63,0);
    VL_IN64(dataIn_1,63,0);
    VL_IN64(dataIn_2,63,0);
    VL_IN64(dataIn_3,63,0);
    VL_IN64(dataIn_4,63,0);
    VL_IN64(dataIn_5,63,0);
    VL_IN64(dataIn_6,63,0);
    VL_IN64(dataIn_7,63,0);
    VL_OUT64(dataOut_0,63,0);
    VL_OUT64(dataOut_1,63,0);
    VL_OUT64(dataOut_2,63,0);
    VL_OUT64(dataOut_3,63,0);
    VL_OUT64(dataOut_4,63,0);
    VL_OUT64(dataOut_5,63,0);
    VL_OUT64(dataOut_6,63,0);
    VL_OUT64(dataOut_7,63,0);

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_io_xbar_top_wrap() = default;
    ~Vcmp_top_io_xbar_top_wrap() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_io_xbar_top_wrap);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
