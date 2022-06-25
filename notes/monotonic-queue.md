# monotonic-queue

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Union-Find with path compression amortizes to near-O(1) per op.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Walk both pointers from each end inward; advance the smaller side.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Greedy by end-time picks the most non-overlapping intervals.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic stack pops while the new element violates the invariant.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5

- Walk both pointers from each end inward; advance the smaller side.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 8

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- Euler tour flattens a tree into an array for range-query LCA.

## entry 20

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 23

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 24

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 26

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 27

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 28

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 29

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

- LIS via patience: each pile holds the smallest tail of length k.

## entry 31

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 32

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

- Wavelet tree: range k-th element in O(log Σ) time.
