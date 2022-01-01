# bfs

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Heap when you only need top-k; full sort is wasted work.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Union-Find with path compression amortizes to near-O(1) per op.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic stack pops while the new element violates the invariant.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Walk both pointers from each end inward; advance the smaller side.

## entry 4

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

- Monotonic stack pops while the new element violates the invariant.

## entry 7

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 8

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 17

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 18

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 23

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 24

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 30

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
