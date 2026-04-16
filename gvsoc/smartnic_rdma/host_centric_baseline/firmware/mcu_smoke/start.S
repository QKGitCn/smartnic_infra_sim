/*
 * start.S — MCU smoke-test firmware entry point
 *
 * Minimal RV32I bare-metal startup:
 *   1. Set stack pointer to the top of RAM (boot_addr + 0x1000).
 *   2. Zero .bss
 *   3. Call main()
 *   4. On return: spin in infinite loop.
 *
 * Loaded by GVSoC ElfLoader to boot_addr (default 0x80000000).
 * The DPI bridge sets boot_addr_i and releases fetch_enable_i so the core
 * begins fetching from boot_addr.
 */

    .section .text.start, "ax"
    .global _start
    .type   _start, @function

_start:
    /* Set stack pointer to top of the 4-KiB stack region */
    la      sp, _stack_top

    /* Zero .bss */
    la      t0, _bss_start
    la      t1, _bss_end
.Lbss_loop:
    bge     t0, t1, .Lbss_done
    sw      zero, 0(t0)
    addi    t0, t0, 4
    j       .Lbss_loop
.Lbss_done:

    call    main

    /* Spin if main returns (should not happen in smoke test) */
.Lspin:
    j       .Lspin

    .size _start, . - _start
