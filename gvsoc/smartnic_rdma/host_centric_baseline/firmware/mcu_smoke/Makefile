# firmware/mcu_smoke/Makefile
# Build minimal RV32I smoke-test ELF for the cv32e40x DPI bridge.

RV32_PREFIX  ?= riscv64-unknown-elf
RV32_GCC     ?= $(RV32_PREFIX)-gcc
RV32_OBJDUMP ?= $(RV32_PREFIX)-objdump
RV32_OBJCOPY ?= $(RV32_PREFIX)-objcopy

BUILDDIR ?= $(CURDIR)/build
TARGET   := $(BUILDDIR)/mcu_smoke.elf

BOOT_ADDR ?= 0x80000000

CFLAGS := -march=rv32i_zicsr -mabi=ilp32 -mcmodel=medany \
          -Os -ffreestanding -nostdlib -nostartfiles \
          -Wall -Wextra \
          -DBOOT_ADDR=$(BOOT_ADDR)

LDFLAGS := -T link.ld \
           -Wl,-Map=$(BUILDDIR)/mcu_smoke.map \
           -Wl,--defsym,BOOT_ADDR=$(BOOT_ADDR)

SRCS := start.S main.c

all: $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(TARGET): $(SRCS) link.ld | $(BUILDDIR)
	$(RV32_GCC) $(CFLAGS) $(LDFLAGS) $(SRCS) -o $@
	$(RV32_OBJDUMP) -d $@ > $(BUILDDIR)/mcu_smoke.dis

clean:
	rm -rf $(BUILDDIR)

.PHONY: all clean
