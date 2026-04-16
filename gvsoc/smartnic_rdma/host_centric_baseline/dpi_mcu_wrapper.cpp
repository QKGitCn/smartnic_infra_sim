/*
 * dpi_mcu_wrapper.cpp
 *
 * GVSoC component: RTL MCU bridge.
 *
 * THREE MODES controlled by the "behavioral_enabled" JSON property and
 * compile-time defines:
 *
 *   behavioral_enabled=false (default)
 *     Scaffold mode.  Ports are registered and respond to wire sync
 *     callbacks, but no clock event is started and no IoMaster requests
 *     are issued.  Used for normal `make gvsoc` / `make run` builds.
 *
 *   behavioral_enabled=true + VERILATED_DUMMY_ENABLED
 *     Dummy core mode.  A Vcv32e40x_gvsoc_dummy_lint_top instance is
 *     driven by a GVSoC ClockEvent.  Exits after detecting DEADBEEF
 *     write (done after N instr fetches + 1 data write).
 *
 *   behavioral_enabled=true + VERILATED_CORE_ENABLED
 *     Real core mode.  A Vcv32e40x_gvsoc_core_lint_top instance executes
 *     real RV32 firmware loaded by GVSoC ElfLoader.  Exits when the
 *     firmware writes 0x1 to boot_addr+0x204 (done flag).
 *
 * OBI timing (synchronous, zero-latency GVSoC memory):
 *   Cycle N   posedge: RTL sees req=1 (combinational from sequential state)
 *             bridge: issue IoReq, set gnt=1
 *   Cycle N+1 posedge: RTL samples gnt=1 → req=0
 *             bridge: detect req=0 while GRANTED → schedule rvalid
 *   Cycle N+2 pre-posedge: bridge sets rvalid=1, rdata=fetched
 *             posedge: RTL samples rvalid=1 → new req
 *   => 3 GVSoC cycles per OBI transaction
 */

#include <vp/vp.hpp>
#include <vp/itf/io.hpp>
#include <vp/itf/wire.hpp>
#include <cinttypes>
#include <cstdio>
#include <cstdint>

#if defined(VERILATED_DUMMY_ENABLED)
#include "verilated_dummy/Vcv32e40x_gvsoc_dummy_lint_top.h"
using VRtlModel = Vcv32e40x_gvsoc_dummy_lint_top;
#define RTL_MODEL_ENABLED 1
#elif defined(VERILATED_CORE_ENABLED)
#include "verilated_core/Vcv32e40x_gvsoc_core_lint_top.h"
using VRtlModel = Vcv32e40x_gvsoc_core_lint_top;
#define RTL_MODEL_ENABLED 1
#else
#define RTL_MODEL_ENABLED 0
#endif

// =========================================================================
// OBI channel state machines (one per channel)
// =========================================================================

enum ObiState
{
    OBI_IDLE,      // no request in flight
    OBI_GRANTED,   // gnt=1 sent, waiting for RTL to sample and clear req
    OBI_RVALID,    // rvalid will be delivered at start of next clock handler
};

// =========================================================================
// Component class
// =========================================================================

class DpiMcuWrapper : public vp::Component
{
public:
    DpiMcuWrapper(vp::ComponentConf &config);
    void reset(bool active) override;

private:
    // Wire sync callbacks (called when GVSoC drives the wire)
    static void fetch_enable_sync(vp::Block *__this, bool value);
    static void entry_sync(vp::Block *__this, uint64_t value);
    static void irq_sync(vp::Block *__this, bool value, int id);

    // Clock event callback (Verilated model path only)
    static void clock_handler(vp::Block *__this, vp::ClockEvent *event);

    void update_busy(bool value);
    void update_halted(bool value);

