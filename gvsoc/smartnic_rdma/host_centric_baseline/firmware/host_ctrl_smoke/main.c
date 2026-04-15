#include <stdint.h>
#include "semihost.h"

#define HOST_CTRL_BASE      0x20010000ul

#define REG_REQ_OPCODE      0x0000
#define REG_REQ_SRC_ADDR_LO 0x0008
#define REG_REQ_SRC_ADDR_HI 0x000c
#define REG_REQ_DST_ADDR_LO 0x0010
#define REG_REQ_DST_ADDR_HI 0x0014
#define REG_REQ_LEN         0x0018
#define REG_REQ_USER_ID     0x001c
#define REG_REQ_DOORBELL    0x0020
#define REG_CPL_STATUS      0x0024
#define REG_CPL_BYTES_DONE  0x0028
#define REG_CPL_USER_ID     0x002c
#define REG_CPL_DONE        0x0030

#define TEST_OPCODE         1u
#define TEST_SRC_ADDR       0x00010000ull
#define TEST_DST_ADDR       0x00020000ull
#define TEST_LEN            128u
#define TEST_USER_ID_BASE   0x1234u
#define ITERATIONS          4u
#define MAX_POLLS           1024u

static inline void mmio_write32(uint64_t addr, uint32_t value)
{
    *(volatile uint32_t *)addr = value;
}

static inline uint32_t mmio_read32(uint64_t addr)
{
    return *(volatile uint32_t *)addr;
}

static void mmio_write64_split(uint64_t lo_addr, uint64_t value)
{
    mmio_write32(lo_addr + 0, (uint32_t)(value & 0xffffffffull));
    mmio_write32(lo_addr + 4, (uint32_t)(value >> 32));
}

static inline uint64_t read_cycle(void)
{
    uint64_t value;
    asm volatile ("rdcycle %0" : "=r"(value));
    return value;
}

static char *append_str(char *dst, const char *src)
{
    while (*src != 0)
    {
        *dst++ = *src++;
    }

    return dst;
}

static char *append_u64_dec(char *dst, uint64_t value)
{
    char scratch[24];
    int index = 0;

    if (value == 0)
    {
        *dst++ = '0';
        return dst;
    }

    while (value != 0)
    {
        scratch[index++] = (char)('0' + (value % 10));
        value /= 10;
    }

    while (index > 0)
    {
        *dst++ = scratch[--index];
    }

    return dst;
}

static void print_iteration_result(uint32_t iter, uint64_t cycles)
{
    char line[128];
    char *ptr = line;

    ptr = append_str(ptr, "[rv64_fw] iter ");
    ptr = append_u64_dec(ptr, iter);
    ptr = append_str(ptr, " cycles=");
    ptr = append_u64_dec(ptr, cycles);
    ptr = append_str(ptr, "\n");
    *ptr = 0;

    semihost_write0(line);
}

static void print_summary(uint64_t min_cycles, uint64_t max_cycles, uint64_t total_cycles)
{
    char line[192];
    char *ptr = line;

    ptr = append_str(ptr, "[rv64_fw] summary iterations=");
    ptr = append_u64_dec(ptr, ITERATIONS);
    ptr = append_str(ptr, " avg_cycles=");
    ptr = append_u64_dec(ptr, total_cycles / ITERATIONS);
    ptr = append_str(ptr, " min_cycles=");
    ptr = append_u64_dec(ptr, min_cycles);
    ptr = append_str(ptr, " max_cycles=");
    ptr = append_u64_dec(ptr, max_cycles);
    ptr = append_str(ptr, "\n");
    *ptr = 0;

    semihost_write0(line);
}

int main(void)
{
    mmio_write32(HOST_CTRL_BASE + REG_REQ_OPCODE, TEST_OPCODE);
    mmio_write64_split(HOST_CTRL_BASE + REG_REQ_SRC_ADDR_LO, TEST_SRC_ADDR);
    mmio_write64_split(HOST_CTRL_BASE + REG_REQ_DST_ADDR_LO, TEST_DST_ADDR);
    mmio_write32(HOST_CTRL_BASE + REG_REQ_LEN, TEST_LEN);
    semihost_write0("[rv64_fw] host_control_path latency loop start\n");

    uint64_t total_cycles = 0;
    uint64_t min_cycles = (uint64_t)-1;
    uint64_t max_cycles = 0;

    for (uint32_t iter = 0; iter < ITERATIONS; iter++)
    {
        uint32_t user_id = TEST_USER_ID_BASE + iter;
        mmio_write32(HOST_CTRL_BASE + REG_REQ_USER_ID, user_id);

        uint64_t start_cycles = read_cycle();
        mmio_write32(HOST_CTRL_BASE + REG_REQ_DOORBELL, 1);

        uint32_t completed = 0;
        for (uint32_t poll = 0; poll < MAX_POLLS; poll++)
        {
            if (mmio_read32(HOST_CTRL_BASE + REG_CPL_DONE) != 0)
            {
                uint32_t status = mmio_read32(HOST_CTRL_BASE + REG_CPL_STATUS);
                uint32_t bytes = mmio_read32(HOST_CTRL_BASE + REG_CPL_BYTES_DONE);
                uint32_t cpl_user_id = mmio_read32(HOST_CTRL_BASE + REG_CPL_USER_ID);
                uint64_t end_cycles = read_cycle();
                uint64_t delta_cycles = end_cycles - start_cycles;

                mmio_write32(HOST_CTRL_BASE + REG_CPL_DONE, 0);

                if (status != 0 || bytes != TEST_LEN || cpl_user_id != user_id)
                {
                    semihost_write0("[rv64_fw] FAIL: bad completion contents\n");
                    semihost_exit(1);
                }

                if (delta_cycles < min_cycles)
                {
                    min_cycles = delta_cycles;
                }

                if (delta_cycles > max_cycles)
                {
                    max_cycles = delta_cycles;
                }

                total_cycles += delta_cycles;
                print_iteration_result(iter + 1, delta_cycles);
                completed = 1;
                break;
            }
        }

        if (completed == 0)
        {
            semihost_write0("[rv64_fw] FAIL: completion timeout\n");
            semihost_exit(1);
        }
    }

    print_summary(min_cycles, max_cycles, total_cycles);
    semihost_write0("[rv64_fw] PASS\n");
    semihost_exit(0);
    return 0;
}
