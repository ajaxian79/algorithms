# manacher

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

In-place compaction uses two pointers: read advances always, write only on keep.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Edit distance is LCS with a twist: substitution is a third option at each cell.

LIS via patience: each pile holds the smallest tail of length k.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Morris traversal threads predecessors back to current node — O(1) extra space.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Greedy by end-time picks the most non-overlapping intervals.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Stable sort matters when a secondary key was set in a prior pass.

## entry 7

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 8

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

StringBuilder: amortize allocation by doubling on grow.

## entry 14

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 15

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 16

Greedy by end-time picks the most non-overlapping intervals.

## entry 17

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 18

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 21

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

Walk both pointers from each end inward; advance the smaller side.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 25

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 26

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 27

Splay tree: every access splays to the root; amortized O(log n).

## entry 28

Polynomial rolling hash with two moduli kills almost all collisions in practice.
