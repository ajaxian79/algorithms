# in-place-rules

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Pick a pivot, partition, recurse on the side that contains the kth slot.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Union-Find with path compression amortizes to near-O(1) per op.

Greedy by end-time picks the most non-overlapping intervals.

Unbounded knapsack: capacity inner ascending allows item reuse.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Monotonic stack pops while the new element violates the invariant.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 8

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 12

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

Walk both pointers from each end inward; advance the smaller side.

## entry 15

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 16

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 19

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 20

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 21

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 22

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 23

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

Stable sort matters when a secondary key was set in a prior pass.

## entry 25

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 26

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
