# boyer-moore

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

BFS layers carry implicit shortest-path distance in unweighted graphs.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Morris traversal threads predecessors back to current node — O(1) extra space.

Heap when you only need top-k; full sort is wasted work.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Walk both pointers from each end inward; advance the smaller side.

Unbounded knapsack: capacity inner ascending allows item reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

In-place compaction uses two pointers: read advances always, write only on keep.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 9

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 10

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 11

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

Walk both pointers from each end inward; advance the smaller side.

## entry 13

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 14

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 15

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 16

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 17

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 18

Wavelet tree: range k-th element in O(log Σ) time.

## entry 19

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 20

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

Walk both pointers from each end inward; advance the smaller side.

## entry 24

Articulation points: same DFS as bridges, with a slightly different test.

## entry 25

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 26

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 27

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

Walk both pointers from each end inward; advance the smaller side.

## entry 31

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 32

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

In-place compaction uses two pointers: read advances always, write only on keep.
