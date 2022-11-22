# union-find

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Stable sort matters when a secondary key was set in a prior pass.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LIS via patience: each pile holds the smallest tail of length k.

- Walk both pointers from each end inward; advance the smaller side.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 9

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 10

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 11

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 12

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 13

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 14

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Heap when you only need top-k; full sort is wasted work.

## entry 18

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 19

- In-place compaction uses two pointers: read advances always, write only on keep.
