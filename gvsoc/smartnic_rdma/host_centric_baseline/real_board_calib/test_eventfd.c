#define _GNU_SOURCE
#include <errno.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/eventfd.h>
#include <time.h>
#include <unistd.h>

struct trace_row
{
    int iter;
    uint64_t t_app_begin;
    uint64_t t_syscall_enter;
    uint64_t t_driver_begin;
    uint64_t t_wqe_ready;
    uint64_t t_doorbell_write;
    uint64_t t_completion_visible;
    uint64_t t_driver_cqe_seen;
    uint64_t t_kernel_return;
    uint64_t t_userspace_done;
};

struct shared_ctx
{
    int iterations;
    int submit_efd;
    int complete_efd;

    uint64_t prepare_ns;
    uint64_t driver_prepare_ns;
    uint64_t submit_ns;
    uint64_t device_ns;
    uint64_t complete_ns;

    struct trace_row *rows;
};

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

static void *device_worker(void *arg)
{
    struct shared_ctx *ctx = (struct shared_ctx *)arg;

    for (int i = 0; i < ctx->iterations; i++)
    {
        uint64_t token = 0;
        ssize_t ret = read(ctx->submit_efd, &token, sizeof(token));
        if (ret != (ssize_t)sizeof(token))
        {
            perror("read submit_efd");
            return (void *)1;
        }

        ctx->rows[i].t_driver_begin = now_ns();
        busy_wait_ns(ctx->driver_prepare_ns);

        ctx->rows[i].t_wqe_ready = now_ns();
        busy_wait_ns(ctx->submit_ns);

        busy_wait_ns(ctx->device_ns);
        ctx->rows[i].t_completion_visible = now_ns();

        token = 1;
        ret = write(ctx->complete_efd, &token, sizeof(token));
        if (ret != (ssize_t)sizeof(token))
        {
            perror("write complete_efd");
            return (void *)1;
        }
    }

    return NULL;
}

int main(int argc, char **argv)
{
    int iterations = 1000;
    const char *output_path = "/tmp/local_ctrl_trace_eventfd.csv";

    if (argc >= 2)
    {
        iterations = atoi(argv[1]);
    }

    if (argc >= 3)
    {
        output_path = argv[2];
    }

    struct shared_ctx ctx;
    memset(&ctx, 0, sizeof(ctx));
    ctx.iterations = iterations;
    ctx.prepare_ns = 2000;
    ctx.driver_prepare_ns = 4000;
    ctx.submit_ns = 1000;
    ctx.device_ns = 8000;
    ctx.complete_ns = 3000;

    ctx.rows = calloc((size_t)iterations, sizeof(struct trace_row));
    if (ctx.rows == NULL)
    {
        perror("calloc");
        return 1;
    }

    ctx.submit_efd = eventfd(0, 0);
    ctx.complete_efd = eventfd(0, 0);
    if (ctx.submit_efd < 0 || ctx.complete_efd < 0)
    {
        perror("eventfd");
        free(ctx.rows);
        return 1;
    }

    pthread_t worker;
    if (pthread_create(&worker, NULL, device_worker, &ctx) != 0)
    {
        perror("pthread_create");
        close(ctx.submit_efd);
        close(ctx.complete_efd);
        free(ctx.rows);
        return 1;
    }

    printf("[local_ctrl_eventfd] iterations=%d output=%s\n", iterations, output_path);

    for (int i = 0; i < iterations; i++)
    {
        uint64_t token = 1;
        ctx.rows[i].iter = i;
        ctx.rows[i].t_app_begin = now_ns();

        busy_wait_ns(ctx.prepare_ns);

        ctx.rows[i].t_syscall_enter = now_ns();
        ctx.rows[i].t_doorbell_write = now_ns();
        ssize_t ret = write(ctx.submit_efd, &token, sizeof(token));
        if (ret != (ssize_t)sizeof(token))
        {
            perror("write submit_efd");
            return 1;
        }

        token = 0;
        ret = read(ctx.complete_efd, &token, sizeof(token));
        if (ret != (ssize_t)sizeof(token))
        {
            perror("read complete_efd");
            return 1;
        }

        ctx.rows[i].t_driver_cqe_seen = now_ns();
        busy_wait_ns(ctx.complete_ns);

        ctx.rows[i].t_kernel_return = now_ns();
        busy_wait_ns(ctx.complete_ns);

        ctx.rows[i].t_userspace_done = now_ns();
    }

    void *worker_status = NULL;
    if (pthread_join(worker, &worker_status) != 0)
    {
        perror("pthread_join");
        return 1;
    }
    if (worker_status != NULL)
    {
        fprintf(stderr, "[local_ctrl_eventfd] worker failed\n");
        return 1;
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

    for (int i = 0; i < iterations; i++)
    {
        fprintf(out,
            "%d,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu\n",
            ctx.rows[i].iter,
            (unsigned long long)ctx.rows[i].t_app_begin,
            (unsigned long long)ctx.rows[i].t_syscall_enter,
            (unsigned long long)ctx.rows[i].t_driver_begin,
            (unsigned long long)ctx.rows[i].t_wqe_ready,
            (unsigned long long)ctx.rows[i].t_doorbell_write,
            (unsigned long long)ctx.rows[i].t_completion_visible,
            (unsigned long long)ctx.rows[i].t_driver_cqe_seen,
            (unsigned long long)ctx.rows[i].t_kernel_return,
            (unsigned long long)ctx.rows[i].t_userspace_done);
    }

    fclose(out);
    close(ctx.submit_efd);
    close(ctx.complete_efd);
    free(ctx.rows);

    printf("[local_ctrl_eventfd] done\n");
    return 0;
}
