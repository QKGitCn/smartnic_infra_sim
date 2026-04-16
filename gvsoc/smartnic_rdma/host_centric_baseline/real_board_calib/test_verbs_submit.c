#define _GNU_SOURCE

#include <arpa/inet.h>
#include <errno.h>
#include <infiniband/verbs.h>
#include <inttypes.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <time.h>
#include <unistd.h>

/*
 * This workload is intended for RoCE / RoCEv2-oriented calibration.
 * In practice this means:
 *   - prefer GID-based addressing
 *   - treat gid_index as a first-class runtime parameter
 *   - use Soft-RoCE (rxe) during bring-up if needed
 */

struct trace_row
{
    int iter;
    uint64_t t_app_begin;
    uint64_t t_post_send_enter;
    uint64_t t_post_send_return;
    uint64_t t_first_poll;
    uint64_t t_local_cqe_seen;
    uint64_t t_userspace_done;
};

struct config
{
    int is_server;
    const char *server_ip;
    const char *dev_name;
    int ib_port;
    int gid_index;
    int tcp_port;
    int iters;
    int size;
    const char *out_path;
};

struct wire_dest
{
    uint32_t qpn;
    uint32_t psn;
    uint32_t rkey;
    uint32_t lid;
    uint64_t vaddr;
    uint8_t gid[16];
};

struct endpoint
{
    struct ibv_context *context;
    struct ibv_pd *pd;
    struct ibv_cq *cq;
    struct ibv_qp *qp;
    struct ibv_mr *mr;
    void *buffer;
    size_t buffer_size;
    uint16_t lid;
    union ibv_gid gid;
    uint32_t psn;
};

static uint64_t now_ns(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC_RAW, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
}

static void usage(const char *prog)
{
    fprintf(stderr,
        "Usage:\n"
        "  %s --server --dev <dev> [--ib-port 1] [--gid-index 0] [--tcp-port 18515] [--iters N] [--size B] [--out file]\n"
        "  %s --client <server_ip> --dev <dev> [--ib-port 1] [--gid-index 0] [--tcp-port 18515] [--iters N] [--size B] [--out file]\n",
        prog, prog);
}

static int parse_args(int argc, char **argv, struct config *cfg)
{
    memset(cfg, 0, sizeof(*cfg));
    cfg->ib_port = 1;
    cfg->gid_index = 0;
    cfg->tcp_port = 18515;
    cfg->iters = 1000;
    cfg->size = 128;
    cfg->out_path = "/tmp/verbs_submit_trace.csv";

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--server") == 0)
        {
            cfg->is_server = 1;
        }
        else if (strcmp(argv[i], "--client") == 0 && i + 1 < argc)
        {
            cfg->is_server = 0;
            cfg->server_ip = argv[++i];
        }
        else if (strcmp(argv[i], "--dev") == 0 && i + 1 < argc)
        {
            cfg->dev_name = argv[++i];
        }
        else if (strcmp(argv[i], "--ib-port") == 0 && i + 1 < argc)
        {
            cfg->ib_port = atoi(argv[++i]);
        }
        else if (strcmp(argv[i], "--gid-index") == 0 && i + 1 < argc)
        {
            cfg->gid_index = atoi(argv[++i]);
        }
        else if (strcmp(argv[i], "--tcp-port") == 0 && i + 1 < argc)
        {
            cfg->tcp_port = atoi(argv[++i]);
        }
        else if (strcmp(argv[i], "--iters") == 0 && i + 1 < argc)
        {
            cfg->iters = atoi(argv[++i]);
        }
        else if (strcmp(argv[i], "--size") == 0 && i + 1 < argc)
        {
            cfg->size = atoi(argv[++i]);
        }
        else if (strcmp(argv[i], "--out") == 0 && i + 1 < argc)
        {
            cfg->out_path = argv[++i];
        }
        else
        {
            usage(argv[0]);
            return -1;
        }
    }

    if (cfg->dev_name == NULL || cfg->iters <= 0 || cfg->size <= 0)
    {
        usage(argv[0]);
        return -1;
    }

    if (!cfg->is_server && cfg->server_ip == NULL)
    {
        usage(argv[0]);
        return -1;
    }

    return 0;
}

