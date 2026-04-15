#include <vp/vp.hpp>
#include <vp/itf/io.hpp>
#include <vp/itf/wire.hpp>
#include <algorithm>
#include <cstring>
#include <cstdint>
#include <cstdio>

struct HostWqe
{
    uint32_t opcode;
    uint32_t flags;
    uint64_t src_addr;
    uint64_t dst_addr;
    uint32_t length;
    uint32_t user_id;
};

struct HostCqe
{
    uint32_t status;
    uint32_t bytes;
    uint32_t user_id;
    uint32_t reserved;
};

struct IterationStats
{
    uint32_t iter_id;
    uint64_t host_issue;
    uint64_t doorbell;
    uint64_t cqe_visible;
    uint64_t host_completion;
    uint64_t host_to_doorbell;
    uint64_t doorbell_to_cqe;
    uint64_t cqe_to_host_completion;
    uint64_t total_cycles;
    uint32_t buffers_ok;
    uint32_t cqe_ok;
};

enum HostPhase
{
    HOST_PHASE_IDLE,
    HOST_PHASE_PREPARE,
    HOST_PHASE_RING,
    HOST_PHASE_POLL,
    HOST_PHASE_FINISH,
};

class HostStub : public vp::Component
{
public:
    HostStub(vp::ComponentConf &config);
    void start() override;
    void reset(bool active) override;

private:
    static void fsm_handler(vp::Block *__this, vp::ClockEvent *event);
    static void irq_sync(vp::Block *__this, bool value);

    void issue_bootstrap_sequence();
    void write32(uint64_t addr, uint32_t value);
    uint32_t read32(uint64_t addr);
    void write_buffer(uint64_t addr, uint8_t *buffer, size_t size);
    void read_buffer(uint64_t addr, uint8_t *buffer, size_t size);
    bool verify_buffers(uint8_t *src, uint8_t *dst, uint32_t size);
    void run_prepare_phase();
    void run_ring_phase();
    void run_poll_phase();
    void run_finish_phase();
    void fail_and_quit(const char *phase, uint32_t user_id, const char *reason);

    vp::IoMaster output_itf;
    vp::WireSlave<bool> irq_itf;
    vp::Trace trace;
    vp::ClockEvent *fsm_event;

    uint64_t rdma_base;
    uint64_t sq_addr;
    uint64_t cq_addr;
    uint64_t src_addr;
    uint64_t dst_addr;
    uint32_t copy_size;
    uint32_t iterations;
    uint32_t max_completion_polls;
    uint32_t status_done;
    uint64_t t_host_issue = 0;
    uint64_t t_doorbell = 0;
    uint64_t t_cqe_visible = 0;
    uint64_t t_host_completion = 0;
    bool started = false;
    HostPhase phase = HOST_PHASE_IDLE;
    uint32_t current_iter = 0;
    uint32_t current_poll = 0;
    uint64_t sum_cycles = 0;
    uint64_t sum_host_to_doorbell = 0;
    uint64_t sum_doorbell_to_cqe = 0;
    uint64_t sum_cqe_to_host_completion = 0;
    uint64_t min_cycles = (uint64_t)-1;
    uint64_t max_cycles = 0;
    uint32_t success_count = 0;
    uint8_t src_buf[256];
    uint8_t dst_buf[256];
    HostWqe current_wqe;
    HostWqe wqe_readback;
    HostCqe current_cqe;
    IterationStats current_stats = {};
};

HostStub::HostStub(vp::ComponentConf &config) : vp::Component(config)
{
    this->output_itf.set_resp_meth(NULL);
    this->new_master_port("output", &this->output_itf);

    this->irq_itf.set_sync_meth(&HostStub::irq_sync);
    this->new_slave_port("irq", &this->irq_itf);

    this->traces.new_trace("trace", &this->trace);

    this->rdma_base = this->get_js_config()->get_child_int("rdma_base");
    this->sq_addr = this->get_js_config()->get_child_int("sq_addr");
    this->cq_addr = this->get_js_config()->get_child_int("cq_addr");
    this->src_addr = this->get_js_config()->get_child_int("src_addr");
    this->dst_addr = this->get_js_config()->get_child_int("dst_addr");
    this->copy_size = this->get_js_config()->get_child_int("copy_size");
    this->iterations = this->get_js_config()->get_child_int("iterations");
    this->max_completion_polls = this->get_js_config()->get_child_int("max_completion_polls");
    this->status_done = this->get_js_config()->get_child_int("status_done");
    this->fsm_event = this->event_new(this, &HostStub::fsm_handler);
}

void HostStub::fail_and_quit(const char *phase, uint32_t user_id, const char *reason)
{
    std::fprintf(stdout,
        "[host_stub] FAILURE: iter=%u phase=%s reason=%s cycle=%lu\n",
        user_id, phase, reason, this->clock.get_cycles());
    std::fflush(stdout);
    this->time.get_engine()->quit(1);
}

