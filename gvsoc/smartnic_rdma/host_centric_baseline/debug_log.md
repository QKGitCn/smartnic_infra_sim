# Host-Centric Baseline Debug Log

This document records the bring-up and debugging history of the host-centric RDMA baseline, starting from the first failure seen with:

```bash
python3 import_smoke_test.py
```

The goal is to preserve both the error messages and the reasoning behind each fix.

## Scope

The baseline under debug is the first evaluation case:

- host-centric control
- no MCU in the fast path
- one host stub
- one RDMA engine
- one local memory
- one queue-backed `RDMA_WRITE`-style microbenchmark embedded in the host stub

At this stage, the workload is not an external application binary. It is implemented in:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

and configured through:

- [host_stub_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub_comp.py)

## 1. Import Smoke Test Failed: `No module named 'gvsoc'`

### Error

Running:

```bash
python3 import_smoke_test.py
```

initially failed with:

```text
ModuleNotFoundError: No module named 'gvsoc'
```

### Diagnosis

The local folder added itself to `sys.path`, but it did not add the standard GVSoC Python roots from the enclosing repository.

The baseline folder was intended to be portable inside a fresh GVSoC clone, not fully standalone. That means it must explicitly locate the repo-local Python packages.

### Fix

Updated the path bootstrap in:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
- [run.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/run.py)
- [import_smoke_test.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/import_smoke_test.py)

to prepend:

- `core/models`
- `install/generators`

### Lesson

The folder is not self-hosting the simulator stack. It depends on a normal GVSoC checkout and must explicitly discover those repo roots.

## 2. Import Smoke Test Failed: `No module named 'gapylib'`

### Error

After the `gvsoc` path was fixed, the next import failed with:

```text
ModuleNotFoundError: No module named 'gapylib'
```

### Diagnosis

`gvsoc.runner` depends on `gapylib`, which does not live under the same Python root as `gvsoc`.

### Fix

Extended the same path setup to also prepend:

- `install/bin`
- `gapy/bin`

in the same three files listed above.

### Lesson

Importing `gvsoc.runner` pulls in more of the normal launcher stack than a simple component-only test does.

## 3. Import Smoke Test Failed: `No module named 'gvrun'`

### Error

The next failure became:

```text
ModuleNotFoundError: No module named 'gvrun'
```

### Diagnosis

`gvsoc.systree` and runner-related code also depend on the `gvrun` Python package, plus some repo-local Python support packages.

### Fix

Extended the path setup again to prepend:

- `install/python`
- `gvrun/python`
- `pulpos/python`

### Outcome

After this, the import smoke test passed:

```text
Import smoke test passed.
```

### Lesson

The portability target is:

- copy `host_centric_baseline/` into a fresh GVSoC clone
- reuse the repo’s standard Python packages

It is not:

- vendor all dependencies into the folder

## 4. Local Entrypoint Worked

### Result

Running:

```bash
python3 run.py
```

produced:

```text
Host-centric RDMA baseline workspace entrypoint loaded.
Use this script as the local launcher inside a fresh GVSoC clone.
```

### Meaning

At this point:

- baseline-local imports worked
- repo-level Python dependencies worked
- the target module loaded cleanly

This was only a Python-side milestone, not a simulation success.

## 5. Build Failed: `HostStub` had no `get_cycles()`

### Error

The first real C++ build failure happened in:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

with errors like:

```text
error: ‘class HostStub’ has no member named ‘get_cycles’
```

### Diagnosis

GVSoC components do not expose `get_cycles()` directly on `vp::Component`.

The correct pattern in the codebase is:

```cpp
this->clock.get_cycles()
```

### Fix

Replaced:

- `this->get_cycles()`

with:

- `this->clock.get_cycles()`

### Outcome

The build then progressed past this point.

### Lesson

Timing data must be read from the component clock object, not from the component itself.

## 6. Runtime Launch Failed: `Target.__init__() got an unexpected keyword argument 'name'`

### Error

The first `gvrun` launch failed with:

```text
TypeError: Target.__init__() got an unexpected keyword argument 'name'
```

### Diagnosis

The target wrapper in:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

did not match the normal GVSoC target constructor shape.

`gvrun` expects targets like:

```python
def __init__(self, parser, options=None, name=None):
```

### Fix

Updated the target wrapper to:

- accept `options=None, name=None`
- pass `name=name` to `super(...)`
- define `name = "baseline_target"`

### Outcome

The simulator launcher proceeded past target construction.

### Lesson

To fit naturally into GVSoC, the local target wrapper must match the exact runner contract used by built-in targets.

## 7. Simulation Launched but Produced No Visible Progress

### Symptom

After the launcher began working, there was no clear CLI indication that the simulation was alive.

### Diagnosis

The host stub relied on trace messages, and those are not always visible in a default run.

### Fix

Added direct CLI progress prints to:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

## 18. Phase 1 `rv64` ISS Scaffold Added

