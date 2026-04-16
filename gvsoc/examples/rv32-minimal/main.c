#include "semihost.h"

int main(void)
{
    __libc_semihost_write0("Hello RV32 from GVSoC!\n");
    __libc_semihost_exit(SEMIHOST_EXIT_SUCCESS);

    while (1) {
    }
}
