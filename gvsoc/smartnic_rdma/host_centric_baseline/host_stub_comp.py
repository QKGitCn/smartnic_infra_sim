import gvsoc.systree


class HostStub(gvsoc.systree.Component):
    """
    Minimal host-side behavioral component for the host-centric baseline.

    This component is a temporary stand-in for the conventional host control
    path. It exposes:

    - one outgoing IO master port to program the RDMA engine and queue memory
    - one incoming IRQ line from the RDMA engine
    """

    def __init__(self, parent: gvsoc.systree.Component, name: str):
        super().__init__(parent, name)

        self.add_sources(["host_stub.cpp"])
        self.add_properties({
            "rdma_base": 0x20000000,
            "sq_addr": 0x00001000,
            "cq_addr": 0x00002000,
            "src_addr": 0x00010000,
            "dst_addr": 0x00020000,
            "copy_size": 128,
            "iterations": 4,
            "max_completion_polls": 64,
            "status_done": 2,
            "wqe_size": 32,
            "cqe_size": 32,
        })

    def o_OUTPUT(self, itf: gvsoc.systree.SlaveItf):
        self.itf_bind("output", itf, signature="io")

    def i_IRQ(self) -> gvsoc.systree.SlaveItf:
        return gvsoc.systree.SlaveItf(self, "irq", signature="wire<bool>")
