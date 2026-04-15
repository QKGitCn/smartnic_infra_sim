import os
import sys


def _prepend_local_path():
    root = os.path.dirname(os.path.abspath(__file__))
    if root not in sys.path:
        sys.path.insert(0, root)

    repo_root = os.path.abspath(os.path.join(root, "..", ".."))
    candidate_roots = [
        os.path.join(repo_root, "core", "models"),
        os.path.join(repo_root, "install", "generators"),
        os.path.join(repo_root, "install", "bin"),
        os.path.join(repo_root, "install", "python"),
        os.path.join(repo_root, "gapy", "bin"),
        os.path.join(repo_root, "gvrun", "python"),
        os.path.join(repo_root, "pulpos", "python"),
    ]

    for path in candidate_roots:
        if os.path.isdir(path) and path not in sys.path:
            sys.path.insert(0, path)


_prepend_local_path()

import gvsoc.runner
import gvsoc.systree as st
import interco.router as router
import memory.memory as memory
import cpu.iss.riscv as iss
import cpu.clint
import cpu.plic
import devices.uart.ns16550 as ns16550
import utils.loader.loader
from vp.clock_domain import Clock_domain

from host_control_path_comp import HostControlPath
from host_stub_comp import HostStub
from rdma_engine_comp import RdmaEngine


