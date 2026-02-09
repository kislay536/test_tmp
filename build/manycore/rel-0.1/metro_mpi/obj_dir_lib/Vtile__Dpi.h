// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTILE__DPI_H_
#define VERILATED_VTILE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v:39:29
    extern int drive_iob();
    // DPI import at /home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v:40:29
    extern int get_cpx_word(int index);
    // DPI import at /home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v:42:30
    extern void init_jbus_model_call(const char* str, int oram);
    // DPI import at /home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v:37:33
    extern long long read_64b_call(long long addr);
    // DPI import at /home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v:41:30
    extern void report_pc(long long thread_pc);
    // DPI import at /home/kislay/Documents/gsoc/mmpi-orig/piton/verif/env/manycore/manycore_top.tmp.v:38:30
    extern void write_64b_call(long long addr, long long data);

#ifdef __cplusplus
}
#endif

#endif  // guard
