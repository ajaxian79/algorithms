# stable-sort-when

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Heap when you only need top-k; full sort is wasted work.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Stable sort matters when a secondary key was set in a prior pass.

Union-Find with path compression amortizes to near-O(1) per op.

Unbounded knapsack: capacity inner ascending allows item reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 7

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

Stable sort matters when a secondary key was set in a prior pass.

## entry 12

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 15

Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 17

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 19

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 20

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 21

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

Union-Find with path compression amortizes to near-O(1) per op.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

LIS via patience: each pile holds the smallest tail of length k.

## entry 26

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 27

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 28

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 31

Euler tour flattens a tree into an array for range-query LCA.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Wavelet tree: range k-th element in O(log Σ) time.

## entry 35

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 36

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 37

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
