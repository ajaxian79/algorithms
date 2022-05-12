# dfs

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Greedy by end-time picks the most non-overlapping intervals.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Union-Find with path compression amortizes to near-O(1) per op.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Walk both pointers from each end inward; advance the smaller side.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Iterative DFS with an explicit stack avoids recursion-limit issues.

In-place compaction uses two pointers: read advances always, write only on keep.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Monotonic stack pops while the new element violates the invariant.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LIS via patience: each pile holds the smallest tail of length k.

Unbounded knapsack: capacity inner ascending allows item reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 6

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 8

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 9

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

State compression: bitmask + integer encodes a small subset cheaply.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 22

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 23

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 27

Wavelet tree: range k-th element in O(log Σ) time.

## entry 28

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

Euler tour flattens a tree into an array for range-query LCA.

## entry 30

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 32

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 33

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 34

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
