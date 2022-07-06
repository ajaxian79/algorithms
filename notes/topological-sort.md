# topological-sort

- Walk both pointers from each end inward; advance the smaller side.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Greedy by end-time picks the most non-overlapping intervals.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- LIS via patience: each pile holds the smallest tail of length k.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Stable sort matters when a secondary key was set in a prior pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Heap when you only need top-k; full sort is wasted work.

- Union-Find with path compression amortizes to near-O(1) per op.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 6

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 7

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 21

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 22

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

- Heap when you only need top-k; full sort is wasted work.

## entry 24

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
