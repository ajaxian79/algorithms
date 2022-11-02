# kmp

LIS via patience: each pile holds the smallest tail of length k.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Edit distance is LCS with a twist: substitution is a third option at each cell.

In-place compaction uses two pointers: read advances always, write only on keep.

Union-Find with path compression amortizes to near-O(1) per op.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Morris traversal threads predecessors back to current node — O(1) extra space.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Walk both pointers from each end inward; advance the smaller side.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Greedy by end-time picks the most non-overlapping intervals.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Manacher expands around each center, reusing prior radii via mirror reflection.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Heap when you only need top-k; full sort is wasted work.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Monotonic stack pops while the new element violates the invariant.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3

Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 8

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 14

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
