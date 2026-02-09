// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP_DYNAMIC_NODE_TOP_WRAP_H_
#define VERILATED_VCMP_TOP_DYNAMIC_NODE_TOP_WRAP_H_  // guard

#include "verilated.h"
class Vcmp_top_dynamic_output_top;


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top_dynamic_node_top_wrap final {
  public:
    // CELLS
    Vcmp_top_dynamic_output_top* __PVT__dynamic_node_top__DOT__north_output;
    Vcmp_top_dynamic_output_top* __PVT__dynamic_node_top__DOT__east_output;
    Vcmp_top_dynamic_output_top* __PVT__dynamic_node_top__DOT__south_output;
    Vcmp_top_dynamic_output_top* __PVT__dynamic_node_top__DOT__west_output;
    Vcmp_top_dynamic_output_top* __PVT__dynamic_node_top__DOT__proc_output;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset_in,0,0);
        VL_IN8(validIn_N,0,0);
        VL_IN8(validIn_E,0,0);
        VL_IN8(validIn_S,0,0);
        VL_IN8(validIn_W,0,0);
        VL_IN8(validIn_P,0,0);
        VL_IN8(yummyIn_N,0,0);
        VL_IN8(yummyIn_E,0,0);
        VL_IN8(yummyIn_S,0,0);
        VL_IN8(yummyIn_W,0,0);
        VL_IN8(yummyIn_P,0,0);
        VL_IN8(myLocX,7,0);
        VL_IN8(myLocY,7,0);
        VL_OUT8(validOut_N,0,0);
        VL_OUT8(validOut_E,0,0);
        VL_OUT8(validOut_S,0,0);
        VL_OUT8(validOut_W,0,0);
        VL_OUT8(validOut_P,0,0);
        VL_OUT8(yummyOut_N,0,0);
        VL_OUT8(yummyOut_E,0,0);
        VL_OUT8(yummyOut_S,0,0);
        VL_OUT8(yummyOut_W,0,0);
        VL_OUT8(yummyOut_P,0,0);
        VL_OUT8(thanksIn_P,0,0);
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__myLocX_f;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__myLocY_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__reset;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__thanks_all_temp;
        CData/*7:0*/ dynamic_node_top__DOT__north_input__DOT____Vcellinp__control__length;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_f;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__head_ptr_next;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__tail_ptr_next;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__elements_in_array_next;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__final_bits;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_last_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__thanks_all_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_zero_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_one_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_last_f;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_minus_one;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done_x;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__off_chip;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__north_input__DOT__control__DOT__tail_calc__DOT__done;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__thanks_all_temp;
        CData/*7:0*/ dynamic_node_top__DOT__east_input__DOT____Vcellinp__control__length;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_f;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__head_ptr_next;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__tail_ptr_next;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__elements_in_array_next;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__final_bits;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_last_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__thanks_all_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_zero_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_one_f;
    };
    struct {
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_last_f;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_minus_one;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done_x;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__off_chip;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__east_input__DOT__control__DOT__tail_calc__DOT__done;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__thanks_all_temp;
        CData/*7:0*/ dynamic_node_top__DOT__south_input__DOT____Vcellinp__control__length;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_f;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__head_ptr_next;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__tail_ptr_next;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__elements_in_array_next;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__final_bits;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_last_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__thanks_all_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_zero_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_one_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_last_f;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_minus_one;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done_x;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__off_chip;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__south_input__DOT__control__DOT__tail_calc__DOT__done;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__thanks_all_temp;
        CData/*7:0*/ dynamic_node_top__DOT__west_input__DOT____Vcellinp__control__length;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_f;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_f;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__head_ptr_next;
        CData/*1:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__tail_ptr_next;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__elements_in_array_next;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__yummy_out_f;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__final_bits;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_last_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__thanks_all_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_zero_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_one_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_last_f;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_minus_one;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done_x;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__off_chip;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__west_input__DOT__control__DOT__tail_calc__DOT__done;
        CData/*7:0*/ dynamic_node_top__DOT__proc_input__DOT____Vcellinp__control__length;
        CData/*3:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_f;
        CData/*3:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_f;
        CData/*4:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_f;
        CData/*3:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__head_ptr_next;
        CData/*3:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__tail_ptr_next;
        CData/*4:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__elements_in_array_next;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__yummy_out_f;
        CData/*2:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__final_bits;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_last_f;
    };
    struct {
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__thanks_all_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_zero_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_one_f;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_last_f;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header;
        CData/*7:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_minus_one;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done_x;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__off_chip;
        CData/*0:0*/ __PVT__dynamic_node_top__DOT__proc_input__DOT__control__DOT__tail_calc__DOT__done;
        CData/*0:0*/ __Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__header_temp;
        CData/*7:0*/ __Vdly__dynamic_node_top__DOT__north_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__header_temp;
        CData/*7:0*/ __Vdly__dynamic_node_top__DOT__east_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__header_temp;
        CData/*7:0*/ __Vdly__dynamic_node_top__DOT__south_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__header_temp;
        CData/*7:0*/ __Vdly__dynamic_node_top__DOT__west_input__DOT__control__DOT__count_temp;
        CData/*0:0*/ __Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__header_temp;
        CData/*7:0*/ __Vdly__dynamic_node_top__DOT__proc_input__DOT__control__DOT__count_temp;
        VL_IN16(myChipID,13,0);
        SData/*13:0*/ __PVT__dynamic_node_top__DOT__myChipID_f;
        VL_IN64(dataIn_N,63,0);
        VL_IN64(dataIn_E,63,0);
        VL_IN64(dataIn_S,63,0);
        VL_IN64(dataIn_W,63,0);
        VL_IN64(dataIn_P,63,0);
        VL_OUT64(dataOut_N,63,0);
        VL_OUT64(dataOut_E,63,0);
        VL_OUT64(dataOut_S,63,0);
        VL_OUT64(dataOut_W,63,0);
        VL_OUT64(dataOut_P,63,0);
        VlUnpacked<QData/*63:0*/, 4> __PVT__dynamic_node_top__DOT__north_input__DOT__NIB__DOT__storage_data_f;
        VlUnpacked<QData/*63:0*/, 4> __PVT__dynamic_node_top__DOT__east_input__DOT__NIB__DOT__storage_data_f;
        VlUnpacked<QData/*63:0*/, 4> __PVT__dynamic_node_top__DOT__south_input__DOT__NIB__DOT__storage_data_f;
        VlUnpacked<QData/*63:0*/, 4> __PVT__dynamic_node_top__DOT__west_input__DOT__NIB__DOT__storage_data_f;
        VlUnpacked<QData/*63:0*/, 16> __PVT__dynamic_node_top__DOT__proc_input__DOT__NIB__DOT__storage_data_f;
    };

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top_dynamic_node_top_wrap() = default;
    ~Vcmp_top_dynamic_node_top_wrap() = default;
    void ctor(Vcmp_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcmp_top_dynamic_node_top_wrap);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
