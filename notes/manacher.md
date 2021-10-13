# manacher

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Greedy by end-time picks the most non-overlapping intervals.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Heap when you only need top-k; full sort is wasted work.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Stable sort matters when a secondary key was set in a prior pass.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Walk both pointers from each end inward; advance the smaller side.

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Monotonic stack pops while the new element violates the invariant.

## entry 6

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 9

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Euler tour flattens a tree into an array for range-query LCA.

## entry 12

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 13

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 14

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 15

- Greedy by end-time picks the most non-overlapping intervals.

## entry 16

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 17

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 19

- Stable sort matters when a secondary key was set in a prior pass.

## entry 20

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 23

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 24

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 28

- Euler tour flattens a tree into an array for range-query LCA.

## entry 29

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 30

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 31

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 32

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 35

- StringBuilder: amortize allocation by doubling on grow.

## entry 36

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 37

- Tarjan SCC: low-link values find strongly connected components in one DFS.