static int write_csv(const char *path, struct trace_row *rows, int iters)
{
    FILE *out = fopen(path, "w");
    if (out == NULL)
    {
        perror("fopen");
        return -1;
    }

    fprintf(out,
        "iter,t_app_begin,t_post_send_enter,t_post_send_return,"
        "t_first_poll,t_local_cqe_seen,t_userspace_done\n");

    for (int i = 0; i < iters; i++)
    {
        fprintf(out, "%d,%" PRIu64 ",%" PRIu64 ",%" PRIu64 ",%" PRIu64 ",%" PRIu64 ",%" PRIu64 "\n",
            rows[i].iter,
            rows[i].t_app_begin,
            rows[i].t_post_send_enter,
            rows[i].t_post_send_return,
            rows[i].t_first_poll,
            rows[i].t_local_cqe_seen,
            rows[i].t_userspace_done);
    }

    fclose(out);
    return 0;
}

static int write_full(int fd, const void *buf, size_t len)
{
    const uint8_t *ptr = (const uint8_t *)buf;
    size_t done = 0;
    while (done < len)
    {
        ssize_t ret = write(fd, ptr + done, len - done);
        if (ret < 0)
        {
            if (errno == EINTR)
            {
                continue;
            }
            return -1;
        }
        done += (size_t)ret;
    }
    return 0;
}

static int read_full(int fd, void *buf, size_t len)
{
    uint8_t *ptr = (uint8_t *)buf;
    size_t done = 0;
    while (done < len)
    {
        ssize_t ret = read(fd, ptr + done, len - done);
        if (ret == 0)
        {
            return -1;
        }
        if (ret < 0)
        {
            if (errno == EINTR)
            {
                continue;
            }
            return -1;
        }
        done += (size_t)ret;
    }
    return 0;
}

static int tcp_server_listen(int port)
{
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0)
    {
        perror("socket");
        return -1;
    }

    int one = 1;
    if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one)) < 0)
    {
        perror("setsockopt");
        close(fd);
        return -1;
    }

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons((uint16_t)port);

    if (bind(fd, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        perror("bind");
        close(fd);
        return -1;
    }

    if (listen(fd, 1) < 0)
    {
        perror("listen");
        close(fd);
        return -1;
    }

    return fd;
}

static int tcp_accept(int listen_fd)
{
    int fd = accept(listen_fd, NULL, NULL);
    if (fd < 0)
    {
        perror("accept");
        return -1;
    }
    return fd;
}

static int tcp_connect(const char *ip, int port)
{
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0)
    {
        perror("socket");
        return -1;
    }

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons((uint16_t)port);
    if (inet_pton(AF_INET, ip, &addr.sin_addr) != 1)
    {
        fprintf(stderr, "inet_pton failed for %s\n", ip);
        close(fd);
        return -1;
    }

    if (connect(fd, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        perror("connect");
        close(fd);
        return -1;
    }
    return fd;
}

static uint32_t pick_psn(void)
{
    uint32_t seed = (uint32_t)(now_ns() & 0x00ffffffu);
    if (seed == 0)
    {
        seed = 0x123456u;
    }
    return seed;
}

static int query_port_info(struct ibv_context *context, int ib_port, int gid_index, uint16_t *lid, union ibv_gid *gid)
{
    struct ibv_port_attr port_attr;
    memset(&port_attr, 0, sizeof(port_attr));

    if (ibv_query_port(context, (uint8_t)ib_port, &port_attr) != 0)
    {
        perror("ibv_query_port");
        return -1;
    }

    *lid = port_attr.lid;
    memset(gid, 0, sizeof(*gid));

    if (gid_index >= 0)
    {
        if (ibv_query_gid(context, (uint8_t)ib_port, gid_index, gid) != 0)
        {
            perror("ibv_query_gid");
            return -1;
        }
    }

    return 0;
}

static int modify_qp_init(struct ibv_qp *qp, int ib_port)
{
    struct ibv_qp_attr attr;
    memset(&attr, 0, sizeof(attr));
    attr.qp_state = IBV_QPS_INIT;
    attr.port_num = (uint8_t)ib_port;
    attr.pkey_index = 0;
    attr.qp_access_flags = IBV_ACCESS_REMOTE_WRITE | IBV_ACCESS_REMOTE_READ | IBV_ACCESS_LOCAL_WRITE;

    int flags = IBV_QP_STATE | IBV_QP_PKEY_INDEX | IBV_QP_PORT | IBV_QP_ACCESS_FLAGS;
    return ibv_modify_qp(qp, &attr, flags);
}