    // ---- GVSoC ports ----
    vp::IoMaster          mem_itf;
    vp::WireSlave<bool>   fetch_enable_itf;
    vp::WireSlave<uint64_t> entry_itf;
    vp::WireSlave<bool>   msi_itf;
    vp::WireSlave<bool>   mti_itf;
    vp::WireSlave<bool>   mei_itf;
    vp::WireSlave<bool>   sei_itf;
    vp::WireMaster<bool>  busy_itf;
    vp::WireMaster<bool>  halted_itf;
    vp::Trace             trace;
    vp::ClockEvent       *clock_event;

    // ---- Configuration ----
    bool     behavioral_enabled;
    bool     trace_reset;
    bool     trace_irq;
    bool     trace_mem;
    uint64_t boot_addr;
    uint32_t max_run_cycles;

    // ---- Wire-level state (both modes) ----
    bool     fetch_enable;
    bool     busy;
    bool     halted;
    bool     irq_state[4];

#if RTL_MODEL_ENABLED
    // ---- Verilated model state ----
    VRtlModel *rtl_model;

    // Instruction OBI channel
    ObiState instr_obi;
    uint32_t instr_rdata_buf;

    // Data OBI channel
    ObiState data_obi;
    uint32_t data_rdata_buf;
    bool     data_is_write;

    // Lifecycle counters
    uint64_t total_cycles;
    bool     canary_seen;      // canary write (0xDEADC0DE / 0xDEADBEEF) observed
    bool     done_flag_seen;   // done-flag write (0x1) observed after canary
    uint32_t cycles_after_done;

    // For VERILATED_CORE path: clock starts on FETCHEN (not in reset).
    // For VERILATED_DUMMY path: clock starts in reset(active=false).
    bool     clock_started;
#endif
};

// =========================================================================
// Constructor
// =========================================================================

DpiMcuWrapper::DpiMcuWrapper(vp::ComponentConf &config)
    : vp::Component(config)
{
    // Register sync callbacks
    this->fetch_enable_itf.set_sync_meth(&DpiMcuWrapper::fetch_enable_sync);
    this->entry_itf.set_sync_meth(&DpiMcuWrapper::entry_sync);
    this->msi_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 0);
    this->mti_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 1);
    this->mei_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 2);
    this->sei_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 3);

    // Create ports
    this->new_master_port("mem",          &this->mem_itf);
    this->new_slave_port("fetch_enable",  &this->fetch_enable_itf);
    this->new_slave_port("entry",         &this->entry_itf);
    this->new_slave_port("msi",           &this->msi_itf);
    this->new_slave_port("mti",           &this->mti_itf);
    this->new_slave_port("mei",           &this->mei_itf);
    this->new_slave_port("sei",           &this->sei_itf);
    this->new_master_port("busy",         &this->busy_itf);
    this->new_master_port("halted",       &this->halted_itf);

    this->traces.new_trace("trace", &this->trace);
    this->clock_event = this->event_new(this, &DpiMcuWrapper::clock_handler);

    // Read configuration
    this->boot_addr          = (uint64_t)this->get_js_config()->get_child_int("boot_addr");
    this->trace_reset        = this->get_js_config()->get_child_bool("trace_reset");
    this->trace_irq          = this->get_js_config()->get_child_bool("trace_irq");
    this->trace_mem          = this->get_js_config()->get_child_bool("trace_mem");
    this->behavioral_enabled = this->get_js_config()->get_child_bool("behavioral_enabled");
    this->max_run_cycles     = (uint32_t)this->get_js_config()->get_child_int("max_run_cycles");

    // Initial wire state
    this->fetch_enable = false;
    this->busy         = false;
    this->halted       = true;
    for (int i = 0; i < 4; i++) this->irq_state[i] = false;

#if RTL_MODEL_ENABLED
    this->rtl_model         = nullptr;
    this->instr_obi         = OBI_IDLE;
    this->data_obi          = OBI_IDLE;
    this->total_cycles      = 0;
    this->canary_seen       = false;
    this->done_flag_seen    = false;
    this->cycles_after_done = 0;
    this->instr_rdata_buf   = 0;
    this->data_rdata_buf    = 0;
    this->data_is_write     = false;
    this->clock_started     = false;
