GVSOC_WORKDIR ?= $(CURDIR)/build
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
