# kmp

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LIS via patience: each pile holds the smallest tail of length k.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Union-Find with path compression amortizes to near-O(1) per op.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Heap when you only need top-k; full sort is wasted work.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Walk both pointers from each end inward; advance the smaller side.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 9

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 12

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 14

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 18

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 19

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 20

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 26

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 27

- StringBuilder: amortize allocation by doubling on grow.

## entry 28

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 29

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 30

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 31

- Heap when you only need top-k; full sort is wasted work.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 37

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
