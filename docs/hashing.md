# hashing

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

In-place compaction uses two pointers: read advances always, write only on keep.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Manacher expands around each center, reusing prior radii via mirror reflection.

Unbounded knapsack: capacity inner ascending allows item reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Greedy by end-time picks the most non-overlapping intervals.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Monotonic stack pops while the new element violates the invariant.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Union-Find with path compression amortizes to near-O(1) per op.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

## entry 1

Heap when you only need top-k; full sort is wasted work.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6

LIS via patience: each pile holds the smallest tail of length k.

## entry 7

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 8

Walk both pointers from each end inward; advance the smaller side.

## entry 9

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 13

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

Splay tree: every access splays to the root; amortized O(log n).

## entry 17

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 19

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

Heap when you only need top-k; full sort is wasted work.

## entry 22

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Monotonic stack pops while the new element violates the invariant.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 32

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 33

Euler tour flattens a tree into an array for range-query LCA.

## entry 34

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 35

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 36

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 37

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 39

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 40

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 41

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 42

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 43

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 45

Union-Find with path compression amortizes to near-O(1) per op.

## entry 46

Greedy by end-time picks the most non-overlapping intervals.

## entry 47

Tarjan SCC: low-link values find strongly connected components in one DFS.