### Goal

Introduce a real `rv64` ISS into the baseline target so it can eventually own the MMIO interface exposed by:

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)

without breaking the already-working smoke benchmark.

### Integration

Added a parked CPU scaffold in:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

including:

- `rv64` ISS
- ROM
- `clint`
- `plic`
- `uart`
- `host_control_path` MMIO mapping

The ISS is intentionally present but idle for now because `fetch_enable=False`.

### Lesson

This gives the design a stable transition point:

- the old `host_stub` still drives the smoke path
- the future `rv64` firmware path now has a real place to attach

## 19. CPU Launch Failed Due to Invalid `PLIC` IRQ Binding

### Symptom

After the `rv64` scaffold was introduced, the launcher aborted during startup instead of reaching the benchmark.

### Diagnosis

The UART interrupt was connected using the wrong `PLIC` IRQ index. The binding used:

```python
self.uart.o_IRQ(self.plic.i_IRQ(1))
```

but the `PLIC` helper already accounts for the hardware source numbering internally, so this attempted to bind to a non-existent slave port.

### Fix

Changed the UART binding in:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

to:

```python
self.uart.o_IRQ(self.plic.i_IRQ(0))
```

### Lesson

Built-in interrupt helper APIs are easy to misread. In this case, the `PLIC` wrapper already handled the off-by-one convention.

## 20. Smoke Benchmark Broke Because CPU ROM Overlapped SQ/CQ Memory

### Symptom

Once the IRQ wiring issue was fixed, the simulator launched again, but the smoke benchmark failed with corrupted WQE contents and destination-buffer mismatch symptoms.

The failing run showed effects like:

```text
[host_stub] write_buffer failed: addr=0x20000 size=128 status=1
[rdma_engine] fetch_wqe: ... opcode=1465341783 ...
```

### Diagnosis

The newly added CPU ROM was mapped at:

```text
0x00001000
```

which collided directly with the existing smoke benchmark addresses:

- `sq_addr = 0x00001000`
- `cq_addr = 0x00002000`

So the ISS scaffold itself was fine, but its ROM consumed the same address range used by the working WQE/CQE path.

### Fix

Moved the parked CPU boot ROM out of the smoke benchmark space in:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

Updated:

- `boot_addr` from `0x1000` to `0x90000000`
- `host_rom` base from `0x00001000` to `0x90000000`

### Lesson

Adding a scaffolded CPU is not just about wiring new components. Its ROM and boot address must avoid all existing benchmark-owned memory regions, especially queues and buffers already used by the working path.

## 21. Stable Checkpoint: ISS Scaffold Present, Smoke Path Still Passes

### Result

After relocating the ROM, the baseline ran successfully again:

```text
[host_stub] summary: iterations=4 success=4 avg_cycles=2 min_cycles=2 max_cycles=2
[host_stub] benchmark complete: terminating simulation with exit code 0
```

### Meaning

The current platform now has both:

- a working host-stub-driven smoke benchmark
- a structurally present `rv64` ISS scaffold that will later take ownership of the `host_control_path` MMIO interface

### Current State

What is working:

- `host_stub`
- `host_control_path`
- `rdma_engine`
- local memory
- `rv64` ISS scaffold with `rom`, `clint`, `plic`, and `uart`

What is intentionally not enabled yet:

- CPU fetch
- firmware loading
- CPU-driven MMIO traffic into `host_control_path`

### Next Step

The next implementation step is no longer target wiring. It is bringing up a tiny `rv64` firmware path so the CPU can begin issuing real MMIO accesses into:

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)

## 22. First CPU-Firmware Run Failed: Loader Could Not Write to RAM Alias

### Error

The first attempt to run the new CPU-driven path failed with:

```text
Received out-of-bound request (reqAddr: 0x80000000, reqSize: 0x1d0, memSize: 0x1000000)
Received error during copy
```

### Diagnosis

The ELF loader was correctly trying to place the firmware into the CPU-visible RAM window at:

```text
0x80000000
```

but the `host_mem_alias` mapping in:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

was forwarding that address to the memory model without removing the alias base. So the underlying memory saw the request as a raw `0x80000000` local offset and rejected it as out of bounds.

### Fix

Changed the alias mapping from:

```python
rm_base=False
```

to:

```python
rm_base=True
```

for the `0x80000000` RAM alias.

### Lesson

For CPU-visible aliases, the interconnect mapping must translate the global address back to the memory-local offset. Otherwise, the loader and ISS can see the address space while the actual memory model cannot.

## 23. First CPU-Firmware Smoke Driver Passed

### Integration

Added a tiny `rv64` firmware smoke driver in:

- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)
- [start.S](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/start.S)
- [link.ld](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/link.ld)
- [semihost.h](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/semihost.h)

and new make targets in:

- [Makefile](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/Makefile)

for:

- `make host-fw`
- `make run-host-fw`

### Result

