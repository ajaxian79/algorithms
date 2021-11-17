# intervals-merge

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Monotonic stack pops while the new element violates the invariant.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Union-Find with path compression amortizes to near-O(1) per op.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Greedy by end-time picks the most non-overlapping intervals.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Heap when you only need top-k; full sort is wasted work.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 7

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 10

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 11

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

- Walk both pointers from each end inward; advance the smaller side.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 21

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 22

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 23

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 24

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 26

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 29

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 32

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 33

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 40

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 41

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
