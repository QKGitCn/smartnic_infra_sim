OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
  RAM (rwx) : ORIGIN = 0x80000000, LENGTH = 0x00100000
}

SECTIONS
{
  .text : {
    . = ALIGN(16);
    *(.text.init)
    *(.text)
    *(.text.*)
    . = ALIGN(16);
  } > RAM

  .rodata : {
    . = ALIGN(16);
    *(.rodata)
    *(.rodata.*)
    . = ALIGN(16);
  } > RAM

  .data : {
    . = ALIGN(16);
    *(.data)
    *(.data.*)
    . = ALIGN(16);
  } > RAM

  .bss (NOLOAD) : {
    . = ALIGN(16);
    *(.bss)
    *(.bss.*)
    *(COMMON)
    . = ALIGN(16);
  } > RAM

  .stack (NOLOAD) : {
    . = ALIGN(16);
    . = . + 0x1000;
    _stack_top = .;
    . = ALIGN(16);
  } > RAM
}
