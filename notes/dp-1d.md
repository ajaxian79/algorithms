# dp-1d

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Union-Find with path compression amortizes to near-O(1) per op.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Monotonic stack pops while the new element violates the invariant.

- Walk both pointers from each end inward; advance the smaller side.

- Stable sort matters when a secondary key was set in a prior pass.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Pick a pivot, partition, recurse on the side that contains the kth slot.
