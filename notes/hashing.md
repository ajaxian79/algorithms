# hashing

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic stack pops while the new element violates the invariant.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Union-Find with path compression amortizes to near-O(1) per op.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

- Walk both pointers from each end inward; advance the smaller side.

## entry 2

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 7

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 10

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 11

- StringBuilder: amortize allocation by doubling on grow.

## entry 12

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 14

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 15

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 19

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 22

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 23

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- BFS layers carry implicit shortest-path distance in unweighted graphs.
