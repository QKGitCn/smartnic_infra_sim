GVSOC_WORKDIR   ?= $(CURDIR)/build
GVSOC_GLOBAL_MODELS ?= $(abspath $(CURDIR)/../../install/models)
MCU_BUILDDIR    := $(GVSOC_WORKDIR)/mcu_build

MCU_RTL_DIR := $(CURDIR)/../mcu
VERILATED_DUMMY_DIR := $(CURDIR)/verilated_dummy
RV64_GCC ?= /opt/riscv/bin/riscv64-unknown-elf-gcc
HOST_FW_DIR := $(CURDIR)/firmware/host_ctrl_smoke
HOST_FW_BUILD := $(GVSOC_WORKDIR)/host_fw
HOST_FW_ELF := $(HOST_FW_BUILD)/host_ctrl_smoke.elf
HOST_CALIBRATION_PROFILE ?=
HOST_CALIBRATION_ARG :=

ifneq ($(strip $(HOST_CALIBRATION_PROFILE)),)
HOST_CALIBRATION_ARG := --host-calibration-profile=$(HOST_CALIBRATION_PROFILE)
endif

ifdef BUILDDIR
FULL_BUILDDIR := $(GVSOC_WORKDIR)/$(BUILDDIR)
else
FULL_BUILDDIR := $(GVSOC_WORKDIR)
endif

clean:
	rm -rf $(FULL_BUILDDIR)
	make -C ../.. TARGETS=baseline_target MODULES=$(CURDIR) \
		BUILDDIR=$(FULL_BUILDDIR)/build INSTALLDIR=$(FULL_BUILDDIR)/install clean

gvsoc:
	make -C ../.. TARGETS=baseline_target MODULES=$(CURDIR) \
		BUILDDIR=$(FULL_BUILDDIR)/build INSTALLDIR=$(FULL_BUILDDIR)/install build

host-fw:
	mkdir -p $(HOST_FW_BUILD)
	$(RV64_GCC) -march=rv64imafdc -mabi=lp64d -mcmodel=medany -Os -ffreestanding -nostdlib -nostartfiles \
		-Wall -Wextra $(HOST_FW_DIR)/start.S $(HOST_FW_DIR)/main.c -T $(HOST_FW_DIR)/link.ld \
		-Wl,-Map=$(HOST_FW_BUILD)/host_ctrl_smoke.map -o $(HOST_FW_ELF)

run: gvsoc
	$(FULL_BUILDDIR)/install/bin/gvrun --target-dir=$(CURDIR) \
		--target=baseline_target --work-dir=$(FULL_BUILDDIR)/work run

run-host-fw: gvsoc host-fw
	$(FULL_BUILDDIR)/install/bin/gvrun --target-dir=$(CURDIR) \
		--target=baseline_target --work-dir=$(FULL_BUILDDIR)/work \
		--host-binary=$(HOST_FW_ELF) \
		$(HOST_CALIBRATION_ARG) run

# ---------------------------------------------------------------------------
# Phase 2: RTL MCU path — Verilated cv32e40x dummy + DPI bridge
# ---------------------------------------------------------------------------

# Step 1: Generate Verilated C++ model from the SV dummy.
# Run from the repo root so --Mdir lands at the right relative location.
verilate-dummy:
	verilator --cc --sv \
		--top-module cv32e40x_gvsoc_dummy_lint_top \
		--Mdir $(VERILATED_DUMMY_DIR) \
		$(MCU_RTL_DIR)/cv32e40x_dummy/cv32e40x_gvsoc_dummy.vlt \
		$(MCU_RTL_DIR)/cv32e40x/rtl/cv32e40x_if_xif.sv \
		$(MCU_RTL_DIR)/cv32e40x_dummy/cv32e40x_gvsoc_dummy.sv \
		$(MCU_RTL_DIR)/cv32e40x_dummy/cv32e40x_gvsoc_dummy_lint_top.sv

