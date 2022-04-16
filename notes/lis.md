# lis

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Heap when you only need top-k; full sort is wasted work.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LIS via patience: each pile holds the smallest tail of length k.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Greedy by end-time picks the most non-overlapping intervals.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 6

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 9

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 10

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 11

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 12

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 15

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 16

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 17

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 20

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 23

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 24

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