static int modify_qp_rtr(struct ibv_qp *qp, int ib_port, int gid_index, const struct wire_dest *remote)
{
    struct ibv_qp_attr attr;
    memset(&attr, 0, sizeof(attr));

    attr.qp_state = IBV_QPS_RTR;
    attr.path_mtu = IBV_MTU_1024;
    attr.dest_qp_num = remote->qpn;
    attr.rq_psn = remote->psn;
    attr.max_dest_rd_atomic = 1;
    attr.min_rnr_timer = 12;
    attr.ah_attr.is_global = gid_index >= 0 ? 1 : 0;
    attr.ah_attr.dlid = (uint16_t)remote->lid;
    attr.ah_attr.sl = 0;
    attr.ah_attr.src_path_bits = 0;
    attr.ah_attr.port_num = (uint8_t)ib_port;

    if (gid_index >= 0)
    {
        memcpy(&attr.ah_attr.grh.dgid, remote->gid, 16);
        attr.ah_attr.grh.sgid_index = (uint8_t)gid_index;
        attr.ah_attr.grh.hop_limit = 1;
        attr.ah_attr.grh.traffic_class = 0;
        attr.ah_attr.grh.flow_label = 0;
    }

    int flags = IBV_QP_STATE |
        IBV_QP_AV |
        IBV_QP_PATH_MTU |
        IBV_QP_DEST_QPN |
        IBV_QP_RQ_PSN |
        IBV_QP_MAX_DEST_RD_ATOMIC |
        IBV_QP_MIN_RNR_TIMER;

    return ibv_modify_qp(qp, &attr, flags);
}

static int modify_qp_rts(struct ibv_qp *qp, uint32_t psn)
{
    struct ibv_qp_attr attr;
    memset(&attr, 0, sizeof(attr));

    attr.qp_state = IBV_QPS_RTS;
    attr.timeout = 14;
    attr.retry_cnt = 7;
    attr.rnr_retry = 7;
    attr.sq_psn = psn;
    attr.max_rd_atomic = 1;

    int flags = IBV_QP_STATE |
        IBV_QP_TIMEOUT |
        IBV_QP_RETRY_CNT |
        IBV_QP_RNR_RETRY |
        IBV_QP_SQ_PSN |
        IBV_QP_MAX_QP_RD_ATOMIC;

    return ibv_modify_qp(qp, &attr, flags);
}

static int exchange_dest(int sock, const struct wire_dest *local, struct wire_dest *remote)
{
    if (write_full(sock, local, sizeof(*local)) != 0)
    {
        perror("write_full");
        return -1;
    }

    if (read_full(sock, remote, sizeof(*remote)) != 0)
    {
        perror("read_full");
        return -1;
    }

    return 0;
}

static int create_endpoint(struct ibv_context *context, const struct config *cfg, struct endpoint *ep)
{
    memset(ep, 0, sizeof(*ep));
    ep->context = context;
    ep->buffer_size = (size_t)cfg->size;
    ep->psn = pick_psn();

    ep->pd = ibv_alloc_pd(context);
    if (ep->pd == NULL)
    {
        perror("ibv_alloc_pd");
        return -1;
    }

    if (posix_memalign(&ep->buffer, 4096, ep->buffer_size) != 0)
    {
        perror("posix_memalign");
        return -1;
    }
    memset(ep->buffer, 0xab, ep->buffer_size);

    ep->mr = ibv_reg_mr(ep->pd, ep->buffer, ep->buffer_size,
        IBV_ACCESS_LOCAL_WRITE | IBV_ACCESS_REMOTE_WRITE | IBV_ACCESS_REMOTE_READ);
    if (ep->mr == NULL)
    {
        perror("ibv_reg_mr");
        return -1;
    }

    ep->cq = ibv_create_cq(context, cfg->iters + 8, NULL, NULL, 0);
    if (ep->cq == NULL)
    {
        perror("ibv_create_cq");
        return -1;
    }

    struct ibv_qp_init_attr qp_init;
    memset(&qp_init, 0, sizeof(qp_init));
    qp_init.send_cq = ep->cq;
    qp_init.recv_cq = ep->cq;
    qp_init.cap.max_send_wr = cfg->iters + 8;
    qp_init.cap.max_recv_wr = 1;
    qp_init.cap.max_send_sge = 1;
    qp_init.cap.max_recv_sge = 1;
    qp_init.qp_type = IBV_QPT_RC;
    qp_init.sq_sig_all = 0;

    ep->qp = ibv_create_qp(ep->pd, &qp_init);
    if (ep->qp == NULL)
    {
        perror("ibv_create_qp");
        return -1;
    }

    if (query_port_info(context, cfg->ib_port, cfg->gid_index, &ep->lid, &ep->gid) != 0)
    {
        return -1;
    }

    if (modify_qp_init(ep->qp, cfg->ib_port) != 0)
    {
        perror("ibv_modify_qp INIT");
        return -1;
    }

    return 0;
}

