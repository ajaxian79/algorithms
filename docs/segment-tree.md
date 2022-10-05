# segment-tree

Morris traversal threads predecessors back to current node — O(1) extra space.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Iterative DFS with an explicit stack avoids recursion-limit issues.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Walk both pointers from each end inward; advance the smaller side.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Merge intervals: sort by start; extend the running interval while overlapping.

Greedy by end-time picks the most non-overlapping intervals.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Euler tour flattens a tree into an array for range-query LCA.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 16

StringBuilder: amortize allocation by doubling on grow.

## entry 17

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 20

StringBuilder: amortize allocation by doubling on grow.

## entry 21

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 23

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 24

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 25

Monotonic stack pops while the new element violates the invariant.

## entry 26

Rope: tree of small string fragments; O(log n) concat and substring.
