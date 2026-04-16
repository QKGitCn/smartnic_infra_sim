RISCV_GCC ?= ../../riscv/bin/riscv64-unknown-elf-gcc
RISCV_OBJDUMP ?= ../../riscv/bin/riscv64-unknown-elf-objdump

CFLAGS := -march=rv32imac -mabi=ilp32 -Os -ffreestanding -nostdlib -nostartfiles
CFLAGS += -Wall -Wextra -I../../core/docs/developer_manual/tutorials/utils
LDFLAGS := -T link.ld -Wl,-Map=hello.map

all: hello

hello: start.S main.c link.ld
	$(RISCV_GCC) $(CFLAGS) start.S main.c $(LDFLAGS) -o $@

dis:
	$(RISCV_OBJDUMP) -d hello

clean:
	rm -f hello hello.map