static void destroy_endpoint(struct endpoint *ep)
{
    if (ep->qp != NULL)
    {
        ibv_destroy_qp(ep->qp);
    }
    if (ep->cq != NULL)
    {
        ibv_destroy_cq(ep->cq);
    }
    if (ep->mr != NULL)
    {
        ibv_dereg_mr(ep->mr);
    }
    if (ep->buffer != NULL)
    {
        free(ep->buffer);
    }
    if (ep->pd != NULL)
    {
        ibv_dealloc_pd(ep->pd);
    }
}

static void fill_wire_dest(const struct endpoint *ep, struct wire_dest *dest)
{
    memset(dest, 0, sizeof(*dest));
    dest->qpn = ep->qp->qp_num;
    dest->psn = ep->psn;
    dest->rkey = ep->mr->rkey;
    dest->lid = ep->lid;
    dest->vaddr = (uintptr_t)ep->buffer;
    memcpy(dest->gid, &ep->gid, 16);
}

static int run_client_iterations(const struct config *cfg, struct endpoint *ep, const struct wire_dest *remote, struct trace_row *rows)
{
    for (int i = 0; i < cfg->iters; i++)
    {
        memset(ep->buffer, (unsigned char)(i & 0xff), ep->buffer_size);

        struct ibv_sge sge;
        memset(&sge, 0, sizeof(sge));
        sge.addr = (uintptr_t)ep->buffer;
        sge.length = (uint32_t)ep->buffer_size;
        sge.lkey = ep->mr->lkey;

        struct ibv_send_wr wr;
        memset(&wr, 0, sizeof(wr));
        wr.wr_id = (uint64_t)i + 1;
        wr.sg_list = &sge;
        wr.num_sge = 1;
        wr.opcode = IBV_WR_RDMA_WRITE;
        wr.send_flags = IBV_SEND_SIGNALED;
        wr.wr.rdma.remote_addr = remote->vaddr;
        wr.wr.rdma.rkey = remote->rkey;

        struct ibv_send_wr *bad_wr = NULL;
        rows[i].iter = i;
        rows[i].t_app_begin = now_ns();
        rows[i].t_post_send_enter = now_ns();
        if (ibv_post_send(ep->qp, &wr, &bad_wr) != 0)
        {
            perror("ibv_post_send");
            return -1;
        }
        rows[i].t_post_send_return = now_ns();

        struct ibv_wc wc;
        int poll_rc = 0;
        rows[i].t_first_poll = now_ns();
        do
        {
            poll_rc = ibv_poll_cq(ep->cq, 1, &wc);
        } while (poll_rc == 0);

        if (poll_rc < 0)
        {
            fprintf(stderr, "ibv_poll_cq failed\n");
            return -1;
        }

        rows[i].t_local_cqe_seen = now_ns();

        if (wc.status != IBV_WC_SUCCESS)
        {
            fprintf(stderr, "CQE failure: status=%d wr_id=%" PRIu64 "\n", wc.status, wc.wr_id);
            return -1;
        }

        rows[i].t_userspace_done = now_ns();

        if (i < 3)
        {
            printf("[verbs_submit] iter %d posted\n", i + 1);
            printf("[verbs_submit] iter %d local_cqe_seen\n", i + 1);
        }
    }

    return 0;
}

