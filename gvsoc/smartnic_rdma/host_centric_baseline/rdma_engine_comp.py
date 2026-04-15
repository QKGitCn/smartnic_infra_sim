import gvsoc.systree


class RdmaEngine(gvsoc.systree.Component):
    """
    Minimal RDMA engine wrapper for the host-centric baseline.

    Current draft behavior:

    - exposes one MMIO slave port for host control
    - exposes one DMA master port toward local memory
    - exposes one IRQ output toward the host

    The C++ model is intentionally minimal and should be extended
    incrementally toward real WQE/CQE behavior.
    """

    def __init__(self, parent: gvsoc.systree.Component, name: str):
        super().__init__(parent, name)

        self.add_sources(["rdma_engine.cpp"])
        self.add_properties({
            "sq_addr": 0x00001000,
            "cq_addr": 0x00002000,
            "src_addr": 0x00010000,
            "dst_addr": 0x00020000,
            "wqe_size": 32,
            "cqe_size": 32,
            "copy_size": 64,
            "status_idle": 0,
            "status_busy": 1,
            "status_done": 2,
        })

    def i_INPUT(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "input", signature="io")

    def o_DMA(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("dma", itf, signature="io")

    def o_IRQ(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("irq", itf, signature="wire<bool>")