The CPU-driven run now succeeds:

```text
[rv64_fw] host_control_path smoke start
[rv64_fw] doorbell
[host_ctrl] accept request: opcode=1 src=0x10000 dst=0x20000 len=128 user_id=4660
[host_ctrl] completion: user_id=4660 buffers_ok=1 cqe_ok=1 status=0x0 bytes=128
[rv64_fw] PASS
```

### Meaning

This is the first successful end-to-end CPU-owned control path:

- `rv64` firmware executes on the ISS
- firmware writes `host_control_path` MMIO registers
- `host_control_path` translates the request into the existing SQ/CQ smoke flow
- `rdma_engine` performs the copy
- firmware polls completion and exits successfully through semihosting

### Current State

The baseline now has two validated runnable paths:

- `make run`
  - host-stub-driven smoke baseline
- `make run-host-fw`
  - CPU-driven `rv64 -> host_control_path -> rdma_engine` smoke baseline

### Next Step

The next step is no longer “can the ISS touch MMIO?” That is now proven.

The next useful step is either:

- expand the firmware so it iterates and records timing samples, or
- split `host_control_path` internally into user space, kernel, driver, and PCIe-control timing layers

## 24. `host_control_path` Split into Internal Host Timing Layers

### Goal

Keep the CPU-facing firmware interface unchanged while making the internal host-side control path more faithful to the layered architecture.

### Change

Refactored:

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)
- [host_control_path_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path_comp.py)

so the request now flows through explicit timed phases:

- userspace request handling
- kernel dispatch
- driver WQE preparation
- PCIe/MMIO submit
- RDMA polling
- PCIe completion visibility
- driver completion handling
- kernel completion return
- userspace completion delivery

The CPU firmware in:

- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)

did not need to change.

### Result

The CPU-driven smoke path still passes, and the CLI now shows the host-side layer progression explicitly:

```text
[host_ctrl] userspace: ...
[host_ctrl] kernel: ...
[host_ctrl] driver: ...
[host_ctrl] pcie: ...
[host_ctrl] driver: completion ...
[host_ctrl] kernel: return completion ...
[host_ctrl] userspace: completion delivered ...
```

### Meaning

This is the first step from a collapsed host control proxy toward the intended layered host-centric model.

What stayed stable:

- CPU-visible MMIO registers
- CPU firmware flow
- RDMA-engine behavior

What improved:

- host-side timing is now partitionable by layer
- each layer has its own configurable cycle budget
- CLI output now maps naturally onto the user/kernel/driver/PCIe decomposition

### Next Step

The next useful refinement is to have the firmware issue multiple requests and record timing, so the new per-layer timing knobs affect measurable end-to-end samples rather than just one smoke transaction.

## 25. CPU Firmware Upgraded from One-Shot Smoke to Iterative Latency Loop

### Goal

Turn the tiny `rv64` firmware from a single request smoke check into a small latency-oriented microbenchmark while keeping the same MMIO contract to:

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)

### Change

Updated:

- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)

to:

- issue 4 requests instead of 1
- use `rdcycle` to measure firmware-observed completion latency
- print one line per iteration
- print a final summary with average, min, and max cycle counts

### Result

The CPU-driven run now reports timing samples such as:

```text
[rv64_fw] iter 1 cycles=57
[rv64_fw] iter 2 cycles=57
[rv64_fw] iter 3 cycles=57
[rv64_fw] iter 4 cycles=57
[rv64_fw] summary iterations=4 avg_cycles=57 min_cycles=57 max_cycles=57
```

### Meaning

This is the first CPU-observed latency loop in the new architecture:

- request originates in `rv64` firmware
- control traverses the internal userspace/kernel/driver/PCIe timing layers
- RDMA engine executes the copy
- firmware measures total completion latency with cycle reads

### Lesson

The MMIO front end is now stable enough that we can evolve timing and benchmarking behavior underneath it without changing the firmware contract each time.
- [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)

including:

- host startup
- iteration posting
- engine MMIO receipt
- WQE fetch
- CQE write
- iteration completion
- summary

### Outcome

The terminal began showing concrete benchmark progress.

### Lesson

Early bring-up benefits from explicit `stdout` progress, not only trace-engine output.

## 8. First Visible Simulation Output Showed Total Failure

### Symptom

The simulation produced progress messages like:

```text
[host_stub] iteration 1 done: total_cycles=0 buffers_ok=0 cqe_ok=0
```

for every iteration.

### Diagnosis

This showed that:

- the host stub ran
- the benchmark loop executed
- but the actual data path did not succeed

At this stage the problem could still have been:

- MMIO not reaching the engine
- DMA not reaching memory
- bad WQE layout
- timing/sequencing problems

## 9. Added Host-Side and Engine-Side Instrumentation

### Change

Added request-status and progress instrumentation to:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)
- [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)

so the CLI would show:

- whether host-side requests were accepted
- whether engine MMIO writes arrived
- what WQE the engine fetched
- whether CQE writes were issued