#endif

    std::fprintf(stdout,
        "[rtl_mcu] initialized: boot_addr=0x%" PRIx64
        " behavioral_enabled=%d"
#if defined(VERILATED_CORE_ENABLED)
        " (real cv32e40x core)"
#elif defined(VERILATED_DUMMY_ENABLED)
        " (dummy Verilated core)"
#else
        " (scaffold mode only)"
#endif
        "\n",
        this->boot_addr, (int)this->behavioral_enabled);
    std::fflush(stdout);
}

// =========================================================================
// reset() — fires twice: active=true (assert), active=false (de-assert)
// =========================================================================

void DpiMcuWrapper::reset(bool active)
{
    if (this->trace_reset)
    {
        std::fprintf(stdout, "[rtl_mcu] reset=%d behavioral_enabled=%d\n",
            (int)active, (int)this->behavioral_enabled);
        std::fflush(stdout);
    }

    if (!this->behavioral_enabled)
    {
        // Scaffold mode: keep wire outputs in a consistent state.
        this->update_busy(false);
        this->update_halted(true);
        this->fetch_enable = false;
        return;
    }

#if RTL_MODEL_ENABLED
    if (active)
    {
        // Assert reset: create model if needed, hold it in reset
        if (!this->rtl_model)
        {
            this->rtl_model         = new VRtlModel();
            this->instr_obi         = OBI_IDLE;
            this->data_obi          = OBI_IDLE;
            this->total_cycles      = 0;
            this->canary_seen       = false;
            this->done_flag_seen    = false;
            this->cycles_after_done = 0;
        }
        this->rtl_model->rst_ni        = 0;
        this->rtl_model->clk_i         = 0;
        this->rtl_model->fetch_enable_i = 0;
        this->rtl_model->boot_addr_i   = (uint32_t)(this->boot_addr & 0xFFFFFFFF);
        this->rtl_model->irq_i         = 0;
        this->rtl_model->instr_gnt_i   = 0;
        this->rtl_model->instr_rvalid_i = 0;
        this->rtl_model->data_gnt_i    = 0;
        this->rtl_model->data_rvalid_i = 0;
        this->rtl_model->eval();
        this->update_busy(false);
        this->update_halted(true);
    }
    else
    {
        // De-assert reset: release RST, but do NOT start clock yet.
        // For VERILATED_CORE path: clock starts when FETCHEN wire fires
        //   (after ElfLoader finishes writing the firmware).
        // For VERILATED_DUMMY path: start clock immediately since there
        //   is no external firmware to load.
        if (!this->rtl_model) return;

        this->rtl_model->rst_ni         = 1;
#if defined(VERILATED_DUMMY_ENABLED)
        this->rtl_model->fetch_enable_i = 1;
        this->rtl_model->eval();
        std::fprintf(stdout,
            "[rtl_mcu] reset released (dummy), fetch enabled, "
            "boot_addr=0x%08x, max_run_cycles=%u\n",
            this->rtl_model->boot_addr_i, this->max_run_cycles);
        std::fflush(stdout);
        this->update_busy(true);
        this->update_halted(false);
        this->clock_started = true;
        this->event_enqueue(this->clock_event, 1);
#else
        // Real core: wait for FETCHEN from ElfLoader
        this->rtl_model->fetch_enable_i = 0;
        this->rtl_model->eval();
        std::fprintf(stdout,
            "[rtl_mcu] reset released (core), waiting for FETCHEN, "
            "boot_addr=0x%08x, max_run_cycles=%u\n",
            this->rtl_model->boot_addr_i, this->max_run_cycles);
        std::fflush(stdout);
#endif
    }
#endif
}

// =========================================================================
// clock_handler — fires every 1 GVSoC cycle when behavioral_enabled
// =========================================================================

