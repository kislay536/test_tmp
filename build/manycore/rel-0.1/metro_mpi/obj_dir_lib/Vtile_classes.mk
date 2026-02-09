# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtile.mk for the caller.

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
  Vtile \
  Vtile___024root__0 \
  Vtile___024root__1 \
  Vtile___024root__2 \
  Vtile___024root__3 \
  Vtile___024unit__0 \
  Vtile_dynamic_node_top_wrap__0 \
  Vtile_dynamic_output_top__0 \
  Vtile_l2_priority_encoder_6__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtile__ConstPool__0__Slow \
  Vtile___024root__Slow \
  Vtile___024root__0__Slow \
  Vtile___024root__1__Slow \
  Vtile___024root__2__Slow \
  Vtile___024root__3__Slow \
  Vtile___024unit__Slow \
  Vtile___024unit__0__Slow \
  Vtile_dynamic_node_top_wrap__Slow \
  Vtile_dynamic_node_top_wrap__0__Slow \
  Vtile_dynamic_output_top__Slow \
  Vtile_dynamic_output_top__0__Slow \
  Vtile_l2_priority_encoder_6__Slow \
  Vtile_l2_priority_encoder_6__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtile__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtile__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
