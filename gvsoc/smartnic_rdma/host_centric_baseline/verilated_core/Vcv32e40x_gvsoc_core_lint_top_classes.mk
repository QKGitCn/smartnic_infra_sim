# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcv32e40x_gvsoc_core_lint_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcv32e40x_gvsoc_core_lint_top \
	Vcv32e40x_gvsoc_core_lint_top___024root__DepSet_h1f8458f8__0 \
	Vcv32e40x_gvsoc_core_lint_top___024root__DepSet_h1f8458f8__1 \
	Vcv32e40x_gvsoc_core_lint_top___024root__DepSet_h15cc7aa6__0 \
	Vcv32e40x_gvsoc_core_lint_top___024root__DepSet_h15cc7aa6__1 \
	Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__DepSet_h34f08cc1__0 \
	Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4__DepSet_h77d0ab36__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcv32e40x_gvsoc_core_lint_top__ConstPool_0 \
	Vcv32e40x_gvsoc_core_lint_top___024root__Slow \
	Vcv32e40x_gvsoc_core_lint_top___024root__DepSet_h1f8458f8__0__Slow \
	Vcv32e40x_gvsoc_core_lint_top___024root__DepSet_h15cc7aa6__0__Slow \
	Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Slow \
	Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__DepSet_h34f08cc1__0__Slow \
	Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4__Slow \
	Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4__DepSet_h77d0ab36__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcv32e40x_gvsoc_core_lint_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
