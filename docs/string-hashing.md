# string-hashing

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

In-place compaction uses two pointers: read advances always, write only on keep.

Manacher expands around each center, reusing prior radii via mirror reflection.

Walk both pointers from each end inward; advance the smaller side.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Heap when you only need top-k; full sort is wasted work.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Stable sort matters when a secondary key was set in a prior pass.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Morris traversal threads predecessors back to current node — O(1) extra space.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LIS via patience: each pile holds the smallest tail of length k.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Unbounded knapsack: capacity inner ascending allows item reuse.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 7

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 8

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 10

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

Stable sort matters when a secondary key was set in a prior pass.

## entry 13

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 14

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 18

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

StringBuilder: amortize allocation by doubling on grow.

## entry 24

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 25

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
