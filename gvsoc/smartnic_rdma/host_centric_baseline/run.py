import os
import sys


def prepend_local_path():
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


prepend_local_path()

from baseline_target import Target  # noqa: E402,F401


if __name__ == "__main__":
    print("Host-centric RDMA baseline workspace entrypoint loaded.")
    print("Use this script as the local launcher inside a fresh GVSoC clone.")
