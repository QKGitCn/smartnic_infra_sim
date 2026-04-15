#include <vp/vp.hpp>
#include <vp/itf/io.hpp>
#include <vp/itf/wire.hpp>
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>

struct CtrlWqe
{
    uint32_t opcode;
    uint32_t flags;
    uint64_t src_addr;
    uint64_t dst_addr;
    uint32_t length;
    uint32_t user_id;
};

struct CtrlCqe
{
    uint32_t status;
    uint32_t bytes;
    uint32_t user_id;
    uint32_t reserved;
};

enum CtrlPhase
{
    CTRL_PHASE_IDLE,
    CTRL_PHASE_USERSPACE_REQ,
    CTRL_PHASE_KERNEL_REQ,
    CTRL_PHASE_DRIVER_PREPARE,
    CTRL_PHASE_PCIE_SUBMIT,
    CTRL_PHASE_POLL,
    CTRL_PHASE_PCIE_COMPLETE,
    CTRL_PHASE_DRIVER_COMPLETE,
    CTRL_PHASE_KERNEL_COMPLETE,
    CTRL_PHASE_USERSPACE_COMPLETE,
};

class HostControlPath : public vp::Component
{
public:
    HostControlPath(vp::ComponentConf &config);

private:
    static vp::IoReqStatus handle_req(vp::Block *__this, vp::IoReq *req);
    static void fsm_handler(vp::Block *__this, vp::ClockEvent *event);
    static void irq_sync(vp::Block *__this, bool value);

    void write32(uint64_t addr, uint32_t value);
    uint32_t read32(uint64_t addr);
    void write_buffer(uint64_t addr, uint8_t *buffer, size_t size);
    void read_buffer(uint64_t addr, uint8_t *buffer, size_t size);
    bool verify_buffers(uint8_t *src, uint8_t *dst, uint32_t size);
    void launch_request();
    void schedule_phase(CtrlPhase phase, uint32_t delay_cycles);
    void run_userspace_request_phase();
    void run_kernel_request_phase();
    void run_driver_prepare_phase();
    void run_pcie_submit_phase();
    void run_poll_phase();
    void run_pcie_complete_phase();
    void run_driver_complete_phase();
    void run_kernel_complete_phase();
    void run_userspace_complete_phase();
    void publish_completion(uint32_t status, uint32_t bytes_done, uint32_t user_id);
    void fail_request(const char *phase, const char *reason);
    uint32_t get_mmio_reg(uint64_t addr);
    void set_mmio_reg(uint64_t addr, uint32_t value);

    vp::IoSlave input_itf;
    vp::IoMaster output_itf;
    vp::WireSlave<bool> irq_itf;
    vp::Trace trace;
    vp::ClockEvent *fsm_event;

    uint64_t rdma_base;
    uint64_t sq_addr;
    uint64_t cq_addr;
    uint64_t default_src_addr;
    uint64_t default_dst_addr;
    uint32_t default_copy_size;
    uint32_t max_completion_polls;
    uint32_t status_done;
    uint32_t userspace_req_cycles;
    uint32_t kernel_req_cycles;
    uint32_t driver_prepare_cycles;
    uint32_t pcie_submit_cycles;
    uint32_t poll_interval_cycles;
    uint32_t pcie_completion_cycles;
    uint32_t driver_completion_cycles;
    uint32_t kernel_completion_cycles;
    uint32_t userspace_completion_cycles;

    CtrlPhase phase = CTRL_PHASE_IDLE;
    uint32_t poll_count = 0;
    bool request_active = false;

    uint32_t req_opcode = 1;
    uint64_t req_src_addr = 0;
    uint64_t req_dst_addr = 0;
    uint32_t req_len = 0;
    uint32_t req_user_id = 0;

    uint32_t cpl_status = 0;
    uint32_t cpl_bytes_done = 0;
    uint32_t cpl_user_id = 0;
    uint32_t cpl_done = 0;

    CtrlWqe current_wqe = {};
    CtrlWqe wqe_readback = {};
    CtrlCqe current_cqe = {};
    uint32_t current_size = 0;
    bool current_buffers_ok = false;
    bool current_cqe_ok = false;
    uint8_t src_buf[256];
    uint8_t dst_buf[256];
};

