# union-find

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic stack pops while the new element violates the invariant.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

In-place compaction uses two pointers: read advances always, write only on keep.

Morris traversal threads predecessors back to current node — O(1) extra space.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

Splay tree: every access splays to the root; amortized O(log n).

## entry 4

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 8

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 11

Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

StringBuilder: amortize allocation by doubling on grow.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 17

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 19

LIS via patience: each pile holds the smallest tail of length k.

## entry 20

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 21

Euler tour flattens a tree into an array for range-query LCA.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

Union-Find with path compression amortizes to near-O(1) per op.

## entry 24

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 25

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 26

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 27

State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 31

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 32

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 33

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