class BaselineSoc(st.Component):
    """
    Draft system composition for the host-centric RDMA baseline.

    Planned composition:

    - host_stub
    - rdma_engine
    - local_mem
    - optional link / remote peer path
    """

    def __init__(self, parent, name, parser=None):
        super().__init__(parent, name)

        host_cpu_binary = None
        host_cpu_isa = "rv64imafdc"
        host_calibration_profile = None
        if parser is not None:
            parser.add_argument("--host-cpu", dest="host_cpu", action="store_true",
                help="Enable the Phase 1 rv64 host CPU path (the scaffold is instantiated by default)")
            parser.add_argument("--host-binary", dest="host_binary", type=str, default=None,
                help="Optional rv64 firmware ELF to run on the Phase 1 host CPU")
            parser.add_argument("--host-isa", dest="host_isa", type=str, default="rv64imafdc",
                help="RISCV ISA string for the Phase 1 host CPU (default: %(default)s)")
            parser.add_argument("--host-calibration-profile", dest="host_calibration_profile",
                type=str, default=None,
                help="Optional JSON file overriding host_control_path timing properties")
            args, __ = parser.parse_known_args()
            host_cpu_binary = args.host_binary
            host_cpu_isa = args.host_isa
            host_calibration_profile = args.host_calibration_profile

        ico = router.Router(self, "ico")

        use_host_firmware = host_cpu_binary is not None

        self.host = None
        if not use_host_firmware:
            self.host = HostStub(self, "host")
        self.host_ctrl = HostControlPath(
            self,
            "host_ctrl",
            calibration_profile=host_calibration_profile,
        )
        self.rdma = RdmaEngine(self, "rdma")
        # Smoke-debug setting: keep memory latency at 0 so the current
        # synchronous host stub can validate the basic queue/copy/CQE logic
        # before we move to a proper event-driven timed benchmark.
        self.mem = memory.Memory(self, "mem", size=0x01000000, atomics=True, latency=0)

        ico.o_MAP(self.mem.i_INPUT(), "mem", base=0x00000000, size=0x01000000, rm_base=True)
        ico.o_MAP(self.mem.i_INPUT(), "host_mem_alias", base=0x80000000, size=0x01000000, rm_base=True)
        ico.o_MAP(self.rdma.i_INPUT(), "rdma", base=0x20000000, size=0x00010000, rm_base=True)
        ico.o_MAP(self.host_ctrl.i_INPUT(), "host_ctrl", base=0x20010000, size=0x00010000, rm_base=True)

        self.rom = memory.Memory(
            self,
            "host_rom",
            size=0x10000,
            stim_file=self.get_file_path("pulp/chips/rv64/rom.bin"),
        )
        self.uart = ns16550.Ns16550(self, "host_uart")
        self.clint = cpu.clint.Clint(self, "host_clint")
        self.plic = cpu.plic.Plic(self, "host_plic", ndev=1)
        self.host_cpu = iss.Riscv(
            self,
            "host_cpu_rv64",
            isa=host_cpu_isa,
            binaries=[host_cpu_binary] if host_cpu_binary is not None else [],
            boot_addr=0x90000000,
            timed=True,
            fetch_enable=False,
            memory_start=0x80000000,
            memory_size=0x01000000,
        )
        ico.o_MAP(self.rom.i_INPUT(), "host_rom", base=0x90000000, size=0x00010000, rm_base=True)
        ico.o_MAP(self.uart.i_INPUT(), "host_uart", base=0x10000000, size=0x100, rm_base=True)
        ico.o_MAP(self.clint.i_INPUT(), "host_clint", base=0x02000000, size=0x10000, rm_base=True)
        ico.o_MAP(self.plic.i_INPUT(), "host_plic", base=0x0C000000, size=0x1000000, rm_base=True)

        self.uart.o_IRQ(self.plic.i_IRQ(0))
        self.host_cpu.o_DATA(ico.i_INPUT())
        self.host_cpu.o_FETCH(ico.i_INPUT())
        self.bind(self.host_cpu, "meminfo", self.mem, "meminfo")
        self.bind(self.host_cpu, "time", self.clint, "time")
        self.bind(self.clint, "sw_irq_0", self.host_cpu, "msi")
        self.bind(self.clint, "timer_irq_0", self.host_cpu, "mti")
        self.bind(self.plic, "s_irq_0", self.host_cpu, "sei")
        self.bind(self.plic, "m_irq_0", self.host_cpu, "mei")

        if host_cpu_binary is not None:
            self.host_loader = utils.loader.loader.ElfLoader(
                self,
                "host_loader",
                binary=host_cpu_binary,
            )
            self.host_loader.o_OUT(ico.i_INPUT())
            self.host_loader.o_START(self.host_cpu.i_FETCHEN())
            self.host_loader.o_ENTRY(self.host_cpu.i_ENTRY())

        if self.host is not None:
            self.host.o_OUTPUT(ico.i_INPUT())
        self.host_ctrl.o_OUTPUT(ico.i_INPUT())
        self.rdma.o_DMA(self.mem.i_INPUT())
        if self.host is not None:
            self.rdma.o_IRQ(self.host.i_IRQ())
        else:
            self.rdma.o_IRQ(self.host_ctrl.i_IRQ())

        # TODO:
        # - attach remote peer or remote link model
        # - add benchmark result export
        # - add firmware loading and fetch enable for host_cpu_rv64
        # - switch main runnable path from host_stub to rv64 firmware driving host_ctrl MMIO
        # - implement real WQE/CQE and DMA behavior in rdma_engine.cpp


class BaselineTop(st.Component):
    """
    Board-level wrapper matching the usual GVSoC target model shape.

    This is intentionally aligned with the common `(parent, name, parser, options)`
    construction used by targets in this repository so the folder can be copied
    into another fresh GVSoC clone more easily.
    """

    def __init__(self, parent, name, parser=None, options=None):
        super().__init__(parent, name, options=options)

        self.soc = BaselineSoc(self, "soc", parser=parser)
        self.clock = Clock_domain(self, "clock", frequency=100000000)
        self.clock.o_CLOCK(self.soc.i_CLOCK())


class Target(gvsoc.runner.Target):
    """
    Top-level GVSoC target entrypoint for the host-centric baseline.
    """

    gapy_description = "Host-centric RDMA baseline"
    name = "baseline_target"

    def __init__(self, parser, options=None, name=None):
        super().__init__(parser, options, model=BaselineTop, name=name)