### Outcome

The resulting output showed:

- MMIO arrived at the engine
- engine state changed to `done`
- CQE writes were issued
- but the engine fetched an all-zero WQE

### Lesson

The problem was not “simulation is dead.” It was specifically that the queue entry in memory was not visible as expected.

## 10. Added Fail-Fast Watchdog and Failure Points

### Problem

The simulation could continue printing repeated failures, which made debug runs noisy and ambiguous.

### Fix

Added a fail-fast path to:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)
- [host_stub_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub_comp.py)

including:

- bounded polling of status register
- explicit timeout point: `wait_completion`
- explicit failure points:
  - `check_dst_buffer`
  - `check_cqe`
- nonzero simulation exit via:

```cpp
this->time.get_engine()->quit(1);
```

### Outcome

The simulation now terminates with a concrete reason instead of failing ambiguously.

### Lesson

In simulator bring-up, the first useful behavior is often “fail loudly and specifically,” not “keep running.”

## 11. Quick Smoke Adjustment: Reduced Iterations

### Change

Reduced default iterations in:

- [host_stub_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub_comp.py)

from:

- `16`

to:

- `4`

### Reason

To make the CLI output short enough to inspect each debug line easily.

## 12. Added Host-Side WQE Readback Check

### Change

Added an immediate host-side readback of the WQE after writing it to SQ memory in:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

### Critical Observation

The CLI showed:

```text
[host_stub] wqe readback: opcode=0 src=0x0 dst=0x0 len=0 user_id=0
```

### Meaning

This was decisive:

- the WQE was already zero on the host-side readback
- therefore the problem was upstream of the RDMA engine
- the engine was not the first component losing the data

### Lesson

The host’s write to queue memory was not taking effect as assumed.

## 13. Quick Zero-Latency Smoke Fix

### Hypothesis

One possibility was that the host was writing and reading too aggressively in the same zero-time control path while the memory model still imposed visible request latency.

### Fix

Temporarily changed local memory latency in:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

from:

- `latency=10`

to:

- `latency=0`

### Outcome

The WQE was still read back as zero.

### Meaning

This proved the bug was not only “host needs to wait longer.”

### Lesson

The zero-latency smoke run is valuable because it cleanly separates:

- logic / composition bugs

from:

- timing-model / event-ordering bugs

## 14. Startup Phase Bug: Benchmark Was Running Too Early

### Diagnosis

The benchmark had originally been launched from:

- `start()`

in:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

In GVSoC, `start()` runs before reset is fully released.

This made the benchmark start too early in platform initialization.

### Fix

Changed behavior so that:

- `start()` only prints that it is waiting
- the benchmark actually starts from:

```cpp
reset(false)
```

### Outcome

The host stub now begins the benchmark at a more appropriate lifecycle point.

### Lesson

Platform lifecycle matters in simulator bring-up. Starting the workload too early can look like a data-path bug.

## 15. Current State

At the current point in the debug process:

- import smoke test passes
- local `run.py` entrypoint works
- target builds and launches
- host and engine both print live CLI progress
- the benchmark starts after reset release
- the simulation terminates cleanly with explicit failure reasons
- the remaining bug is still that the host-side WQE readback returns zeros

The strongest current conclusion is:

- the next bug is in the host-to-memory queue write/read path, or in how that path is exercised during platform startup

It is not primarily:

- a Python import problem
- a target-wrapper problem
- a missing engine MMIO path
- a missing CLI visibility issue

## 16. Workload Meaning During This Debug

The workload under debug is a built-in host-centric `rdma_write_lat` smoke microbenchmark:

- one host stub posts one WQE per iteration
- one RDMA engine fetches and executes it
- one CQE is written back
- host checks buffer correctness and completion correctness

This is not yet:

- a real federated learning app
- a two-node RDMA experiment
- a host-to-MCU offload experiment

It is the first baseline needed before those more advanced cases can be evaluated.

## 17. Files Most Involved So Far

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)
- [host_stub_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub_comp.py)
- [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)
- [rdma_engine_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine_comp.py)
- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
- [import_smoke_test.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/import_smoke_test.py)
- [run.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/run.py)
- [Makefile](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/Makefile)

## 18. Current Open Technical Question

Why does the host-side immediate readback of SQ memory still return an all-zero WQE even after:

- fixing imports
- fixing target construction
- fixing cycle API use
- adding zero-latency smoke mode
- delaying workload launch until reset release

That is the current frontier of the debug effort.

## 19. Breakthrough: WQE Became Visible After Reset-Release Launch

### New Runtime Output

After moving benchmark launch from `start()` to `reset(false)`, the simulation produced:

```text
[host_stub] start(): waiting for reset release before launching benchmark
[host_stub] reset released: launching host-centric RDMA latency benchmark
[host_stub] iteration 1/4: posting WQE
[host_stub] wqe readback: opcode=1 src=0x10000 dst=0x20000 len=64 user_id=1
[rdma_engine] mmio CONTROL write: value=0x1
[rdma_engine] mmio SQ_DOORBELL write: value=0x1
[rdma_engine] fetch_wqe: sq=0x1000 req_status=0 opcode=1 src=0x10000 dst=0x20000 len=64 user_id=1
[rdma_engine] perform_copy: src=0x10000 dst=0x20000 len=64 rd_status=0 wr_status=0
[rdma_engine] write_cqe: cq=0x2000 status=0 bytes=64 user_id=1 req_status=0
[host_stub] iteration 1: status after doorbell=0x2
[host_stub] iteration 1 done: total_cycles=0 buffers_ok=1 cqe_ok=1
```

and the same success pattern for iterations 2 through 4.

### Diagnosis

This confirmed that the earlier all-zero WQE problem was not a permanent memory-mapping or WQE-layout bug.

The root cause was that the workload had been launched too early in the component lifecycle.

Starting from `start()` meant:

- the host benchmark ran before reset release
- queue and memory behavior were being exercised too early

Once the benchmark moved to:

- `reset(false)`

the host-side WQE write/readback became correct, and the engine observed the same valid WQE.

### What Is Now Working

The following are now confirmed to work in the host-centric smoke path:

- host startup and benchmark launch
- reset-release benchmark trigger
- host-side SQ write
- host-side SQ readback
- MMIO write to RDMA control register
- MMIO SQ doorbell to engine
- engine-side WQE fetch
- engine-side data copy
- engine-side CQE write
- host-side CQE validation
- host-side destination buffer validation

### Remaining Problem

Although correctness is now working, all timing values are still:

- `0`

for every iteration.

So the remaining open issue is no longer correctness. It is timing fidelity.

### Updated Interpretation

The current platform is now a functionally correct host-centric smoke model for:

- one local `RDMA_WRITE`-style queue operation

But it is still not a meaningful latency model because:

- the host benchmark path is fully synchronous
- the engine operation collapses into the same zero-time control flow
- no event-driven or asynchronous completion path exists yet

### Next Technical Step

The next major engineering step should be:

- convert the host stub from a direct synchronous loop into an event-driven state machine

with phases such as:

- post WQE
- ring doorbell
- wait for completion
- read CQE
- validate
- schedule next iteration

This is the step needed to move from:

- functional smoke correctness

to:

- actual latency measurement

### Revised Current Open Question

The current frontier is no longer:

- “why is the WQE all zero?”

It is now:

- “how do we convert this now-correct smoke path into a timed event-driven benchmark so that cycle counts become meaningful?”

## 20. Success Path Did Not Terminate the Simulation

### Symptom

After the correctness bug was fixed, the benchmark completed all iterations and printed a valid summary, but the simulation did not terminate by itself.

### Diagnosis

The host stub had explicit termination on failure:

```cpp
this->time.get_engine()->quit(1);
```

but no matching termination on success.

So the simulator had a valid workload completion point, but nothing requested:

- normal engine termination

### Fix

Added a clean success exit at the end of:

- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

after the benchmark summary:

```cpp
this->time.get_engine()->quit(0);
```

and a matching CLI message:

```text
[host_stub] benchmark complete: terminating simulation with exit code 0
```

### Lesson

For simulator workloads, both paths must be explicit:

- failure path should terminate with nonzero status
- success path should terminate with zero status

Otherwise a functionally complete benchmark can still look broken from the outside because the process never exits.

## 21. First Fully Successful Host-Centric Smoke Run

### Runtime Output

After adding clean success termination, the simulation produced a complete successful run:

```text
[host_stub] start(): waiting for reset release before launching benchmark
[host_stub] reset released: launching host-centric RDMA latency benchmark
[host_stub] iteration 1/4: posting WQE
[host_stub] wqe readback: opcode=1 src=0x10000 dst=0x20000 len=64 user_id=1
[rdma_engine] mmio CONTROL write: value=0x1
[rdma_engine] mmio SQ_DOORBELL write: value=0x1
[rdma_engine] fetch_wqe: sq=0x1000 req_status=0 opcode=1 src=0x10000 dst=0x20000 len=64 user_id=1
[rdma_engine] perform_copy: src=0x10000 dst=0x20000 len=64 rd_status=0 wr_status=0
[rdma_engine] write_cqe: cq=0x2000 status=0 bytes=64 user_id=1 req_status=0
[host_stub] iteration 1: status after doorbell=0x2
[host_stub] iteration 1 done: total_cycles=0 buffers_ok=1 cqe_ok=1
...
[host_stub] summary: iterations=4 success=4 avg_cycles=0 min_cycles=0 max_cycles=0
[host_stub] benchmark complete: terminating simulation with exit code 0
```

### What This Confirms

The current smoke model is now functionally correct for the first host-centric local-path experiment:

- benchmark starts only after reset release
- host writes valid WQEs
- host reads back valid WQEs
- engine receives control MMIO
- engine fetches the correct WQE
- engine performs the data copy
- engine writes a valid CQE
- host validates both:
  - destination buffer correctness
  - CQE correctness
- benchmark terminates with exit code `0`

### Remaining Limitation

Timing is still not meaningful:

- `total_cycles=0`
- `avg_cycles=0`
- `min_cycles=0`
- `max_cycles=0`

This is expected given the current smoke model structure:

- host issues everything synchronously
- engine executes synchronously in the same flow
- there is no event-driven wait/completion path yet

### Current Status Summary

The host-centric baseline is now:

- functionally alive
- debug-visible in the CLI
- able to terminate on both success and failure

but still:

- not yet a valid latency-performance model

### Next Recommended Step

Move from the current synchronous smoke path to a timed event-driven host state machine so that:

- WQE post
- doorbell
- completion visibility
- host completion

occur in separate simulated steps and produce nonzero cycle counts.

## 22. How to Run the New `rv64`-Driven RDMA Smoke Path

### Purpose

The baseline now supports two runnable paths:

- the original host-stub-driven smoke path
- a CPU-driven path where a timed `rv64` ISS runs a tiny firmware and drives:
  - `host_control_path`
  - `rdma_engine`
  - local memory

The second path is the new `rv64`-owned control path.

### Command

From:

- [smartnic_rdma/host_centric_baseline](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline)

run:

```bash
make run-host-fw
```

### What This Command Does

The `run-host-fw` target performs three steps:

1. builds the GVSoC platform
2. builds the tiny `rv64` firmware ELF from:
   - [start.S](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/start.S)
   - [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)
   - [link.ld](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/link.ld)
3. launches `gvrun` with:
   - `--host-binary=<firmware-elf>`

This causes the target to:

- instantiate the `rv64` ISS
- load the ELF into the host RAM view
- enable CPU fetch through the ELF loader
- let firmware program `host_control_path` MMIO directly

### Expected Output

A healthy run prints output like:

```text
[rv64_fw] host_control_path latency loop start
[host_ctrl] userspace: ...
[host_ctrl] kernel: ...
[host_ctrl] driver: ...
[host_ctrl] pcie: ...
[rdma_engine] ...
[rv64_fw] iter 1 cycles=57
...
[rv64_fw] summary iterations=4 avg_cycles=57 min_cycles=57 max_cycles=57
[rv64_fw] PASS
```

### Meaning of the Output

- `[rv64_fw] ...`
  firmware running on the `rv64` ISS
- `[host_ctrl] ...`
  layered host-side timing model inside:
  - [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)
- `[rdma_engine] ...`
  RDMA-engine-side fetch/copy/completion activity

### Related Files

- [Makefile](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/Makefile)
  contains:
  - `host-fw`
  - `run-host-fw`
- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
  switches to the CPU-driven path when `--host-binary` is supplied
- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)
  is the current firmware smoke driver

### Current Status

This path is now the first working CPU-driven host-centric RDMA smoke baseline:

- `rv64` ISS drives the request
- `host_control_path` models user/kernel/driver/PCIe layers
- `rdma_engine` executes the data movement
- firmware observes end-to-end latency in CPU cycles

## 23. How the Firmware Sources Produce `host_ctrl_smoke.elf`

### Source Folder

The firmware sources live in:

- [firmware/host_ctrl_smoke](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke)

The generated outputs go to:

- [build/host_fw](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/build/host_fw)

### Build Command

The ELF is generated by the `host-fw` target in:

- [Makefile](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/Makefile)

with a command of the form:

```bash
/opt/riscv/bin/riscv64-unknown-elf-gcc \
  -march=rv64imafdc -mabi=lp64d -mcmodel=medany \
  -Os -ffreestanding -nostdlib -nostartfiles -Wall -Wextra \
  start.S main.c -T link.ld \
  -Wl,-Map=host_ctrl_smoke.map \
  -o host_ctrl_smoke.elf
```

### Role of Each File

- [start.S](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/start.S)
  - assembly reset entry
  - initializes the stack
  - calls `main`

- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)
  - contains the firmware logic
  - writes `host_control_path` MMIO registers
  - rings the request doorbell
  - polls completion registers
  - prints progress through semihosting

- [link.ld](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/link.ld)
  - linker script
  - defines where `.text`, `.data`, `.bss`, and stack live
  - makes the ELF match the target memory map

- [semihost.h](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/semihost.h)
  - included by `main.c`
  - provides semihost print and exit helpers
  - not compiled separately, but part of the C translation unit

### Build Flow

The firmware build works like this:

1. assemble [start.S](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/start.S) into an object
2. compile [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c) into an object
3. link those objects with [link.ld](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/link.ld)
4. emit:
   - [host_ctrl_smoke.elf](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/build/host_fw/host_ctrl_smoke.elf)
   - [host_ctrl_smoke.map](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/build/host_fw/host_ctrl_smoke.map)