void DpiMcuWrapper::clock_handler(vp::Block *__this, vp::ClockEvent *event)
{
#if RTL_MODEL_ENABLED
    DpiMcuWrapper *_this = (DpiMcuWrapper *)__this;
    if (!_this->rtl_model) return;

    auto *m = _this->rtl_model;
    _this->total_cycles++;

    // ---------------------------------------------------------------
    // STEP 1: Clear transient input signals from the previous cycle.
    //   rvalid is a one-cycle pulse; clear it unconditionally so the
    //   RTL never sees a stale rvalid on a new posedge.
    // ---------------------------------------------------------------
    m->instr_rvalid_i = 0;
    m->instr_rdata_i  = 0;
    m->data_rvalid_i  = 0;
    m->data_rdata_i   = 0;

    // ---------------------------------------------------------------
    // STEP 2: Pre-posedge delivery.
    //   Signals set here are stable when clk rises → RTL samples them.
    // ---------------------------------------------------------------

    // Instruction rvalid (scheduled by GRANTED→RVALID transition)
    if (_this->instr_obi == OBI_RVALID)
    {
        m->instr_rvalid_i = 1;
        m->instr_rdata_i  = _this->instr_rdata_buf;
        m->instr_gnt_i    = 0;   // gnt already served; clear before posedge
        _this->instr_obi  = OBI_IDLE;
    }

    // Data rvalid (scheduled by GRANTED→RVALID transition)
    if (_this->data_obi == OBI_RVALID)
    {
        m->data_rvalid_i = 1;
        m->data_rdata_i  = _this->data_rdata_buf;
        m->data_gnt_i    = 0;
        _this->data_obi  = OBI_IDLE;
    }

    // ---------------------------------------------------------------
    // STEP 3: Rising edge — RTL sequential blocks fire here.
    // ---------------------------------------------------------------
    m->clk_i = 1;
    m->eval();

    // ---------------------------------------------------------------
    // STEP 4: Post-posedge — observe RTL outputs, update OBI state.
    // ---------------------------------------------------------------

    // --- Instruction channel ---
    if (_this->instr_obi == OBI_IDLE && m->instr_req_o)
    {
        uint64_t addr   = (uint64_t)m->instr_addr_o;
        uint32_t rdata  = 0;
        vp::IoReq req;
        req.init();
        req.set_addr(addr);
        req.set_size(4);
        req.set_is_write(false);
        req.set_data((uint8_t *)&rdata);

        vp::IoReqStatus status = _this->mem_itf.req(&req);
        if (status != vp::IO_REQ_OK)
        {
            std::fprintf(stdout,
                "[rtl_mcu] WARNING instr fetch addr=0x%" PRIx64
                " status=%d\n", addr, (int)status);
        }

        m->instr_gnt_i          = 1;
        _this->instr_rdata_buf  = rdata;
        _this->instr_obi        = OBI_GRANTED;

        if (_this->trace_mem)
        {
            std::fprintf(stdout,
                "[rtl_mcu] instr_fetch  addr=0x%08" PRIx64
                " rdata=0x%08x (cycle %" PRIu64 ")\n",
                addr, rdata, _this->total_cycles);
            std::fflush(stdout);
        }

        m->eval();   // propagate gnt combinationally
    }
    else if (_this->instr_obi == OBI_GRANTED && !m->instr_req_o)
    {
        // RTL transitioned to FETCH_WAIT (req deasserted after gnt)
        _this->instr_obi = OBI_RVALID;
        // rvalid will be set in STEP 2 of the NEXT clock handler
    }

    // --- Data channel ---
    if (_this->data_obi == OBI_IDLE && m->data_req_o)
    {
        uint64_t addr   = (uint64_t)m->data_addr_o;
        bool     we     = (bool)m->data_we_o;
        uint32_t wdata  = m->data_wdata_o;
        uint32_t rdata  = 0;

        vp::IoReq req;
        req.init();
        req.set_addr(addr);
        req.set_size(4);
        req.set_is_write(we);
        req.set_data(we ? (uint8_t *)&wdata : (uint8_t *)&rdata);

        vp::IoReqStatus status = _this->mem_itf.req(&req);
        if (status != vp::IO_REQ_OK)
        {
            std::fprintf(stdout,
                "[rtl_mcu] WARNING data %s addr=0x%" PRIx64 " status=%d\n",
                we ? "write" : "read", addr, (int)status);
        }

        m->data_gnt_i         = 1;
        _this->data_rdata_buf = rdata;
        _this->data_is_write  = we;
        _this->data_obi       = OBI_GRANTED;

        if (_this->trace_mem)
        {
            std::fprintf(stdout,
                "[rtl_mcu] data_%-5s  addr=0x%08" PRIx64
                " data=0x%08x (cycle %" PRIu64 ")\n",
                we ? "write" : "read", addr,
                we ? wdata : rdata, _this->total_cycles);
            std::fflush(stdout);
        }

        // Detect completion markers (value-based, address-agnostic).
        //
        // Real core firmware sequence:
        //   write 0xDEADC0DE (canary) → then write 0x1 (done flag)
        //
        // Dummy core firmware sequence:
        //   write 0xDEADBEEF (single signal for done)
        //
        // NOTE: cv32e40x's prefetch unit causes auipc to compute PC as
        // (fetch_addr - 4), so runtime addresses are 4 bytes below linker
        // symbol addresses. We therefore match by DATA VALUE, not address.
        if (we && !_this->done_flag_seen)
        {
#if defined(VERILATED_CORE_ENABLED)
            if (!_this->canary_seen && wdata == 0xDEADC0DEu)
            {
                _this->canary_seen = true;
                std::fprintf(stdout,
                    "[rtl_mcu] canary 0xDEADC0DE written "
                    "addr=0x%08" PRIx64 " cycle=%" PRIu64 "\n",
                    addr, _this->total_cycles);
                std::fflush(stdout);
            }
            else if (_this->canary_seen && wdata == 0x1u)
            {
                _this->done_flag_seen    = true;
                _this->cycles_after_done = 0;
                std::fprintf(stdout,
                    "[rtl_mcu] done flag 0x1 written "
                    "addr=0x%08" PRIx64 " cycle=%" PRIu64 "\n",
                    addr, _this->total_cycles);
                std::fflush(stdout);
            }
#else
            // Dummy core: single DEADBEEF write signals completion
            if (wdata == 0xDEADBEEFu)
            {
                _this->canary_seen       = true;
                _this->done_flag_seen    = true;
                _this->cycles_after_done = 0;
                std::fprintf(stdout,
                    "[rtl_mcu] DATA smoke test complete at cycle %" PRIu64
                    "  (addr=0x%08" PRIx64 " data=0xDEADBEEF written)\n",
                    _this->total_cycles, addr);
                std::fflush(stdout);
            }
#endif
        }

        m->eval();   // propagate gnt
    }
    else if (_this->data_obi == OBI_GRANTED && !m->data_req_o)
    {
        _this->data_obi = OBI_RVALID;
    }

    // ---------------------------------------------------------------
    // STEP 5: Falling edge.
    // ---------------------------------------------------------------
    m->clk_i = 0;
    m->eval();

    // ---------------------------------------------------------------
    // STEP 6: Exit condition.
    // ---------------------------------------------------------------
    if (_this->done_flag_seen)
    {
        _this->cycles_after_done++;
        if (_this->cycles_after_done >= 5)
        {
            std::fprintf(stdout,
                "[rtl_mcu] smoke test PASSED — "
                "total cycles=%" PRIu64 "  final PC=0x%08x\n",
                _this->total_cycles, m->debug_pc_o);
            std::fflush(stdout);
            _this->update_busy(false);
            _this->update_halted(true);
            _this->time.get_engine()->quit(0);
            return;
        }
    }
    else if (_this->total_cycles >= (uint64_t)_this->max_run_cycles)
    {
        std::fprintf(stdout,
            "[rtl_mcu] WARNING: reached max_run_cycles=%u "
            "without completing smoke test\n",
            _this->max_run_cycles);
        std::fprintf(stdout,
            "[rtl_mcu] final PC=0x%08x  total cycles=%" PRIu64 "\n",
            m->debug_pc_o, _this->total_cycles);
        std::fflush(stdout);
        _this->update_busy(false);
        _this->update_halted(true);
        _this->time.get_engine()->quit(1);
        return;
    }

    // ---------------------------------------------------------------
    // STEP 7: Re-enqueue for next cycle.
    // ---------------------------------------------------------------
    _this->event_enqueue(_this->clock_event, 1);
#endif
}

