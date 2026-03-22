.section .text.start
.globl _start

_start:
    la sp, __stack_top
    call main

    li a0, 0x18
    li a1, 0x20026
    .option push
    .option norvc
    slli zero, zero, 0x1f
    ebreak
    srai zero, zero, 0x7
    .option pop

1:
    j 1b
