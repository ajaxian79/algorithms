# bfs

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Stable sort matters when a secondary key was set in a prior pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Union-Find with path compression amortizes to near-O(1) per op.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Greedy by end-time picks the most non-overlapping intervals.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Monotonic stack pops while the new element violates the invariant.

Merge intervals: sort by start; extend the running interval while overlapping.

Morris traversal threads predecessors back to current node — O(1) extra space.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

LIS via patience: each pile holds the smallest tail of length k.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Heap when you only need top-k; full sort is wasted work.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 7

Walk both pointers from each end inward; advance the smaller side.

## entry 8

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 9

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 12

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 19

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 20

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 21

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 22

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 23

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 24

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

StringBuilder: amortize allocation by doubling on grow.

## entry 26

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 27

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 28

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 29

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 30

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