int main(int argc, char **argv)
{
    struct config cfg;
    if (parse_args(argc, argv, &cfg) != 0)
    {
        return 1;
    }

    printf("[verbs_submit] role=%s dev=%s ib_port=%d gid_index=%d size=%d iters=%d\n",
        cfg.is_server ? "server" : "client",
        cfg.dev_name,
        cfg.ib_port,
        cfg.gid_index,
        cfg.size,
        cfg.iters);

    int num_devices = 0;
    struct ibv_device **list = ibv_get_device_list(&num_devices);
    if (list == NULL)
    {
        perror("ibv_get_device_list");
        return 1;
    }

    struct ibv_device *dev = NULL;
    for (int i = 0; i < num_devices; i++)
    {
        if (strcmp(ibv_get_device_name(list[i]), cfg.dev_name) == 0)
        {
            dev = list[i];
            break;
        }
    }
    if (dev == NULL && num_devices == 1)
    {
        dev = list[0];
    }
    if (dev == NULL)
    {
        fprintf(stderr, "[verbs_submit] device not found: %s\n", cfg.dev_name);
        ibv_free_device_list(list);
        return 1;
    }

    struct ibv_context *context = ibv_open_device(dev);
    ibv_free_device_list(list);
    if (context == NULL)
    {
        perror("ibv_open_device");
        return 1;
    }

    struct endpoint ep;
    if (create_endpoint(context, &cfg, &ep) != 0)
    {
        destroy_endpoint(&ep);
        ibv_close_device(context);
        return 1;
    }

    int sock = -1;
    int listen_fd = -1;
    if (cfg.is_server)
    {
        listen_fd = tcp_server_listen(cfg.tcp_port);
        if (listen_fd < 0)
        {
            destroy_endpoint(&ep);
            ibv_close_device(context);
            return 1;
        }
        printf("[verbs_submit] waiting for TCP peer on port %d\n", cfg.tcp_port);
        sock = tcp_accept(listen_fd);
        close(listen_fd);
        if (sock < 0)
        {
            destroy_endpoint(&ep);
            ibv_close_device(context);
            return 1;
        }
    }
    else
    {
        sock = tcp_connect(cfg.server_ip, cfg.tcp_port);
        if (sock < 0)
        {
            destroy_endpoint(&ep);
            ibv_close_device(context);
            return 1;
        }
    }

    struct wire_dest local_dest;
    struct wire_dest remote_dest;
    fill_wire_dest(&ep, &local_dest);
    if (exchange_dest(sock, &local_dest, &remote_dest) != 0)
    {
        close(sock);
        destroy_endpoint(&ep);
        ibv_close_device(context);
        return 1;
    }

    if (modify_qp_rtr(ep.qp, cfg.ib_port, cfg.gid_index, &remote_dest) != 0)
    {
        perror("ibv_modify_qp RTR");
        close(sock);
        destroy_endpoint(&ep);
        ibv_close_device(context);
        return 1;
    }

    if (modify_qp_rts(ep.qp, ep.psn) != 0)
    {
        perror("ibv_modify_qp RTS");
        close(sock);
        destroy_endpoint(&ep);
        ibv_close_device(context);
        return 1;
    }

    printf("[verbs_submit] qp ready\n");

    int rc = 0;
    if (cfg.is_server)
    {
        uint8_t done = 0;
        if (read_full(sock, &done, sizeof(done)) != 0)
        {
            perror("read done");
            rc = 1;
        }

        struct trace_row *rows = calloc(1, sizeof(*rows));
        if (rows != NULL)
        {
            write_csv(cfg.out_path, rows, 0);
            free(rows);
        }
    }
    else
    {
        struct trace_row *rows = calloc((size_t)cfg.iters, sizeof(*rows));
        if (rows == NULL)
        {
            perror("calloc");
            rc = 1;
        }
        else
        {
            if (run_client_iterations(&cfg, &ep, &remote_dest, rows) != 0)
            {
                rc = 1;
            }
            else if (write_csv(cfg.out_path, rows, cfg.iters) != 0)
            {
                rc = 1;
            }
            free(rows);
        }

        uint8_t done = 1;
        if (write_full(sock, &done, sizeof(done)) != 0)
        {
            perror("write done");
            rc = 1;
        }
    }

    close(sock);
    destroy_endpoint(&ep);
    ibv_close_device(context);

    if (rc == 0)
    {
        printf("[verbs_submit] done csv=%s\n", cfg.out_path);
    }
    return rc;
}
