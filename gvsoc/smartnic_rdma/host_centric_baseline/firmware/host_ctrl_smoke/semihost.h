#pragma once

#include <stdint.h>

enum semihosting_operation_numbers {
    SEMIHOSTING_SYS_EXIT = 0x18,
    SEMIHOSTING_SYS_WRITE0 = 0x04,
};

#define SEMIHOST_EXIT_SUCCESS 0x20026
#define SEMIHOST_EXIT_ERROR   0x20023

static inline long semihost_call(long op, long arg)
{
    register long a0 asm("a0") = op;
    register long a1 asm("a1") = arg;

    asm volatile (
        ".option norvc\n\t"
        "slli zero, zero, 0x1f\n\t"
        "ebreak\n\t"
        "srai zero, zero, 0x7\n\t"
        ".option rvc\n\t"
        : "+r"(a0)
        : "r"(a1)
        : "memory"
    );

    return a0;
}

static inline void semihost_write0(const char *str)
{
    semihost_call(SEMIHOSTING_SYS_WRITE0, (long)str);
}

static inline void semihost_exit(int status)
{
    semihost_call(SEMIHOSTING_SYS_EXIT,
        status == 0 ? SEMIHOST_EXIT_SUCCESS : SEMIHOST_EXIT_ERROR);

    while (1) { }
}
