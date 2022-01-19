# in-place-rules

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- LIS via patience: each pile holds the smallest tail of length k.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic stack pops while the new element violates the invariant.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Heap when you only need top-k; full sort is wasted work.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Walk both pointers from each end inward; advance the smaller side.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Union-Find with path compression amortizes to near-O(1) per op.

- Greedy by end-time picks the most non-overlapping intervals.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 8

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 11

- Walk both pointers from each end inward; advance the smaller side.

## entry 12

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 15

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 18

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 19

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 23

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 27

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 31

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 33

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 34

- Fenwick supports prefix-sum updates in O(log n) with a flat array.