enum HostCtrlRegs : uint64_t
{
    REG_REQ_OPCODE = 0x0000,
    REG_REQ_SRC_ADDR_LO = 0x0008,
    REG_REQ_SRC_ADDR_HI = 0x000c,
    REG_REQ_DST_ADDR_LO = 0x0010,
    REG_REQ_DST_ADDR_HI = 0x0014,
    REG_REQ_LEN = 0x0018,
    REG_REQ_USER_ID = 0x001c,
    REG_REQ_DOORBELL = 0x0020,
    REG_CPL_STATUS = 0x0024,
    REG_CPL_BYTES_DONE = 0x0028,
    REG_CPL_USER_ID = 0x002c,
    REG_CPL_DONE = 0x0030,
};

HostControlPath::HostControlPath(vp::ComponentConf &config) : vp::Component(config)
{
    this->input_itf.set_req_meth(&HostControlPath::handle_req);
    this->new_slave_port("input", &this->input_itf);

    this->output_itf.set_resp_meth(NULL);
    this->new_master_port("output", &this->output_itf);

    this->irq_itf.set_sync_meth(&HostControlPath::irq_sync);
    this->new_slave_port("irq", &this->irq_itf);

    this->traces.new_trace("trace", &this->trace);
    this->fsm_event = this->event_new(this, &HostControlPath::fsm_handler);

    this->rdma_base = this->get_js_config()->get_child_int("rdma_base");
    this->sq_addr = this->get_js_config()->get_child_int("sq_addr");
    this->cq_addr = this->get_js_config()->get_child_int("cq_addr");
    this->default_src_addr = this->get_js_config()->get_child_int("src_addr");
    this->default_dst_addr = this->get_js_config()->get_child_int("dst_addr");
    this->default_copy_size = this->get_js_config()->get_child_int("copy_size");
    this->max_completion_polls = this->get_js_config()->get_child_int("max_completion_polls");
    this->status_done = this->get_js_config()->get_child_int("status_done");
    this->userspace_req_cycles = this->get_js_config()->get_child_int("userspace_req_cycles");
    this->kernel_req_cycles = this->get_js_config()->get_child_int("kernel_req_cycles");
    this->driver_prepare_cycles = this->get_js_config()->get_child_int("driver_prepare_cycles");
    this->pcie_submit_cycles = this->get_js_config()->get_child_int("pcie_submit_cycles");
    this->poll_interval_cycles = this->get_js_config()->get_child_int("poll_interval_cycles");
    this->pcie_completion_cycles = this->get_js_config()->get_child_int("pcie_completion_cycles");
    this->driver_completion_cycles = this->get_js_config()->get_child_int("driver_completion_cycles");
    this->kernel_completion_cycles = this->get_js_config()->get_child_int("kernel_completion_cycles");
    this->userspace_completion_cycles = this->get_js_config()->get_child_int("userspace_completion_cycles");

    this->req_src_addr = this->default_src_addr;
    this->req_dst_addr = this->default_dst_addr;
    this->req_len = this->default_copy_size;
}

void HostControlPath::write32(uint64_t addr, uint32_t value)
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
        std::fprintf(stdout,
            "[host_ctrl] write32 failed: addr=0x%lx value=0x%x status=%d\n",
            addr, value, (int)status);
        std::fflush(stdout);
    }
}

uint32_t HostControlPath::read32(uint64_t addr)
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
        std::fprintf(stdout, "[host_ctrl] read32 failed: addr=0x%lx status=%d\n",
            addr, (int)status);
        std::fflush(stdout);
    }
    return value;
}

void HostControlPath::write_buffer(uint64_t addr, uint8_t *buffer, size_t size)
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
        std::fprintf(stdout, "[host_ctrl] write_buffer failed: addr=0x%lx size=%zu status=%d\n",
            addr, size, (int)status);
        std::fflush(stdout);
    }
}

void HostControlPath::read_buffer(uint64_t addr, uint8_t *buffer, size_t size)
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
        std::fprintf(stdout, "[host_ctrl] read_buffer failed: addr=0x%lx size=%zu status=%d\n",
            addr, size, (int)status);
        std::fflush(stdout);
    }
}

bool HostControlPath::verify_buffers(uint8_t *src, uint8_t *dst, uint32_t size)
{
    for (uint32_t i = 0; i < size; i++)
    {
        if (src[i] != dst[i])
        {
            return false;
        }
    }
    return true;
}

