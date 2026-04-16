import os
import sys


def setup_paths():
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


def main():
    setup_paths()

    import baseline_target  # noqa: F401
    import host_stub_comp  # noqa: F401
    import rdma_engine_comp  # noqa: F401

    import gvsoc.runner  # noqa: F401
    import gvsoc.systree  # noqa: F401
    import interco.router  # noqa: F401
    import memory.memory  # noqa: F401
    from vp.clock_domain import Clock_domain  # noqa: F401

    print("Import smoke test passed.")


if __name__ == "__main__":
    main()
