import glob
import os
import gvsoc.systree

_THIS_DIR = os.path.dirname(os.path.abspath(__file__))


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
        "rtl_top_name": "cv32e40x_gvsoc_dummy_lint_top",
        "behavioral_enabled": False,
        "max_run_cycles": 2000,
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

        # --- Dummy core path (Verilator 4 / system verilator) ---
        _vdum_dir = os.path.join(_THIS_DIR, "verilated_dummy")
        _vdum_top = "Vcv32e40x_gvsoc_dummy_lint_top"
        _vdum_srcs = [
            os.path.join(_vdum_dir, f"{_vdum_top}.cpp"),
            os.path.join(_vdum_dir, f"{_vdum_top}__Slow.cpp"),
            os.path.join(_vdum_dir, f"{_vdum_top}__Syms.cpp"),
            "/usr/share/verilator/include/verilated.cpp",
        ]
        _vdum_ready = all(os.path.exists(s) for s in _vdum_srcs[:3])

        # --- Real core path (Verilator 5 @ /home/kunq/tools/verilator) ---
        _v5_inc   = "/home/kunq/tools/verilator/share/verilator/include"
        _vcor_dir = os.path.join(_THIS_DIR, "verilated_core")
        _vcor_top = "Vcv32e40x_gvsoc_core_lint_top"
        _vcor_syms = os.path.join(_vcor_dir, f"{_vcor_top}__Syms.cpp")
        _vcor_ready = (
            os.path.exists(os.path.join(_vcor_dir, f"{_vcor_top}.cpp")) and
            os.path.exists(_vcor_syms) and
            os.path.exists(os.path.join(_v5_inc, "verilated.cpp"))
        )

        if _vcor_ready:
            # Prefer the real core when available; pull in all generated cpp files
            _vcor_srcs = sorted(glob.glob(os.path.join(_vcor_dir, "*.cpp")))
            _vcor_srcs.append(os.path.join(_v5_inc, "verilated.cpp"))
            _vcor_srcs.append(os.path.join(_v5_inc, "verilated_threads.cpp"))
            self.add_sources(_vcor_srcs)
            self.add_c_flags([
                f"-I{_v5_inc}",
                f"-I{_vcor_dir}",
                "-DVERILATED_CORE_ENABLED",
                "-std=c++17",
            ])
        elif _vdum_ready:
            self.add_sources(_vdum_srcs)
            self.add_c_flags([
                "-I/usr/share/verilator/include",
                f"-I{_vdum_dir}",
                "-DVERILATED_DUMMY_ENABLED",
            ])

        properties = dict(self.DEFAULT_PROPERTIES)
        properties.update(overrides)
        self.add_properties(properties)

    def o_MEM(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("mem", itf, signature="io")

    def i_FETCHEN(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "fetch_enable", signature="wire<bool>")

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
