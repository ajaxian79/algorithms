# kadane

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Merge intervals: sort by start; extend the running interval while overlapping.

Heap when you only need top-k; full sort is wasted work.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Manacher expands around each center, reusing prior radii via mirror reflection.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Greedy by end-time picks the most non-overlapping intervals.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Unbounded knapsack: capacity inner ascending allows item reuse.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Morris traversal threads predecessors back to current node — O(1) extra space.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1

Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 7

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 8

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Stable sort matters when a secondary key was set in a prior pass.

## entry 14

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 15

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 17

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 18

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 21

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 22

Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 28

Fenwick supports prefix-sum updates in O(log n) with a flat array.