void HostControlPath::publish_completion(uint32_t status, uint32_t bytes_done, uint32_t user_id)
{
    this->cpl_status = status;
    this->cpl_bytes_done = bytes_done;
    this->cpl_user_id = user_id;
    this->cpl_done = 1;
    this->request_active = false;
    this->phase = CTRL_PHASE_IDLE;
}

void HostControlPath::fail_request(const char *phase_name, const char *reason)
{
    std::fprintf(stdout,
        "[host_ctrl] FAILURE: user_id=%u phase=%s reason=%s cycle=%lu\n",
        this->req_user_id, phase_name, reason, this->clock.get_cycles());
    std::fflush(stdout);
    this->publish_completion(1, 0, this->req_user_id);
}

void HostControlPath::launch_request()
{
    if (this->request_active)
    {
        std::fprintf(stdout,
            "[host_ctrl] request doorbell ignored because another request is active\n");
        std::fflush(stdout);
        return;
    }

    this->request_active = true;
    this->cpl_status = 0;
    this->cpl_bytes_done = 0;
    this->cpl_user_id = 0;
    this->cpl_done = 0;
    this->poll_count = 0;
    this->current_size = 0;
    this->current_buffers_ok = false;
    this->current_cqe_ok = false;
    this->schedule_phase(CTRL_PHASE_USERSPACE_REQ, this->userspace_req_cycles);
}

void HostControlPath::schedule_phase(CtrlPhase next_phase, uint32_t delay_cycles)
{
    this->phase = next_phase;
    this->event_enqueue(this->fsm_event, std::max<uint32_t>(1, delay_cycles));
}

void HostControlPath::run_userspace_request_phase()
{
    std::fprintf(stdout,
        "[host_ctrl] userspace: opcode=%u src=0x%lx dst=0x%lx len=%u user_id=%u\n",
        this->req_opcode, this->req_src_addr, this->req_dst_addr, this->req_len, this->req_user_id);
    std::fflush(stdout);

    this->schedule_phase(CTRL_PHASE_KERNEL_REQ, this->kernel_req_cycles);
}

void HostControlPath::run_kernel_request_phase()
{
    std::fprintf(stdout,
        "[host_ctrl] kernel: dispatch request user_id=%u\n",
        this->req_user_id);
    std::fflush(stdout);

    this->schedule_phase(CTRL_PHASE_DRIVER_PREPARE, this->driver_prepare_cycles);
}

void HostControlPath::run_driver_prepare_phase()
{
    uint32_t size = std::min<uint32_t>(this->req_len, sizeof(this->src_buf));

    memset(this->src_buf, 0, sizeof(this->src_buf));
    memset(this->dst_buf, 0, sizeof(this->dst_buf));
    memset(&this->current_wqe, 0, sizeof(this->current_wqe));
    memset(&this->wqe_readback, 0, sizeof(this->wqe_readback));
    memset(&this->current_cqe, 0, sizeof(this->current_cqe));

    for (uint32_t i = 0; i < size; i++)
    {
        this->src_buf[i] = (uint8_t)(i & 0xff);
    }

    this->current_wqe = {
        .opcode = this->req_opcode,
        .flags = 0,
        .src_addr = this->req_src_addr,
        .dst_addr = this->req_dst_addr,
        .length = size,
        .user_id = this->req_user_id,
    };
    this->current_size = size;

    std::fprintf(stdout,
        "[host_ctrl] driver: build WQE opcode=%u src=0x%lx dst=0x%lx len=%u user_id=%u\n",
        this->current_wqe.opcode, this->current_wqe.src_addr, this->current_wqe.dst_addr,
        this->current_wqe.length, this->current_wqe.user_id);
    std::fflush(stdout);

    this->write_buffer(this->req_src_addr, this->src_buf, size);
    this->write_buffer(this->req_dst_addr, this->dst_buf, size);
    this->write_buffer(this->sq_addr, (uint8_t *)&this->current_wqe, sizeof(this->current_wqe));
    this->read_buffer(this->sq_addr, (uint8_t *)&this->wqe_readback, sizeof(this->wqe_readback));

    std::fprintf(stdout,
        "[host_ctrl] wqe readback: opcode=%u src=0x%lx dst=0x%lx len=%u user_id=%u\n",
        this->wqe_readback.opcode, this->wqe_readback.src_addr, this->wqe_readback.dst_addr,
        this->wqe_readback.length, this->wqe_readback.user_id);
    std::fflush(stdout);

    this->schedule_phase(CTRL_PHASE_PCIE_SUBMIT, this->pcie_submit_cycles);
}

