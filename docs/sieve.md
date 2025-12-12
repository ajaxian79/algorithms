# sieve

LIS via patience: each pile holds the smallest tail of length k.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Heap when you only need top-k; full sort is wasted work.

Morris traversal threads predecessors back to current node — O(1) extra space.
