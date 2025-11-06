# iterative-traversals

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Unbounded knapsack: capacity inner ascending allows item reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

In-place compaction uses two pointers: read advances always, write only on keep.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