### How GVSoC Uses the ELF

When running:

```bash
make run-host-fw
```

the target passes:

- `--host-binary=<path-to-host_ctrl_smoke.elf>`

to `gvrun`.

Then:

- the ELF loader loads the firmware into simulated memory
- the `rv64` ISS starts from the configured entry point
- the firmware drives the `host_control_path` MMIO interface

## 24. Successful `run-host-fw` Output with Layered Host-Control Timing

### Runtime Output

Running:

```bash
/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/build/install/bin/gvrun \
  --target-dir=/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline \
  --target=baseline_target \
  --work-dir=/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/build/work \
  --host-binary=/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/build/host_fw/host_ctrl_smoke.elf \
  run
```

produced:

```text
[rv64_fw] host_control_path latency loop start
[host_ctrl] userspace: opcode=1 src=0x10000 dst=0x20000 len=128 user_id=4660
[host_ctrl] kernel: dispatch request user_id=4660
[host_ctrl] driver: build WQE opcode=1 src=0x10000 dst=0x20000 len=128 user_id=4660
[host_ctrl] wqe readback: opcode=1 src=0x10000 dst=0x20000 len=128 user_id=4660
[host_ctrl] pcie: issue CONTROL and SQ doorbell user_id=4660
[rdma_engine] mmio CONTROL write: value=0x1
[rdma_engine] mmio SQ_DOORBELL write: value=0x1
[rdma_engine] fetch_wqe: sq=0x1000 req_status=0 opcode=1 src=0x10000 dst=0x20000 len=128 user_id=4660
[rdma_engine] perform_copy: src=0x10000 dst=0x20000 len=128 rd_status=0 wr_status=0
[rdma_engine] write_cqe: cq=0x2000 status=0 bytes=128 user_id=4660 req_status=0
[host_ctrl] pcie: completion visible for user_id=4660
[host_ctrl] driver: completion user_id=4660 buffers_ok=1 cqe_ok=1 status=0x0 bytes=128
[host_ctrl] kernel: return completion user_id=4660 status=0 bytes=128
[host_ctrl] userspace: completion delivered user_id=4660 bytes=128
[rv64_fw] iter 1 cycles=57
...
[rv64_fw] iter 4 cycles=57
[rv64_fw] summary iterations=4 avg_cycles=57 min_cycles=57 max_cycles=57
[rv64_fw] PASS
```

### What This Confirms

This run confirms the CPU-driven path is working end to end:

- the `rv64` ISS is executing firmware correctly
- firmware MMIO writes reach `host_control_path`
- `host_control_path` walks the request through:
  - user space
  - kernel
  - driver
  - PCIe/control-interface timing
- the RDMA engine receives control MMIO
- the RDMA engine fetches the posted WQE
- the data copy succeeds
- the CQE is written back and observed correctly
- the firmware sees completion and records latency

### Meaning of `cycles=57`

The printed `57` cycles are CPU-observed end-to-end latency from:

- firmware doorbell write

to:

- firmware observation of `CPL_DONE`

This is not just RDMA-engine time. It includes the staged host-control timing inside:

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)

as well as the polling behavior in the firmware.

### Current Interpretation

This is now a working CPU-driven host-centric RDMA smoke baseline with:

- a real `rv64` ISS front end
- a layered host control path
- a functioning RDMA engine backend
- end-to-end cycle measurement from firmware

## 25. Calibration Profile Hook for Real-Board Timing Constants

### Goal

To use timing constants extracted from a real `rv64` board, the simulator now supports
an external JSON calibration profile for:

- `userspace_req_cycles`
- `kernel_req_cycles`
- `driver_prepare_cycles`
- `pcie_submit_cycles`
- `poll_interval_cycles`
- `pcie_completion_cycles`
- `driver_completion_cycles`
- `kernel_completion_cycles`
- `userspace_completion_cycles`

### Implementation

The support is wired in:

- [host_control_path_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path_comp.py)
  - defines default timing properties
  - optionally loads a JSON file and overrides those defaults

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
  - accepts:
    - `--host-calibration-profile=<json-file>`
  - passes it into `HostControlPath(...)`

- [Makefile](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/Makefile)
  - allows:
    - `HOST_CALIBRATION_PROFILE=<json-file>`
  - forwards it during `make run-host-fw`

### Example Profile

A template profile is provided in:

- [host_calibration_profile.example.json](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_calibration_profile.example.json)

### Example Usage

```bash
make run-host-fw \
  HOST_CALIBRATION_PROFILE=/path/to/host_calibration_profile.json
```

### Meaning

This makes it possible to:

1. measure stage latencies on a real board
2. convert them into simulator-cycle values
3. place them into a JSON profile
4. rerun the `rv64` smoke firmware with those calibrated host-stack timings

## 26. Concrete Example: MMIO vs WQE vs SQ/CQ/CQE

