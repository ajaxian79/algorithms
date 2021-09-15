# boyer-moore

- In-place compaction uses two pointers: read advances always, write only on keep.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Monotonic stack pops while the new element violates the invariant.

## entry 7

- LIS via patience: each pile holds the smallest tail of length k.

## entry 8

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 10

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 11

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 12

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 18

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 23

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 24

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 25

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 26

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 27

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 29

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 30

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 34

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- In-place compaction uses two pointers: read advances always, write only on keep.