// =========================================================================
// Wire sync callbacks
// =========================================================================

void DpiMcuWrapper::update_busy(bool value)
{
    if (this->busy != value)
    {
        this->busy = value;
        if (this->busy_itf.is_bound())
            this->busy_itf.sync(value);
    }
}

void DpiMcuWrapper::update_halted(bool value)
{
    if (this->halted != value)
    {
        this->halted = value;
        if (this->halted_itf.is_bound())
            this->halted_itf.sync(value);
    }
}

void DpiMcuWrapper::fetch_enable_sync(vp::Block *__this, bool value)
{
    DpiMcuWrapper *_this = (DpiMcuWrapper *)__this;
    _this->fetch_enable = value;

    if (_this->trace_reset)
    {
        std::fprintf(stdout, "[rtl_mcu] fetch_enable=%d\n", (int)value);
        std::fflush(stdout);
    }

    if (!_this->behavioral_enabled)
    {
        _this->update_busy(value);
        _this->update_halted(!value);
        return;
    }

#if RTL_MODEL_ENABLED && defined(VERILATED_CORE_ENABLED)
    // Real core: FETCHEN from ElfLoader signals firmware is in memory.
    // Start the clock now.
    if (value && _this->rtl_model && !_this->clock_started)
    {
        _this->rtl_model->fetch_enable_i = 1;
        _this->rtl_model->eval();
        std::fprintf(stdout,
            "[rtl_mcu] FETCHEN asserted — firmware loaded, "
            "starting clock (boot_addr=0x%08x)\n",
            _this->rtl_model->boot_addr_i);
        std::fflush(stdout);
        _this->update_busy(true);
        _this->update_halted(false);
        _this->clock_started = true;
        _this->event_enqueue(_this->clock_event, 1);
    }
#endif
}

