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
  Vcmp_top___024unit__0 \
  Vcmp_top_io_xbar_top_wrap__0 \
  Vcmp_top_io_xbar_input_top_4__0 \
  Vcmp_top_io_xbar_output_top__0 \
  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1__0 \
  Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vcmp_top__ConstPool__0__Slow \
  Vcmp_top___024root__Slow \
  Vcmp_top___024root__0__Slow \
  Vcmp_top___024root__1__Slow \
  Vcmp_top___024unit__Slow \
  Vcmp_top___024unit__0__Slow \
  Vcmp_top_io_xbar_top_wrap__Slow \
  Vcmp_top_io_xbar_top_wrap__0__Slow \
  Vcmp_top_io_xbar_input_top_4__Slow \
  Vcmp_top_io_xbar_input_top_4__0__Slow \
  Vcmp_top_io_xbar_output_top__Slow \
  Vcmp_top_io_xbar_output_top__0__Slow \
  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1__Slow \
  Vcmp_top_AXI_BUS__A40_AB40_AC1_AD1__0__Slow \
  Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1__Slow \
  Vcmp_top_AXI_BUS__AC1_A40_AB40_AD1__0__Slow \

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
