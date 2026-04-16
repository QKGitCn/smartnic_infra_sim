/*
 * link.ld — MCU smoke-test linker script
 *
 * Maps the entire firmware into one contiguous region starting at
 * BOOT_ADDR (default 0x80000000, overridable via -DBOOT_ADDR=... or
 * --defsym BOOT_ADDR=...).
 *
 * Layout (relative to BOOT_ADDR):
 *   +0x000  .text.start  (entry point _start)
 *   +0x???  .text        (main, functions)
 *   +0x???  .rodata
 *   +0x???  .data
 *   +0x???  .bss
 *   +0x200  canary write target (_canary_addr symbol)
 *   +0x204  done flag target (_done_addr symbol)
 *   +0x1000 stack top (_stack_top)
 *
 * The canary and done symbols are placed at fixed offsets so that
 * dpi_mcu_wrapper.cpp can detect the done-flag write by address.
 */

BOOT_ADDR = DEFINED(BOOT_ADDR) ? BOOT_ADDR : 0x80000000;

MEMORY
{
    /* 4 KiB RAM at boot address */
    RAM (rwx) : ORIGIN = BOOT_ADDR, LENGTH = 0x1000
}

SECTIONS
{
    .text BOOT_ADDR :
    {
        KEEP(*(.text.start))   /* _start first */
        *(.text .text.*)
        *(.rodata .rodata.*)
    } > RAM

    .data :
    {
        *(.data .data.*)
    } > RAM

    .bss :
    {
        _bss_start = .;
        *(.bss .bss.*)
        *(COMMON)
        _bss_end = .;
    } > RAM

    /* Fixed-address symbols for the canary and done flag */
    . = BOOT_ADDR + 0x200;
    _canary_addr = .;
    . = BOOT_ADDR + 0x204;
    _done_addr = .;

    /* Stack at the end of the 4-KiB region */
    _stack_top = BOOT_ADDR + 0x1000;
}
