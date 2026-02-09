// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCMP_TOP__DPI_H_
#define VERILATED_VCMP_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/kislay/Documents/gsoc/mmpi-orig/build/manycore/rel-0.1/metro_mpi/modified_tile.v:186:32
    extern void dpi_tile(int partition_id, svBit clk, svBit rst_n, svBit clk_en, int default_chipid, int default_coreid_x, int default_coreid_y, int default_total_num_tiles, int flat_tileid, svBit debug_req_i, svBit* unavailable_o, svBit timer_irq_i, svBit ipi_i, int irq_i, svBit* tile_jtag_ucb_val, int* tile_jtag_ucb_data, svBit jtag_tiles_ucb_val, int jtag_tiles_ucb_data, long long dyn0_dataIn_N, long long dyn0_dataIn_E, long long dyn0_dataIn_W, long long dyn0_dataIn_S, svBit dyn0_validIn_N, svBit dyn0_validIn_E, svBit dyn0_validIn_W, svBit dyn0_validIn_S, svBit dyn0_dNo_yummy, svBit dyn0_dEo_yummy, svBit dyn0_dWo_yummy, svBit dyn0_dSo_yummy, long long* dyn0_dNo, long long* dyn0_dEo, long long* dyn0_dWo, long long* dyn0_dSo, svBit* dyn0_dNo_valid, svBit* dyn0_dEo_valid, svBit* dyn0_dWo_valid, svBit* dyn0_dSo_valid, svBit* dyn0_yummyOut_N, svBit* dyn0_yummyOut_E, svBit* dyn0_yummyOut_W, svBit* dyn0_yummyOut_S, long long dyn1_dataIn_N, long long dyn1_dataIn_E, long long dyn1_dataIn_W, long long dyn1_dataIn_S, svBit dyn1_validIn_N, svBit dyn1_validIn_E, svBit dyn1_validIn_W, svBit dyn1_validIn_S, svBit dyn1_dNo_yummy, svBit dyn1_dEo_yummy, svBit dyn1_dWo_yummy, svBit dyn1_dSo_yummy, long long* dyn1_dNo, long long* dyn1_dEo, long long* dyn1_dWo, long long* dyn1_dSo, svBit* dyn1_dNo_valid, svBit* dyn1_dEo_valid, svBit* dyn1_dWo_valid, svBit* dyn1_dSo_valid, svBit* dyn1_yummyOut_N, svBit* dyn1_yummyOut_E, svBit* dyn1_yummyOut_W, svBit* dyn1_yummyOut_S, long long dyn2_dataIn_N, long long dyn2_dataIn_E, long long dyn2_dataIn_W, long long dyn2_dataIn_S, svBit dyn2_validIn_N, svBit dyn2_validIn_E, svBit dyn2_validIn_W, svBit dyn2_validIn_S, svBit dyn2_dNo_yummy, svBit dyn2_dEo_yummy, svBit dyn2_dWo_yummy, svBit dyn2_dSo_yummy, long long* dyn2_dNo, long long* dyn2_dEo, long long* dyn2_dWo, long long* dyn2_dSo, svBit* dyn2_dNo_valid, svBit* dyn2_dEo_valid, svBit* dyn2_dWo_valid, svBit* dyn2_dSo_valid, svBit* dyn2_yummyOut_N, svBit* dyn2_yummyOut_E, svBit* dyn2_yummyOut_W, svBit* dyn2_yummyOut_S);
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
