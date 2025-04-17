# morris-traversal

- Greedy by end-time picks the most non-overlapping intervals.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LIS via patience: each pile holds the smallest tail of length k.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic stack pops while the new element violates the invariant.

- Stable sort matters when a secondary key was set in a prior pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Union-Find with path compression amortizes to near-O(1) per op.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Heap when you only need top-k; full sort is wasted work.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
