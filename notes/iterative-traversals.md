# iterative-traversals

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Union-Find with path compression amortizes to near-O(1) per op.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 6

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 7

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 10

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 11

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 12

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 16

- Splay tree: every access splays to the root; amortized O(log n).

## entry 17

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 18

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 19

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 20

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 22

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 23

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.
