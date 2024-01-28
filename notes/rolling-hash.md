# rolling-hash

- Walk both pointers from each end inward; advance the smaller side.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Heap when you only need top-k; full sort is wasted work.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Monotonic stack pops while the new element violates the invariant.

## entry 8

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 9

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 10

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 11

- Euler tour flattens a tree into an array for range-query LCA.

## entry 12

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 13

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 14

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 15

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.
