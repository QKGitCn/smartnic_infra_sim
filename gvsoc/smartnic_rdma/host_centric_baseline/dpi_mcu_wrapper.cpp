#include <cinttypes>
#include <cstdio>
#include <vp/vp.hpp>
#include <vp/itf/io.hpp>
#include <vp/itf/wire.hpp>

/*
 * Minimal GVSoC-side shell for a future RTL MCU connected through DPI.
 *
 * This file is intentionally a scaffold. It already exposes the key ports and
 * control state expected by baseline_target.py, but it does not yet contain the
 * actual Verilator/SystemVerilog bridge logic. The first integration milestone
 * is to preserve these interfaces while progressively replacing the placeholder
 * behavior with real DPI transactions.
 */

class DpiMcuWrapper : public vp::Component
{
public:
    DpiMcuWrapper(vp::ComponentConf &config);

private:
    static void fetch_enable_sync(vp::Block *__this, bool value);
    static void entry_sync(vp::Block *__this, uint64_t value);
    static void irq_sync(vp::Block *__this, bool value, int id);
    static void reset_sync(vp::Block *__this, bool value);

    void update_busy(bool value);
    void update_halted(bool value);

    vp::IoMaster mem_itf;
    vp::WireSlave<bool> reset_itf;
    vp::WireSlave<bool> fetch_enable_itf;
    vp::WireSlave<uint64_t> entry_itf;
    vp::WireSlave<bool> msi_itf;
    vp::WireSlave<bool> mti_itf;
    vp::WireSlave<bool> mei_itf;
    vp::WireSlave<bool> sei_itf;
    vp::WireMaster<bool> busy_itf;
    vp::WireMaster<bool> halted_itf;
    vp::Trace trace;

    bool fetch_enable = false;
    bool busy = false;
    bool halted = true;
    bool irq_state[4] = {false, false, false, false};
    uint64_t boot_addr = 0;

    bool trace_reset = true;
    bool trace_irq = true;
    bool trace_mem = true;
};

DpiMcuWrapper::DpiMcuWrapper(vp::ComponentConf &config)
    : vp::Component(config)
{
    this->fetch_enable_itf.set_sync_meth(&DpiMcuWrapper::fetch_enable_sync);
    this->reset_itf.set_sync_meth(&DpiMcuWrapper::reset_sync);
    this->entry_itf.set_sync_meth(&DpiMcuWrapper::entry_sync);
    this->msi_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 0);
    this->mti_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 1);
    this->mei_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 2);
    this->sei_itf.set_sync_meth_muxed(&DpiMcuWrapper::irq_sync, 3);

    this->new_master_port("mem", &this->mem_itf);
    this->new_slave_port("reset", &this->reset_itf);
    this->new_slave_port("fetch_enable", &this->fetch_enable_itf);
    this->new_slave_port("entry", &this->entry_itf);
    this->new_slave_port("msi", &this->msi_itf);
    this->new_slave_port("mti", &this->mti_itf);
    this->new_slave_port("mei", &this->mei_itf);
    this->new_slave_port("sei", &this->sei_itf);
    this->new_master_port("busy", &this->busy_itf);
    this->new_master_port("halted", &this->halted_itf);

    this->traces.new_trace("trace", &this->trace);

    this->boot_addr = this->get_js_config()->get_child_int("boot_addr");
    this->trace_reset = this->get_js_config()->get_child_bool("trace_reset");
    this->trace_irq = this->get_js_config()->get_child_bool("trace_irq");
    this->trace_mem = this->get_js_config()->get_child_bool("trace_mem");

    this->update_busy(false);
    this->update_halted(true);

    this->trace.msg("Initialized RTL MCU wrapper scaffold (boot_addr=0x%" PRIx64 ")\n",
        this->boot_addr);
}

void DpiMcuWrapper::update_busy(bool value)
{
    if (this->busy != value)
    {
        this->busy = value;
        this->busy_itf.sync(value);
    }
}

void DpiMcuWrapper::update_halted(bool value)
{
    if (this->halted != value)
    {
        this->halted = value;
        this->halted_itf.sync(value);
    }
}

void DpiMcuWrapper::fetch_enable_sync(vp::Block *__this, bool value)
{
    DpiMcuWrapper *_this = (DpiMcuWrapper *)__this;
    _this->fetch_enable = value;

    if (_this->trace_reset)
    {
        std::fprintf(stdout, "[rtl_mcu] fetch_enable=%d\n", value ? 1 : 0);
        std::fflush(stdout);
    }

    /*
     * Placeholder behavior:
     * - once fetch is enabled, mark the wrapper as active and not halted.
     * - later this is where the DPI-backed RTL core should be released from
     *   reset / start execution.
     */
    _this->update_busy(value);
    _this->update_halted(!value);
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
}

void DpiMcuWrapper::irq_sync(vp::Block *__this, bool value, int id)
{
    DpiMcuWrapper *_this = (DpiMcuWrapper *)__this;
    _this->irq_state[id] = value;

    if (_this->trace_irq)
    {
        static const char *irq_names[] = {"msi", "mti", "mei", "sei"};
        std::fprintf(stdout, "[rtl_mcu] irq %s=%d\n", irq_names[id], value ? 1 : 0);
        std::fflush(stdout);
    }

    /*
     * Placeholder:
     * - later forward the interrupt edge into the DPI/RTL core
     * - for now we only keep observable state so the wiring can be debugged
     */
}

void DpiMcuWrapper::reset_sync(vp::Block *__this, bool value)
{
    DpiMcuWrapper *_this = (DpiMcuWrapper *)__this;

    if (_this->trace_reset)
    {
        std::fprintf(stdout, "[rtl_mcu] reset=%d\n", value ? 1 : 0);
        std::fflush(stdout);
    }

    _this->update_busy(false);
    _this->update_halted(true);
    _this->fetch_enable = false;
}

extern "C" vp::Component *gv_new(vp::ComponentConf &config)
{
    return new DpiMcuWrapper(config);
}
