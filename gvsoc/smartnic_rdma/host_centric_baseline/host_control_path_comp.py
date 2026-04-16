import json
from pathlib import Path

import gvsoc.systree


class HostControlPath(gvsoc.systree.Component):
    """
    Temporary Phase 1 host control-path block.

    This component is the bridge between a future host `rv64` ISS and the
    already-working RDMA smoke path. It exposes:

    - one CPU-facing MMIO slave port used to submit requests and read
      completions
    - one outgoing IO master port used to access SQ/CQ memory and RDMA MMIO
    - one incoming IRQ line from the RDMA engine

    In the current step, the CPU-visible MMIO front end stays stable while the
    internal FSM is split into explicit timing layers for:

    - user space
    - kernel
    - RDMA driver
    - host-device PCIe/MMIO control
    """

    DEFAULT_PROPERTIES = {
        "rdma_base": 0x20000000,
        "sq_addr": 0x00001000,
        "cq_addr": 0x00002000,
        "src_addr": 0x00010000,
        "dst_addr": 0x00020000,
        "copy_size": 64,
        "max_completion_polls": 64,
        "status_done": 2,
        "userspace_req_cycles": 2,
        "kernel_req_cycles": 6,
        "driver_prepare_cycles": 8,
        "pcie_submit_cycles": 4,
        "poll_interval_cycles": 2,
        "pcie_completion_cycles": 4,
        "driver_completion_cycles": 6,
        "kernel_completion_cycles": 4,
        "userspace_completion_cycles": 2,
        "wqe_size": 32,
        "cqe_size": 32,
    }

    def __init__(self, parent: gvsoc.systree.Component, name: str, calibration_profile=None):
        super().__init__(parent, name)

        self.add_sources(["host_control_path.cpp"])
        properties = dict(self.DEFAULT_PROPERTIES)
        if calibration_profile is not None:
            properties.update(self._load_calibration_profile(calibration_profile))
        self.add_properties(properties)

    def i_INPUT(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "input", signature="io")

    def o_OUTPUT(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("output", itf, signature="io")

    def i_IRQ(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "irq", signature="wire<bool>")

    @classmethod
    def _load_calibration_profile(cls, calibration_profile):
        profile_path = Path(calibration_profile)
        with profile_path.open("r", encoding="utf-8") as profile_file:
            loaded = json.load(profile_file)

        unknown_keys = sorted(set(loaded.keys()) - set(cls.DEFAULT_PROPERTIES.keys()))
        if unknown_keys:
            raise RuntimeError(
                f"Unknown host_control_path calibration keys in {profile_path}: "
                + ", ".join(unknown_keys)
            )

        return loaded