void HostControlPath::run_pcie_submit_phase()
{
    std::fprintf(stdout,
        "[host_ctrl] pcie: issue CONTROL and SQ doorbell user_id=%u\n",
        this->req_user_id);
    std::fflush(stdout);

    this->write32(this->rdma_base + 0x0004, 1);
    this->write32(this->rdma_base + 0x0200, 1);
    this->schedule_phase(CTRL_PHASE_POLL, this->poll_interval_cycles);
}

void HostControlPath::run_poll_phase()
{
    uint32_t status = this->read32(this->rdma_base + 0x0008);
    if (status != this->status_done)
    {
        this->poll_count++;
        if (this->poll_count >= this->max_completion_polls)
        {
            this->fail_request("wait_completion", "timeout waiting for RDMA status_done");
            return;
        }

        this->event_enqueue(this->fsm_event, std::max<uint32_t>(1, this->poll_interval_cycles));
        return;
    }

    this->schedule_phase(CTRL_PHASE_PCIE_COMPLETE, this->pcie_completion_cycles);
}

void HostControlPath::run_pcie_complete_phase()
{
    std::fprintf(stdout,
        "[host_ctrl] pcie: completion visible for user_id=%u\n",
        this->req_user_id);
    std::fflush(stdout);

    this->read_buffer(this->cq_addr, (uint8_t *)&this->current_cqe, sizeof(this->current_cqe));

    this->read_buffer(this->req_dst_addr, this->dst_buf, this->current_size);

    this->current_buffers_ok = this->verify_buffers(this->src_buf, this->dst_buf, this->current_size);
    this->current_cqe_ok = (this->current_cqe.status == 0) &&
        (this->current_cqe.bytes == this->current_size) &&
        (this->current_cqe.user_id == this->req_user_id);

    this->schedule_phase(CTRL_PHASE_DRIVER_COMPLETE, this->driver_completion_cycles);
}

void HostControlPath::run_driver_complete_phase()
{
    std::fprintf(stdout,
        "[host_ctrl] driver: completion user_id=%u buffers_ok=%d cqe_ok=%d status=0x%x bytes=%u\n",
        this->req_user_id, this->current_buffers_ok ? 1 : 0, this->current_cqe_ok ? 1 : 0,
        this->current_cqe.status, this->current_cqe.bytes);
    std::fflush(stdout);

    if (!this->current_buffers_ok)
    {
        this->fail_request("check_dst_buffer", "destination buffer does not match source buffer");
        return;
    }

    if (!this->current_cqe_ok)
    {
        this->fail_request("check_cqe", "CQE contents are not valid");
        return;
    }

    this->schedule_phase(CTRL_PHASE_KERNEL_COMPLETE, this->kernel_completion_cycles);
}

void HostControlPath::run_kernel_complete_phase()
{
    std::fprintf(stdout,
        "[host_ctrl] kernel: return completion user_id=%u status=0 bytes=%u\n",
        this->req_user_id, this->current_size);
    std::fflush(stdout);

    this->schedule_phase(CTRL_PHASE_USERSPACE_COMPLETE, this->userspace_completion_cycles);
}

void HostControlPath::run_userspace_complete_phase()
{
    std::fprintf(stdout,
        "[host_ctrl] userspace: completion delivered user_id=%u bytes=%u\n",
        this->req_user_id, this->current_size);
    std::fflush(stdout);

    this->publish_completion(0, this->current_size, this->req_user_id);
}

