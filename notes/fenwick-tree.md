# fenwick-tree

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Walk both pointers from each end inward; advance the smaller side.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Greedy by end-time picks the most non-overlapping intervals.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- LIS via patience: each pile holds the smallest tail of length k.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Heap when you only need top-k; full sort is wasted work.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Monotonic stack pops while the new element violates the invariant.

## entry 1

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 8

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 14

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 15

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 16

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 18

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 20

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 21

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 22

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 23

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 24

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 28

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 29

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 30

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 32

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