void HostStub::write32(uint64_t addr, uint32_t value)
{
    vp::IoReq req;
    req.init();
    req.set_addr(addr);
    req.set_size(4);
    req.set_is_write(true);
    req.set_data((uint8_t *)&value);
    vp::IoReqStatus status = this->output_itf.req(&req);
    if (status != vp::IO_REQ_OK)
    {
        std::fprintf(stdout, "[host_stub] write32 failed: addr=0x%lx value=0x%x status=%d\n",
            addr, value, (int)status);
        std::fflush(stdout);
    }
}

uint32_t HostStub::read32(uint64_t addr)
{
    uint32_t value = 0;
    vp::IoReq req;
    req.init();
    req.set_addr(addr);
    req.set_size(4);
    req.set_is_write(false);
    req.set_data((uint8_t *)&value);
    vp::IoReqStatus status = this->output_itf.req(&req);
    if (status != vp::IO_REQ_OK)
    {
        std::fprintf(stdout, "[host_stub] read32 failed: addr=0x%lx status=%d\n",
            addr, (int)status);
        std::fflush(stdout);
    }
    return value;
}

void HostStub::write_buffer(uint64_t addr, uint8_t *buffer, size_t size)
{
    vp::IoReq req;
    req.init();
    req.set_addr(addr);
    req.set_size(size);
    req.set_is_write(true);
    req.set_data(buffer);
    vp::IoReqStatus status = this->output_itf.req(&req);
    if (status != vp::IO_REQ_OK)
    {
        std::fprintf(stdout, "[host_stub] write_buffer failed: addr=0x%lx size=%zu status=%d\n",
            addr, size, (int)status);
        std::fflush(stdout);
    }
}

void HostStub::read_buffer(uint64_t addr, uint8_t *buffer, size_t size)
{
    vp::IoReq req;
    req.init();
    req.set_addr(addr);
    req.set_size(size);
    req.set_is_write(false);
    req.set_data(buffer);
    vp::IoReqStatus status = this->output_itf.req(&req);
    if (status != vp::IO_REQ_OK)
    {
        std::fprintf(stdout, "[host_stub] read_buffer failed: addr=0x%lx size=%zu status=%d\n",
            addr, size, (int)status);
        std::fflush(stdout);
    }
}

bool HostStub::verify_buffers(uint8_t *src, uint8_t *dst, uint32_t size)
{
    for (uint32_t i = 0; i < size; i++)
    {
        if (src[i] != dst[i])
        {
            this->trace.msg(vp::TraceLevel::DEBUG,
                "Buffer mismatch at byte %u: src=0x%x dst=0x%x\n", i, src[i], dst[i]);
            return false;
        }
    }
    return true;
}

void HostStub::run_prepare_phase()
{
    this->current_iter++;

    std::fprintf(stdout, "[host_stub] iteration %u/%u: posting WQE\n", this->current_iter, this->iterations);
    std::fflush(stdout);

    memset(this->src_buf, 0, sizeof(this->src_buf));
    memset(this->dst_buf, 0, sizeof(this->dst_buf));
    memset(&this->wqe_readback, 0, sizeof(this->wqe_readback));
    memset(&this->current_cqe, 0, sizeof(this->current_cqe));
    memset(&this->current_stats, 0, sizeof(this->current_stats));

    for (uint32_t i = 0; i < this->copy_size; i++)
    {
        this->src_buf[i] = (uint8_t)(i & 0xff);
    }

    this->current_wqe = {
        .opcode = 1,
        .flags = 0,
        .src_addr = this->src_addr,
        .dst_addr = this->dst_addr,
        .length = this->copy_size,
        .user_id = this->current_iter,
    };

    this->t_host_issue = this->clock.get_cycles();
    this->write_buffer(this->src_addr, this->src_buf, this->copy_size);
    this->write_buffer(this->dst_addr, this->dst_buf, this->copy_size);
    this->write_buffer(this->sq_addr, (uint8_t *)&this->current_wqe, sizeof(this->current_wqe));
    this->read_buffer(this->sq_addr, (uint8_t *)&this->wqe_readback, sizeof(this->wqe_readback));

    std::fprintf(stdout,
        "[host_stub] wqe readback: opcode=%u src=0x%lx dst=0x%lx len=%u user_id=%u\n",
        this->wqe_readback.opcode, this->wqe_readback.src_addr, this->wqe_readback.dst_addr,
        this->wqe_readback.length, this->wqe_readback.user_id);
    std::fflush(stdout);

    this->phase = HOST_PHASE_RING;
    this->event_enqueue(this->fsm_event, 1);
}

