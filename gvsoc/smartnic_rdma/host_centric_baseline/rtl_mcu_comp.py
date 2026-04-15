import gvsoc.systree


class RtlMcu(gvsoc.systree.Component):
    """
    Minimal GVSoC wrapper for an RTL-based MCU integrated through a DPI bridge.

    This wrapper is intentionally kept small so the first integration milestone
    can focus on bridge correctness rather than feature completeness.

    Intended responsibilities:

    - expose control wires such as reset, fetch-enable, boot entry, and IRQs
    - expose one outgoing memory master port toward the system interconnect
    - carry configuration properties used by a future Verilator/SystemVerilog
      top and DPI bridge

    The C++ side implementation is in:

    - dpi_mcu_wrapper.cpp
    """

    DEFAULT_PROPERTIES = {
        "rtl_top_name": "ibex_gvsoc_top",
        "dpi_enabled": False,
        "dpi_config_path": "",
        "boot_addr": 0x80000000,
        "fetch_on_reset_release": False,
        "trace_reset": True,
        "trace_irq": True,
        "trace_mem": True,
    }

    def __init__(self, parent: gvsoc.systree.Component, name: str, **overrides):
        super().__init__(parent, name)

        self.add_sources(["dpi_mcu_wrapper.cpp"])

        properties = dict(self.DEFAULT_PROPERTIES)
        properties.update(overrides)
        self.add_properties(properties)

    def o_MEM(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("mem", itf, signature="io")

    def i_FETCHEN(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "fetch_enable", signature="wire<bool>")

    def i_RESET(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "reset", signature="wire<bool>")

    def i_ENTRY(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "entry", signature="wire<uint64_t>")

    def i_MSI(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "msi", signature="wire<bool>")

    def i_MTI(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "mti", signature="wire<bool>")

    def i_MEI(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "mei", signature="wire<bool>")

    def i_SEI(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "sei", signature="wire<bool>")

    def o_BUSY(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("busy", itf, signature="wire<bool>")

    def o_HALTED(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("halted", itf, signature="wire<bool>")
