# Gems in EE/CS

This repository is a personal and pedagogical collection of stretch problems in electrical engineering, computer science, and algorithmic problem solving. It features elegant coding puzzles, theoretical challenges, and systems-level curiosities that go beyond standard textbook exercises. Many of these problems were encountered during research, interviews, or late-night explorations, and they have been selected not just for their difficulty, but for the insight they offer into the deeper structure of computation and engineering.

The goal of this project is twofold. First, it serves as a repository of problems and solutions that sharpen core technical intuition in algorithms, low-level systems, and numerical computation. Second, it aims to connect these problems to broader real-world contexts, showing how seemingly abstract puzzles often echo through real engineering scenarios — from how operating systems schedule tasks to how floating-point rounding errors can destabilize control systems or simulations.

Each problem is implemented in C and lives in the `problems/` directory, organized by domain: `algorithms/` for classical algorithmic challenges like knapsack or sorting; `systems/` for memory layout, I/O behavior, or bit manipulation tasks; and `math/` for floating-point precision, number theory, or combinatorial reasoning. Each implementation is accompanied by a Markdown explanation in the `solutions/` directory that elaborates on the approach, edge cases, complexity, and connections to real-world applications. Where appropriate, the repository also includes simple test harnesses under `tests/`, validating correctness with minimal infrastructure. Additional testing and CI frameworks may be added over time.

The directory structure is organized as follows:

```
eecsproblems/
|--- problems/
    |--- algorithms/
    |--- systems/
    |--- math/
|--- solutions/
|--- tests/
README.md
```
