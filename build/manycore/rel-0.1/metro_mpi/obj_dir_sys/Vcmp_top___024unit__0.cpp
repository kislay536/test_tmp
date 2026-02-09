// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

extern "C" long long read_64b_call(long long addr);

void Vcmp_top___024unit____Vdpiimwrap_read_64b_call_TOP____024unit(QData/*63:0*/ addr, QData/*63:0*/ &read_64b_call__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcmp_top___024unit____Vdpiimwrap_read_64b_call_TOP____024unit\n"); );
    // Body
    long long addr__Vcvt;
    addr__Vcvt = addr;
    long long read_64b_call__Vfuncrtn__Vcvt;
    read_64b_call__Vfuncrtn__Vcvt = read_64b_call(addr__Vcvt);
    read_64b_call__Vfuncrtn = (read_64b_call__Vfuncrtn__Vcvt);
}

extern "C" void write_64b_call(long long addr, long long data);

void Vcmp_top___024unit____Vdpiimwrap_write_64b_call_TOP____024unit(QData/*63:0*/ addr, QData/*63:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcmp_top___024unit____Vdpiimwrap_write_64b_call_TOP____024unit\n"); );
    // Body
    long long addr__Vcvt;
    addr__Vcvt = addr;
    long long data__Vcvt;
    data__Vcvt = data;
    write_64b_call(addr__Vcvt, data__Vcvt);
}

extern "C" int drive_iob();

void Vcmp_top___024unit____Vdpiimwrap_drive_iob_TOP____024unit(IData/*31:0*/ &drive_iob__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcmp_top___024unit____Vdpiimwrap_drive_iob_TOP____024unit\n"); );
    // Body
    int drive_iob__Vfuncrtn__Vcvt;
    drive_iob__Vfuncrtn__Vcvt = drive_iob();
    drive_iob__Vfuncrtn = (drive_iob__Vfuncrtn__Vcvt);
}

extern "C" int get_cpx_word(int index);

void Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit(IData/*31:0*/ index, IData/*31:0*/ &get_cpx_word__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcmp_top___024unit____Vdpiimwrap_get_cpx_word_TOP____024unit\n"); );
    // Body
    int index__Vcvt;
    index__Vcvt = index;
    int get_cpx_word__Vfuncrtn__Vcvt;
    get_cpx_word__Vfuncrtn__Vcvt = get_cpx_word(index__Vcvt);
    get_cpx_word__Vfuncrtn = (get_cpx_word__Vfuncrtn__Vcvt);
}

extern "C" void report_pc(long long thread_pc);

void Vcmp_top___024unit____Vdpiimwrap_report_pc_TOP____024unit(QData/*63:0*/ thread_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcmp_top___024unit____Vdpiimwrap_report_pc_TOP____024unit\n"); );
    // Body
    long long thread_pc__Vcvt;
    thread_pc__Vcvt = thread_pc;
    report_pc(thread_pc__Vcvt);
}

extern "C" void init_jbus_model_call(const char* str, int oram);

void Vcmp_top___024unit____Vdpiimwrap_init_jbus_model_call_TOP____024unit(std::string str, IData/*31:0*/ oram) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcmp_top___024unit____Vdpiimwrap_init_jbus_model_call_TOP____024unit\n"); );
    // Body
    const char* str__Vcvt;
    str__Vcvt = str.c_str();
    int oram__Vcvt;
    oram__Vcvt = oram;
    init_jbus_model_call(str__Vcvt, oram__Vcvt);
}
