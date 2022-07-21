# matrix-rotate

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- LIS via patience: each pile holds the smallest tail of length k.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Walk both pointers from each end inward; advance the smaller side.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Stable sort matters when a secondary key was set in a prior pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Union-Find with path compression amortizes to near-O(1) per op.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Monotonic stack pops while the new element violates the invariant.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 8

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 9

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 11

- Walk both pointers from each end inward; advance the smaller side.

## entry 12

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 14

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 15

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 16

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 18

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 19

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 20

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 23

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 27

- LCA via binary lifting: jump up powers of two until depths match, then converge.
