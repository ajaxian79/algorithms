# z-algorithm

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Merge intervals: sort by start; extend the running interval while overlapping.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

In-place compaction uses two pointers: read advances always, write only on keep.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Heap when you only need top-k; full sort is wasted work.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 8

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 10

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 20

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
