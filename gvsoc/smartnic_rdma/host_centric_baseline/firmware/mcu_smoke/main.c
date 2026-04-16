/*
 * main.c — MCU smoke-test firmware
 *
 * Performs a single 32-bit write to a well-known address (boot_addr + 0x200)
 * with the canary value 0xDEADC0DE, then spins forever.
 *
 * The DPI bridge (dpi_mcu_wrapper.cpp) monitors total_cycles.
 * To tell the bridge we are done we also write 0x1 to boot_addr+0x204
 * (the "done flag").  The bridge observes the data channel and calls quit(0)
 * after detecting the done-flag write.
 *
 * Memory map (relative to boot_addr = 0x80000000):
 *   +0x000  text/rodata (this code)
 *   +0x200  canary write (0xDEADC0DE)
 *   +0x204  done flag write (0x00000001)
 *   +0xC00  stack (top = boot_addr + 0x1000)
 */

/* These are absolute addresses set by the linker script */
extern volatile unsigned int _canary_addr;
extern volatile unsigned int _done_addr;

#define CANARY_VAL  0xDEADC0DEu
#define DONE_VAL    0x00000001u

int main(void)
{
    volatile unsigned int *canary = (volatile unsigned int *)&_canary_addr;
    volatile unsigned int *done   = (volatile unsigned int *)&_done_addr;

    *canary = CANARY_VAL;   /* data write 1: canary */
    *done   = DONE_VAL;     /* data write 2: done flag — bridge exits */

    /* Spin — the bridge will call quit(0) before this matters */
    while (1) {}

    return 0;
}
