#include <cstring>
#include <cstdio>
#include <vp/vp.hpp>
#include <vp/itf/io.hpp>
#include <vp/itf/wire.hpp>

struct EngineWqe
{
    uint32_t opcode;
    uint32_t flags;
    uint64_t src_addr;
    uint64_t dst_addr;
    uint32_t length;
    uint32_t user_id;
};

struct EngineCqe
{
    uint32_t status;
    uint32_t bytes;
    uint32_t user_id;
    uint32_t reserved;
};

class RdmaEngine : public vp::Component
{
public:
    RdmaEngine(vp::ComponentConf &config);

private:
    static vp::IoReqStatus handle_req(vp::Block *__this, vp::IoReq *req);

    void handle_mmio_write(uint64_t addr, uint32_t value);
    void perform_copy();
    void write_cqe(uint32_t status, uint32_t bytes, uint32_t user_id);

    vp::IoSlave input_itf;
    vp::IoMaster dma_itf;
    vp::WireMaster<bool> irq_itf;
    vp::Trace trace;

    uint64_t src_addr;
    uint64_t dst_addr;
    uint64_t sq_addr;
    uint64_t cq_addr;
    uint32_t copy_size;
    uint32_t status_idle;
    uint32_t status_busy;
    uint32_t status_done;
    uint32_t status;
    uint32_t control = 0;
};

RdmaEngine::RdmaEngine(vp::ComponentConf &config) : vp::Component(config)
{
    this->input_itf.set_req_meth(&RdmaEngine::handle_req);
    this->new_slave_port("input", &this->input_itf);
    this->new_master_port("dma", &this->dma_itf);
    this->new_master_port("irq", &this->irq_itf);

    this->traces.new_trace("trace", &this->trace);

    this->src_addr = this->get_js_config()->get_child_int("src_addr");
    this->dst_addr = this->get_js_config()->get_child_int("dst_addr");
    this->sq_addr = this->get_js_config()->get_child_int("sq_addr");
    this->cq_addr = this->get_js_config()->get_child_int("cq_addr");
    this->copy_size = this->get_js_config()->get_child_int("copy_size");
    this->status_idle = this->get_js_config()->get_child_int("status_idle");
    this->status_busy = this->get_js_config()->get_child_int("status_busy");
    this->status_done = this->get_js_config()->get_child_int("status_done");
    this->status = this->status_idle;
}

void RdmaEngine::write_cqe(uint32_t status, uint32_t bytes, uint32_t user_id)
{
    EngineCqe cqe = {
        .status = status,
        .bytes = bytes,
        .user_id = user_id,
        .reserved = 0,
    };

    vp::IoReq req;
    req.init();
    req.set_addr(this->cq_addr);
    req.set_size(sizeof(cqe));
    req.set_is_write(true);
    req.set_data((uint8_t *)&cqe);
    vp::IoReqStatus req_status = this->dma_itf.req(&req);
    std::fprintf(stdout,
        "[rdma_engine] write_cqe: cq=0x%lx status=%u bytes=%u user_id=%u req_status=%d\n",
        this->cq_addr, status, bytes, user_id, (int)req_status);
    std::fflush(stdout);
}

void RdmaEngine::perform_copy()
{
    this->status = this->status_busy;

    EngineWqe wqe;
    memset(&wqe, 0, sizeof(wqe));

    vp::IoReq wqe_req;
    wqe_req.init();
    wqe_req.set_addr(this->sq_addr);
    wqe_req.set_size(sizeof(wqe));
    wqe_req.set_is_write(false);
    wqe_req.set_data((uint8_t *)&wqe);
    vp::IoReqStatus wqe_status = this->dma_itf.req(&wqe_req);
    std::fprintf(stdout,
        "[rdma_engine] fetch_wqe: sq=0x%lx req_status=%d opcode=%u src=0x%lx dst=0x%lx len=%u user_id=%u\n",
        this->sq_addr, (int)wqe_status, wqe.opcode, wqe.src_addr, wqe.dst_addr, wqe.length, wqe.user_id);
    std::fflush(stdout);

    if (wqe.opcode != 1)
    {
        this->trace.msg(vp::TraceLevel::DEBUG, "Unsupported WQE opcode=%u\n", wqe.opcode);
        this->write_cqe(1, 0, wqe.user_id);
        this->status = this->status_done;
        this->irq_itf.sync(true);
        this->irq_itf.sync(false);
        return;
    }

    uint8_t src_buf[256];
    memset(src_buf, 0, sizeof(src_buf));

    uint32_t length = wqe.length;
    if (length > sizeof(src_buf))
    {
        length = sizeof(src_buf);
    }

    vp::IoReq rd_req;
    rd_req.init();
    rd_req.set_addr(wqe.src_addr);
    rd_req.set_size(length);
    rd_req.set_is_write(false);
    rd_req.set_data(src_buf);
    vp::IoReqStatus rd_status = this->dma_itf.req(&rd_req);

    vp::IoReq wr_req;
    wr_req.init();
    wr_req.set_addr(wqe.dst_addr);
    wr_req.set_size(length);
    wr_req.set_is_write(true);
    wr_req.set_data(src_buf);
    vp::IoReqStatus wr_status = this->dma_itf.req(&wr_req);

    std::fprintf(stdout,
        "[rdma_engine] perform_copy: src=0x%lx dst=0x%lx len=%u rd_status=%d wr_status=%d\n",
        wqe.src_addr, wqe.dst_addr, length, (int)rd_status, (int)wr_status);
    std::fflush(stdout);

    this->write_cqe(0, length, wqe.user_id);
    this->status = this->status_done;
    this->irq_itf.sync(true);
    this->irq_itf.sync(false);
}

void RdmaEngine::handle_mmio_write(uint64_t addr, uint32_t value)
{
    switch (addr)
    {
        case 0x0004:
            this->control = value;
            std::fprintf(stdout, "[rdma_engine] mmio CONTROL write: value=0x%x\n", value);
            std::fflush(stdout);
            break;
        case 0x0200:
            if ((this->control & 0x1) != 0)
            {
                std::fprintf(stdout, "[rdma_engine] mmio SQ_DOORBELL write: value=0x%x\n", value);
                std::fflush(stdout);
                this->trace.msg(vp::TraceLevel::DEBUG, "SQ doorbell received, launching copy\n");
                this->perform_copy();
            }
            else
            {
                std::fprintf(stdout,
                    "[rdma_engine] SQ_DOORBELL ignored because CONTROL enable bit is not set\n");
                std::fflush(stdout);
            }
            break;
        default:
            break;
    }
}

vp::IoReqStatus RdmaEngine::handle_req(vp::Block *__this, vp::IoReq *req)
{
    RdmaEngine *_this = (RdmaEngine *)__this;
    uint64_t addr = req->get_addr();

    if (req->get_size() != 4)
    {
        return vp::IO_REQ_INVALID;
    }

    if (req->get_is_write())
    {
        uint32_t value = *(uint32_t *)req->get_data();
        _this->handle_mmio_write(addr, value);
    }
    else
    {
        uint32_t value = 0;
        switch (addr)
        {
            case 0x0008:
                value = _this->status;
                break;
            default:
                value = 0;
                break;
        }
        *(uint32_t *)req->get_data() = value;
    }

    return vp::IO_REQ_OK;
}

extern "C" vp::Component *gv_new(vp::ComponentConf &config)
{
    return new RdmaEngine(config);
}