# Step 2: Build GVSoC with the Verilated model compiled in (separate BUILDDIR
# so the standard "make gvsoc" installation is not affected).
gvsoc-mcu: verilate-dummy
	make -C ../.. TARGETS=baseline_target MODULES=$(CURDIR) \
		BUILDDIR=$(MCU_BUILDDIR)/build INSTALLDIR=$(MCU_BUILDDIR)/install build

# Step 3: Run the simulation with the RTL MCU path enabled.
run-mcu: gvsoc-mcu
	$(MCU_BUILDDIR)/install/bin/gvrun --target-dir=$(CURDIR) \
		--target=baseline_target --work-dir=$(MCU_BUILDDIR)/work \
		--use-mcu run

# ---------------------------------------------------------------------------
# Phase 3: Real cv32e40x core + RV32 firmware
# ---------------------------------------------------------------------------

V5              := /home/kunq/tools/verilator/bin/verilator
CORE_RTL_DIR    := $(MCU_RTL_DIR)/cv32e40x/rtl
CORE_WRAP_DIR   := $(MCU_RTL_DIR)/cv32e40x_core_wrap
VERILATED_CORE_DIR := $(CURDIR)/verilated_core
CORE_BUILDDIR   := $(GVSOC_WORKDIR)/core_build

MCU_FW_DIR      := $(CURDIR)/firmware/mcu_smoke
MCU_FW_BUILD    := $(GVSOC_WORKDIR)/mcu_fw
MCU_FW_ELF      := $(MCU_FW_BUILD)/mcu_smoke.elf

RV32_GCC ?= riscv64-unknown-elf-gcc

# Step 1a: Verilate the real cv32e40x RTL.
verilate-core:
	mkdir -p $(VERILATED_CORE_DIR)
	$(eval RTL_FILES := $(shell ls $(CORE_RTL_DIR)/*.sv \
		| grep -v cv32e40x_if_xif.sv \
		| grep -v cv32e40x_if_c_obi.sv))
	$(V5) --cc --sv \
		--top-module cv32e40x_gvsoc_core_lint_top \
		--Mdir $(VERILATED_CORE_DIR) \
		-I$(CORE_RTL_DIR)/include \
		$(CORE_RTL_DIR)/include/cv32e40x_pkg.sv \
		$(CORE_RTL_DIR)/cv32e40x_if_xif.sv \
		$(CORE_RTL_DIR)/cv32e40x_if_c_obi.sv \
		$(RTL_FILES) \
		$(CORE_WRAP_DIR)/cv32e40x_clock_gate.sv \
		$(CORE_WRAP_DIR)/cv32e40x_gvsoc_core.vlt \
		$(CORE_WRAP_DIR)/cv32e40x_gvsoc_core_lint_top.sv

# Step 1b: Build RV32 smoke-test firmware.
mcu-fw:
	mkdir -p $(MCU_FW_BUILD)
	$(MAKE) -C $(MCU_FW_DIR) RV32_GCC=$(RV32_GCC) BUILDDIR=$(MCU_FW_BUILD) all

# Step 2: Build GVSoC with the real core compiled in.
gvsoc-core: verilate-core mcu-fw
	$(MAKE) -C ../.. TARGETS=baseline_target MODULES=$(CURDIR) \
		BUILDDIR=$(CORE_BUILDDIR)/build INSTALLDIR=$(CORE_BUILDDIR)/install build

# Step 3: Run with the real core and firmware.
# Two --model-dir flags needed: baseline's own models + global GVSoC models
# (the ElfLoader / utils/loader lives in the global install).
run-core: gvsoc-core
	$(CORE_BUILDDIR)/install/bin/gvrun --target-dir=$(CURDIR) \
		--target=baseline_target --work-dir=$(CORE_BUILDDIR)/work \
		--model-dir=$(CORE_BUILDDIR)/install/models \
		--model-dir=$(GVSOC_GLOBAL_MODELS) \
		--mcu-binary=$(MCU_FW_ELF) run

.PHONY: clean gvsoc run run-host-fw host-fw \
        verilate-dummy gvsoc-mcu run-mcu \
        verilate-core mcu-fw gvsoc-core run-core
