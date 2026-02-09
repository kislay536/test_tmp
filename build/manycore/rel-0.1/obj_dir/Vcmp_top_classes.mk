# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcmp_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vcmp_top \
  Vcmp_top___024root__0 \
  Vcmp_top___024root__1 \
  Vcmp_top___024root__2 \
  Vcmp_top___024root__3 \
  Vcmp_top___024root__4 \
  Vcmp_top___024root__5 \
  Vcmp_top___024root__6 \
  Vcmp_top___024root__7 \
  Vcmp_top___024root__8 \
  Vcmp_top___024root__9 \
  Vcmp_top___024root__10 \
  Vcmp_top___024root__11 \
  Vcmp_top___024root__12 \
  Vcmp_top___024root__13 \
  Vcmp_top___024root__14 \
  Vcmp_top___024unit__0 \
  Vcmp_top_io_xbar_top_wrap__0 \
  Vcmp_top_dynamic_node_top_wrap__0 \
  Vcmp_top_io_xbar_input_top_4__0 \
  Vcmp_top_io_xbar_output_top__0 \
  Vcmp_top_dynamic_output_top__0 \
  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1__0 \
  Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1__0 \
  Vcmp_top_l2_priority_encoder_6__0 \
  Vcmp_top_rr_arb_tree__N9_Tz18_Ez3_Az3__0 \
  Vcmp_top_pmp__P38_PB36__0 \
  Vcmp_top_pmp__P38_PB36__1 \
  Vcmp_top_tc_sram_wrapper__N80_D40_NB1__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vcmp_top__ConstPool__0__Slow \
  Vcmp_top___024root__Slow \
  Vcmp_top___024root__0__Slow \
  Vcmp_top___024root__1__Slow \
  Vcmp_top___024root__2__Slow \
  Vcmp_top___024root__3__Slow \
  Vcmp_top___024root__4__Slow \
  Vcmp_top___024root__5__Slow \
  Vcmp_top___024root__6__Slow \
  Vcmp_top___024root__7__Slow \
  Vcmp_top___024root__8__Slow \
  Vcmp_top___024unit__Slow \
  Vcmp_top___024unit__0__Slow \
  Vcmp_top_io_xbar_top_wrap__Slow \
  Vcmp_top_io_xbar_top_wrap__0__Slow \
  Vcmp_top_dynamic_node_top_wrap__Slow \
  Vcmp_top_dynamic_node_top_wrap__0__Slow \
  Vcmp_top_io_xbar_input_top_4__Slow \
  Vcmp_top_io_xbar_input_top_4__0__Slow \
  Vcmp_top_io_xbar_output_top__Slow \
  Vcmp_top_io_xbar_output_top__0__Slow \
  Vcmp_top_dynamic_output_top__Slow \
  Vcmp_top_dynamic_output_top__0__Slow \
  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1__Slow \
  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1__0__Slow \
  Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1__Slow \
  Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1__0__Slow \
  Vcmp_top_l2_priority_encoder_6__Slow \
  Vcmp_top_l2_priority_encoder_6__0__Slow \
  Vcmp_top_rr_arb_tree__N9_Tz18_Ez3_Az3__Slow \
  Vcmp_top_rr_arb_tree__N9_Tz18_Ez3_Az3__0__Slow \
  Vcmp_top_pmp__P38_PB36__Slow \
  Vcmp_top_pmp__P38_PB36__0__Slow \
  Vcmp_top_pmp__P38_PB36__1__Slow \
  Vcmp_top_tc_sram_wrapper__N80_D40_NB1__Slow \
  Vcmp_top_tc_sram_wrapper__N80_D40_NB1__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vcmp_top__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vcmp_top__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