void HostStub::run_ring_phase()
{
    this->write32(this->rdma_base + 0x0004, 1); // CONTROL: enable
    this->t_doorbell = this->clock.get_cycles();
    this->write32(this->rdma_base + 0x0200, 1); // SQ_DOORBELL

    this->current_poll = 0;
    this->phase = HOST_PHASE_POLL;
    this->event_enqueue(this->fsm_event, 1);
}

void HostStub::run_poll_phase()
{
    uint32_t status = this->read32(this->rdma_base + 0x0008);

    if (status != this->status_done)
    {
        this->current_poll++;
        if (this->current_poll >= this->max_completion_polls)
        {
            this->fail_and_quit("wait_completion", this->current_iter,
                "timeout waiting for RDMA status_done");
            return;
        }

        this->event_enqueue(this->fsm_event, 1);
        return;
    }

    std::fprintf(stdout, "[host_stub] iteration %u: status after doorbell=0x%x\n",
        this->current_iter, status);
    std::fflush(stdout);

    this->read_buffer(this->cq_addr, (uint8_t *)&this->current_cqe, sizeof(this->current_cqe));
    this->t_cqe_visible = this->clock.get_cycles();

    this->read_buffer(this->dst_addr, this->dst_buf, this->copy_size);
    this->t_host_completion = this->clock.get_cycles();

    bool buffers_ok = this->verify_buffers(this->src_buf, this->dst_buf, this->copy_size);
    bool cqe_ok = (this->current_cqe.status == 0) &&
        (this->current_cqe.bytes == this->copy_size) &&
        (this->current_cqe.user_id == this->current_iter);

    this->current_stats.iter_id = this->current_iter;
    this->current_stats.host_issue = this->t_host_issue;
    this->current_stats.doorbell = this->t_doorbell;
    this->current_stats.cqe_visible = this->t_cqe_visible;
    this->current_stats.host_completion = this->t_host_completion;
    this->current_stats.host_to_doorbell = this->t_doorbell - this->t_host_issue;
    this->current_stats.doorbell_to_cqe = this->t_cqe_visible - this->t_doorbell;
    this->current_stats.cqe_to_host_completion = this->t_host_completion - this->t_cqe_visible;
    this->current_stats.total_cycles = this->t_host_completion - this->t_host_issue;
    this->current_stats.buffers_ok = buffers_ok ? 1 : 0;
    this->current_stats.cqe_ok = cqe_ok ? 1 : 0;

    this->trace.msg(vp::Trace::LEVEL_INFO,
        "Bootstrap done: status=%u cqe_status=%u cqe_bytes=%u user_id=%u buffers_ok=%d cqe_ok=%d\n",
        this->read32(this->rdma_base + 0x0008), this->current_cqe.status,
        this->current_cqe.bytes, this->current_cqe.user_id,
        buffers_ok ? 1 : 0, cqe_ok ? 1 : 0);

    this->trace.msg(vp::Trace::LEVEL_INFO,
        "Latency markers: host_issue=%lu doorbell=%lu cqe_visible=%lu host_completion=%lu\n",
        this->t_host_issue, this->t_doorbell, this->t_cqe_visible, this->t_host_completion);

    this->trace.msg(vp::Trace::LEVEL_INFO,
        "ITER_CSV,iter=%u,host_issue=%lu,doorbell=%lu,cqe_visible=%lu,host_completion=%lu,"
        "host_to_doorbell=%lu,doorbell_to_cqe=%lu,cqe_to_host_completion=%lu,total_cycles=%lu,"
        "buffers_ok=%u,cqe_ok=%u\n",
        this->current_stats.iter_id, this->current_stats.host_issue, this->current_stats.doorbell,
        this->current_stats.cqe_visible, this->current_stats.host_completion,
        this->current_stats.host_to_doorbell, this->current_stats.doorbell_to_cqe,
        this->current_stats.cqe_to_host_completion, this->current_stats.total_cycles,
        this->current_stats.buffers_ok, this->current_stats.cqe_ok);

    std::fprintf(stdout,
        "[host_stub] iteration %u done: total_cycles=%lu buffers_ok=%u cqe_ok=%u\n",
        this->current_stats.iter_id, this->current_stats.total_cycles,
        this->current_stats.buffers_ok, this->current_stats.cqe_ok);
    std::fflush(stdout);

    if (!buffers_ok)
    {
        this->fail_and_quit("check_dst_buffer", this->current_iter,
            "destination buffer does not match source buffer");
        return;
    }

    if (!cqe_ok)
    {
        this->fail_and_quit("check_cqe", this->current_iter,
            "CQE fields do not match expected completion");
        return;
    }

    this->success_count++;
    this->min_cycles = std::min(this->min_cycles, this->current_stats.total_cycles);
    this->max_cycles = std::max(this->max_cycles, this->current_stats.total_cycles);
    this->sum_cycles += this->current_stats.total_cycles;
    this->sum_host_to_doorbell += this->current_stats.host_to_doorbell;
    this->sum_doorbell_to_cqe += this->current_stats.doorbell_to_cqe;
    this->sum_cqe_to_host_completion += this->current_stats.cqe_to_host_completion;

    if (this->current_iter < this->iterations)
    {
        this->phase = HOST_PHASE_PREPARE;
        this->event_enqueue(this->fsm_event, 1);
    }
    else
    {
        this->phase = HOST_PHASE_FINISH;
        this->event_enqueue(this->fsm_event, 1);
    }
}