void DpiMcuWrapper::entry_sync(vp::Block *__this, uint64_t value)
{
    DpiMcuWrapper *_this = (DpiMcuWrapper *)__this;
    _this->boot_addr = value;

    if (_this->trace_reset)
    {
        std::fprintf(stdout, "[rtl_mcu] boot_entry=0x%" PRIx64 "\n", value);
        std::fflush(stdout);
    }

#if RTL_MODEL_ENABLED
    if (_this->rtl_model)
        _this->rtl_model->boot_addr_i = (uint32_t)(value & 0xFFFFFFFF);
#endif
}

void DpiMcuWrapper::irq_sync(vp::Block *__this, bool value, int id)
{
    DpiMcuWrapper *_this = (DpiMcuWrapper *)__this;
    _this->irq_state[id] = value;

    if (_this->trace_irq)
    {
        static const char *names[] = {"msi", "mti", "mei", "sei"};
        std::fprintf(stdout, "[rtl_mcu] irq %s=%d\n", names[id], (int)value);
        std::fflush(stdout);
    }

#if RTL_MODEL_ENABLED
    if (_this->rtl_model)
    {
        // Map GVSoC IRQ wires to irq_i[31:0] bit positions
        // bit 3=MSI, bit 7=MTI, bit 11=MEI, bit 9=SEI (RISC-V standard)
        static const int bits[] = {3, 7, 11, 9};
        uint32_t mask = 1u << bits[id];
        if (value)
            _this->rtl_model->irq_i |= mask;
        else
            _this->rtl_model->irq_i &= ~mask;
    }
#endif
}


extern "C" vp::Component *gv_new(vp::ComponentConf &config)
{
    return new DpiMcuWrapper(config);
}
