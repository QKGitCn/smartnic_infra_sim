#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

static uint64_t now_ns(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC_RAW, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
}

static void busy_wait_ns(uint64_t duration_ns)
{
    uint64_t start = now_ns();
    while (now_ns() - start < duration_ns)
    {
    }
}

int main(int argc, char **argv)
{
    int iterations = 1000;
    const char *output_path = "/tmp/local_ctrl_trace_c.csv";

    if (argc >= 2)
    {
        iterations = atoi(argv[1]);
    }

    if (argc >= 3)
    {
        output_path = argv[2];
    }

    FILE *out = fopen(output_path, "w");
    if (out == NULL)
    {
        perror("fopen");
        return 1;
    }

    fprintf(out,
        "iter,t_app_begin,t_syscall_enter,t_driver_begin,t_wqe_ready,"
        "t_doorbell_write,t_completion_visible,t_driver_cqe_seen,"
        "t_kernel_return,t_userspace_done\n");

    printf("[local_ctrl_test] iterations=%d output=%s\n", iterations, output_path);

    for (int i = 0; i < iterations; i++)
    {
        uint64_t t_app_begin = now_ns();
        busy_wait_ns(2000);

        uint64_t t_syscall_enter = now_ns();
        busy_wait_ns(2000);

        uint64_t t_driver_begin = now_ns();
        busy_wait_ns(4000);

        uint64_t t_wqe_ready = now_ns();
        busy_wait_ns(1000);

        uint64_t t_doorbell_write = now_ns();
        busy_wait_ns(8000);

        uint64_t t_completion_visible = now_ns();
        busy_wait_ns(3000);

        uint64_t t_driver_cqe_seen = now_ns();
        busy_wait_ns(3000);

        uint64_t t_kernel_return = now_ns();
        busy_wait_ns(3000);

        uint64_t t_userspace_done = now_ns();

        fprintf(out,
            "%d,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu\n",
            i,
            (unsigned long long)t_app_begin,
            (unsigned long long)t_syscall_enter,
            (unsigned long long)t_driver_begin,
            (unsigned long long)t_wqe_ready,
            (unsigned long long)t_doorbell_write,
            (unsigned long long)t_completion_visible,
            (unsigned long long)t_driver_cqe_seen,
            (unsigned long long)t_kernel_return,
            (unsigned long long)t_userspace_done);
    }

    fclose(out);
    printf("[local_ctrl_test] done\n");
    return 0;
}
