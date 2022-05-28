# edit-distance

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Union-Find with path compression amortizes to near-O(1) per op.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Heap when you only need top-k; full sort is wasted work.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Greedy by end-time picks the most non-overlapping intervals.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Walk both pointers from each end inward; advance the smaller side.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Stable sort matters when a secondary key was set in a prior pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic stack pops while the new element violates the invariant.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 9

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 10

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 11

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 12

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 13

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 14

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 17

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Walk both pointers from each end inward; advance the smaller side.

## entry 20

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 25

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 28

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 29

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 30

- k-d tree: median-split each axis; nearest-neighbor average O(log n).