uint32_t HostControlPath::get_mmio_reg(uint64_t addr)
{
    switch (addr)
    {
        case REG_REQ_OPCODE: return this->req_opcode;
        case REG_REQ_SRC_ADDR_LO: return (uint32_t)(this->req_src_addr & 0xffffffffull);
        case REG_REQ_SRC_ADDR_HI: return (uint32_t)(this->req_src_addr >> 32);
        case REG_REQ_DST_ADDR_LO: return (uint32_t)(this->req_dst_addr & 0xffffffffull);
        case REG_REQ_DST_ADDR_HI: return (uint32_t)(this->req_dst_addr >> 32);
        case REG_REQ_LEN: return this->req_len;
        case REG_REQ_USER_ID: return this->req_user_id;
        case REG_CPL_STATUS: return this->cpl_status;
        case REG_CPL_BYTES_DONE: return this->cpl_bytes_done;
        case REG_CPL_USER_ID: return this->cpl_user_id;
        case REG_CPL_DONE: return this->cpl_done;
        default: return 0;
    }
}

void HostControlPath::set_mmio_reg(uint64_t addr, uint32_t value)
{
    switch (addr)
    {
        case REG_REQ_OPCODE:
            this->req_opcode = value;
            break;
        case REG_REQ_SRC_ADDR_LO:
            this->req_src_addr = (this->req_src_addr & 0xffffffff00000000ull) | value;
            break;
        case REG_REQ_SRC_ADDR_HI:
            this->req_src_addr = (this->req_src_addr & 0x00000000ffffffffull) |
                ((uint64_t)value << 32);
            break;
        case REG_REQ_DST_ADDR_LO:
            this->req_dst_addr = (this->req_dst_addr & 0xffffffff00000000ull) | value;
            break;
        case REG_REQ_DST_ADDR_HI:
            this->req_dst_addr = (this->req_dst_addr & 0x00000000ffffffffull) |
                ((uint64_t)value << 32);
            break;
        case REG_REQ_LEN:
            this->req_len = value;
            break;
        case REG_REQ_USER_ID:
            this->req_user_id = value;
            break;
        case REG_REQ_DOORBELL:
            if ((value & 0x1) != 0)
            {
                this->launch_request();
            }
            break;
        case REG_CPL_DONE:
            if (value == 0)
            {
                this->cpl_done = 0;
            }
            break;
        default:
            break;
    }
}

vp::IoReqStatus HostControlPath::handle_req(vp::Block *__this, vp::IoReq *req)
{
    HostControlPath *_this = (HostControlPath *)__this;
    uint64_t addr = req->get_addr();

    if (req->get_size() != 4)
    {
        return vp::IO_REQ_INVALID;
    }

    if (req->get_is_write())
    {
        uint32_t value = *(uint32_t *)req->get_data();
        _this->set_mmio_reg(addr, value);
    }
    else
    {
        *(uint32_t *)req->get_data() = _this->get_mmio_reg(addr);
    }

    return vp::IO_REQ_OK;
}

void HostControlPath::fsm_handler(vp::Block *__this, vp::ClockEvent *event)
{
    HostControlPath *_this = (HostControlPath *)__this;

    switch (_this->phase)
    {
        case CTRL_PHASE_USERSPACE_REQ:
            _this->run_userspace_request_phase();
            break;
        case CTRL_PHASE_KERNEL_REQ:
            _this->run_kernel_request_phase();
            break;
        case CTRL_PHASE_DRIVER_PREPARE:
            _this->run_driver_prepare_phase();
            break;
        case CTRL_PHASE_PCIE_SUBMIT:
            _this->run_pcie_submit_phase();
            break;
        case CTRL_PHASE_POLL:
            _this->run_poll_phase();
            break;
        case CTRL_PHASE_PCIE_COMPLETE:
            _this->run_pcie_complete_phase();
            break;
        case CTRL_PHASE_DRIVER_COMPLETE:
            _this->run_driver_complete_phase();
            break;
        case CTRL_PHASE_KERNEL_COMPLETE:
            _this->run_kernel_complete_phase();
            break;
        case CTRL_PHASE_USERSPACE_COMPLETE:
            _this->run_userspace_complete_phase();
            break;
        case CTRL_PHASE_IDLE:
        default:
            break;
    }
}

void HostControlPath::irq_sync(vp::Block *__this, bool value)
{
    HostControlPath *_this = (HostControlPath *)__this;
    _this->trace.msg(vp::TraceLevel::DEBUG, "RDMA IRQ=%d observed by host_control_path\n", value ? 1 : 0);
}

extern "C" vp::Component *gv_new(vp::ComponentConf &config)
{
    return new HostControlPath(config);
}