### Goal

The current host-centric simulation uses both:

- MMIO registers
- queue entries stored in RAM

They are related, but they are not the same thing.

### Key Address Regions

From the current target and component setup:

- `host_control_path` MMIO base:
  - `0x20010000`
- `rdma_engine` MMIO base:
  - `0x20000000`
- submission queue (`SQ`) base in RAM:
  - `0x00001000`
- completion queue (`CQ`) base in RAM:
  - `0x00002000`
- source buffer in RAM:
  - `0x00010000`
- destination buffer in RAM:
  - `0x00020000`

### One Exact Request Example

For iteration 1 of the current firmware smoke test, the firmware in:

- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)

writes the following request into `host_control_path` MMIO:

- `0x20010000` `REQ_OPCODE` = `1`
- `0x20010008` `REQ_SRC_ADDR_LO` = `0x00010000`
- `0x2001000c` `REQ_SRC_ADDR_HI` = `0x00000000`
- `0x20010010` `REQ_DST_ADDR_LO` = `0x00020000`
- `0x20010014` `REQ_DST_ADDR_HI` = `0x00000000`
- `0x20010018` `REQ_LEN` = `128`
- `0x2001001c` `REQ_USER_ID` = `4660`
- `0x20010020` `REQ_DOORBELL` = `1`

Meaning:

- operation type = `1`
- source buffer = `0x00010000`
- destination buffer = `0x00020000`
- size = `128` bytes
- request id = `4660`

### What `host_control_path` Does with That MMIO Request

The MMIO request is translated into a WQE written to the submission queue in RAM.

The WQE is written at:

- `0x00001000`

with fields:

- `opcode = 1`
- `flags = 0`
- `src_addr = 0x0000000000010000`
- `dst_addr = 0x0000000000020000`
- `length = 128`
- `user_id = 4660`

This is why the runtime prints:

```text
[host_ctrl] wqe readback: opcode=1 src=0x10000 dst=0x20000 len=128 user_id=4660
```

### Buffer Contents

Before the RDMA engine is triggered:

- source buffer at `0x00010000` is initialized with a simple byte pattern
- destination buffer at `0x00020000` is cleared

For example:

- `*(0x00010000 + 0) = 0x00`
- `*(0x00010000 + 1) = 0x01`
- `*(0x00010000 + 2) = 0x02`
- ...
- `*(0x00010000 + 127) = 0x7f`

and initially:

- `*(0x00020000 + i) = 0x00` for `i = 0..127`

### How the RDMA Engine Is Triggered

`host_control_path` then writes MMIO into the RDMA engine:

- `0x20000004` `CONTROL` = `1`
- `0x20000200` `SQ_DOORBELL` = `1`

These MMIO writes do not contain the WQE itself. They tell the RDMA engine:

- enable/start
- fetch the next request from the submission queue

### What the RDMA Engine Reads from RAM

The RDMA engine fetches the WQE from:

- `0x00001000`

and decodes:

- opcode `1`
- src `0x00010000`
- dst `0x00020000`
- len `128`
- user id `4660`

This matches the runtime log:

```text
[rdma_engine] fetch_wqe: sq=0x1000 req_status=0 opcode=1 src=0x10000 dst=0x20000 len=128 user_id=4660
```

### What the RDMA Engine Does Next

The RDMA engine performs the actual data movement:

- read `128` bytes from `0x00010000`
- write `128` bytes to `0x00020000`

After completion, the destination buffer contains the same byte pattern as the source buffer.

### CQE Written Back to RAM

After the copy, the RDMA engine writes a CQE to the completion queue at:

- `0x00002000`

with fields:

- `status = 0`
- `bytes = 128`
- `user_id = 4660`
- `reserved = 0`

This matches:

```text
[rdma_engine] write_cqe: cq=0x2000 status=0 bytes=128 user_id=4660 req_status=0
```

### How Completion Returns to Firmware

`host_control_path` reads the CQE from RAM and then updates MMIO-visible completion registers for firmware:

- `0x20010024` `CPL_STATUS` = `0`
- `0x20010028` `CPL_BYTES_DONE` = `128`
- `0x2001002c` `CPL_USER_ID` = `4660`
- `0x20010030` `CPL_DONE` = `1`

The firmware polls `CPL_DONE`, and once it sees `1`, it reads the other completion registers.

### Short Interpretation

In the current model:

- firmware writes request intent into MMIO
- `host_control_path` converts that into a WQE in RAM
- `rdma_engine` fetches the WQE from SQ RAM
- `rdma_engine` copies payload data between RAM buffers
- `rdma_engine` writes a CQE into CQ RAM
- `host_control_path` converts CQE information back into MMIO-visible completion for firmware

### Mental Model

- MMIO registers:
  command/status interface
- SQ/CQ:
  queue storage in RAM
- WQE/CQE:
  individual queue entries stored in that RAM