void HostStub::run_finish_phase()
{
    uint64_t avg_cycles = this->iterations > 0 ? this->sum_cycles / this->iterations : 0;
    uint64_t avg_host_to_doorbell = this->iterations > 0 ? this->sum_host_to_doorbell / this->iterations : 0;
    uint64_t avg_doorbell_to_cqe = this->iterations > 0 ? this->sum_doorbell_to_cqe / this->iterations : 0;
    uint64_t avg_cqe_to_host_completion = this->iterations > 0 ? this->sum_cqe_to_host_completion / this->iterations : 0;

    this->trace.msg(vp::Trace::LEVEL_INFO,
        "rdma_write_lat summary: iterations=%u success=%u avg_cycles=%lu min_cycles=%lu max_cycles=%lu\n",
        this->iterations, this->success_count, avg_cycles, this->min_cycles, this->max_cycles);
    this->trace.msg(vp::Trace::LEVEL_INFO,
        "SUMMARY_CSV,iterations=%u,success=%u,avg_cycles=%lu,min_cycles=%lu,max_cycles=%lu,"
        "avg_host_to_doorbell=%lu,avg_doorbell_to_cqe=%lu,avg_cqe_to_host_completion=%lu\n",
        this->iterations, this->success_count, avg_cycles, this->min_cycles, this->max_cycles,
        avg_host_to_doorbell, avg_doorbell_to_cqe, avg_cqe_to_host_completion);

    std::fprintf(stdout,
        "[host_stub] summary: iterations=%u success=%u avg_cycles=%lu min_cycles=%lu max_cycles=%lu\n",
        this->iterations, this->success_count, avg_cycles, this->min_cycles, this->max_cycles);
    std::fflush(stdout);

    std::fprintf(stdout, "[host_stub] benchmark complete: terminating simulation with exit code 0\n");
    std::fflush(stdout);
    this->time.get_engine()->quit(0);
}

void HostStub::fsm_handler(vp::Block *__this, vp::ClockEvent *event)
{
    HostStub *_this = (HostStub *)__this;

    switch (_this->phase)
    {
        case HOST_PHASE_PREPARE:
            _this->run_prepare_phase();
            break;

        case HOST_PHASE_RING:
            _this->run_ring_phase();
            break;

        case HOST_PHASE_POLL:
            _this->run_poll_phase();
            break;

        case HOST_PHASE_FINISH:
            _this->run_finish_phase();
            break;

        default:
            break;
    }
}

void HostStub::start()
{
    this->trace.msg(vp::Trace::LEVEL_INFO, "Host stub start() called, waiting for reset release\n");
    std::fprintf(stdout, "[host_stub] start(): waiting for reset release before launching benchmark\n");
    std::fflush(stdout);
}

void HostStub::reset(bool active)
{
    if (active)
    {
        this->started = false;
        this->phase = HOST_PHASE_IDLE;
        this->current_iter = 0;
        this->current_poll = 0;
        this->sum_cycles = 0;
        this->sum_host_to_doorbell = 0;
        this->sum_doorbell_to_cqe = 0;
        this->sum_cqe_to_host_completion = 0;
        this->min_cycles = (uint64_t)-1;
        this->max_cycles = 0;
        this->success_count = 0;
        return;
    }

    if (!active)
    {
        this->trace.msg(vp::Trace::LEVEL_INFO, "Reset released, launching benchmark bootstrap\n");
        std::fprintf(stdout, "[host_stub] reset released: launching host-centric RDMA latency benchmark\n");
        std::fflush(stdout);
        this->issue_bootstrap_sequence();
    }
}

void HostStub::issue_bootstrap_sequence()
{
    if (this->started) return;
    this->started = true;
    this->phase = HOST_PHASE_PREPARE;
    this->trace.msg(vp::Trace::LEVEL_INFO, "Starting host-centric latency FSM\n");
    this->event_enqueue(this->fsm_event, 1);
}

void HostStub::irq_sync(vp::Block *__this, bool value)
{
    HostStub *_this = (HostStub *)__this;
    _this->trace.msg(vp::TraceLevel::DEBUG, "Received RDMA IRQ=%d\n", value ? 1 : 0);
}

extern "C" vp::Component *gv_new(vp::ComponentConf &config)
{
    return new HostStub(config);
}
