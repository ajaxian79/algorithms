# lcs

Manacher expands around each center, reusing prior radii via mirror reflection.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

In-place compaction uses two pointers: read advances always, write only on keep.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Greedy by end-time picks the most non-overlapping intervals.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

LIS via patience: each pile holds the smallest tail of length k.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Union-Find with path compression amortizes to near-O(1) per op.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic stack pops while the new element violates the invariant.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Merge intervals: sort by start; extend the running interval while overlapping.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

## entry 1

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 10

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 11

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

Heap when you only need top-k; full sort is wasted work.

## entry 13

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 16

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 17

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

ASCII rules are a strict subset of UTF-8; no special handling needed.
