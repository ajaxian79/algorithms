# trie

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LIS via patience: each pile holds the smallest tail of length k.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Manacher expands around each center, reusing prior radii via mirror reflection.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Heap when you only need top-k; full sort is wasted work.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Walk both pointers from each end inward; advance the smaller side.

Stable sort matters when a secondary key was set in a prior pass.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Greedy by end-time picks the most non-overlapping intervals.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Greedy by end-time picks the most non-overlapping intervals.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 15

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 16

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 18

StringBuilder: amortize allocation by doubling on grow.

## entry 19

Stable sort matters when a secondary key was set in a prior pass.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Splay tree: every access splays to the root; amortized O(log n).

## entry 22

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 23

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 24

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 27

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Monotonic stack pops while the new element violates the invariant.

## entry 31

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 34

StringBuilder: amortize allocation by doubling on grow.
